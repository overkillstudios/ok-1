#pragma once
#include "Core/AssetSystem/IAssetSystem.h"
#include "Core/Type/ID.h"
#include "Core/Type/Model.h"

namespace ok::Core::AssetSystem 
{

class ModelSystem : public oIAssetSystem<oModel>
{
public:
    oModel
    GetById(const oID id) final;
    
    oModel&
    GetRefById(const oID id) final; 

private:

};

}
using oModelSystem = ok::Core::AssetSystem::ModelSystem;
