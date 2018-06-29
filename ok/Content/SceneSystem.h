#pragma once
#include "ok/Interface/IContentSystem.h"
#include "ok/Type/ID.h"
#include "ok/Type/Scene.h"
using oSceneSystem = ok::Content::SceneSystem;

namespace ok::Content 
{

class SceneSystem : public oIContentSystem<oScene>
{
public:
    oScene
    GetById(const oID id) final;
    
    oScene&
    GetRefById(const oID id) final; 

private:

};

}