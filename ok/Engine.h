#pragma once
#include "ok/Type/Error.h"
using oEngine = ok::Engine;

namespace ok
{

class Engine
{
public:
    oError 
    GetReady();

    oError 
    Go() { return GoUntilExitOrError(); }

    oError 
    GoUntilExitOrError();

    void
    Stop();

private:
};

}