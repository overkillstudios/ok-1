#pragma once
#include "ok/Interface/IContentSystem.h"
#include "ok/Type/ID.h"
#include "ok/Type/Model.h"
using oModelSystem = ok::Content::ModelSystem;

namespace ok::Content 
{

class ModelSystem : public oIContentSystem<oModel>
{
public:
    oModel
    GetById(const oID id) final;
    
    oModel&
    GetRefById(const oID id) final; 

private:

};

}