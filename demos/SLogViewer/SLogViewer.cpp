// dui-demo.cpp : main source file
//

#include "stdafx.h"
#include "MainDlg.h"
#include "SColorizeText.h"

//从PE文件加载，注意从文件加载路径位置
#define RES_TYPE 0
// #define RES_TYPE 1  //从PE资源中加载UI资源

#ifdef _DEBUG
#define SYS_NAMED_RESOURCE _T("soui-sys-resourced.dll")
#else
#define SYS_NAMED_RESOURCE _T("soui-sys-resource.dll")
#endif

	
//定义唯一的一个R,UIRES对象,ROBJ_IN_CPP是resource.h中定义的宏。
ROBJ_IN_CPP
	
int WINAPI _tWinMain(HINSTANCE hInstance, HINSTANCE /*hPrevInstance*/, LPTSTR lpstrCmdLine, int /*nCmdShow*/)
{
    HRESULT hRes = OleInitialize(NULL);
    SASSERT(SUCCEEDED(hRes));

    int nRet = 0;
    
    SComMgr *pComMgr = new SComMgr;

    //将程序的运行路径修改到项目所在目录所在的目录
    TCHAR szCurrentDir[MAX_PATH] = { 0 };
    GetModuleFileName(NULL, szCurrentDir, sizeof(szCurrentDir));
    LPTSTR lpInsertPos = _tcsrchr(szCurrentDir, _T('\\'));
    _tcscpy(lpInsertPos + 1, _T("..\\demos\\SLogViewer"));
    SetCurrentDirectory(szCurrentDir);
    {
        BOOL bLoaded=FALSE;
        CAutoRefPtr<SOUI::IImgDecoderFactory> pImgDecoderFactory;
        CAutoRefPtr<SOUI::IRenderFactory> pRenderFactory;
        bLoaded = pComMgr->CreateRender_GDI((IObjRef**)&pRenderFactory);
        SASSERT_FMT(bLoaded,_T("load interface [render] failed!"));
        bLoaded=pComMgr->CreateImgDecoder((IObjRef**)&pImgDecoderFactory);
        SASSERT_FMT(bLoaded,_T("load interface [%s] failed!"),_T("imgdecoder"));

        pRenderFactory->SetImgDecoderFactory(pImgDecoderFactory);
        SApplication *theApp = new SApplication(pRenderFactory, hInstance);
        {
            CAutoRefPtr<IResProvider> sysResProvider;
            CreateResProvider(RES_PE, (IObjRef**)&sysResProvider);
            sysResProvider->Init((WPARAM)hInstance, 0);
            theApp->LoadSystemNamedResource(sysResProvider);
        }

		theApp->RegisterWindowClass<SColorizeText>();

        CAutoRefPtr<IResProvider>   pResProvider;
#if (RES_TYPE == 0)
        CreateResProvider(RES_FILE, (IObjRef**)&pResProvider);
        if (!pResProvider->Init((LPARAM)_T("uires"), 0))
        {
            SASSERT(0);
            return 1;
        }
#else 
        CreateResProvider(RES_PE, (IObjRef**)&pResProvider);
        pResProvider->Init((WPARAM)hInstance, 0);
#endif

		theApp->InitXmlNamedID(namedXmlID,ARRAYSIZE(namedXmlID),TRUE);
        theApp->AddResProvider(pResProvider);

		//加载系统资源
		HMODULE hSysResource=LoadLibrary(SYS_NAMED_RESOURCE);
		if(hSysResource)
		{
			CAutoRefPtr<IResProvider> sysSesProvider;
			CreateResProvider(RES_PE,(IObjRef**)&sysSesProvider);
			sysSesProvider->Init((WPARAM)hSysResource,0);
			theApp->LoadSystemNamedResource(sysSesProvider);
		}

        //加载多语言翻译模块。
        CAutoRefPtr<ITranslatorMgr> trans;
        bLoaded=pComMgr->CreateTranslator((IObjRef**)&trans);
        SASSERT_FMT(bLoaded,_T("load interface [%s] failed!"),_T("translator"));
        if(trans)
        {//加载语言翻译包
            theApp->SetTranslator(trans);
            pugi::xml_document xmlLang;
            if(theApp->LoadXmlDocment(xmlLang,_T("lang_cn"),_T("languages")))
            {
                CAutoRefPtr<ITranslator> langCN;
                trans->CreateTranslator(&langCN);
                langCN->Load(&xmlLang.child(L"language"),1);//1=LD_XML
                trans->InstallTranslator(langCN);
            }
        }
        
        // BLOCK: Run application
        {
            CMainDlg dlgMain;
            dlgMain.Create(GetActiveWindow());
            dlgMain.SendMessage(WM_INITDIALOG);
            dlgMain.CenterWindow(dlgMain.m_hWnd);
            dlgMain.ShowWindow(SW_SHOWNORMAL);
            nRet = theApp->Run(dlgMain.m_hWnd);
        }

        delete theApp;
    }
    
    delete pComMgr;
    
    OleUninitialize();
    return nRet;
}
