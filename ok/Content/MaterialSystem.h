#pragma once
#include "ok/Interface/IContentSystem.h"
#include "ok/Type/ID.h"
#include "ok/Type/Material.h"


namespace ok::Content 
{

class MaterialSystem : public oIContentSystem<oMaterial>
{
public:
    virtual oMaterial
    GetById(const oID id) final override;
    
    virtual oMaterial&
    GetRefById(const oID id) final override; 

private:

};

}
using oMaterialSystem = ok::Content::MaterialSystem;