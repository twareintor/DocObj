#include "cxx.h"

// Application, ActiveApplication
CxxApp::CxxApp()
{
    char* szX = new char[100];
    strcat(szX, "APP/");
    std::cout<<"_Application_.";
    strcat(gszdisp, "Application.");
    Document = new CxxDoc;
    Document->SetDisp(szX);
    return;
}

CxxApp::~CxxApp()
{
    delete Document;
    return;
}

// Document, ActiveDocument, Workbook, ActiveWorkbook
CxxDoc::CxxDoc()
{
    std::cout<<"_Document_.";
    strcat(gszdisp, "Document.");
    Sheet = new CxxTab;
    return;
}

CxxDoc::~CxxDoc()
{
    delete Sheet;
    return;
}

void CxxDoc::SetDisp(char* szX)
{
    szdisp = szX;
    strcat(szdisp, "DOC/");
    Sheet->SetDisp(szdisp);
    return;
}

// Table, Sheet, Worksheet, ActiveSheet
CxxTab::CxxTab()
{
    std::cout<<"_Sheet_.";
    strcat(gszdisp, "Sheet.");
    Selection = new CxxSel;
    return;
}

CxxTab::~CxxTab()
{
    delete Selection;
    return;
}

void CxxTab::SetDisp(char* szX)
{
    szdisp = szX;
    strcat(szdisp, "TAB/");
    Selection->SetDisp(szdisp);
    return;
}

// Selection
CxxSel::CxxSel()
{
    std::cout<<"_Selection_.";
    strcat(gszdisp, "Selection");
    return;
}

CxxSel::~CxxSel()
{
    return;
}

void CxxSel::SetDisp(char* szX)
{
    
    szdisp = szX;
    
    strcat(szdisp, "SEL/");
    std::cout<<szdisp<<std::endl;
    return;
}

char* CxxSel::Value()
{
    return "$$$VALUE$$$";
}
