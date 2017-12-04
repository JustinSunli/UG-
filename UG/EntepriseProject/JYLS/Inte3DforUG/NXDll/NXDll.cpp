/*****************************************************************************
**
** NXDll.cpp
**
** Description:
**     Contains Unigraphics entry points for the application.
**
*****************************************************************************/

/* Include files */
#if ! defined ( __hp9000s800 ) && ! defined ( __sgi ) && ! defined ( __sun )
#   include <strstream>
#   include <iostream>
    using std::ostrstream;
    using std::endl;    
    using std::ends;
    using std::cerr;
#else
#   include <strstream.h>
#   include <iostream.h>
#endif
#include <uf.h>
#include <ug_session.hxx>
#include <ug_exception.hxx>
#include <uf_ui.h>
#include <uf_exit.h>
#include <ug_info_window.hxx>

static void processException( const UgException &exception );


/*****************************************************************************
**  Activation Methods
*****************************************************************************/
/*  Explicit Activation
**      This entry point is used to activate the application explicitly, as in
**      "File->Execute UG/Open->User Function..." */
extern DllExport void ufusr( char *parm, int *returnCode, int rlen )
{
    /* Initialize the API environment */
    UgSession session( true );

    try
    {
        /* TODO: Add your application code here */
    }

    /* Handle errors */
    catch ( const UgException &exception )
    {
        processException( exception );
    }
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

/* processException
       Prints error messages to standard error and a Unigraphics
       information window. */
static void processException( const UgException &exception )
{
    /* Construct a buffer to hold the text. */
    ostrstream error_message;

    /* Initialize the buffer with the required text. */
    error_message << endl
                  << "Error:" << endl
                  << ( exception.askErrorText() ).c_str()
                  << endl << endl << ends;

    /* Open the UgInfoWindow */
    UgInfoWindow::open ( );

    /* Write the message to the UgInfoWindow.  The str method */
    /* freezes the buffer, so it must be unfrozen afterwards. */
    UgInfoWindow::write( error_message.str() );

    /* Write the message to standard error */
    cerr << error_message.str();
    error_message.rdbuf()->freeze( 0 );
}
