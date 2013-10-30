#include "dlgAbout.h"

dlgAbout::dlgAbout( wxWindow* parent )
:
baseAbout( parent )
{

}

void dlgAbout::OnOK( wxCommandEvent& event )
{
    EndDialog(wxID_OK);
}
