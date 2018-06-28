#pragma once
#include "OK/Interface/IContentSystem.h"
#include "OK/Type/ID.h"
#include "OK/Type/Shader.h"

namespace OK::Content 
{
using namespace OK::Type;
using namespace OK::Interface;

class ShaderSystem : public OK::IContentSystem<ShaderSystem>
{
public:
    virtual OK::Shader
    GetById(const OK::ID id) final override;
    
    virtual OK::Shader&
    GetRefById(const OK::ID id) final override; 

private:

};

}