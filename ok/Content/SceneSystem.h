#pragma once
#include "OK/Interface/IContentSystem.h"
#include "OK/Type/ID.h"
#include "OK/Type/Scene.h"

namespace OK::Content 
{
using namespace OK::Type;
using namespace OK::Interface;

class SceneSystem : public OK::IContentSystem<SceneSystem>
{
public:
    virtual OK::Scene
    GetById(const OK::ID id) final override;
    
    virtual OK::Scene&
    GetRefById(const OK::ID id) final override; 

private:

};

}