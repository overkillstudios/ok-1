#pragma once
#include "ok/Interface/IContentSystem.h"
#include "ok/Type/ID.h"
#include "ok/Type/Prefab.h"
using oPrefabSystem = ok::Content::PrefabSystem;

namespace ok::Content
{

class PrefabSystem : public oIContentSystem<oPrefab>
{
public:
    oPrefab
    GetById(const oID id) final;
    
    oPrefab&
    GetRefById(const oID id) final; 

private:

};

}