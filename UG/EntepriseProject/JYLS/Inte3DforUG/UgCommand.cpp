#include "StdAfx.h"
#include "UgCommand.h"


static UF_MB_action_t actionTable[] =
{
	{ "ModifyDimPlane", (UF_MB_callback_t)ModifyDimPlane, NULL },

	{ NULL, NULL, NULL}
};





extern "C"  void __declspec(dllexport) ufsta( char *name, int *rtcode, int rtlen)
{
  /*  
    Short example of use of assemblies navigation routines to output an
    assemblies listing and the contents of each component.
  */
  
  UF_initialize();

  //AfxMessageBox("load library£¡");
  
  int iResult;
   iResult=UF_MB_add_actions( actionTable);


  UF_terminate();
}

/*****************************************************************************
**  Utilities
*****************************************************************************/

/* Unload Handler
**     This function specifies when to unload your application from Unigraphics.
**     If your application registers a callback (from a MenuScript item or a
**     User Defined Object for example), this function MUST return
**     "UF_UNLOAD_UG_TERMINATE". */
extern int ufusr_ask_unload( void )
{
	return( UF_UNLOAD_UG_TERMINATE );
}

/* PrintErrorMessage
**
**     Prints error messages to standard error and the Unigraphics status
**     line. */
void PrintErrorMessage( int errorCode )
{
	if ( 0 != errorCode )
	{
		/* Retrieve the associated error message */
		char message[133];
		UF_get_fail_message( errorCode, message );

		/* Print out the message */
		UF_UI_set_status( message );

		//  fprintf( stderr, "%s\n", message );
	}
}