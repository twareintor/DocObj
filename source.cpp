// Copyright (c) 2008-2014 Claudiu Ciutacu
// Test CxxDocObject successfully compiled

// ..... Permanent link: http://rextester.com/AGNO20976 <--- Live Code

//TDM-GCC 4.8.1 32-bit Release
//g++  4.9.1
//cxdocobj.000.a02

// other

///////////////////////////////////////////////////////////

#include <iostream>
#include <cstring>

char* gszdisp;

// Selection
class clsSel
{
    public:
        clsSel();
        ~clsSel();        
        char* Value();
        void SetDisp(char* szX);
    private:
        char* szdisp;
};

// Table, Sheet, Worksheet, ActiveSheet
class clsTab
{
    public:
        clsTab();
        ~clsTab();   
        clsSel* Selection;     
        void SetDisp(char* szX);
    private:
        char* szdisp;
};

// Document, ActiveDocument, Workbook, ActiveWorkbook
class clsDoc
{
    public:
        clsDoc();
        ~clsDoc();
        clsTab* Sheet;
        void SetDisp(char* szX);
    private:
        char* szdisp;        
};

// Application, ActiveApplication
class clsApp
{
    public:
        clsApp();
        ~clsApp();
        void SetDisp(char* szX);
        clsDoc* Document;
    private:
        char* szdisp;
};

///////////////////////////////////////////////////////////

// Application, ActiveApplication
clsApp::clsApp()
{
    char* szX = new char[100];
    strcat(szX, "APP/");
    std::cout<<"_Application_.";
    strcat(gszdisp, "Application.");
    Document = new clsDoc;
    Document->SetDisp(szX);
    return;
}

clsApp::~clsApp()
{
    delete Document;
    return;
}

// Document, ActiveDocument, Workbook, ActiveWorkbook
clsDoc::clsDoc()
{
    std::cout<<"_Document_.";
    strcat(gszdisp, "Document.");
    Sheet = new clsTab;
    return;
}

clsDoc::~clsDoc()
{
    delete Sheet;
    return;
}

void clsDoc::SetDisp(char* szX)
{
    szdisp = szX;
    strcat(szdisp, "DOC/");
    Sheet->SetDisp(szdisp);
    return;
}

// Table, Sheet, Worksheet, ActiveSheet
clsTab::clsTab()
{
    std::cout<<"_Sheet_.";
    strcat(gszdisp, "Sheet.");
    Selection = new clsSel;
    return;
}

clsTab::~clsTab()
{
    delete Selection;
    return;
}

void clsTab::SetDisp(char* szX)
{
    szdisp = szX;
    strcat(szdisp, "TAB/");
    Selection->SetDisp(szdisp);
    return;
}

// Selection
clsSel::clsSel()
{
    std::cout<<"_Selection_.";
    strcat(gszdisp, "Selection");
    return;
}

clsSel::~clsSel()
{
    return;
}

void clsSel::SetDisp(char* szX)
{
    
    szdisp = szX;
    
    strcat(szdisp, "SEL/");
    std::cout<<szdisp<<std::endl;
    return;
}

char* clsSel::Value()
{
    return "$$$VALUE$$$";
}

///////////////////////////////////////////////////////////////////////////////////////

int main()
{
    gszdisp = new char[400];
    clsApp* Application = new clsApp;
    std::cout<<std::endl;
    std::cout<<Application->Document->Sheet->Selection->Value()<<std::endl;
    std::cout<<std::endl;
    std::cout << "Hello, world!\n";
    delete Application;
    std::cout<<gszdisp<<std::endl;
    delete[] gszdisp;
}

///////////////////////////////////////////////////////////////////////////////////////
