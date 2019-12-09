#pragma once
#include "../Interop_Cpp/SourceCpp.h"

namespace Project1
{
    public ref class CliClass
    {
    public:
        void Hello()
        {
            SourceCpp::PrintHelloFromCpp();
        }
    };
}

