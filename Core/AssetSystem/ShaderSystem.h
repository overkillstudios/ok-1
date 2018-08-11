#pragma once
#include "Core/AssetSystem/IAssetSystem.h"
#include "Core/Type/ID.h"
#include "Core/Type/Shader.h"

namespace ok::Core::AssetSystem 
{

class ShaderSystem : public oIAssetSystem<oShader>
{
public:
    oShader
    GetById(const oID id) final;
    
    oShader&
    GetRefById(const oID id) final; 

private:

};

}
using oShaderSystem = ok::Core::AssetSystem::ShaderSystem;
