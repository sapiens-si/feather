/*
    Copyright (C) 2013 Robert Valentak <robert@sapiens.si>

    This program is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/
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
