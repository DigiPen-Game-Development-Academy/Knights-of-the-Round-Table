#pragma once

// For more information on binding and using Zilch APIs, visit: http://zilch.digipen.edu/
// For auto binding specifically, visit: http://zilch.digipen.edu/AutomaticBinding.html

// An example component being bound to the engine
class ModLoader : public ZeroEngine::ZilchComponent {

public:
  ZilchDeclareDerivedType(ModLoader, ZeroEngine::ZilchComponent);
  
  ModLoader();
  ~ModLoader();
  
  void Initialize(ZeroEngine::CogInitializer* initializer);
  
  void OnLogicUpdate(ZeroEngine::UpdateEvent* event);
  
  // A method that we want to expose to script
  Zilch::String Speak();
  
  // A field that we want to expose to script
  int mLives;
  
  // A getter/setter that we want to expose to script
  float GetHealth();
  void SetHealth(float value);
  
private:
  float mHealth;

};

// An example of a custom event that we can send
class ModLoaderEvent : public ZeroEngine::ZilchEvent {

public:
  ZilchDeclareDerivedType(ModLoaderEvent, ZeroEngine::ZilchEvent);
  
  int mLives;

};
