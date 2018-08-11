#include "Type/Error.h"
#include "Type/Int.h"
#include "Type/Float.h"
#include "Core/Engine.h"


int main(int inArgc, const char* inArgv[]) 
{
    oEngine engine;
    oError  err;

    err = engine.GetReady();
    if (err) return err;

    err = engine.Go();
    if (err) return err;

    engine.Stop();
    return 0;
}
