#include "TemplatePluginPrivatePCH.h"


class FTemplatePlugin : public ITemplatePlugin
{
	virtual void StartupModule() override;
	virtual void ShutdownModule() override;
};

IMPLEMENT_MODULE( FTemplatePlugin, TemplatePlugin )



void FTemplatePlugin::StartupModule()
{
}


void FTemplatePlugin::ShutdownModule()
{
}



