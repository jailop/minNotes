#ifndef _MENUBAR_H
#define _MENUBAR_H

#include <wx/wx.h>

class MenuBar : public wxMenuBar
{
public:
    MenuBar(wxFrame *frame);
private:
    void onNew(wxCommandEvent& event);
    void onOpen(wxCommandEvent& event);
    void onSave(wxCommandEvent& event);
    void onSaveAs(wxCommandEvent& event);
    void onQuit(wxCommandEvent& event);
    wxFrame *m_frame;
    DECLARE_EVENT_TABLE()
};

#endif
