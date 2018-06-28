#include "ok/Type/Error.h"
#include "ok/Type/Int.h"
#include "ok/Type/Float.h"
#include "ok/Engine.h"


oInt64 main(oInt64 argc, const char* argv[]) 
{
    oEngine engine;
    oError  err;

    err = engine.GetReady();
    if (err) return err;

    err = engine.Go();
    if (err) return err;

    return 0;
}
