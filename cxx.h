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
class CxxSel
{
    public:
        CxxSel();
        ~CxxSel();        
        char* Value();
        void SetDisp(char* szX);
    private:
        char* szdisp;
};

// Table, Sheet, Worksheet, ActiveSheet
class CxxTab
{
    public:
        CxxTab();
        ~CxxTab();   
        CxxSel* Selection;     
        void SetDisp(char* szX);
    private:
        char* szdisp;
};

// Document, ActiveDocument, Workbook, ActiveWorkbook
class CxxDoc
{
    public:
        CxxDoc();
        ~CxxDoc();
        CxxTab* Sheet;
        void SetDisp(char* szX);
    private:
        char* szdisp;        
};

// Application, ActiveApplication
class CxxApp
{
    public:
        CxxApp();
        ~CxxApp();
        void SetDisp(char* szX);
        CxxDoc* Document;
    private:
        char* szdisp;
};

///////////////////////////////////////////////////////////

