#include <wx/wx.h>

class Frame : public wxFrame
{
    public:
        Frame(const wxString& title);
    private:
        wxTextCtrl *textarea;
        void OnNew(wxCommandEvent& event);
        void OnOpen(wxCommandEvent& event);
        void OnSave(wxCommandEvent& event);
        void OnSaveAs(wxCommandEvent& event);
        void OnQuit(wxCommandEvent& event);
        DECLARE_EVENT_TABLE()
};

BEGIN_EVENT_TABLE(Frame, wxFrame)
    EVT_MENU(wxID_NEW, Frame::OnNew)
    EVT_MENU(wxID_OPEN, Frame::OnOpen)
    EVT_MENU(wxID_SAVE, Frame::OnSave)
    EVT_MENU(wxID_SAVEAS, Frame::OnSaveAs)
    EVT_MENU(wxID_EXIT, Frame::OnQuit)
END_EVENT_TABLE()

class App : public wxApp
{
    public:
        virtual bool OnInit();
};

Frame::Frame(const wxString& title)
    : wxFrame(NULL, wxID_ANY, title, wxDefaultPosition, wxSize(800, 600))
{
    wxMenuBar *menubar = new wxMenuBar;
    wxMenu *file = new wxMenu;
    file->Append(wxID_NEW, wxT("&New\tAlt-n"));
    file->Append(wxID_OPEN, wxT("&Open\tAlt-o"));
    file->Append(wxID_SAVE, wxT("&Save\tAlt-s"));
    file->Append(wxID_SAVEAS, wxT("&Save as"));
    file->Append(wxID_EXIT, wxT("&Quit\tAlt-q"));
    menubar->Append(file, wxT("&File"));
    SetMenuBar(menubar);

    wxBoxSizer *mainsizer = new wxBoxSizer(wxVERTICAL);
    SetSizer(mainsizer);

    textarea = new wxTextCtrl(this, wxID_ANY, wxT(""), wxDefaultPosition, 
            wxDefaultSize, wxTE_MULTILINE | wxTE_RICH);
    mainsizer->Add(textarea, 1, wxEXPAND | wxALL, 20);
}

void Frame::OnNew(wxCommandEvent& event)
{

}

void Frame::OnOpen(wxCommandEvent& event)
{

}

void Frame::OnSave(wxCommandEvent& event)
{

}

void Frame::OnSaveAs(wxCommandEvent& event)
{

}

void Frame::OnQuit(wxCommandEvent& event)
{
    Close(true);
}


IMPLEMENT_APP(App)

bool App::OnInit()
{
    Frame *frame = new Frame(wxT("wxNotes"));
    frame->Show(true);
    return true;
}


