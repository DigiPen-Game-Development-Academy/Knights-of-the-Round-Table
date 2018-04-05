#include "ModLoaderPrecompiled.hpp"

ZilchDefineType(ModLoader, ModLoaderLibrary, builder, type) {

  // This is required for component binding
  ZilchBindDestructor();
  ZilchBindConstructor();
  ZilchBindMethod(Initialize);
  
  // Note: All event connection methods must be bound
  ZilchBindMethod(OnLogicUpdate);

  // Using Property at the end is the same as the [Property] attribute
  // You could also use ->AddAttribute after the bind macro

}

ModLoader::ModLoader() {

  Zilch::Console::WriteLine("ModLoader::ModLoader (Constructor)");
  // Initialize our default values here (we automatically zero the memory first)
  // In the future we'll support a newer compiler with member initialization

}

ModLoader::~ModLoader() {

  Zilch::Console::WriteLine("ModLoader::~ModLoader (Destructor)");
  // Always check for null if you are intending
  // to destroy any cogs that you 'own'

}

void ModLoader::Initialize(ZeroEngine::CogInitializer* initializer) {

  Zilch::Console::WriteLine("ModLoader::Initialize");

  Zilch::Console::WriteLine("Initializing Mods...");

  InitMods();

  Zilch::Console::WriteLine("Mods Initialized!");
  
  //ZeroConnectThisTo(this->GetSpace(), "LogicUpdate", "OnLogicUpdate");

}

void ModLoader::InitMods() {

	std::string modsFolder = "";

	_finddata_t data;
	int ff = _findfirst(modsFolder.c_str(), &data);
	Zilch::Console::WriteLine(Zero::String(ff));
	if (ff != -1) {
		int res = 0;
		while (res != -1) {

			InitMod(modsFolder + data.name);

			res = _findnext(ff, &data);
		}
		_findclose(ff);
	}

}

void ModLoader::InitMod(std::string path) {

	Zilch::Console::WriteLine(Zero::String("Initializing mod in path: ", path.c_str()));



}

void ModLoader::OnLogicUpdate(ZeroEngine::UpdateEvent* event) {

}

//***************************************************************************
ZilchDefineType(ModLoaderEvent, ModLoaderLibrary, builder, type) {

  // This is required for event binding
  ZilchBindDestructor();
  ZilchBindConstructor();
  
  ZilchBindFieldProperty(mLives);

}
