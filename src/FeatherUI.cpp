///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version Oct  8 2012)
// http://www.wxformbuilder.org/
//
// PLEASE DO "NOT" EDIT THIS FILE!
///////////////////////////////////////////////////////////////////////////

#include "FeatherUI.h"

// Using the construction of a static object to ensure that the help provider is set
class wxFBContextSensitiveHelpSetter
{
public:
wxFBContextSensitiveHelpSetter()
{
wxHelpProvider::Set( new wxHelpControllerHelpProvider );
}
};

static wxFBContextSensitiveHelpSetter s_wxFBSetTheHelpProvider;
///////////////////////////////////////////////////////////////////////////

BEGIN_EVENT_TABLE( baseMainFrame, wxFrame )
	EVT_CLOSE( baseMainFrame::_wxFB_OnClose )
	EVT_MENU( wxID_FILENEW, baseMainFrame::_wxFB_OnFileNew )
	EVT_MENU( wxID_FILEOPEN, baseMainFrame::_wxFB_OnFileOpen )
	EVT_MENU( wxID_FILESAVE, baseMainFrame::_wxFB_OnFileSave )
	EVT_MENU( wxID_FILESAVEAS, baseMainFrame::_wxFB_OnFileSaveAs )
	EVT_MENU( wxID_FILEPRINT, baseMainFrame::_wxFB_OnFilePrint )
	EVT_MENU( wxID_FILEEXPORT, baseMainFrame::_wxFB_OnFileExport )
	EVT_MENU( wxID_FILEEXIT, baseMainFrame::_wxFB_OnFileExit )
	EVT_MENU( wxID_TOOLSPREFERENCES, baseMainFrame::_wxFB_OnToolsOptions )
	EVT_MENU( wxID_HELPCONTENTS, baseMainFrame::_wxFB_OnHelpContents )
	EVT_MENU( wxID_HELPCONTEXT, baseMainFrame::_wxFB_OnHelpContext )
	EVT_MENU( wxID_HELPUPDATE, baseMainFrame::_wxFB_OnHelpUpdate )
	EVT_MENU( wxID_HELPABOUT, baseMainFrame::_wxFB_OnHelpAbout )
END_EVENT_TABLE()

