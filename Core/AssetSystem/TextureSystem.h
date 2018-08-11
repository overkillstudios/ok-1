#pragma once
#include "Core/AssetSystem/IAssetSystem.h"
#include "Core/Type/ID.h"
#include "Core/Type/Texture.h"

namespace ok::Core::AssetSystem 
{

class TextureSystem : public oIAssetSystem<oTexture>
{
public:
    oTexture
    GetById(const oID id) final;
    
    oTexture&
    GetRefById(const oID id) final; 

private:

};

}q
using oTextureSystem = ok::Core::AssetSystem::TextureSystem;
