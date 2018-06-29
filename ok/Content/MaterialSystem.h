#pragma once
#include "ok/Interface/IContentSystem.h"
#include "ok/Type/ID.h"
#include "ok/Type/Material.h"
using oMaterialSystem = ok::Content::MaterialSystem;


namespace ok::Content 
{

class MaterialSystem : public oIContentSystem<oMaterial>
{
public:
    oMaterial
    GetById(const oID id) final;
    
    oMaterial&
    GetRefById(const oID id) final; 

private:

};

}