#pragma once
#include "OK/Interface/IContentSystem.h"
#include "OK/Type/ID.h"
#include "OK/Type/Texture.h"

namespace OK::Content 
{
using namespace OK::Type;
using namespace OK::Interface;

class TextureSystem : public OK::IContentSystem<TextureSystem>
{
public:
    virtual OK::Texture
    GetById(const OK::ID id) final override;
    
    virtual OK::Texture&
    GetRefById(const OK::ID id) final override; 

private:

};

}