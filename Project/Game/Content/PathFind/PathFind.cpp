#include "PathFindPrecompiled.hpp"

//***************************************************************************
ZilchDefineType(PathFind, PathFindLibrary, builder, type)
{
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
PathFind::PathFind()
{
  Zilch::Console::WriteLine("PathFind::PathFind (Constructor)");
  // Initialize our default values here (we automatically zero the memory first)
  // In the future we'll support a newer compiler with member initialization
  mHealth = 100.0f;
  mLives = 9;
}

//***************************************************************************
PathFind::~PathFind()
{
  Zilch::Console::WriteLine("PathFind::~PathFind (Destructor)");
  // Always check for null if you are intending
  // to destroy any cogs that you 'own'
}

//***************************************************************************
void PathFind::Initialize(ZeroEngine::CogInitializer* initializer)
{
  Zilch::Console::WriteLine("PathFind::Initialize");
  
  ZeroConnectThisTo(this->GetSpace(), "LogicUpdate", "OnLogicUpdate");
}

//***************************************************************************
void PathFind::OnLogicUpdate(ZeroEngine::UpdateEvent* event)
{
  // Do we have a Model component?
  ZeroEngine::Model* model = this->GetOwner()->has(ZeroEngine::Model);
  if (model != nullptr)
    Zilch::Console::WriteLine("We have a Model!");
  
  // Send our own update event
  // We could also replace this with ZilchEvent to send basic events
  // Note: ZilchAllocate should be used for any type that is
  // typically allocated within Zilch, such as a CastFilter
  Zilch::HandleOf<PathFindEvent> toSend = ZilchAllocate(PathFindEvent);
  toSend->mLives = mLives;
  this->GetOwner()->DispatchEvent("PathFindUpdate", toSend);
}

//***************************************************************************
Zilch::String PathFind::Speak()
{
  Zilch::String text("Hello World");
  Zilch::Console::WriteLine(text);
  return text;
}

//***************************************************************************
float PathFind::GetHealth()
{
  return mHealth;
}

//***************************************************************************
void PathFind::SetHealth(float value)
{
  if (value < 0)
    value = 0;
  else if (value > 100)
    value = 100;
  
  mHealth = value;
}

//***************************************************************************
ZilchDefineType(PathFindEvent, PathFindLibrary, builder, type)
{
  // This is required for event binding
  ZilchBindDestructor();
  ZilchBindConstructor();
  
  ZilchBindFieldProperty(mLives);
}
