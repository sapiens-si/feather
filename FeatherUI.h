///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version Oct  8 2012)
// http://www.wxformbuilder.org/
//
// PLEASE DO "NOT" EDIT THIS FILE!
///////////////////////////////////////////////////////////////////////////

#ifndef __FEATHERUI_H__
#define __FEATHERUI_H__

#include <wx/artprov.h>
#include <wx/xrc/xmlres.h>
#include <wx/cshelp.h>
#include <wx/statusbr.h>
#include <wx/gdicmn.h>
#include <wx/font.h>
#include <wx/colour.h>
#include <wx/settings.h>
#include <wx/string.h>
#include <wx/bitmap.h>
#include <wx/image.h>
#include <wx/icon.h>
#include <wx/menu.h>
#include <wx/frame.h>
#include <wx/panel.h>
#include <wx/notebook.h>
#include <wx/sizer.h>
#include <wx/button.h>
#include <wx/dialog.h>

///////////////////////////////////////////////////////////////////////////

#define wxID_STATUSBAR 1000
#define wxID_MENUBAR 1001
#define wxID_FILENEW 1002
#define wxID_FILEOPEN 1003
#define wxID_FILESAVE 1004
#define wxID_FILESAVEAS 1005
#define wxID_FILEPRINT 1006
#define wxID_FILEEXPORT 1007
#define wxID_FILEEXIT 1008
#define wxID_TOOLSPREFERENCES 1009
#define wxID_HELPCONTENTS 1010
#define wxID_HELPCONTEXT 1011
#define wxID_HELPUPDATE 1012
#define wxID_HELPABOUT 1013

///////////////////////////////////////////////////////////////////////////////
/// Class baseMainFrame
///////////////////////////////////////////////////////////////////////////////
class baseMainFrame : public wxFrame 
{
	DECLARE_EVENT_TABLE()
	private:
		
		// Private event handlers
		void _wxFB_OnClose( wxCloseEvent& event ){ OnClose( event ); }
		void _wxFB_OnFileNew( wxCommandEvent& event ){ OnFileNew( event ); }
		void _wxFB_OnFileOpen( wxCommandEvent& event ){ OnFileOpen( event ); }
		void _wxFB_OnFileSave( wxCommandEvent& event ){ OnFileSave( event ); }
		void _wxFB_OnFileSaveAs( wxCommandEvent& event ){ OnFileSaveAs( event ); }
		void _wxFB_OnFilePrint( wxCommandEvent& event ){ OnFilePrint( event ); }
		void _wxFB_OnFileExport( wxCommandEvent& event ){ OnFileExport( event ); }
		void _wxFB_OnFileExit( wxCommandEvent& event ){ OnFileExit( event ); }
		void _wxFB_OnToolsOptions( wxCommandEvent& event ){ OnToolsOptions( event ); }
		void _wxFB_OnHelpContents( wxCommandEvent& event ){ OnHelpContents( event ); }
		void _wxFB_OnHelpContext( wxCommandEvent& event ){ OnHelpContext( event ); }
		void _wxFB_OnHelpUpdate( wxCommandEvent& event ){ OnHelpUpdate( event ); }
		void _wxFB_OnHelpAbout( wxCommandEvent& event ){ OnHelpAbout( event ); }
		
	
	protected:
		wxStatusBar* m_statusBar;
		wxMenuBar* m_menuBar;
		wxMenu* m_menuFile;
		wxMenu* m_menuTools;
		wxMenu* m_menuHelp;
		
		// Virtual event handlers, overide them in your derived class
		virtual void OnClose( wxCloseEvent& event ) { event.Skip(); }
		virtual void OnFileNew( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnFileOpen( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnFileSave( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnFileSaveAs( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnFilePrint( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnFileExport( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnFileExit( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnToolsOptions( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnHelpContents( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnHelpContext( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnHelpUpdate( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnHelpAbout( wxCommandEvent& event ) { event.Skip(); }
		
	
	public:
		
		baseMainFrame( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = wxT("Feather"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 720,540 ), long style = wxDEFAULT_FRAME_STYLE|wxTAB_TRAVERSAL );
		
		~baseMainFrame();
	
};

///////////////////////////////////////////////////////////////////////////////
/// Class baseAbout
///////////////////////////////////////////////////////////////////////////////
class baseAbout : public wxDialog 
{
	DECLARE_EVENT_TABLE()
	private:
		
		// Private event handlers
		void _wxFB_OnOK( wxCommandEvent& event ){ OnOK( event ); }
		
	
	protected:
		wxNotebook* m_notebook;
		wxPanel* m_pnlAuthors;
		wxPanel* m_pnlLicense;
		wxPanel* m_pnlAck;
		wxStdDialogButtonSizer* m_sdbSizer;
		wxButton* m_sdbSizerOK;
		
		// Virtual event handlers, overide them in your derived class
		virtual void OnOK( wxCommandEvent& event ) { event.Skip(); }
		
	
	public:
		
		baseAbout( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = wxT("About"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 640,400 ), long style = wxDEFAULT_DIALOG_STYLE ); 
		~baseAbout();
	
};

#endif //__FEATHERUI_H__
