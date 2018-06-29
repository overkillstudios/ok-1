#pragma once
#include "ok/Interface/IContentSystem.h"
#include "ok/Type/ID.h"
#include "ok/Type/Texture.h"
using oTextureSystem = ok::Content::TextureSystem;

namespace ok::Content 
{

class TextureSystem : public oIContentSystem<oTexture>
{
public:
    oTexture
    GetById(const oID id) final;
    
    oTexture&
    GetRefById(const oID id) final; 

private:

};

}