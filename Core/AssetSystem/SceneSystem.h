#pragma once
#include "Core/AssetSystem/IAssetSystem.h"
#include "Core/Type/ID.h"
#include "Core/Type/Scene.h"

namespace ok::Core::AssetSystem 
{

class SceneSystem : public oIAssetSystem<oScene>
{
public:
    oScene
    GetById(const oID id) final;
    
    oScene&
    GetRefById(const oID id) final; 

private:

};

}
using oSceneSystem = ok::Core::AssetSystem::SceneSystem;
