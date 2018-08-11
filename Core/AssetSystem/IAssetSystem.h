#pragma once
#include "Core/Type/ID.h"

namespace ok::Core::AssetSystem 
{

template<class AssetType>
class IAssetSystem 
{
public:
    virtual AssetType
    GetById(const oID id) = 0;
    
    virtual AssetType&
    GetRefById(const oID id) = 0; 
};
}

template<class AssetType>
using oIAssetSystem = ok::Core::AssetSystem::IAssetSystem<AssetType>;
