#include "CliClass.h"
using namespace System;
namespace Project1
{
    void CliClass::StaticHello()
    {
        SourceCpp::StaticPrintHelloFromCpp();
        Console::WriteLine("Static Hello from C++/Cli");
    }

    void CliClass::Hello()
    {
        SourceCpp s;
        s.PrintHelloFromCpp();
        Console::WriteLine("Hello from C++/Cli");
    }
}
