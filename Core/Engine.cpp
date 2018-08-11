#include "Core/Engine.h"


namespace ok::Core
{

oError 
Engine::GetReady()
{
	return oError{};
}

oError 
Engine::Go() 
{ 
	return this->goUntilExitOrError(); 
}

oError 
Engine::goUntilExitOrError()
{
	return oError{};
}

void
Engine::Stop();
{
	return;
}