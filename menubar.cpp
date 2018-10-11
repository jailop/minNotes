#include "menubar.h"

MenuBar::MenuBar()
{
    wxMenu *file = new wxMenu;
    file->Append(wxID_NEW, wxT("&New\tAlt-n"));
    file->Append(wxID_OPEN, wxT("&Open\tAlt-o"));
    file->Append(wxID_SAVE, wxT("&Save\tAlt-s"));
    file->Append(wxID_SAVEAS, wxT("&Save as"));
    file->Append(wxID_EXIT, wxT("&Quit\tAlt-q"));
    this->Append(file, wxT("&File"));
}

