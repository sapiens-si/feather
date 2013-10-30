#include "FeatherApp.h"
#include "MainFrame.h"

IMPLEMENT_APP(FeatherApp);

bool FeatherApp::OnInit()
{
    MainFrame *pFrame = new MainFrame(0L);

    pFrame->Show();

    return true;
}
