#include "ModLoaderPrecompiled.hpp"

//***************************************************************************
ZilchDefineType(ModLoader, ModLoaderLibrary, builder, type) {

  // This is required for component binding
  ZilchBindDestructor();
  ZilchBindConstructor();
  ZilchBindMethod(Initialize);
  
  // Note: All event connection methods must be bound
  ZilchBindMethod(OnLogicUpdate);

  // Using Property at the end is the same as the [Property] attribute
  // You could also use ->AddAttribute after the bind macro
  ZilchBindMethod(Speak);
  ZilchBindFieldProperty(mLives);
  ZilchBindGetterSetterProperty(Health);

}

//***************************************************************************
ModLoader::ModLoader() {

  Zilch::Console::WriteLine("ModLoader::ModLoader (Constructor)");
  // Initialize our default values here (we automatically zero the memory first)
  // In the future we'll support a newer compiler with member initialization
  mHealth = 100.0f;
  mLives = 9;

}

//***************************************************************************
ModLoader::~ModLoader() {

  Zilch::Console::WriteLine("ModLoader::~ModLoader (Destructor)");
  // Always check for null if you are intending
  // to destroy any cogs that you 'own'

}

//***************************************************************************
void ModLoader::Initialize(ZeroEngine::CogInitializer* initializer) {

  Zilch::Console::WriteLine("ModLoader::Initialize");
  
  ZeroConnectThisTo(this->GetSpace(), "LogicUpdate", "OnLogicUpdate");

}

//***************************************************************************
void ModLoader::OnLogicUpdate(ZeroEngine::UpdateEvent* event) {

  // Do we have a Model component?
  ZeroEngine::Model* model = this->GetOwner()->has(ZeroEngine::Model);
  if (model != nullptr)
    Zilch::Console::WriteLine("We have a Model!");
  
  // Send our own update event
  // We could also replace this with ZilchEvent to send basic events
  // Note: ZilchAllocate should be used for any type that is
  // typically allocated within Zilch, such as a CastFilter
  Zilch::HandleOf<ModLoaderEvent> toSend = ZilchAllocate(ModLoaderEvent);
  toSend->mLives = mLives;
  this->GetOwner()->DispatchEvent("ModLoaderUpdate", toSend);

}

//***************************************************************************
Zilch::String ModLoader::Speak() {

  Zilch::String text("Hello World");
  Zilch::Console::WriteLine(text);
  return text;

}

//***************************************************************************
float ModLoader::GetHealth() {
  return mHealth;
}

//***************************************************************************
void ModLoader::SetHealth(float value) {

  if (value < 0)
    value = 0;
  else if (value > 100)
    value = 100;
  
  mHealth = value;

}

//***************************************************************************
ZilchDefineType(ModLoaderEvent, ModLoaderLibrary, builder, type) {

  // This is required for event binding
  ZilchBindDestructor();
  ZilchBindConstructor();
  
  ZilchBindFieldProperty(mLives);

}
