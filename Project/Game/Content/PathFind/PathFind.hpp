#pragma once

// For more information on binding and using Zilch APIs, visit: http://zilch.digipen.edu/
// For auto binding specifically, visit: http://zilch.digipen.edu/AutomaticBinding.html

// An example component being bound to the engine
class PathFind : public ZeroEngine::ZilchComponent {
public:
  ZilchDeclareDerivedType(PathFind, ZeroEngine::ZilchComponent);
  
  PathFind();
  ~PathFind();
  
  void Initialize(ZeroEngine::CogInitializer* initializer);
  
  void OnLogicUpdate(ZeroEngine::UpdateEvent* event);
  
private:
	Zero::Array<Zilch::Real3> AStar(Zilch::Real3 start, Zilch::Real3 goal);

};

// An example of a custom event that we can send
class PathFindEvent : public ZeroEngine::ZilchEvent {
public:
  ZilchDeclareDerivedType(PathFindEvent, ZeroEngine::ZilchEvent);
  
  Zero::Array<Zilch::Real3> Path;
};
