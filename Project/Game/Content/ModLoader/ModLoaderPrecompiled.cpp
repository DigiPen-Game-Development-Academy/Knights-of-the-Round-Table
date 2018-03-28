#include "ModLoaderPrecompiled.hpp"

//***************************************************************************
ZilchDefineStaticLibraryAndPlugin(ModLoaderLibrary, ModLoaderPlugin, ZilchDependencyStub(ZeroEngine))
{
  ZilchInitializeType(ModLoader);
  ZilchInitializeType(ModLoaderEvent);
  // Auto Initialize (used by Visual Studio plugins, do not remove this line)
}

//***************************************************************************
void ModLoaderPlugin::Initialize(Zilch::BuildEvent* event)
{
  // One time startup logic goes here
  // This runs after our plugin library/reflection is built
  Zilch::Console::WriteLine("ModLoaderPlugin::Initialize");
}

//***************************************************************************
void ModLoaderPlugin::Uninitialize()
{
  // One time shutdown logic goes here
  Zilch::Console::WriteLine("ModLoaderPlugin::Uninitialize");
}