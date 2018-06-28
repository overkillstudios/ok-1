#pragma once
#include "OK/Interface/IContentSystem.h"
#include "OK/Type/ID.h"
#include "OK/Type/Prefab.h"

namespace OK::Content 
{
using namespace OK::Type;
using namespace OK::Interface;

class PrefabSystem : public OK::IContentSystem<PrefabSystem>
{
public:
    virtual OK::Prefab
    GetById(const OK::ID id) final override;
    
    virtual OK::Prefab&
    GetRefById(const OK::ID id) final override; 

private:

};

}