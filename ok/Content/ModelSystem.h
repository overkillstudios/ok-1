#pragma once
#include "OK/Interface/IContentSystem.h"
#include "OK/Type/ID.h"
#include "OK/Type/Model.h"

namespace OK::Content 
{
using namespace OK::Type;
using namespace OK::Interface;

class ModelSystem : public OK::IContentSystem<ModelSystem>
{
public:
    virtual OK::Model
    GetById(const OK::ID id) final override;
    
    virtual OK::Model&
    GetRefById(const OK::ID id) final override; 

private:

};

}