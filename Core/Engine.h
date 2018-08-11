#pragma once
#include "Core/Type/Error.h"

namespace ok::Core
{

class Engine
{
public:
    oError 
    GetReady();

    oError 
    Go();

    void
    Stop();

private:
    oError
    goUntilExitOrError();
};

}
using oEngine = ok::Core::Engine;
