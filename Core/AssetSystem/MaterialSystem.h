#pragma once
#include "Core/AssetSystem/IAssetSystem.h"
#include "Core/Type/ID.h"
#include "Core/Type/Material.h"

namespace ok::Core::AssetSystem 
{

class MaterialSystem : public oIAssetSystem<oMaterial>
{
public:
    oMaterial
    GetById(const oID id) final;
    
    oMaterial&
    GetRefById(const oID id) final; 

private:

};

}
using oMaterialSystem = ok::Core::AssetSystem::MaterialSystem;
