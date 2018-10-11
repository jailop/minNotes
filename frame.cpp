#include "frame.h"
#include "menubar.h"

BEGIN_EVENT_TABLE(Frame, wxFrame)
    EVT_MENU(wxID_NEW, Frame::onNew)
    EVT_MENU(wxID_OPEN, Frame::onOpen)
    EVT_MENU(wxID_SAVE, Frame::onSave)
    EVT_MENU(wxID_SAVEAS, Frame::onSaveAs)
    EVT_MENU(wxID_EXIT, Frame::onQuit)
END_EVENT_TABLE()

Frame::Frame(const wxString& title)
    : wxFrame(NULL, wxID_ANY, title, wxDefaultPosition, wxSize(800, 600))
{
    MenuBar *menubar = new MenuBar();
    SetMenuBar(menubar);
    ToolBar();
    wxBoxSizer *mainsizer = new wxBoxSizer(wxVERTICAL);
    SetSizer(mainsizer);
    m_textarea = new wxTextCtrl(this, wxID_ANY, wxT(""), wxDefaultPosition, 
            wxDefaultSize, wxTE_MULTILINE | wxTE_RICH);
    mainsizer->Add(m_textarea, 1, wxEXPAND | wxALL, 20);
}

void Frame::ToolBar()
{
    wxBitmap bmNew(wxT("res/icons/actions/document-new.png"), wxBITMAP_TYPE_PNG);
    wxBitmap bmOpen(wxT("res/icons/actions/document-open.png"), wxBITMAP_TYPE_PNG);
    wxBitmap bmSave(wxT("res/icons/actions/document-save.png"), wxBITMAP_TYPE_PNG);
    wxBitmap bmExit(wxT("res/icons/actions/application-exit.png"), wxBITMAP_TYPE_PNG);
    wxToolBar *toolbar = CreateToolBar();
    toolbar->AddTool(wxID_NEW, wxT("New"), bmNew);
    toolbar->AddTool(wxID_OPEN, wxT("Open"), bmOpen);
    toolbar->AddTool(wxID_SAVE, wxT("Save"), bmSave);
    toolbar->AddTool(wxID_EXIT, wxT("Exit"), bmExit);
    toolbar->Realize();
}

void Frame::onNew(wxCommandEvent& event)
{

}

void Frame::onOpen(wxCommandEvent& event)
{

}

void Frame::onSave(wxCommandEvent& event)
{

}

void Frame::onSaveAs(wxCommandEvent& event)
{

}

void Frame::onQuit(wxCommandEvent& event)
{
    Close(true);
}


