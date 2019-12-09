#pragma once
#include "../Interop_Cpp/SourceCpp.h"

ref class CliClass
{
public:
    void Hello()
    {
        SourceCpp::PrintHelloFromCpp();
    }
};

