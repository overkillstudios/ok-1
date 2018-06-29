#pragma once
#include "ok/Type/ID.h"

namespace ok::Interface 
{
template<class T>
class IContentSystem 
{
public:
    virtual T
    GetById(const oID id) = 0;
    
    virtual T&
    GetRefById(const oID id) = 0; 
};
}

template<class T>
using oIContentSystem = ok::Interface::IContentSystem<T>;
