#include "stdafx.h"
HHOOK ghHook = NULL;
int   giHookUserNumber=0;//钩子的使用数目；
#include <uf_defs.h>



// Hook procedure for WH_GETMESSAGE hook type.
LRESULT CALLBACK GetMessageProc(int nCode, WPARAM wParam, LPARAM
								lParam)
{
	// Switch the module state for the correct handle to be used.
	AFX_MANAGE_STATE(AfxGetStaticModuleState( ));

	// If this is a keystrokes message, translate it in controls'
	// PreTranslateMessage().
	LPMSG lpMsg = (LPMSG) lParam;

	if( (nCode >= 0) && ( lpMsg->message==WM_KEYDOWN))	
	{
		if(lpMsg->wParam==9) //系统按下tab键
		{
			int id = 0;
			int ret = UF_MB_ask_button_id("BTN_TEST",&id) ;
			void *p = UF_UI_get_default_parent();
			HWND mainWnd = (HWND )p;
			if(ret ==0 &&  mainWnd && id)
				::PostMessage(mainWnd,WM_COMMAND,id,0);
		}
		
	}

	return ::CallNextHookEx(ghHook, nCode, wParam, lParam);
} 

void ModifyDimPlane()
{

	//if (ghHook == NULL)
	//{
	//	giHookUserNumber = 0;
	//	//ghHook = ::SetWindowsHookEx(WH_GETMESSAGE,GetMessageProc,AfxGetInstanceHandle(),
	//	//	GetCurrentThreadId());
	//	ghHook = ::SetWindowsHookEx(WH_GETMESSAGE,GetMessageProc,NULL,
	//			GetCurrentThreadId());
	//	ASSERT (ghHook);
	//	giHookUserNumber++;
	//}

}



