#pragma once
#include "ok/Interface/IContentSystem.h"
#include "ok/Type/ID.h"
#include "ok/Type/Shader.h"
using oShaderSystem = ok::Content::ShaderSystem;

namespace ok::Content 
{

class ShaderSystem : public oIContentSystem<oShader>
{
public:
    oShader
    GetById(const oID id) final;
    
    oShader&
    GetRefById(const oID id) final; 

private:

};

}