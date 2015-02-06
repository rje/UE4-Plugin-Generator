#pragma once

#include "ModuleManager.h"

class ITemplatePlugin : public IModuleInterface
{

public:

	static inline ITemplatePlugin& Get()
	{
		return FModuleManager::LoadModuleChecked< ITemplatePlugin >( "TemplatePlugin" );
	}

	static inline bool IsAvailable()
	{
		return FModuleManager::Get().IsModuleLoaded( "TemplatePlugin" );
	}
};

