///////////////////////////////////////////////////////////////////////////////////////

#include "cxx.h"
#include "version.h"

int main()
{
    gszdisp = new char[400];
    CxxApp* Application = new CxxApp;
    std::cout<<std::endl;
    std::cout<<Application->Document->Sheet->Selection->Value()<<std::endl;
    std::cout<<std::endl;
    std::cout << "Hello, world!\n";
    delete Application;
    std::cout<<gszdisp<<std::endl;
    delete[] gszdisp;
}

///////////////////////////////////////////////////////////////////////////////////////