baseMainFrame::baseMainFrame( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxFrame( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );
	
	m_statusBar = this->CreateStatusBar( 2, wxST_SIZEGRIP, wxID_STATUSBAR );
	m_menuBar = new wxMenuBar( 0 );
	m_menuFile = new wxMenu();
	wxMenuItem* m_menuItemFileNew;
	m_menuItemFileNew = new wxMenuItem( m_menuFile, wxID_FILENEW, wxString( wxT("&New...") ) + wxT('\t') + wxT("Ctrl+N"), wxEmptyString, wxITEM_NORMAL );
	m_menuFile->Append( m_menuItemFileNew );
	
	wxMenuItem* m_menuItemFileOpen;
	m_menuItemFileOpen = new wxMenuItem( m_menuFile, wxID_FILEOPEN, wxString( wxT("&Open...") ) + wxT('\t') + wxT("Ctrl+O"), wxEmptyString, wxITEM_NORMAL );
	m_menuFile->Append( m_menuItemFileOpen );
	
	wxMenuItem* m_menuItemFileSave;
	m_menuItemFileSave = new wxMenuItem( m_menuFile, wxID_FILESAVE, wxString( wxT("&Save...") ) + wxT('\t') + wxT("Ctrl+S"), wxEmptyString, wxITEM_NORMAL );
	m_menuFile->Append( m_menuItemFileSave );
	
	wxMenuItem* m_menuItemFileSaveAs;
	m_menuItemFileSaveAs = new wxMenuItem( m_menuFile, wxID_FILESAVEAS, wxString( wxT("Save &as...") ) + wxT('\t') + wxT("Ctrl+Shift+S"), wxEmptyString, wxITEM_NORMAL );
	m_menuFile->Append( m_menuItemFileSaveAs );
	
	m_menuFile->AppendSeparator();
	
	wxMenuItem* m_menuItemFilePrint;
	m_menuItemFilePrint = new wxMenuItem( m_menuFile, wxID_FILEPRINT, wxString( wxT("&Print...") ) + wxT('\t') + wxT("Ctrl+P"), wxEmptyString, wxITEM_NORMAL );
	m_menuFile->Append( m_menuItemFilePrint );
	
	m_menuFile->AppendSeparator();
	
	wxMenuItem* m_menuItemFileExport;
	m_menuItemFileExport = new wxMenuItem( m_menuFile, wxID_FILEEXPORT, wxString( wxT("&Export...") ) + wxT('\t') + wxT("Ctrl+E"), wxEmptyString, wxITEM_NORMAL );
	m_menuFile->Append( m_menuItemFileExport );
	
	m_menuFile->AppendSeparator();
	
	wxMenuItem* m_menuItemFileExit;
	m_menuItemFileExit = new wxMenuItem( m_menuFile, wxID_FILEEXIT, wxString( wxT("E&xit") ) + wxT('\t') + wxT("Alt+F4"), wxEmptyString, wxITEM_NORMAL );
	m_menuFile->Append( m_menuItemFileExit );
	
	m_menuBar->Append( m_menuFile, wxT("&File") ); 
	
	m_menuTools = new wxMenu();
	wxMenuItem* m_menuItemToolsPreferences;
	m_menuItemToolsPreferences = new wxMenuItem( m_menuTools, wxID_TOOLSPREFERENCES, wxString( wxT("&Preferences...") ) , wxEmptyString, wxITEM_NORMAL );
	m_menuTools->Append( m_menuItemToolsPreferences );
	
	m_menuBar->Append( m_menuTools, wxT("&Tools") ); 
	
	m_menuHelp = new wxMenu();
	wxMenuItem* m_menuItemHelpContents;
	m_menuItemHelpContents = new wxMenuItem( m_menuHelp, wxID_HELPCONTENTS, wxString( wxT("&Contents") ) + wxT('\t') + wxT("F1"), wxEmptyString, wxITEM_NORMAL );
	m_menuHelp->Append( m_menuItemHelpContents );
	
	wxMenuItem* m_menuItemHelpContext;
	m_menuItemHelpContext = new wxMenuItem( m_menuHelp, wxID_HELPCONTEXT, wxString( wxT("Context help") ) + wxT('\t') + wxT("Ctrl+F1"), wxEmptyString, wxITEM_NORMAL );
	m_menuHelp->Append( m_menuItemHelpContext );
	
	m_menuHelp->AppendSeparator();
	
	wxMenuItem* m_menuItemHelpUpdate;
	m_menuItemHelpUpdate = new wxMenuItem( m_menuHelp, wxID_HELPUPDATE, wxString( wxT("Check for &update...") ) , wxEmptyString, wxITEM_NORMAL );
	m_menuHelp->Append( m_menuItemHelpUpdate );
	
	m_menuHelp->AppendSeparator();
	
	wxMenuItem* m_menuItemHelpAbout;
	m_menuItemHelpAbout = new wxMenuItem( m_menuHelp, wxID_HELPABOUT, wxString( wxT("&About...") ) , wxEmptyString, wxITEM_NORMAL );
	m_menuHelp->Append( m_menuItemHelpAbout );
	
	m_menuBar->Append( m_menuHelp, wxT("&Help") ); 
	
	this->SetMenuBar( m_menuBar );
	
	
	this->Centre( wxBOTH );
}

baseMainFrame::~baseMainFrame()
{
}

BEGIN_EVENT_TABLE( baseAbout, wxDialog )
	EVT_BUTTON( wxID_OK, baseAbout::_wxFB_OnOK )
END_EVENT_TABLE()

baseAbout::baseAbout( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxDialog( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxSize( 640,400 ), wxDefaultSize );
	
	wxBoxSizer* bSizer1;
	bSizer1 = new wxBoxSizer( wxVERTICAL );
	
	m_notebook = new wxNotebook( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, 0 );
	m_pnlAuthors = new wxPanel( m_notebook, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	m_notebook->AddPage( m_pnlAuthors, wxT("Authors"), true );
	m_pnlLicense = new wxPanel( m_notebook, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	m_notebook->AddPage( m_pnlLicense, wxT("License"), false );
	m_pnlAck = new wxPanel( m_notebook, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	m_notebook->AddPage( m_pnlAck, wxT("Acknowledgment"), false );
	
	bSizer1->Add( m_notebook, 5, wxEXPAND | wxALL, 5 );
	
	m_sdbSizer = new wxStdDialogButtonSizer();
	m_sdbSizerOK = new wxButton( this, wxID_OK );
	m_sdbSizer->AddButton( m_sdbSizerOK );
	m_sdbSizer->Realize();
	
	bSizer1->Add( m_sdbSizer, 1, wxEXPAND, 5 );
	
	
	this->SetSizer( bSizer1 );
	this->Layout();
	
	this->Centre( wxBOTH );
}

baseAbout::~baseAbout()
{
}
