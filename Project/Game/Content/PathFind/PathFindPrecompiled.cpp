#include "PathFindPrecompiled.hpp"

//***************************************************************************
ZilchDefineStaticLibraryAndPlugin(PathFindLibrary, PathFindPlugin, ZilchDependencyStub(ZeroEngine))
{
  ZilchInitializeType(PathFind);
  ZilchInitializeType(PathFindEvent);
  // Auto Initialize (used by Visual Studio plugins, do not remove this line)
}

//***************************************************************************
void PathFindPlugin::Initialize(Zilch::BuildEvent* event)
{
  // One time startup logic goes here
  // This runs after our plugin library/reflection is built
  Zilch::Console::WriteLine("PathFindPlugin::Initialize");
}

//***************************************************************************
void PathFindPlugin::Uninitialize()
{
  // One time shutdown logic goes here
  Zilch::Console::WriteLine("PathFindPlugin::Uninitialize");
}