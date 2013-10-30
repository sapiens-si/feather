#include "MainFrame.h"
#include "dlgAbout.h"
#include <wx/msgdlg.h>
#include <wx/filedlg.h>

MainFrame::MainFrame( wxWindow* parent ) :
    baseMainFrame( parent )
{

}

void MainFrame::OnClose( wxCloseEvent& event )
{
    int ret = wxMessageBox(wxT("Quit program?"), wxT("End application"), wxYES_NO | wxNO_DEFAULT | wxCENTRE, this);
    if (ret == wxYES)
        Destroy();
}

void MainFrame::OnFileNew( wxCommandEvent& event )
{
// TODO: Implement OnFileNew
}

void MainFrame::OnFileOpen( wxCommandEvent& event )
{
    wxString filename = wxLoadFileSelector(wxT("feather document"), wxT("ftr"));
}


void MainFrame::OnFileSave( wxCommandEvent& event )
{
    wxString filename = wxSaveFileSelector(wxT("feather document"), wxT("ftr"));
}

void MainFrame::OnFileSaveAs( wxCommandEvent& event )
{
    wxString filename = wxSaveFileSelector(wxT("feather document"), wxT("ftr"));
}

void MainFrame::OnFilePrint( wxCommandEvent& event )
{
// TODO: Implement OnFilePrint
}

void MainFrame::OnFileExport( wxCommandEvent& event )
{
// TODO: Implement OnFileExport
}

void MainFrame::OnFileExit( wxCommandEvent& event )
{
    Close();
}

void MainFrame::OnToolsOptions( wxCommandEvent& event )
{
// TODO: Implement OnToolsOptions
}

void MainFrame::OnHelpContents( wxCommandEvent& event )
{
// TODO: Implement OnHelpContents
}

void MainFrame::OnHelpContext( wxCommandEvent& event )
{
// TODO: Implement OnHelpContext
}

void MainFrame::OnHelpUpdate( wxCommandEvent& event )
{
// TODO: Implement OnHelpUpdate
}

void MainFrame::OnHelpAbout( wxCommandEvent& event )
{
    dlgAbout dlg(this);

    dlg.ShowModal();
}
