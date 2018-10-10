#include "menubar.h"

BEGIN_EVENT_TABLE(MenuBar, wxMenuBar)
    EVT_MENU(wxID_NEW, MenuBar::onNew)
    EVT_MENU(wxID_OPEN, MenuBar::onOpen)
    EVT_MENU(wxID_SAVE, MenuBar::onSave)
    EVT_MENU(wxID_SAVEAS, MenuBar::onSaveAs)
    EVT_MENU(wxID_EXIT, MenuBar::onQuit)
END_EVENT_TABLE()

MenuBar::MenuBar(wxFrame *frame)
{
    m_frame = frame;
    wxMenu *file = new wxMenu;
    file->Append(wxID_NEW, wxT("&New\tAlt-n"));
    file->Append(wxID_OPEN, wxT("&Open\tAlt-o"));
    file->Append(wxID_SAVE, wxT("&Save\tAlt-s"));
    file->Append(wxID_SAVEAS, wxT("&Save as"));
    file->Append(wxID_EXIT, wxT("&Quit\tAlt-q"));
    this->Append(file, wxT("&File"));
}

void MenuBar::onNew(wxCommandEvent& event)
{

}

void MenuBar::onOpen(wxCommandEvent& event)
{

}

void MenuBar::onSave(wxCommandEvent& event)
{

}

void MenuBar::onSaveAs(wxCommandEvent& event)
{

}

void MenuBar::onQuit(wxCommandEvent& event)
{
    m_frame->Close(true);
}


