#pragma once
#include "OK/Type/Error.h"

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


private:
};

}
using oEngine = ok::Engine;