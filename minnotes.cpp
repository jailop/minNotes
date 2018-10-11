#include <wx/wx.h>
#include "frame.h"

class App : public wxApp
{
    public:
        virtual bool OnInit();
};

bool App::OnInit()
{
    Frame *frame = new Frame(wxT("wxNotes"));
    frame->Show(true);
    return true;
}

IMPLEMENT_APP(App)
