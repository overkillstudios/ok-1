#pragma once
#include "Core/AssetSystem/IAssetSystem.h"
#include "Core/Type/ID.h"
#include "Core/Type/Prefab.h"

namespace ok::Core::AssetSystem
{

class PrefabSystem : public oIAssetSystem<oPrefab>
{
public:
    oPrefab
    GetById(const oID id) final;
    
    oPrefab&
    GetRefById(const oID id) final; 

private:

};

}
using oPrefabSystem = ok::Core::AssetSystem::PrefabSystem;
