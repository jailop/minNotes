#ifndef _FRAME_H
#define _FRAME_H

#include <wx/wx.h>

class Frame : public wxFrame
{
    public:
        Frame(const wxString& title);
    private:
        wxTextCtrl *m_textarea;
        void onNew(wxCommandEvent& event);
        void onOpen(wxCommandEvent& event);
        void onSave(wxCommandEvent& event);
        void onSaveAs(wxCommandEvent& event);
        void onQuit(wxCommandEvent& event);
        void ToolBar();
        DECLARE_EVENT_TABLE()
};

#endif // _FRAME_H
