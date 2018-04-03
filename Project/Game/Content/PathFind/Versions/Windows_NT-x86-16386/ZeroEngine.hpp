/* Copyright 2016, DigiPen Institute of Technology */

#pragma once
#ifndef ZEROENGINE_HPP
#define ZEROENGINE_HPP

#include "Zilch.hpp"


#define ZeroCogGetComponentTemplate                                      \
  template <typename ComponentType>                                      \
  ComponentType* GetComponent()                                          \
  {                                                                      \
    Zilch::String name = ZilchTypeId(ComponentType)->Name;               \
    return static_cast<ComponentType*>                                   \
      (this->GetComponentByName(name).Dereference());                    \
  }                                                                        
#define has(ComponentType) GetComponent<ComponentType>()                   


namespace ZeroEngine
{
  class ZeroObject;
  class Component;
  class ProjectDescription;
  class AnimGraphPreview_;
  class Action;
  class PropertyReal;
  class ActionSet;
  class Ease;
  class PropertyReal2;
  class PropertyReal3;
  class PropertyReal4;
  class PropertyQuaternion;
  class PropertyInteger;
  class PropertyBoolean;
  class PropertyString;
  class Resource;
  class SampleCurve;
  class Modal_;
  class CollisionFilter;
  class FilterCollisionFlags;
  class CollisionEndBlock;
  class CollisionPersistedBlock;
  class CollisionStartBlock;
  class PreSolveBlock;
  class TextureRegion;
  class SpriteSource;
  class JointRange;
  class JointHolder;
  class Mesh;
  class VertexSemantic;
  class RelativeVelocityJointBlock;
  class PathType;
  class WebBrowserManager;
  class PhysicsEffect;
  class FlowEffect;
  class Components_;
  class ParticleRenderMode;
  class FlickedStick;
  class Collider;
  class ConvexMeshCollider;
  class ConvexMesh;
  class MultiConvexMesh;
  class Sounds;
  class StressTest;
  class Graphical;
  class BaseSprite;
  class SpriteLayer;
  class AnimationNode;
  class DirectBlend;
  class LevelPath;
  class Path;
  class NetUserCreator;
  class Archetype;
  class GearJointBlock;
  class BasicDirectionEffect;
  class ForceEffect;
  class AmbientLight;
  class Layout;
  class Thickness;
  class Widget;
  class Composite;
  class LayoutArea;
  class ThreadedWebRequest;
  class Font;
  class BlockingWebRequest;
  class Joint;
  class StickJoint;
  class ObjectView;
  class Event;
  class CustomPhysicsEffectEvent;
  class CustomPhysicsEffect;
  class Motion;
  class RigidBody;
  class PointEndCondition;
  class ValueEditorFactory;
  class Controls_;
  class StickJointBlock;
  class GizmoSnapMode;
  class SpriteFill;
  class GridDraw;
  class DynamicModel;
  class Material;
  class UprightJointBlock;
  class HierarchyListrange;
  class Cog;
  class SendableEvent;
  class LockStepEvent;
  class LockStepKeyEvent;
  class IpAddress;
  class InternetProtocol;
  class JointEvent;
  class LockStepGamepadEvent;
  class LockStepGamepadButtonEvent;
  class DocumentResource;
  class CapsuleScalingMode;
  class UprightJoint;
  class SimpleSocket;
  class TcpSocket;
  class SimpleGizmoBase;
  class ArrowGizmo;
  class GizmoPivot;
  class NetPeerReceivedConnectRequest;
  class EventBundle;
  class MaterialBlendMode;
  class Gamepads;
  class Gamepad;
  class ManipulatorJoint;
  class TorqueEffect;
  class SyncDebugFrameEvent;
  class LockStepPeer;
  class VerticalAlignment;
  class PointMassAnchorConnection;
  class ConstraintPositionCorrection;
  class TaskButton_;
  class GodRayLightType;
  class NetRole;
  class DebugBox;
  class SkinnedModel;
  class UserConfig;
  class BuoyancyEffect;
  class WheelJoint2dBlock;
  class AnimationBuilder;
  class HeightMapSubTool;
  class CreateDestroyTool;
  class Keys;
  class IgnoreSpaceEffects;
  class BasicAnimation;
  class Animation;
  class AnimPlayMode;
  class LockStepMouseEvent;
  class LockStepMouseButtonEvent;
  class TreeView_;
  class PositionCorrection;
  class PlayersJoinedEvent;
  class Chrome;
  class TransformGizmo;
  class ManipulatorTool;
  class ViewportMenu_;
  class SystemChildMode;
  class SpriteText;
  class GraphicsQuality;
  class HierarchyNameRange;
  class WidgetListRange;
  class Location;
  class PhysicsCarWheel;
  class PhysicsCar;
  class LinearAxisJointBlock;
  class HeightManipulationTool;
  class RaiseLowerTool;
  class NetPeerReceivedConnectResponse;
  class ConnectResponse;
  class ZilchComponent;
  class SplineAnimatorMode;
  class StackLayout;
  class LayoutDirection;
  class Sphere;
  class GraphicalEvent;
  class MaterialBlock;
  class Lambert;
  class IntegrationMethods;
  class ParticleAnimator;
  class ParticleCollisionPlane;
  class TextEvent;
  class BaseCastFilter;
  class CastFilter;
  class CollisionGroup;
  class AttachType;
  class ParticleTorusRoller;
  class GameEvent;
  class GameSession;
  class JointLimit;
  class BeamGeometryMode;
  class RevoluteJoint2d;
  class GizmoGrab;
  class BlendMode;
  class ContentHistory;
  class HotKeyBinding;
  class Reactive;
  class PhysicsMaterial;
  class WeldJoint;
  class JointToolTypes3D;
  class NodeGraph_;
  class MassOverride;
  class CogInitializerEvent;
  class CogInitializer;
  class DynamicMeshSaver;
  class MetaDropEvent;
  class MouseEvent;
  class ViewportMouseEvent;
  class NetLinkDisconnected;
  class DisconnectReason;
  class TransmissionDirection;
  class Text;
  class ParticleSystem;
  class AttachSystem;
  class TextureCompression;
  class MaterialEditorOnly;
  class ListControls_;
  class UiAutomator;
  class OsMouseEvent;
  class TextBox_;
  class ShaderView;
  class TextureView;
  class Texture;
  class SpriteSourceBuilder;
  class RevoluteJointBlock;
  class CustomConstraintInfo;
  class CustomJoint;
  class CapsuleCollider;
  class AxisDirection;
  class AnimationSet;
  class SoundSpace;
  class SoundInstance;
  class SoundCue;
  class SpaceMapvalueRange;
  class Space;
  class CastResult;
  class LauncherConfig;
  class TransformProxyObject;
  class PrismaticJointBlock;
  class WebBrowserSetup;
  class Viewport_;
  class MeshCollider;
  class PhysicsMesh;
  class MultiConvexMeshCollider;
  class RelativeVelocityJoint;
  class ReflectiveMapping;
  class TilePaletteSource;
  class FillLayout;
  class SelectTool;
  class Viewport;
  class GizmoBasis;
  class PropertyEditors;
  class ParticleWander;
  class RayTracedProvider;
  class HierarchyEvent;
  class ContentCopyright;
  class EventConnection;
  class CollisionTable;
  class OsWindow;
  class WindowsOsWindow;
  class ConstraintConfigBlock;
  class JoystickRange;
  class Joystick;
  class NetUserOwnerChanged;
  class DebugCircle;
  class ShaderGraph;
  class SearchView_;
  class NetPeerSentUserAddRequest;
  class JointMotor;
  class JointSpring;
  class EffectBuilder;
  class SoundTag;
  class PhyGunJointBlock;
  class PathRequestEvent;
  class TextButton;
  class PhysicsMeshBuilder;
  class Default_;
  class NetUserAddResponse;
  class ObjectEvent;
  class NetPeerSentConnectRequest;
  class NetProperties;
  class Baked;
  class MouseButtons;
  class Mouse;
  class ParticleEmitter;
  class ParticleEmitterShared;
  class ContactRange;
  class GeometryMaterialBlock;
  class PhysicsMaterialBlock;
  class TextureFilter;
  class ActiveFrameEvent;
  class RubberBanding;
  class CameraTransparentSort;
  class ContentItem;
  class FeelerMode;
  class Atlas;
  class NavMesh;
  class NavMeshSource;
  class AutoOrientToVelocity;
  class ParticleGradientAnimator;
  class ColorGradient;
  class LinkState;
  class TcpSocketBind;
  class JoystickEvent;
  class GeometryMaterial;
  class Mutator;
  class Beveler;
  class Bevel;
  class GraphicsMaterialBlock;
  class HotKeyDataSet;
  class DockArea;
  class ContentComposition;
  class DataContent;
  class FontBuilder;
  class GeneratedArchetype;
  class SkeletonBuilder;
  class SoundBuilder;
  class DataBuilder;
  class BinaryBuilder;
  class ContentTags;
  class ZilchScriptBuilder;
  class TextureBuilder;
  class RichAnimationBuilder;
  class FragmentBuilder;
  class NavMeshBuilder;
  class ContentNotes;
  class ZilchPluginBuilder;
  class TextBuilder;
  class HeightToNormalBuilder;
  class DirectImageBuilder;
  class ZilchFragmentBuilder;
  class GeometryImport;
  class MeshBuilder;
  class DragEffect;
  class DebugLineCross;
  class PreviewWidgets_;
  class TextureUvMode;
  class DocumentationLibrary;
  class Renderer;
  class ForwardRenderer;
  class LockStepMouseScrollEvent;
  class SpecularFromAlpha;
  class ParticleSystemCommonData;
  class SpriteParticleSystem;
  class RaycastProvider;
  class BackgroundTasks_;
  class VortexInterpolationStates;
  class CogTransformGizmo;
  class CogScaleGizmo;
  class JointConfigOverride;
  class Facing;
  class ReactiveViewport;
  class AntiAliasingType;
  class FixedAngleJoint;
  class BoxCollider;
  class Buttons;
  class TextBoxButton_;
  class ModalStrip_;
  class Transparency;
  class CameraViewportListrange;
  class CameraViewport;
  class TileMapSource;
  class GizmoDragMode;
  class DeveloperConfig;
  class SelectionSelectionRange;
  class CastFilterState;
  class SquareGizmo;
  class MovementBase;
  class Wandering;
  class Component_;
  class Heuristic;
  class CylinderCollider;
  class ScreenDropGenerator;
  class BaseCollisionEvent;
  class PreSolveEvent;
  class AlphaTest;
  class LightFrag;
  class TileView_;
  class Editors_;
  class IslandType;
  class RenderToTexture;
  class SoundTagEntry;
  class ParticleGeometry;
  class ZilchEvent;
  class MultiSprite;
  class NetEventSent;
  class SolverSubType;
  class ZilchState;
  class ImageFilter;
  class OutputTextureFormat;
  class ContactPoint;
  class MeshBender;
  class RuntimeSpline;
  class ControlMode;
  class ParticleAttractor;
  class Skeleton_;
  class ResourceSystem;
  class SphereCollider;
  class EditorUi_;
  class CogPath;
  class CogPathPreference;
  class Hierarchy;
  class CheckBox_;
  class EditorViewport;
  class OwnerShip;
  class AlphaUsage;
  class CreationTool;
  class PointMassSystem;
  class ClothSystem;
  class ContentImporter_;
  class SplineParticleAnimator;
  class Ray;
  class Orientation;
  class BitStream;
  class HorizontalAlignment;
  class LogicGraph_;
  class Net_;
  class MeshParticleEmitter;
  class Keyboard;
  class WebBrowserEvent;
  class WebBrowserPointQueryEvent;
  class WebRequester;
  class DebugObb;
  class ProjectionMode;
  class LightingBlock;
  class GameViewport;
  class PrismaticJoint2dBlock;
  class LockStepGamepadUpdateEvent;
  class PhysicsEngine;
  class Slider_;
  class ScriptStack;
  class SizeAxis;
  class NetUserLostObjectOwnership;
  class ParticleAnimation;
  class TileMap;
  class DockMode;
  class ShadowSoftening;
  class ActionGroup;
  class ScreenSpaceReflections;
  class ObjectStore;
  class StoreResult;
  class ResourceTable;
  class ResourceEvent;
  class TransferMode;
  class Aabb;
  class ObjectLinkAnchor;
  class ObjectLinkRange;
  class KeyboardEvent;
  class KeyState;
  class NetProperty;
  class VortexEffect;
  class VortexEndCondition;
  class EventRange;
  class UpdateEvent;
  class PhysicsCarCarWheelRange;
  class SelectiveNode;
  class AreaEvent;
  class RigidBodyDynamicState;
  class Mode2DStates;
  class WebBrowserDownloadEvent;
  class DockLayout;
  class DebugSphere;
  class GamepadEvent;
  class Popup_;
  class Actions;
  class ObjectConnectingTool;
  class BaseJointTool;
  class JointTool2D;
  class SharedContent;
  class Transform;
  class ActionSpace;
  class NetObject;
  class NetSpace;
  class PhysicsSpace;
  class GravityEffect;
  class Projector;
  class CogRotateGizmo;
  class HeightMapTool;
  class LockStepMouse;
  class LinearAxisJoint;
  class EditorSettings;
  class RecentProjects;
  class RingGizmo;
  class Sprite;
  class GeometryPointManipulator;
  class PhyGunJoint;
  class DynamicMotor;
  class MotionBlur;
  class HeightMapCollider;
  class DefaultViewportSetup;
  class LockStepSyncChecker;
  class AnimationGraph;
  class EditorBone;
  class LockStepSpace;
  class TimeConfig;
  class EditorCameraController;
  class SizerGizmo;
  class JointDebugDrawConfig;
  class UniversalJoint;
  class NavGrid;
  class LockStepKeyboard;
  class PrismaticJoint;
  class RandomContext;
  class DynamicMeshCollider;
  class EditorConfig;
  class BoxParticleEmitter;
  class PrismaticJoint2d;
  class WindEffect;
  class Ribbon;
  class LevelGeometry;
  class NetUser;
  class WheelJoint;
  class Fog;
  class MainConfig;
  class DefaultGameSetup;
  class LockStepGame;
  class Gizmo;
  class ThrustEffect;
  class ObjectLink;
  class VoxelChunk;
  class SoundListener;
  class SoundEmitter;
  class ScreenDrops;
  class RevoluteJoint;
  class Shadow;
  class ProxyControlPoint;
  class ParticleColorAnimator;
  class DynamicMeshGenerator;
  class GeometryMesh3D;
  class DynamicMesh;
  class BasicPointEffect;
  class PointForceEffect;
  class ParentingTool;
  class Light;
  class VoxelChunkMaterials;
  class HeightMapModel;
  class SpriteTextBlock;
  class CogSizerGizmo;
  class SpriteBeam;
  class GodRayLight;
  class Attractive;
  class EditorIcon;
  class GraphicsSpace;
  class GeometryMesh;
  class ScreenWarpRing;
  class Model;
  class RayTraceProperties;
  class SphericalParticleEmitter;
  class DefaultCamera;
  class MainWindowConfig;
  class RopeCreator;
  class LineParticleEmitter;
  class Area;
  class ReactiveSpace;
  class LinearParticleAnimator;
  class DynamicController;
  class RayTracedPhysicsProvider;
  class Camera;
  class TranslateTool;
  class ParticleTwister;
  class GizmoDrag;
  class SimpleSound;
  class MouseCapture;
  class TranslateGizmo;
  class GeometryPainter2D;
  class TileEditor2D;
  class WheelJoint2d;
  class RayTracedGraphicsProvider;
  class EditorRenderer;
  class Ssao;
  class CameraViewports;
  class JointTool3D;
  class PositionJoint;
  class Attractor;
  class GizmoSpace;
  class NetPeer;
  class PulleyJoint;
  class ModelVisualizer;
  class DeferredRenderer;
  class Feelers;
  class Project;
  class HeightMap;
  class ObjectSystem;
  class LightningParticleEmitter;
  class RotateTool;
  class PointMassAnchor;
  class ScaleTool;
  class ParticleCollisionHeightmap;
  class RotationProxy;
  class ZilchPluginConfig;
  class Blocking;
  class CustomCollisionEventTracker;
  class SplineParticleEmitter;
  class TimeSpace;
  class LockStepSyncIgnore;
  class ContentConfig;
  class FixedAspectRatio;
  class PointGravityEffect;
  class TextEditorConfig;
  class SimpleAnimation;
  class SceneEffect;
  class SkyBox;
  class LockStepGamepads;
  class EllipsoidCollider;
  class CogTranslateGizmo;
  class Region;
  class GraphicsConfig;
  class GearJoint;
  class AuthorityMode;
  class RingGizmoEvent;
  class CollisionGroupEvent;
  class CogNameRange;
  class ZilchObject;
  class CogHashSetRange;
  class CogId;
  class FontContent;
  class RolloffCurveType;
  class Environment;
  class WeightedTextures;
  class SoundData;
  class UniversalJointBlock;
  class ContactTangentTypes;
  class Spacerange;
  class CoreGraphics;
  class DebugText;
  class Centering;
  class SpecularMapping;
  class MultiMaterialBlock;
  class NetLinkConnected;
  class ActionSequence;
  class MultiTouch;
  class WebBrowserTextEvent;
  class DebugLine;
  class AnimationGraphEvent;
  class EffectType;
  class TimeSystem;
  class PointInterpolationStates;
  class ConnectionEvent;
  class ReceivedDataEvent;
  class WheelReference;
  class LockStepGamepad;
  class FlattenTool;
  class EmissiveMapping;
  class ContinuousResult;
  class RootWidget;
  class PositionJointBlock;
  class Engine;
  class UpdateMode;
  class ScrollBar_;
  class LockStepGameStartEvent;
  class PeerRange;
  class InputDevice;
  class Sound;
  class TrackView_;
  class AnimBlendMode;
  class BinaryContent;
  class CommandEvent;
  class HeightTool;
  class AnimationEditor_;
  class SoundEntry;
  class GeneratedSound;
  class WebResponseEvent;
  class NetChannel;
  class Authority;
  class DetectionMode;
  class SerializationMode;
  class ReliabilityMode;
  class TimeMode;
  class OrientationBases;
  class Clips;
  class ContactHolder;
  class ProxyContactPointRange;
  class TextAlign;
  class NetPeerClosed;
  class Joysticks;
  class CollisionTable_;
  class AnimationSettings;
  class WhichSoundType;
  class AnimationClip;
  class ObjectLinkEdge;
  class ShaderGraph_;
  class ParticleListRange;
  class NetPeerOpened;
  class TileEditor2DSubToolType;
  class Draggable;
  class ControlPoint;
  class SpriteData;
  class SweepResult;
  class NetPeerSentUserAddResponse;
  class Tangent;
  class StoredValueRangeCameraViewport;
  class WidgetManager;
  class Shader;
  class WeightPainterTool;
  class WeightedTable;
  class LoopingMode;
  class Tags_;
  class TextureDiffuse;
  class VisibilitySpyMode;
  class CrossBlend;
  class AnimBlendType;
  class DoubledSide;
  class CollisionEvent;
  class ParticleSortMode;
  class MetaSelection;
  class SendsEvents;
  class CommandManager;
  class MouseManipulation;
  class SizePolicies;
  class Rect;
  class SizePolicy;
  class Interaction_;
  class TimeDisplay;
  class PhysicsSolverConfig;
  class CastResultsRange;
  class ContinuousResultRange;
  class NetObjectOnline;
  class Particle;
  class ResourceCompression;
  class JointCreator;
  class ZilchPluginSource;
  class Phong;
  class AudioContent;
  class TransparentSort;
  class DesyncDebugRequest;
  class Skeleton;
  class JointBuilder;
  class SolverType;
  class LoadingWindow_;
  class TrackNode;
  class Splitter;
  class WebBrowserUrlEvent;
  class CustomJointBlock;
  class ReplicationPhase;
  class Test;
  class SampleData;
  class EdgeDockLayout;
  class IconButton;
  class ToggleIconButton;
  class ShadowMapping;
  class Window_;
  class NetChannelConfig;
  class Notification_;
  class MainWindow_;
  class SizerSnapMode;
  class ComboBox;
  class StringComboBox;
  class Cursor;
  class ContentSystem;
  class Quality;
  class Scrubber_;
  class ResourcePackage;
  class GizmoEvent;
  class MeshMode;
  class ObjectView_;
  class BrushType;
  class Modern_;
  class DecalBlock;
  class SoundPlayMode;
  class AnimationTrackView;
  class HotKeyEditor;
  class EditorEvent;
  class Editor;
  class GraphicsRaycastProvider;
  class LockStepGamepadStatusEvent;
  class NetLevelStarted;
  class ToolControl;
  class WebBrowser_;
  class LogicGraph;
  class NormalMapping;
  class SpriteLayerOrder;
  class FixedAngleJointBlock;
  class ModulateModelColor;
  class NetEventReceived;
  class ConnectionData;
  class TreeRow;
  class HierarchyRange;
  class OperationQueue;
  class WeldJointBlock;
  class BaseScrollArea;
  class ScrollArea;
  class Spacer;
  class Menu_;
  class ConsoleUi;
  class WheelCollection;
  class ManipulatorJointBlock;
  class WheelJointBlock;
  class RevoluteJoint2dBlock;
  class ValidRows_;
  class TextureSelect;
  class ModernTextButton_;
  class NetGameStarted;
  class CastFilterEvent;
  class PropertyView;
  class ObjectColorMode;
  class Level;
  class DoNotBlockGodRays;
  class MainWindow;
  class ConvexMeshEditor_;
  class SoundSystem;
  class NetUserRange;
  class LinkStatus;
  class Downloads_;
  class LimitMode;
  class ColorScheme;
  class RegisterCppNetProperties;
  class NetObjectOffline;
  class Button_;
  class KeyboardTextEvent;
  class Revision;
  class ViewportScaling;
  class HeightMapSource;
  class ObjectLinkPointChangedEvent;
  class InvalidRows_;
  class GridLayout;
  class ZilchFragment;
  class FogType;
  class CurveEditor_;
  class WebBrowserModifiers;
  class NetUserAcquiredObjectOwnership;
  class Shell;
  class ParticleEvent;
  class FocusEvent;
  class ContactBlock;
  class WebBrowserPopupCreateEvent;
  class SmoothSharpenTool;
  class PhysicsRaycastProvider;
  class HeightMapEvent;
  class GraphicsReport;
  class Reflective;
  class MaterialEntry;
  class SpriteGeometryMode;
  class NodeSearchMethod;
  class DesyncDebugResponse;
  class MeshEmitMode;
  class FixPowerOf2;
  class ResourceEditors_;
  class SoundTags;
  class InputDeviceEvent;
  class GizmoUpdateEvent;
  class SizerGizmoEvent;
  class PhysicsMeshType;
  class TextBlock;
  class AnimControls_;
  class GeometryContent;
  class DarknessFrag;
  class Tool;
  class NetPeerSentConnectResponse;
  class TreeView;
  class Materials;
  class ZilchScript;
  class Window;
  class CustomJointEvent;
  class PreProcessing;
  class AnimGraph_;
  class Toolbar_;
  class ScreenSpaceReflectionMap;
  class ArrowHeadType;
  class PulleyJointBlock;
  class TextEditor;
  class ToolUiEvent;
  class TouchEvent;
  class ScriptReloadMethod;
  class WebBrowser;
  class PerformanceMode;
  class WebBrowserConsoleEvent;
  class WebBrowserCursorEvent;
  class ObjectLinkEvent;
  class Label;
  class JointToolTypes2D;
  class LauncherAutoRunMode;
  class GizmoGrabMode;
  class DefinitionSet;
  class Uploader_;
  class PoseNode;
  class Placement;
  class CastResultsrange;
  class CogPathEvent;
  class ParallaxOcclusionMapping;
  class MeshBenderTool;
  class Refractivity;
  class ZilchPluginLibrary;
  class ColorDiffuse;
  class PreviewWidgetFactory;
  class VoxelFace;
  class SampleCurve_;
  class DebugTriangle;
  class ScriptEditor_;
  class EditorPackageLoader;
  class ResourceSet;
  class SelectorButton_;
  class RatioLayout;
  class FragmentSource;
  class ImageContent;
  class NetPropertyConfig;
  class RichAnimation;
  class SystemSpace;
  class PathFinderSettings;
  class NetPeerReceivedUserAddResponse;
  class BackgroundTasks;
  class ActionSystem;
  class GridAxis;
  class StartGameEvent;
  class ToolTip_;
  class CastResults;
  class SynthWaveType;
  class RenderView;
  class NetPeerReceivedUserAddRequest;
  class PropertyView_;
  class IconButton_;
  class LightType;
  class ChainNode;
  class TextContent;
  class ProjectDialog_;
  class Selection;
  class LockStepUpdateEvent;
  class TabWidth;
  class OsMouseEventData;
  class TargetSpace;
  class ProgressBar_;
  class Revisions;
  class NetChannelPropertyChange;
  class ToolBox_;
  class CogCommand;
  class Tweakables;
  class RgbUsage;
  class ContentStore_;
  class TextureWrapping;
  class MipGeneration;
  class CurveType;
  class Zero;
  
  class ZeroObject : public Zilch::ReferenceType
  {
  public:
    unsigned char mValue[4];
    
  protected:
    ZeroObject(Zilch::NoType none) : Zilch::ReferenceType(none) {}
    ZilchNoCopy(ZeroObject);
  };
  
  // A component is an atomic piece of functionality that is composed into a Cogs to form game objects.
  class Component : public ZeroObject
  {
  public:
    Zilch::HandleOf<Cog> GetOwner();
    
    Zilch::HandleOf<Space> GetSpace();
    
    Zilch::HandleOf<Cog> GetLevelSettings();
    
    Zilch::HandleOf<GameSession> GetGameSession();
    
    // Base debug draw for a component. Special for the each type of component.
    void DebugDraw();
    
    unsigned char mValue[4];
    
  protected:
    Component(Zilch::NoType none) : ZeroObject(none) {}
    ZilchNoCopy(Component);
  };
  
  class ProjectDescription : public Component
  {
  public:
    unsigned char mValue[60];
    
  protected:
    ProjectDescription(Zilch::NoType none) : Component(none) {}
    ZilchNoCopy(ProjectDescription);
  };
  
  class AnimGraphPreview_ : public ZeroObject
  {
  public:
    Zilch::Real4 GetBorderColor();
    
    void SetBorderColor(const Zilch::Real4& value);
    
    Zilch::Real4 GetNodeColor();
    
    void SetNodeColor(const Zilch::Real4& value);
    
    Zilch::Real4 GetProgressColor();
    
    void SetProgressColor(const Zilch::Real4& value);
    
    Zilch::Real4 GetProgressBgColor();
    
    void SetProgressBgColor(const Zilch::Real4& value);
    
    float GetEdgeArrowSize();
    
    void SetEdgeArrowSize(float value);
    
    unsigned char mValue[52];
    
  protected:
    AnimGraphPreview_(Zilch::NoType none) : ZeroObject(none) {}
    ZilchNoCopy(AnimGraphPreview_);
  };
  
  // Base action class.
  class Action : public Zilch::ReferenceType
  {
  public:
    bool GetCompleted();
    
    bool GetActive();
    
    bool GetStarted();
    
    // Cancel the action and all child actions.
    void Cancel();
    
    static Zilch::HandleOf<Action> Property(ActionSet* actionSet, PropertyReal* prop, float endValue, float duration, Ease ease);
    
    static Zilch::HandleOf<Action> Property(ActionSet* actionSet, PropertyReal2* prop, const Zilch::Real2& endValue, float duration, Ease ease);
    
    static Zilch::HandleOf<Action> Property(ActionSet* actionSet, PropertyReal3* prop, const Zilch::Real3& endValue, float duration, Ease ease);
    
    static Zilch::HandleOf<Action> Property(ActionSet* actionSet, PropertyReal4* prop, const Zilch::Real4& endValue, float duration, Ease ease);
    
    static Zilch::HandleOf<Action> Property(ActionSet* actionSet, PropertyQuaternion* prop, const Zilch::Quaternion& endValue, float duration, Ease ease);
    
    static Zilch::HandleOf<Action> Property(ActionSet* actionSet, PropertyInteger* prop, int endValue, float duration, Ease ease);
    
    static Zilch::HandleOf<Action> Property(ActionSet* actionSet, PropertyBoolean* prop, bool endValue, float duration, Ease ease);
    
    static Zilch::HandleOf<Action> Property(ActionSet* actionSet, PropertyString* prop, const Zilch::String& endValue, float duration, Ease ease);
    
    static Zilch::HandleOf<Action> Property(ActionSet* actionSet, PropertyReal* prop, float endValue, float duration, SampleCurve* ease);
    
    static Zilch::HandleOf<Action> Property(ActionSet* actionSet, PropertyReal2* prop, const Zilch::Real2& endValue, float duration, SampleCurve* ease);
    
    static Zilch::HandleOf<Action> Property(ActionSet* actionSet, PropertyReal3* prop, const Zilch::Real3& endValue, float duration, SampleCurve* ease);
    
    static Zilch::HandleOf<Action> Property(ActionSet* actionSet, PropertyReal4* prop, const Zilch::Real4& endValue, float duration, SampleCurve* ease);
    
    static Zilch::HandleOf<Action> Property(ActionSet* actionSet, PropertyQuaternion* prop, const Zilch::Quaternion& endValue, float duration, SampleCurve* ease);
    
    static Zilch::HandleOf<Action> Property(ActionSet* actionSet, PropertyInteger* prop, int endValue, float duration, SampleCurve* ease);
    
    static Zilch::HandleOf<Action> Property(ActionSet* actionSet, PropertyBoolean* prop, bool endValue, float duration, SampleCurve* ease);
    
    static Zilch::HandleOf<Action> Property(ActionSet* actionSet, PropertyString* prop, const Zilch::String& endValue, float duration, SampleCurve* ease);
    
    static Zilch::HandleOf<Action> Delay(ActionSet* __0, float __1);
    
    static Zilch::HandleOf<Action> Call(ActionSet* __0, const Zilch::Delegate& __1);
    
    static Zilch::HandleOf<ActionSet> Sequence(ActionSet* __0);
    
    static Zilch::HandleOf<ActionSet> Group(ActionSet* __0);
    
    unsigned char mValue[20];
    
  protected:
    Action(Zilch::NoType none) : Zilch::ReferenceType(none) {}
    ZilchNoCopy(Action);
  };
  
  class PropertyReal : public Zilch::ReferenceType
  {
  public:
    Zilch::Delegate GetSet();
    
    void SetSet(const Zilch::Delegate& value);
    
    Zilch::Delegate GetGet();
    
    void SetGet(const Zilch::Delegate& value);
    
    Zilch::HandleOf<Zilch::Property> GetProperty();
    
    void SetProperty(Zilch::Property* value);
    
    Zilch::Any GetInstance();
    
    void SetInstance(const Zilch::Any& value);
    
    unsigned char mValue[128];
    
  protected:
    PropertyReal(Zilch::NoType none) : Zilch::ReferenceType(none) {}
    ZilchNoCopy(PropertyReal);
  };
  
  class ActionSet : public Action
  {
  public:
    
  protected:
    ActionSet(Zilch::NoType none) : Action(none) {}
    ZilchNoCopy(ActionSet);
  };
  
  class Ease : public Zilch::ValueType
  {
  public:
    static Ease GetSinOut();
    
    static Ease GetQuadOut();
    
    static Ease GetQuadIn();
    
    static Ease GetQuadInOut();
    
    static Ease GetSinInOut();
    
    static Ease GetLinear();
    
    static Ease GetSinIn();
    
    int mValue;
    Ease();
  };
  
  class PropertyReal2 : public Zilch::ReferenceType
  {
  public:
    Zilch::Delegate GetSet();
    
    void SetSet(const Zilch::Delegate& value);
    
    Zilch::Delegate GetGet();
    
    void SetGet(const Zilch::Delegate& value);
    
    Zilch::HandleOf<Zilch::Property> GetProperty();
    
    void SetProperty(Zilch::Property* value);
    
    Zilch::Any GetInstance();
    
    void SetInstance(const Zilch::Any& value);
    
    unsigned char mValue[128];
    
  protected:
    PropertyReal2(Zilch::NoType none) : Zilch::ReferenceType(none) {}
    ZilchNoCopy(PropertyReal2);
  };
  
  class PropertyReal3 : public Zilch::ReferenceType
  {
  public:
    Zilch::Delegate GetSet();
    
    void SetSet(const Zilch::Delegate& value);
    
    Zilch::Delegate GetGet();
    
    void SetGet(const Zilch::Delegate& value);
    
    Zilch::HandleOf<Zilch::Property> GetProperty();
    
    void SetProperty(Zilch::Property* value);
    
    Zilch::Any GetInstance();
    
    void SetInstance(const Zilch::Any& value);
    
    unsigned char mValue[128];
    
  protected:
    PropertyReal3(Zilch::NoType none) : Zilch::ReferenceType(none) {}
    ZilchNoCopy(PropertyReal3);
  };
  
  class PropertyReal4 : public Zilch::ReferenceType
  {
  public:
    Zilch::Delegate GetSet();
    
    void SetSet(const Zilch::Delegate& value);
    
    Zilch::Delegate GetGet();
    
    void SetGet(const Zilch::Delegate& value);
    
    Zilch::HandleOf<Zilch::Property> GetProperty();
    
    void SetProperty(Zilch::Property* value);
    
    Zilch::Any GetInstance();
    
    void SetInstance(const Zilch::Any& value);
    
    unsigned char mValue[128];
    
  protected:
    PropertyReal4(Zilch::NoType none) : Zilch::ReferenceType(none) {}
    ZilchNoCopy(PropertyReal4);
  };
  
  class PropertyQuaternion : public Zilch::ReferenceType
  {
  public:
    Zilch::Delegate GetSet();
    
    void SetSet(const Zilch::Delegate& value);
    
    Zilch::Delegate GetGet();
    
    void SetGet(const Zilch::Delegate& value);
    
    Zilch::HandleOf<Zilch::Property> GetProperty();
    
    void SetProperty(Zilch::Property* value);
    
    Zilch::Any GetInstance();
    
    void SetInstance(const Zilch::Any& value);
    
    unsigned char mValue[128];
    
  protected:
    PropertyQuaternion(Zilch::NoType none) : Zilch::ReferenceType(none) {}
    ZilchNoCopy(PropertyQuaternion);
  };
  
  class PropertyInteger : public Zilch::ReferenceType
  {
  public:
    Zilch::Delegate GetSet();
    
    void SetSet(const Zilch::Delegate& value);
    
    Zilch::Delegate GetGet();
    
    void SetGet(const Zilch::Delegate& value);
    
    Zilch::HandleOf<Zilch::Property> GetProperty();
    
    void SetProperty(Zilch::Property* value);
    
    Zilch::Any GetInstance();
    
    void SetInstance(const Zilch::Any& value);
    
    unsigned char mValue[128];
    
  protected:
    PropertyInteger(Zilch::NoType none) : Zilch::ReferenceType(none) {}
    ZilchNoCopy(PropertyInteger);
  };
  
  class PropertyBoolean : public Zilch::ReferenceType
  {
  public:
    Zilch::Delegate GetSet();
    
    void SetSet(const Zilch::Delegate& value);
    
    Zilch::Delegate GetGet();
    
    void SetGet(const Zilch::Delegate& value);
    
    Zilch::HandleOf<Zilch::Property> GetProperty();
    
    void SetProperty(Zilch::Property* value);
    
    Zilch::Any GetInstance();
    
    void SetInstance(const Zilch::Any& value);
    
    unsigned char mValue[128];
    
  protected:
    PropertyBoolean(Zilch::NoType none) : Zilch::ReferenceType(none) {}
    ZilchNoCopy(PropertyBoolean);
  };
  
  class PropertyString : public Zilch::ReferenceType
  {
  public:
    Zilch::Delegate GetSet();
    
    void SetSet(const Zilch::Delegate& value);
    
    Zilch::Delegate GetGet();
    
    void SetGet(const Zilch::Delegate& value);
    
    Zilch::HandleOf<Zilch::Property> GetProperty();
    
    void SetProperty(Zilch::Property* value);
    
    Zilch::Any GetInstance();
    
    void SetInstance(const Zilch::Any& value);
    
    unsigned char mValue[128];
    
  protected:
    PropertyString(Zilch::NoType none) : Zilch::ReferenceType(none) {}
    ZilchNoCopy(PropertyString);
  };
  
  // Base Resource class.
  class Resource : public ZeroObject
  {
  public:
    Zilch::String GetName();
    
    void SetName(const Zilch::String& value);
    
    // Clone a resource for runtime modification.
    Zilch::HandleOf<Resource> RuntimeClone();
    
    unsigned char mValue[76];
    
  protected:
    Resource(Zilch::NoType none) : ZeroObject(none) {}
    ZilchNoCopy(Resource);
  };
  
  class SampleCurve : public Resource
  {
  public:
    float GetWidthMax();
    
    float GetHeightMax();
    
    // Sample the curve at the given t.
    float Sample(float t);
    
    float DebugSample(float t, const Zilch::String& id, const Zilch::Real4& color);
    
    static Zilch::HandleOf<SampleCurve> Find(const Zilch::String& name);
    
    unsigned char mValue[112];
    
  protected:
    SampleCurve(Zilch::NoType none) : Resource(none) {}
    ZilchNoCopy(SampleCurve);
  };
  
  class Modal_ : public ZeroObject
  {
  public:
    Zilch::Real4 GetBackgroundColor();
    
    void SetBackgroundColor(const Zilch::Real4& value);
    
    Zilch::Real4 GetStipColor();
    
    void SetStipColor(const Zilch::Real4& value);
    
    float GetStripHeight();
    
    void SetStripHeight(float value);
    
    Zilch::Real4 GetTextColor();
    
    void SetTextColor(const Zilch::Real4& value);
    
    unsigned char mValue[52];
    
  protected:
    Modal_(Zilch::NoType none) : ZeroObject(none) {}
    ZilchNoCopy(Modal_);
  };
  
  class CollisionFilter : public Zilch::ReferenceType
  {
  public:
    FilterCollisionFlags GetCollisionFlag();
    
    void SetCollisionFlag(FilterCollisionFlags value);
    
    Zilch::HandleOf<CollisionEndBlock> GetCollisionEndBlock();
    
    Zilch::HandleOf<CollisionPersistedBlock> GetCollisionPersistedBlock();
    
    Zilch::HandleOf<CollisionStartBlock> GetCollisionStartBlock();
    
    Zilch::HandleOf<PreSolveBlock> GetPreSolveBlock();
    
    unsigned char mValue[72];
    
  protected:
    CollisionFilter(Zilch::NoType none) : Zilch::ReferenceType(none) {}
    ZilchNoCopy(CollisionFilter);
  };
  
  class FilterCollisionFlags : public Zilch::ValueType
  {
  public:
    static FilterCollisionFlags GetSkipResolution();
    
    static FilterCollisionFlags GetSkipDetection();
    
    static FilterCollisionFlags GetResolve();
    
    int mValue;
    FilterCollisionFlags();
  };
  
  class CollisionEndBlock : public Zilch::ReferenceType
  {
  public:
    bool GetSendEventsToA();
    
    void SetSendEventsToA(bool value);
    
    bool GetSendEventsToB();
    
    void SetSendEventsToB(bool value);
    
    bool GetSendEventsToSpace();
    
    void SetSendEventsToSpace(bool value);
    
    Zilch::String GetEventOverride();
    
    void SetEventOverride(const Zilch::String& value);
    
    unsigned char mValue[16];
    
  protected:
    CollisionEndBlock(Zilch::NoType none) : Zilch::ReferenceType(none) {}
    ZilchNoCopy(CollisionEndBlock);
  };
  
  class CollisionPersistedBlock : public Zilch::ReferenceType
  {
  public:
    bool GetSendEventsToA();
    
    void SetSendEventsToA(bool value);
    
    bool GetSendEventsToB();
    
    void SetSendEventsToB(bool value);
    
    bool GetSendEventsToSpace();
    
    void SetSendEventsToSpace(bool value);
    
    Zilch::String GetEventOverride();
    
    void SetEventOverride(const Zilch::String& value);
    
    unsigned char mValue[16];
    
  protected:
    CollisionPersistedBlock(Zilch::NoType none) : Zilch::ReferenceType(none) {}
    ZilchNoCopy(CollisionPersistedBlock);
  };
  
  class CollisionStartBlock : public Zilch::ReferenceType
  {
  public:
    bool GetSendEventsToA();
    
    void SetSendEventsToA(bool value);
    
    bool GetSendEventsToB();
    
    void SetSendEventsToB(bool value);
    
    bool GetSendEventsToSpace();
    
    void SetSendEventsToSpace(bool value);
    
    Zilch::String GetEventOverride();
    
    void SetEventOverride(const Zilch::String& value);
    
    unsigned char mValue[16];
    
  protected:
    CollisionStartBlock(Zilch::NoType none) : Zilch::ReferenceType(none) {}
    ZilchNoCopy(CollisionStartBlock);
  };
  
  class PreSolveBlock : public Zilch::ReferenceType
  {
  public:
    bool GetSendEventsToA();
    
    void SetSendEventsToA(bool value);
    
    bool GetSendEventsToB();
    
    void SetSendEventsToB(bool value);
    
    bool GetSendEventsToSpace();
    
    void SetSendEventsToSpace(bool value);
    
    Zilch::String GetEventOverride();
    
    void SetEventOverride(const Zilch::String& value);
    
    unsigned char mValue[16];
    
  protected:
    PreSolveBlock(Zilch::NoType none) : Zilch::ReferenceType(none) {}
    ZilchNoCopy(PreSolveBlock);
  };
  
  class TextureRegion : public Resource
  {
  public:
    static Zilch::HandleOf<TextureRegion> Find(const Zilch::String& name);
    
    
  protected:
    TextureRegion(Zilch::NoType none) : Resource(none) {}
    ZilchNoCopy(TextureRegion);
  };
  
  class SpriteSource : public TextureRegion
  {
  public:
    int GetFrameCount();
    
    void SetFrameCount(int value);
    
    float GetFrameRate();
    
    void SetFrameRate(float value);
    
    float GetPixelsPerUnit();
    
    void SetPixelsPerUnit(float value);
    
    bool GetSmoothing();
    
    void SetSmoothing(bool value);
    
    bool GetLooping();
    
    void SetLooping(bool value);
    
    int GetFill();
    
    void SetFill(int value);
    
    Zilch::Real2 GetSize();
    
    Zilch::Real2 GetOrigin();
    
    static Zilch::HandleOf<SpriteSource> Find(const Zilch::String& name);
    
    unsigned char mValue[176];
    
  protected:
    SpriteSource(Zilch::NoType none) : TextureRegion(none) {}
    ZilchNoCopy(SpriteSource);
  };
  
  class JointRange : public Zilch::ReferenceType
  {
  public:
    Zilch::HandleOf<JointRange> GetAll();
    
    bool GetIsNotEmpty();
    
    Zilch::HandleOf<JointHolder> GetCurrent();
    
    void MoveNext();
    
    unsigned char mValue[20];
    
  protected:
    JointRange(Zilch::NoType none) : Zilch::ReferenceType(none) {}
    ZilchNoCopy(JointRange);
  };
  
  class JointHolder : public Zilch::ReferenceType
  {
  public:
    bool GetIsGhost();
    
    Zilch::HandleOf<Collider> GetOtherCollider();
    
    Zilch::HandleOf<RigidBody> GetOtherBody();
    
    bool GetValid();
    
    Zilch::HandleOf<Joint> GetJoint();
    
    Zilch::HandleOf<Cog> GetOwner();
    
    bool GetSendsEvents();
    
    bool GetAutoSnaps();
    
    float GetMaxForce();
    
    Zilch::HandleOf<JointLimit> GetLimit();
    
    Zilch::HandleOf<JointMotor> GetMotor();
    
    Zilch::HandleOf<JointSpring> GetSpring();
    
    unsigned char mValue[8];
    
  protected:
    JointHolder(Zilch::NoType none) : Zilch::ReferenceType(none) {}
    ZilchNoCopy(JointHolder);
  };
  
  // Mesh resource class. Contains hardware vertex buffer and index buffer.
  class Mesh : public Resource
  {
  public:
    // The amount of vertices on the mesh.
    int GetVertexCount();
    
    // The amount of triangles on the mesh.
    int GetTriangleCount();
    
    int GetVertexIndex(int triIndex);
    
    // Vertex attribute getters.
    Zilch::Real2 GetVec2Attribute(int index, VertexSemantic attribute);
    
    Zilch::Real3 GetVec3Attribute(int index, VertexSemantic attribute);
    
    Zilch::Real4 GetVec4Attribute(int index, VertexSemantic attribute);
    
    static Zilch::HandleOf<Mesh> Find(const Zilch::String& name);
    
    unsigned char mValue[296];
    
  protected:
    Mesh(Zilch::NoType none) : Resource(none) {}
    ZilchNoCopy(Mesh);
  };
  
  class VertexSemantic : public Zilch::ValueType
  {
  public:
    static VertexSemantic GetNormal();
    
    static VertexSemantic GetTangent();
    
    static VertexSemantic GetBitangent();
    
    static VertexSemantic GetTexCoord0();
    
    static VertexSemantic GetColor1();
    
    static VertexSemantic GetBlendIndices();
    
    static VertexSemantic GetPosition();
    
    static VertexSemantic GetTexCoord1();
    
    static VertexSemantic GetBlendWeight();
    
    static VertexSemantic GetColor0();
    
    static VertexSemantic GetNone();
    
    int mValue;
    VertexSemantic();
  };
  
  class RelativeVelocityJointBlock : public Zilch::ReferenceType
  {
  public:
    float GetSlop();
    
    void SetSlop(float value);
    
    float GetLinearBaumgarte();
    
    void SetLinearBaumgarte(float value);
    
    float GetAngularBaumgarte();
    
    void SetAngularBaumgarte(float value);
    
    float GetLinearErrorCorrection();
    
    void SetLinearErrorCorrection(float value);
    
    float GetAngularErrorCorrection();
    
    void SetAngularErrorCorrection(float value);
    
    int GetCorrectionType();
    
    void SetCorrectionType(int value);
    
    unsigned char mValue[32];
    
  protected:
    RelativeVelocityJointBlock(Zilch::NoType none) : Zilch::ReferenceType(none) {}
    ZilchNoCopy(RelativeVelocityJointBlock);
  };
  
  class PathType : public Zilch::ValueType
  {
  public:
    static PathType GetBSpline();
    
    static PathType GetCatmulRom();
    
    static PathType GetLinear();
    
    int mValue;
    PathType();
  };
  
  class WebBrowserManager : public ZeroObject
  {
  public:
    unsigned char mValue[32];
    
  protected:
    WebBrowserManager(Zilch::NoType none) : ZeroObject(none) {}
    ZilchNoCopy(WebBrowserManager);
  };
  
  // A common interface for all effects in physics. An effect is something that can be attached to a collider, rigid body, region or even a space. This effect will then perform its action every frame according to the rules of the object it is attached to.
  class PhysicsEffect : public Component
  {
  public:
    bool GetActive();
    
    void SetActive(bool value);
    
    bool GetWakeUpOnChange();
    
    void SetWakeUpOnChange(bool value);
    
    EffectType GetEffectType();
    
    // Toggles whether or not this effect is active.
    void Toggle();
    
    unsigned char mValue[24];
    
  protected:
    PhysicsEffect(Zilch::NoType none) : Component(none) {}
    ZilchNoCopy(PhysicsEffect);
  };
  
  // Applies a force to make an object move at a target speed in a given direction. This can also be used to pull the object towards the center of the flow(center of a flow is the center perpendicular to the flow direction). Used to model a river or a tractor beam.
  class FlowEffect : public PhysicsEffect
  {
  public:
    bool GetLocalForce();
    
    void SetLocalForce(bool value);
    
    bool GetAttractToFlowCenter();
    
    void SetAttractToFlowCenter(bool value);
    
    float GetFlowSpeed();
    
    void SetFlowSpeed(float value);
    
    float GetMaxFlowForce();
    
    void SetMaxFlowForce(float value);
    
    Zilch::Real3 GetFlowDirection();
    
    void SetFlowDirection(const Zilch::Real3& value);
    
    float GetAttractSpeed();
    
    void SetAttractSpeed(float value);
    
    float GetMaxAttractForce();
    
    void SetMaxAttractForce(float value);
    
    unsigned char mValue[56];
    
  protected:
    FlowEffect(Zilch::NoType none) : PhysicsEffect(none) {}
    ZilchNoCopy(FlowEffect);
  };
  
  class Components_ : public ZeroObject
  {
  public:
    unsigned char mValue[52];
    
  protected:
    Components_(Zilch::NoType none) : ZeroObject(none) {}
    ZilchNoCopy(Components_);
  };
  
  class ParticleRenderMode : public Zilch::ValueType
  {
  public:
    static ParticleRenderMode GetAdditive();
    
    static ParticleRenderMode GetBlended();
    
    int mValue;
    ParticleRenderMode();
  };
  
  class FlickedStick : public Zilch::ValueType
  {
  public:
    static FlickedStick GetRight();
    
    static FlickedStick GetLeft();
    
    static FlickedStick GetNone();
    
    int mValue;
    FlickedStick();
  };
  
  // A collider controls how collision detection is performed for an object. A collider also gives mass properties to a RigidBody(via the material and volume). If there is no RigidBody associated with this collider then it is considered static. Note: colliders without RigidBodies should not be moved at run-time!
  class Collider : public Component
  {
  public:
    Zilch::HandleOf<PhysicsMaterial> GetMaterial();
    
    void SetMaterial(PhysicsMaterial* value);
    
    Zilch::HandleOf<CollisionGroup> GetCollisionGroup();
    
    void SetCollisionGroup(CollisionGroup* value);
    
    bool GetGhost();
    
    void SetGhost(bool value);
    
    bool GetSendsEvents();
    
    void SetSendsEvents(bool value);
    
    Zilch::Real3 GetOffset();
    
    void SetOffset(const Zilch::Real3& value);
    
    Zilch::HandleOf<RigidBody> GetActiveBody();
    
    int GetContactCount();
    
    Zilch::HandleOf<ContactRange> GetContacts();
    
    int GetJointCount();
    
    Zilch::HandleOf<JointRange> GetJoints();
    
    // Compute the world-space volume of this collider.
    float ComputeVolume();
    
    // Returns the point velocity of a world-space point with respect to the current rigid body's linear and angular velocity. If there is no rigid body this returns zero.
    Zilch::Real3 GetPointVelocity(const Zilch::Real3& worldPoint);
    
    unsigned char mValue[168];
    
  protected:
    Collider(Zilch::NoType none) : Component(none) {}
    ZilchNoCopy(Collider);
  };
  
  // Convex Mesh Collider is a collision primitive for colliding with a convex triangle mesh that can move but not deform.
  class ConvexMeshCollider : public Collider
  {
  public:
    Zilch::HandleOf<ConvexMesh> GetConvexMesh();
    
    void SetConvexMesh(ConvexMesh* value);
    
    unsigned char mValue[4];
    
  protected:
    ConvexMeshCollider(Zilch::NoType none) : Collider(none) {}
    ZilchNoCopy(ConvexMeshCollider);
  };
  
  // A convex mesh used to simulate dynamic mashes. Used by the DynamicMeshCollider.
  class ConvexMesh : public Resource
  {
  public:
    static Zilch::HandleOf<ConvexMesh> Find(const Zilch::String& name);
    
    unsigned char mValue[144];
    
  protected:
    ConvexMesh(Zilch::NoType none) : Resource(none) {}
    ZilchNoCopy(ConvexMesh);
  };
  
  // Represents a collection of convex meshes that was decomposed from a mesh.
  class MultiConvexMesh : public Resource
  {
  public:
    static Zilch::HandleOf<MultiConvexMesh> Find(const Zilch::String& name);
    
    unsigned char mValue[80];
    
  protected:
    MultiConvexMesh(Zilch::NoType none) : Resource(none) {}
    ZilchNoCopy(MultiConvexMesh);
  };
  
  class Sounds : public Zilch::ReferenceType
  {
  public:
    unsigned char mValue[16];
    
  protected:
    Sounds(Zilch::NoType none) : Zilch::ReferenceType(none) {}
    ZilchNoCopy(Sounds);
  };
  
  class StressTest : public Zilch::ReferenceType
  {
  public:
    int GetSeed();
    
    void SetSeed(int value);
    
    int GetFrames();
    
    void SetFrames(int value);
    
    Zilch::String GetLogFile();
    
    void SetLogFile(const Zilch::String& value);
    
    bool GetCreateObjects();
    
    void SetCreateObjects(bool value);
    
    bool GetDestroyObjects();
    
    void SetDestroyObjects(bool value);
    
    bool GetSetProperties();
    
    void SetSetProperties(bool value);
    
    bool GetAddComponents();
    
    void SetAddComponents(bool value);
    
    bool GetRemoveComponents();
    
    void SetRemoveComponents(bool value);
    
    bool GetChangeSelection();
    
    void SetChangeSelection(bool value);
    
    bool GetRayCasts();
    
    void SetRayCasts(bool value);
    
    bool GetParentObjects();
    
    void SetParentObjects(bool value);
    
    bool GetUnparentObjects();
    
    void SetUnparentObjects(bool value);
    
    bool GetMouseEvents();
    
    void SetMouseEvents(bool value);
    
    bool GetKeyEvents();
    
    void SetKeyEvents(bool value);
    
    bool GetChangeTools();
    
    void SetChangeTools(bool value);
    
    bool GetStartGameInstances();
    
    void SetStartGameInstances(bool value);
    
    bool GetStopGameInstances();
    
    void SetStopGameInstances(bool value);
    
    bool GetSwitchViewports();
    
    void SetSwitchViewports(bool value);
    
    bool GetUndo();
    
    void SetUndo(bool value);
    
    bool GetRedo();
    
    void SetRedo(bool value);
    
    unsigned char mValue[36];
    
  protected:
    StressTest(Zilch::NoType none) : Zilch::ReferenceType(none) {}
    ZilchNoCopy(StressTest);
  };
  
  // Graphical Component is in graphical broad phase/ visibility.
  class Graphical : public Component
  {
  public:
    bool GetVisible();
    
    void SetVisible(bool value);
    
    bool GetVisibilityCulling();
    
    void SetVisibilityCulling(bool value);
    
    bool GetVisibilityEvents();
    
    void SetVisibilityEvents(bool value);
    
    bool GetCastShadows();
    
    void SetCastShadows(bool value);
    
    unsigned char mValue[20];
    
  protected:
    Graphical(Zilch::NoType none) : Component(none) {}
    ZilchNoCopy(Graphical);
  };
  
  // Base Sprite class for common sprite properties and sorting.
  class BaseSprite : public Graphical
  {
  public:
    Zilch::Real4 GetColor();
    
    void SetColor(const Zilch::Real4& value);
    
    int GetBlendMode();
    
    void SetBlendMode(int value);
    
    int GetGeometryMode();
    
    void SetGeometryMode(int value);
    
    Zilch::HandleOf<SpriteLayer> GetSpriteLayer();
    
    void SetSpriteLayer(SpriteLayer* value);
    
    unsigned char mValue[52];
    
  protected:
    BaseSprite(Zilch::NoType none) : Graphical(none) {}
    ZilchNoCopy(BaseSprite);
  };
  
  // Just a named resource for defining sprite sort order, no other data.
  class SpriteLayer : public Resource
  {
  public:
    static Zilch::HandleOf<SpriteLayer> Find(const Zilch::String& name);
    
    
  protected:
    SpriteLayer(Zilch::NoType none) : Resource(none) {}
    ZilchNoCopy(SpriteLayer);
  };
  
  class AnimationNode : public Zilch::ReferenceType
  {
  public:
    bool GetCollapseToPoseOnFinish();
    
    void SetCollapseToPoseOnFinish(bool value);
    
    bool GetPaused();
    
    void SetPaused(bool value);
    
    float GetTime();
    
    void SetTime(float value);
    
    float GetDuration();
    
    void SetDuration(float value);
    
    float GetTimeScale();
    
    void SetTimeScale(float value);
    
    Zilch::HandleOf<AnimationNode> Clone();
    
    bool IsActive();
    
    void PrintNode(int tabs);
    
    // Collapses all children to a pose node on the next Update.
    void CollapseToPose();
    
    // A value between[0-1].
    void SetNormalizedTime(float normalizedTime);
    
    float GetNormalizedTime();
    
    unsigned char mValue[32];
    
  protected:
    AnimationNode(Zilch::NoType none) : Zilch::ReferenceType(none) {}
    ZilchNoCopy(AnimationNode);
  };
  
  class DirectBlend : public AnimationNode
  {
  public:
    Zilch::HandleOf<AnimationNode> GetFrom();
    
    void SetFrom(AnimationNode* value);
    
    Zilch::HandleOf<AnimationNode> GetTo();
    
    void SetTo(AnimationNode* value);
    
    unsigned char mValue[8];
    
  protected:
    DirectBlend(Zilch::NoType none) : AnimationNode(none) {}
    ZilchNoCopy(DirectBlend);
  };
  
  // A path that is anchored in the level that an object is able to follow.
  class LevelPath : public Component
  {
  public:
    Zilch::HandleOf<Path> GetPath();
    
    bool GetClosed();
    
    void SetClosed(bool value);
    
    bool GetDebugDraw();
    
    void SetDebugDraw(bool value);
    
    float GetError();
    
    void SetError(float value);
    
    int GetCurveType();
    
    void SetCurveType(int value);
    
    bool GetDisplayProxyControlPoints();
    
    void SetDisplayProxyControlPoints(bool value);
    
    void AddPoint();
    
    unsigned char mValue[32];
    
  protected:
    LevelPath(Zilch::NoType none) : Component(none) {}
    ZilchNoCopy(LevelPath);
  };
  
  // A resource for a path object. Bakes out the curve and figures out how to interpolate with a constant speed across all of the points.
  class Path : public Resource
  {
  public:
    int GetControlPointCount();
    
    int GetBakedPointCount();
    
    float GetTotalDistance();
    
    bool GetClosed();
    
    void SetClosed(bool value);
    
    float GetError();
    
    void SetError(float value);
    
    int GetPathType();
    
    void SetPathType(int value);
    
    void DrawPoints(const Zilch::Real3& offset, float drawSize);
    
    // Adds a new control point to the end of the path. Recomputes the baked curve.
    void AddControlPoint(const Zilch::Real3& point);
    
    // Removes the control point at the given index. Recomputes the baked curve.
    void RemoveControlPoint(int index);
    
    // Get the n-th control point's position.
    Zilch::Real3 GetControlPoint(int index);
    
    // Set the n-th control point's position. Recomputes the baked curve.
    void SetControlPoint(int index, const Zilch::Real3& point);
    
    // Get a point on the baked-out curve. Primarily used for debug drawing.
    Zilch::Real3 GetBakedPoint(int index);
    
    // Samples the curve at a given arc-length distance.
    Zilch::HandleOf<SampleData> SampleDistance(float distance);
    
    static Zilch::HandleOf<Path> Find(const Zilch::String& name);
    
    unsigned char mValue[48];
    
  protected:
    Path(Zilch::NoType none) : Resource(none) {}
    ZilchNoCopy(Path);
  };
  
  // Network User Creator Creates a network user on add request(intended as a helper component)
  class NetUserCreator : public Component
  {
  public:
    Zilch::String GetSpawnSpace();
    
    void SetSpawnSpace(const Zilch::String& value);
    
    Zilch::HandleOf<Archetype> GetUserArchetype();
    
    void SetUserArchetype(Archetype* value);
    
    unsigned char mValue[8];
    
  protected:
    NetUserCreator(Zilch::NoType none) : Component(none) {}
    ZilchNoCopy(NetUserCreator);
  };
  
  // An archetype is a resource contains the serialized data definition of an object. The archetype stores a binary cache of the serialization data and the source file for debugging and for archetype updating.
  class Archetype : public Resource
  {
  public:
    static Zilch::HandleOf<Archetype> Find(const Zilch::String& name);
    
    unsigned char mValue[32];
    
  protected:
    Archetype(Zilch::NoType none) : Resource(none) {}
    ZilchNoCopy(Archetype);
  };
  
  class GearJointBlock : public Zilch::ReferenceType
  {
  public:
    float GetSlop();
    
    void SetSlop(float value);
    
    float GetLinearBaumgarte();
    
    void SetLinearBaumgarte(float value);
    
    float GetAngularBaumgarte();
    
    void SetAngularBaumgarte(float value);
    
    float GetLinearErrorCorrection();
    
    void SetLinearErrorCorrection(float value);
    
    float GetAngularErrorCorrection();
    
    void SetAngularErrorCorrection(float value);
    
    int GetCorrectionType();
    
    void SetCorrectionType(int value);
    
    unsigned char mValue[32];
    
  protected:
    GearJointBlock(Zilch::NoType none) : Zilch::ReferenceType(none) {}
    ZilchNoCopy(GearJointBlock);
  };
  
  class BasicDirectionEffect : public PhysicsEffect
  {
  public:
    bool GetLocalSpaceDirection();
    
    void SetLocalSpaceDirection(bool value);
    
    float GetStrength();
    
    void SetStrength(float value);
    
    Zilch::Real3 GetDirection();
    
    void SetDirection(const Zilch::Real3& value);
    
    unsigned char mValue[32];
    
  protected:
    BasicDirectionEffect(Zilch::NoType none) : PhysicsEffect(none) {}
    ZilchNoCopy(BasicDirectionEffect);
  };
  
  // A force effect that is applied in a given direction(local or world space). This is used to create force regions that will push objects in a given direction. This can also be used on a rigid body to push an object in it's forward direction(e.g a missile) if applied locally. Note, this is always applied at the center of mass of the object. If a more rocket like effect is desired see ThrustEffect.
  class ForceEffect : public BasicDirectionEffect
  {
  public:
    
  protected:
    ForceEffect(Zilch::NoType none) : BasicDirectionEffect(none) {}
    ZilchNoCopy(ForceEffect);
  };
  
  // component that provides ambient light
  class AmbientLight : public Component
  {
  public:
    Zilch::Real4 GetColor();
    
    void SetColor(const Zilch::Real4& value);
    
    unsigned char mValue[16];
    
  protected:
    AmbientLight(Zilch::NoType none) : Component(none) {}
    ZilchNoCopy(AmbientLight);
  };
  
  class Layout : public Zilch::ReferenceType
  {
  public:
    Zilch::HandleOf<Thickness> GetPadding();
    
    void SetPadding(Thickness* value);
    
    Zilch::Real2 Measure(Composite* __0, LayoutArea* __1);
    
    Zilch::Real2 DoLayout(Composite* __0, LayoutArea* __1);
    
    unsigned char mValue[20];
    
  protected:
    Layout(Zilch::NoType none) : Zilch::ReferenceType(none) {}
    ZilchNoCopy(Layout);
  };
  
  class Thickness : public Zilch::ReferenceType
  {
  public:
    float GetLeft();
    
    void SetLeft(float value);
    
    float GetTop();
    
    void SetTop(float value);
    
    float GetRight();
    
    void SetRight(float value);
    
    float GetBottom();
    
    void SetBottom(float value);
    
    static Zilch::HandleOf<Thickness> All(float __0);
    
    Zilch::Real2 Size();
    
    Zilch::Real2 TopLeft();
    
    unsigned char mValue[16];
    
  protected:
    Thickness(Zilch::NoType none) : Zilch::ReferenceType(none) {}
    ZilchNoCopy(Thickness);
  };
  
  class Widget : public ZeroObject
  {
  public:
    Zilch::String GetName();
    
    void SetName(const Zilch::String& value);
    
    bool GetActive();
    
    void SetActive(bool value);
    
    Zilch::Real3 GetTranslation();
    
    void SetTranslation(const Zilch::Real3& value);
    
    Zilch::Real2 GetSize();
    
    void SetSize(const Zilch::Real2& value);
    
    Zilch::HandleOf<SizePolicies> GetSizePolicy();
    
    void SetSizePolicy(SizePolicies* value);
    
    Zilch::Real2 GetMinSize();
    
    Zilch::Real4 GetColor();
    
    void SetColor(const Zilch::Real4& value);
    
    bool GetClipping();
    
    void SetClipping(bool value);
    
    Zilch::HandleOf<RootWidget> GetRootWidget();
    
    Zilch::HandleOf<Composite> GetParent();
    
    Zilch::HandleOf<Rect> GetRectInParent();
    
    Zilch::HandleOf<Rect> GetLocalRect();
    
    Zilch::HandleOf<Rect> GetScreenRect();
    
    Zilch::Real3 GetScreenPosition();
    
    Zilch::HandleOf<Thickness> GetBorderThickness();
    
    bool GetNotInLayout();
    
    void SetNotInLayout(bool value);
    
    float GetRotation();
    
    void SetRotation(float value);
    
    DockMode GetDockMode();
    
    void SetDockMode(DockMode value);
    
    bool GetVisible();
    
    void SetVisible(bool value);
    
    int GetHorizontalAlignment();
    
    void SetHorizontalAlignment(int value);
    
    int GetVerticalAlignment();
    
    void SetVerticalAlignment(int value);
    
    void Destroy();
    
    void SetSizing(SizeAxis __0, SizePolicy __1, float __2);
    
    void SizeToContents();
    
    void SetTranslationAndSize(const Zilch::Real3& __0, const Zilch::Real2& __1);
    
    void DispatchBubble(const Zilch::String& __0, Event* __1);
    
    void TakeFocus();
    
    bool TryTakeFocus();
    
    void SoftTakeFocus();
    
    void HardTakeFocus();
    
    void SetTakeFocusMode(int __0);
    
    bool HasFocus();
    
    void LoseFocus();
    
    void UpdateTransform();
    
    Zilch::HandleOf<Widget> HitTest(const Zilch::Real2& __0, Widget* __1);
    
    void ChangeRoot(RootWidget* __0);
    
    bool IsAncestorOf(Widget* __0);
    
    void MoveToFront();
    
    void MoveToBack();
    
    Zilch::Real2 ToLocal(const Zilch::Real2& __0);
    
    Zilch::Real3 ToLocal(const Zilch::Real3& __0);
    
    Zilch::Real2 ToScreen(const Zilch::Real2& __0);
    
    bool Contains(const Zilch::Real2& __0);
    
    Zilch::Real2 Measure(LayoutArea* __0);
    
    void CaptureMouse();
    
    void ReleaseMouseCapture();
    
    bool IsMouseOver();
    
    void MarkAsNeedsUpdate(bool __0);
    
    void NeedsRedraw();
    
    void SetHideOnClose(bool __0);
    
    void SetInteractive(bool __0);
    
    unsigned char mValue[244];
    
  protected:
    Widget(Zilch::NoType none) : ZeroObject(none) {}
    ZilchNoCopy(Widget);
  };
  
  class Composite : public Widget
  {
  public:
    void SetLayout(Layout* __0);
    
    Zilch::HandleOf<Layout> GetLayout();
    
    void SetMinSize(const Zilch::Real2& __0);
    
    void AttachChildWidget(Widget* __0, AttachType __1);
    
    unsigned char mValue[24];
    
  protected:
    Composite(Zilch::NoType none) : Widget(none) {}
    ZilchNoCopy(Composite);
  };
  
  class LayoutArea : public Zilch::ReferenceType
  {
  public:
    LimitMode GetHorizLimit();
    
    void SetHorizLimit(LimitMode value);
    
    LimitMode GetVerticalLimit();
    
    void SetVerticalLimit(LimitMode value);
    
    Zilch::Real2 GetSize();
    
    void SetSize(const Zilch::Real2& value);
    
    Zilch::Real3 GetOffset();
    
    void SetOffset(const Zilch::Real3& value);
    
    unsigned char mValue[28];
    
  protected:
    LayoutArea(Zilch::NoType none) : Zilch::ReferenceType(none) {}
    ZilchNoCopy(LayoutArea);
  };
  
  class ThreadedWebRequest : public Zilch::ReferenceType
  {
  public:
    unsigned char mValue[56];
    
  protected:
    ThreadedWebRequest(Zilch::NoType none) : Zilch::ReferenceType(none) {}
    ZilchNoCopy(ThreadedWebRequest);
  };
  
  class Font : public Resource
  {
  public:
    static Zilch::HandleOf<Font> Find(const Zilch::String& name);
    
    unsigned char mValue[40];
    
  protected:
    Font(Zilch::NoType none) : Resource(none) {}
    ZilchNoCopy(Font);
  };
  
  class BlockingWebRequest : public Zilch::ReferenceType
  {
  public:
    Zilch::String GetUrl();
    
    void SetUrl(const Zilch::String& value);
    
    unsigned char mValue[132];
    
  protected:
    BlockingWebRequest(Zilch::NoType none) : Zilch::ReferenceType(none) {}
    ZilchNoCopy(BlockingWebRequest);
  };
  
  // A base joint class. Joints are used to connect two objects together with some sort of a mathematical rule in terms of an object's position and velocity.
  class Joint : public Component
  {
  public:
    bool GetActive();
    
    void SetActive(bool value);
    
    bool GetSendsEvents();
    
    void SetSendsEvents(bool value);
    
    bool GetAutoSnaps();
    
    void SetAutoSnaps(bool value);
    
    bool GetCollideConnected();
    
    void SetCollideConnected(bool value);
    
    float GetMaxForce();
    
    void SetMaxForce(float value);
    
    // If the passed in object is ObjectA, returns ObjectB. Prevents the user from having to write the if case all the time.
    Zilch::HandleOf<Cog> GetOtherObject(Cog* cog);
    
    // Returns the cog associated with an index. Index of 0 is ObjectA, index 1 is ObjectB. Used to write more streamline functions where you index into the objects in a loop.
    Zilch::HandleOf<Cog> GetCog(int index);
    
    unsigned char mValue[80];
    
  protected:
    Joint(Zilch::NoType none) : Component(none) {}
    ZilchNoCopy(Joint);
  };
  
  // A stick joint is used to simulate a rope or a stick. This joint forces a constant distance between the anchor points on the objects. If there is no limit, this behaves as a stick. If there is a limit, then this behaves as a rope. Motors and springs are also applied to the axis of the rope. Add on definitions: Limit: A limit will provide a min/max distance that the anchors can be between. Motor: A motor will push/pull the objects in the direction of the rope. The motor will not have any effect unless a limit or spring is present. Spring: A spring will make the rope behave springlike at its boundaries.
  class StickJoint : public Joint
  {
  public:
    float GetLength();
    
    void SetLength(float value);
    
    Zilch::Real3 GetLocalPointA();
    
    void SetLocalPointA(const Zilch::Real3& value);
    
    Zilch::Real3 GetLocalPointB();
    
    void SetLocalPointB(const Zilch::Real3& value);
    
    Zilch::Real3 GetWorldPointA();
    
    void SetWorldPointA(const Zilch::Real3& value);
    
    Zilch::Real3 GetWorldPointB();
    
    void SetWorldPointB(const Zilch::Real3& value);
    
    // Sets the position of the anchor on object A and B given a position in world space
    void SetWorldPoints(const Zilch::Real3& __0);
    
    unsigned char mValue[36];
    
  protected:
    StickJoint(Zilch::NoType none) : Joint(none) {}
    ZilchNoCopy(StickJoint);
  };
  
  class ObjectView : public Zilch::ReferenceType
  {
  public:
    unsigned char mValue[304];
    
  protected:
    ObjectView(Zilch::NoType none) : Zilch::ReferenceType(none) {}
    ZilchNoCopy(ObjectView);
  };
  
  // Base event class. All events types inherit from this class.
  class Event : public Zilch::ReferenceType
  {
  public:
    Zilch::String GetEventId();
    
    void SetEventId(const Zilch::String& value);
    
    unsigned char mValue[8];
    
  protected:
    Event(Zilch::NoType none) : Zilch::ReferenceType(none) {}
    ZilchNoCopy(Event);
  };
  
  // Event data for applying custom physics effects.
  class CustomPhysicsEffectEvent : public Event
  {
  public:
    float GetDt();
    
    void SetDt(float value);
    
    Zilch::HandleOf<CustomPhysicsEffect> GetEffect();
    
    void SetEffect(CustomPhysicsEffect* value);
    
    Zilch::HandleOf<RigidBody> GetRigidBody();
    
    void SetRigidBody(RigidBody* value);
    
    unsigned char mValue[12];
    
  protected:
    CustomPhysicsEffectEvent(Zilch::NoType none) : Event(none) {}
    ZilchNoCopy(CustomPhysicsEffectEvent);
  };
  
  // A physics effect that sends events out so users can apply custom logic for forces. This sends out the ApplyCustomPhysicsEffect event.
  class CustomPhysicsEffect : public PhysicsEffect
  {
  public:
    
  protected:
    CustomPhysicsEffect(Zilch::NoType none) : PhysicsEffect(none) {}
    ZilchNoCopy(CustomPhysicsEffect);
  };
  
  // Motion component used for systems to communicate to physics changes in object velocity.
  class Motion : public Component
  {
  public:
    
  protected:
    Motion(Zilch::NoType none) : Component(none) {}
    ZilchNoCopy(Motion);
  };
  
  // The RigidBody defines the dynamics of an object. A body defines the mass properties and movement of an object. Without a RigidBody, an object will be static. Any effects attached to a RigidBody without a region will be applied to the body directly.
  class RigidBody : public Motion
  {
  public:
    Zilch::Real3 GetVelocity();
    
    void SetVelocity(const Zilch::Real3& value);
    
    Zilch::Real3 GetAngularVelocity();
    
    void SetAngularVelocity(const Zilch::Real3& value);
    
    Zilch::Real3 GetForce();
    
    void SetForce(const Zilch::Real3& value);
    
    Zilch::Real3 GetTorque();
    
    void SetTorque(const Zilch::Real3& value);
    
    RigidBodyDynamicState GetDynamicState();
    
    void SetDynamicState(RigidBodyDynamicState value);
    
    bool GetStatic();
    
    void SetStatic(bool value);
    
    bool GetKinematic();
    
    void SetKinematic(bool value);
    
    bool GetAllowSleep();
    
    void SetAllowSleep(bool value);
    
    bool GetRotationLocked();
    
    void SetRotationLocked(bool value);
    
    Mode2DStates GetMode2D();
    
    void SetMode2D(Mode2DStates value);
    
    float GetMass();
    
    Zilch::Real3 GetWorldCenterOfMass();
    
    // Adds to the current linear velocity.(world space)
    void ApplyLinearVelocity(const Zilch::Real3& linear);
    
    // Adds to the current angular velocity.(world space)
    void ApplyAngularVelocity(const Zilch::Real3& angular);
    
    // Applies a velocity at a world space point on the object. Results in a change to linear and angular velocity.
    void ApplyVelocityAtPoint(const Zilch::Real3& velocity, const Zilch::Real3& worldPoint);
    
    // Computes the linear velocity of a point on the body.
    Zilch::Real3 GetPointVelocity(const Zilch::Real3& worldPoint);
    
    // Applies a force through the center of mass of the body.(world space)
    void ApplyForce(const Zilch::Real3& force);
    
    // Applies a torque through the center of mass of the body.(world space)
    void ApplyTorque(const Zilch::Real3& torque);
    
    // Applies a force(world space) at an offset from the center of mass. Results in a force and torque to the center of mass.
    void ApplyForceAtOffsetVector(const Zilch::Real3& force, const Zilch::Real3& worldR);
    
    // Applies a force(world space) at a point on an object. Results in a force and torque to the center of mass.
    void ApplyForceAtPoint(const Zilch::Real3& force, const Zilch::Real3& worldPoint);
    
    // Applies a linear impulse through the center of mass(world space). Only results in a change of linear velocity.
    void ApplyLinearImpulse(const Zilch::Real3& linear);
    
    // Applies an angular impulse through the center of mass(world space). Only results in a change of angular velocity.
    void ApplyAngularImpulse(const Zilch::Real3& angular);
    
    // Applies an impulse(world space) at a point on the object. Results in a change in linear and angular velocity.
    void ApplyImpulseAtOffsetVector(const Zilch::Real3& impulse, const Zilch::Real3& worldR);
    
    // Applies an impulse to the object at a world space point. Results in a change to linear and angular velocity.(world space)
    void ApplyImpulseAtPoint(const Zilch::Real3& impulse, const Zilch::Real3& worldPoint);
    
    // Checks if the object is currently asleep.
    bool IsAsleep();
    
    // Forces the object awake. Will reset the sleep timer.
    void ForceAwake();
    
    // Forces the object asleep. Will wake if anything hits it or if it is in contact with any non-asleep objects. Warning: calling this function could create gameplay flaws if used incorrectly, use at your own risk(and sparingly).
    void ForceAsleep();
    
    unsigned char mValue[264];
    
  protected:
    RigidBody(Zilch::NoType none) : Motion(none) {}
    ZilchNoCopy(RigidBody);
  };
  
  class PointEndCondition : public Zilch::ValueType
  {
  public:
    static PointEndCondition GetNoEffect();
    
    static PointEndCondition GetClampToMax();
    
    static PointEndCondition GetContinueFalloff();
    
    int mValue;
    PointEndCondition();
  };
  
  class ValueEditorFactory : public Zilch::ReferenceType
  {
  public:
    unsigned char mValue[28];
    
  protected:
    ValueEditorFactory(Zilch::NoType none) : Zilch::ReferenceType(none) {}
    ZilchNoCopy(ValueEditorFactory);
  };
  
  class Controls_ : public ZeroObject
  {
  public:
    unsigned char mValue[52];
    
  protected:
    Controls_(Zilch::NoType none) : ZeroObject(none) {}
    ZilchNoCopy(Controls_);
  };
  
  class StickJointBlock : public Zilch::ReferenceType
  {
  public:
    float GetSlop();
    
    void SetSlop(float value);
    
    float GetLinearBaumgarte();
    
    void SetLinearBaumgarte(float value);
    
    float GetAngularBaumgarte();
    
    void SetAngularBaumgarte(float value);
    
    float GetLinearErrorCorrection();
    
    void SetLinearErrorCorrection(float value);
    
    float GetAngularErrorCorrection();
    
    void SetAngularErrorCorrection(float value);
    
    int GetCorrectionType();
    
    void SetCorrectionType(int value);
    
    unsigned char mValue[32];
    
  protected:
    StickJointBlock(Zilch::NoType none) : Zilch::ReferenceType(none) {}
    ZilchNoCopy(StickJointBlock);
  };
  
  class GizmoSnapMode : public Zilch::ValueType
  {
  public:
    static GizmoSnapMode GetWorldAlways();
    
    static GizmoSnapMode GetRelative();
    
    static GizmoSnapMode GetWorldAxes();
    
    static GizmoSnapMode GetNone();
    
    int mValue;
    GizmoSnapMode();
  };
  
  class SpriteFill : public Zilch::ValueType
  {
  public:
    static SpriteFill GetNineSlice();
    
    static SpriteFill GetStretch();
    
    static SpriteFill GetNineSliceClipped();
    
    static SpriteFill GetTiled();
    
    int mValue;
    SpriteFill();
  };
  
  // A component used for drawing a grid.
  class GridDraw : public Component
  {
  public:
    bool GetActive();
    
    void SetActive(bool value);
    
    int GetAxis();
    
    void SetAxis(int value);
    
    float GetCellSize();
    
    void SetCellSize(float value);
    
    int GetLines();
    
    void SetLines(int value);
    
    int GetHilightInterval();
    
    void SetHilightInterval(int value);
    
    Zilch::Real4 GetGridColor();
    
    void SetGridColor(const Zilch::Real4& value);
    
    Zilch::Real4 GetGridHiLight();
    
    void SetGridHiLight(const Zilch::Real4& value);
    
    bool GetHalfCellOffset();
    
    void SetHalfCellOffset(bool value);
    
    bool GetDrawAxisOrigins();
    
    void SetDrawAxisOrigins(bool value);
    
    bool GetAlwaysDrawInEditor();
    
    void SetAlwaysDrawInEditor(bool value);
    
    bool GetDrawInGame();
    
    void SetDrawInGame(bool value);
    
    bool GetFollowEditorCamera();
    
    void SetFollowEditorCamera(bool value);
    
    unsigned char mValue[60];
    
  protected:
    GridDraw(Zilch::NoType none) : Component(none) {}
    ZilchNoCopy(GridDraw);
  };
  
  // DynamicModel is used to render dynamic meshes that are constantly updated(Cloth, Etc) or dynamical generated.
  class DynamicModel : public Graphical
  {
  public:
    Zilch::HandleOf<Material> GetMaterial();
    
    void SetMaterial(Material* value);
    
    Zilch::Real4 GetColor();
    
    void SetColor(const Zilch::Real4& value);
    
    unsigned char mValue[72];
    
  protected:
    DynamicModel(Zilch::NoType none) : Graphical(none) {}
    ZilchNoCopy(DynamicModel);
  };
  
  // Material resource class. The material resource contains the data and resources needed to render a model.
  class Material : public Resource
  {
  public:
    static Zilch::HandleOf<Material> Find(const Zilch::String& name);
    
    Zilch::HandleOf<Phong> GetPhong();
    
    Zilch::HandleOf<ModulateModelColor> GetModulateModelColor();
    
    Zilch::HandleOf<ColorDiffuse> GetColorDiffuse();
    
    Zilch::HandleOf<DoNotBlockGodRays> GetDoNotBlockGodRays();
    
    Zilch::HandleOf<TextureDiffuse> GetTextureDiffuse();
    
    Zilch::HandleOf<SpecularMapping> GetSpecularMapping();
    
    Zilch::HandleOf<DecalBlock> GetDecalBlock();
    
    Zilch::HandleOf<ScreenSpaceReflections> GetScreenSpaceReflections();
    
    Zilch::HandleOf<Reflective> GetReflective();
    
    Zilch::HandleOf<Transparency> GetTransparency();
    
    Zilch::HandleOf<EmissiveMapping> GetEmissiveMapping();
    
    Zilch::HandleOf<MultiMaterialBlock> GetMultiMaterialBlock();
    
    Zilch::HandleOf<DoubledSide> GetDoubledSide();
    
    Zilch::HandleOf<ReflectiveMapping> GetReflectiveMapping();
    
    Zilch::HandleOf<ScreenSpaceReflectionMap> GetScreenSpaceReflectionMap();
    
    Zilch::HandleOf<NormalMapping> GetNormalMapping();
    
    Zilch::HandleOf<ParallaxOcclusionMapping> GetParallaxOcclusionMapping();
    
    Zilch::HandleOf<Lambert> GetLambert();
    
    Zilch::HandleOf<Refractivity> GetRefractivity();
    
    Zilch::HandleOf<SpecularFromAlpha> GetSpecularFromAlpha();
    
    Zilch::HandleOf<AlphaTest> GetAlphaTest();
    
    Zilch::HandleOf<MaterialEditorOnly> GetMaterialEditorOnly();
    
    Zilch::HandleOf<WeightedTextures> GetWeightedTextures();
    
    Zilch::HandleOf<Baked> GetBaked();
    
    unsigned char mValue[128];
    
  protected:
    Material(Zilch::NoType none) : Resource(none) {}
    ZilchNoCopy(Material);
  };
  
  class UprightJointBlock : public Zilch::ReferenceType
  {
  public:
    float GetSlop();
    
    void SetSlop(float value);
    
    float GetLinearBaumgarte();
    
    void SetLinearBaumgarte(float value);
    
    float GetAngularBaumgarte();
    
    void SetAngularBaumgarte(float value);
    
    float GetLinearErrorCorrection();
    
    void SetLinearErrorCorrection(float value);
    
    float GetAngularErrorCorrection();
    
    void SetAngularErrorCorrection(float value);
    
    int GetCorrectionType();
    
    void SetCorrectionType(int value);
    
    unsigned char mValue[32];
    
  protected:
    UprightJointBlock(Zilch::NoType none) : Zilch::ReferenceType(none) {}
    ZilchNoCopy(UprightJointBlock);
  };
  
  class HierarchyListrange : public Zilch::ReferenceType
  {
  public:
    Zilch::HandleOf<HierarchyListrange> GetAll();
    
    bool GetIsNotEmpty();
    
    Zilch::HandleOf<Cog> GetCurrent();
    
    void MoveNext();
    
    unsigned char mValue[8];
    
  protected:
    HierarchyListrange(Zilch::NoType none) : Zilch::ReferenceType(none) {}
    ZilchNoCopy(HierarchyListrange);
  };
  
  // Game Object Composition class. This class is the foundational object for all dynamic objects in the game world. The Cog is a piece of logical interactive content and the primary mechanism game systems(Graphics, Physics, Etc.) provide functionality and communicate. A Cog can be anything from physical objects like trees, tanks, players to to logical objects like teams, triggers, or AI objects.
  class Cog : public ZeroObject
  {
  public:
    ZeroCogGetComponentTemplate;
    Zilch::String GetName();
    
    void SetName(const Zilch::String& value);
    
    Zilch::String GetArchetypeName();
    
    void SetArchetypeName(const Zilch::String& value);
    
    int GetRuntimeId();
    
    Zilch::HandleOf<Actions> GetActions();
    
    Zilch::HandleOf<Space> GetSpace();
    
    Zilch::HandleOf<Cog> GetParent();
    
    bool GetIsBeingDestroyed();
    
    bool GetTransient();
    
    void SetTransient(bool value);
    
    bool GetPersistent();
    
    void SetPersistent(bool value);
    
    bool GetEditorViewportHidden();
    
    void SetEditorViewportHidden(bool value);
    
    bool GetObjectViewHidden();
    
    void SetObjectViewHidden(bool value);
    
    bool GetLocked();
    
    void SetLocked(bool value);
    
    Zilch::HandleOf<HierarchyListrange> GetChildren();
    
    Zilch::HandleOf<Cog> GetLevelSettings();
    
    Zilch::HandleOf<GameSession> GetGameSession();
    
    // Destroy an object removing it from the Space.
    void Destroy();
    
    // Dispatches an event on this object.
    void DispatchEvent(const Zilch::String& eventId, Event* event);
    
    // Add a component by name.
    bool AddComponentByName(const Zilch::String& name);
    
    // Remove a component by name. Returns true if the component existed.
    bool RemoveComponentByName(const Zilch::String& name);
    
    // Calls DebugDraw on all components in this cog.
    void DebugDraw();
    
    // Attach to a parent object.
    void AttachTo(Cog* parent);
    
    // Detach from a parent object.
    void Detach();
    
    // Attach to a parent object and compute the new transform so that the objects are relative.
    void AttachToRelative(Cog* parent);
    
    // Detach from a parent object and compute the new transform so that the objects are relative.
    void DetachRelative();
    
    // Find a child object with the given name.
    Zilch::HandleOf<Cog> FindChildByName(const Zilch::String& name);
    
    Zilch::HandleOf<HierarchyNameRange> FindAllChildrenByName(const Zilch::String& name);
    
    // Dispatches an event up the tree on each parent recursively(pre-order traversal)
    void DispatchUp(const Zilch::String& eventId, Event* event);
    
    // Dispatches an event down the tree on all children recursively(pre-order traversal)
    void DispatchDown(const Zilch::String& eventId, Event* event);
    
    Zilch::HandleOf<Cog> FindRoot();
    
    void UploadToArchetype();
    
    void ModifiedFromArchetype();
    
    // Clones this cog.
    Zilch::HandleOf<Cog> Clone();
    
    void ClearArchetype();
    
    Zilch::HandleOf<Cog> FindNextSibling();
    
    Zilch::HandleOf<Cog> FindPreviousSibling();
    
    Zilch::HandleOf<Cog> FindNextInOrder();
    
    Zilch::HandleOf<Cog> FindPreviousInOrder();
    
    // Returns whether or not the given cog is a descendant of us.
    bool IsDescendant(Cog* cog);
    
    Zilch::HandleOf<Component> GetComponentByName(const Zilch::String& componentTypeName);
    
    Zilch::HandleOf<ProjectDescription> GetProjectDescription();
    
    Zilch::HandleOf<JointTool2D> GetJointTool2D();
    
    Zilch::HandleOf<SharedContent> GetSharedContent();
    
    Zilch::HandleOf<RenderToTexture> GetRenderToTexture();
    
    Zilch::HandleOf<MultiSprite> GetMultiSprite();
    
    Zilch::HandleOf<FlowEffect> GetFlowEffect();
    
    Zilch::HandleOf<Transform> GetTransform();
    
    Zilch::HandleOf<ZilchState> GetZilchState();
    
    Zilch::HandleOf<ConvexMeshCollider> GetConvexMeshCollider();
    
    Zilch::HandleOf<ActionSpace> GetActionSpace();
    
    Zilch::HandleOf<NetSpace> GetNetSpace();
    
    Zilch::HandleOf<MeshBender> GetMeshBender();
    
    Zilch::HandleOf<RuntimeSpline> GetRuntimeSpline();
    
    Zilch::HandleOf<LevelPath> GetLevelPath();
    
    Zilch::HandleOf<ParticleAttractor> GetParticleAttractor();
    
    Zilch::HandleOf<PhysicsSpace> GetPhysicsSpace();
    
    Zilch::HandleOf<GravityEffect> GetGravityEffect();
    
    Zilch::HandleOf<PointMassSystem> GetPointMassSystem();
    
    Zilch::HandleOf<NetUserCreator> GetNetUserCreator();
    
    Zilch::HandleOf<Projector> GetProjector();
    
    Zilch::HandleOf<ForceEffect> GetForceEffect();
    
    Zilch::HandleOf<AmbientLight> GetAmbientLight();
    
    Zilch::HandleOf<CogRotateGizmo> GetCogRotateGizmo();
    
    Zilch::HandleOf<HeightMapTool> GetHeightMapTool();
    
    Zilch::HandleOf<SphereCollider> GetSphereCollider();
    
    Zilch::HandleOf<Hierarchy> GetHierarchy();
    
    Zilch::HandleOf<StickJoint> GetStickJoint();
    
    Zilch::HandleOf<LockStepMouse> GetLockStepMouse();
    
    Zilch::HandleOf<LinearAxisJoint> GetLinearAxisJoint();
    
    Zilch::HandleOf<CreationTool> GetCreationTool();
    
    Zilch::HandleOf<EditorSettings> GetEditorSettings();
    
    Zilch::HandleOf<ClothSystem> GetClothSystem();
    
    Zilch::HandleOf<RecentProjects> GetRecentProjects();
    
    Zilch::HandleOf<GridDraw> GetGridDraw();
    
    Zilch::HandleOf<DynamicModel> GetDynamicModel();
    
    Zilch::HandleOf<SplineParticleAnimator> GetSplineParticleAnimator();
    
    Zilch::HandleOf<RingGizmo> GetRingGizmo();
    
    Zilch::HandleOf<Sprite> GetSprite();
    
    Zilch::HandleOf<GeometryPointManipulator> GetGeometryPointManipulator();
    
    Zilch::HandleOf<Orientation> GetOrientation();
    
    Zilch::HandleOf<PhyGunJoint> GetPhyGunJoint();
    
    Zilch::HandleOf<MeshParticleEmitter> GetMeshParticleEmitter();
    
    Zilch::HandleOf<UprightJoint> GetUprightJoint();
    
    Zilch::HandleOf<SimpleSocket> GetSimpleSocket();
    
    Zilch::HandleOf<WebRequester> GetWebRequester();
    
    Zilch::HandleOf<DynamicMotor> GetDynamicMotor();
    
    Zilch::HandleOf<MotionBlur> GetMotionBlur();
    
    Zilch::HandleOf<ArrowGizmo> GetArrowGizmo();
    
    Zilch::HandleOf<HeightMapCollider> GetHeightMapCollider();
    
    Zilch::HandleOf<ManipulatorJoint> GetManipulatorJoint();
    
    Zilch::HandleOf<CameraViewport> GetCameraViewport();
    
    Zilch::HandleOf<DefaultViewportSetup> GetDefaultViewportSetup();
    
    Zilch::HandleOf<LockStepSyncChecker> GetLockStepSyncChecker();
    
    Zilch::HandleOf<TorqueEffect> GetTorqueEffect();
    
    Zilch::HandleOf<LauncherConfig> GetLauncherConfig();
    
    Zilch::HandleOf<AnimationGraph> GetAnimationGraph();
    
    Zilch::HandleOf<PointMassAnchorConnection> GetPointMassAnchorConnection();
    
    Zilch::HandleOf<SkinnedModel> GetSkinnedModel();
    
    Zilch::HandleOf<UserConfig> GetUserConfig();
    
    Zilch::HandleOf<BuoyancyEffect> GetBuoyancyEffect();
    
    Zilch::HandleOf<EditorBone> GetEditorBone();
    
    Zilch::HandleOf<LockStepSpace> GetLockStepSpace();
    
    Zilch::HandleOf<TileMap> GetTileMap();
    
    Zilch::HandleOf<IgnoreSpaceEffects> GetIgnoreSpaceEffects();
    
    Zilch::HandleOf<JointMotor> GetJointMotor();
    
    Zilch::HandleOf<SpriteText> GetSpriteText();
    
    Zilch::HandleOf<TimeConfig> GetTimeConfig();
    
    Zilch::HandleOf<ManipulatorTool> GetManipulatorTool();
    
    Zilch::HandleOf<EditorCameraController> GetEditorCameraController();
    
    Zilch::HandleOf<SizerGizmo> GetSizerGizmo();
    
    Zilch::HandleOf<JointDebugDrawConfig> GetJointDebugDrawConfig();
    
    Zilch::HandleOf<UniversalJoint> GetUniversalJoint();
    
    Zilch::HandleOf<ObjectLinkAnchor> GetObjectLinkAnchor();
    
    Zilch::HandleOf<NavGrid> GetNavGrid();
    
    Zilch::HandleOf<LockStepKeyboard> GetLockStepKeyboard();
    
    Zilch::HandleOf<PrismaticJoint> GetPrismaticJoint();
    
    Zilch::HandleOf<RandomContext> GetRandomContext();
    
    Zilch::HandleOf<DynamicMeshCollider> GetDynamicMeshCollider();
    
    Zilch::HandleOf<PhysicsCarWheel> GetPhysicsCarWheel();
    
    Zilch::HandleOf<VortexEffect> GetVortexEffect();
    
    Zilch::HandleOf<EditorConfig> GetEditorConfig();
    
    Zilch::HandleOf<PhysicsCar> GetPhysicsCar();
    
    Zilch::HandleOf<BoxParticleEmitter> GetBoxParticleEmitter();
    
    Zilch::HandleOf<ParticleCollisionPlane> GetParticleCollisionPlane();
    
    Zilch::HandleOf<PrismaticJoint2d> GetPrismaticJoint2d();
    
    Zilch::HandleOf<RigidBody> GetRigidBody();
    
    Zilch::HandleOf<WindEffect> GetWindEffect();
    
    Zilch::HandleOf<Ribbon> GetRibbon();
    
    Zilch::HandleOf<ParticleTorusRoller> GetParticleTorusRoller();
    
    Zilch::HandleOf<LevelGeometry> GetLevelGeometry();
    
    Zilch::HandleOf<RevoluteJoint2d> GetRevoluteJoint2d();
    
    Zilch::HandleOf<JointLimit> GetJointLimit();
    
    Zilch::HandleOf<NetUser> GetNetUser();
    
    Zilch::HandleOf<Reactive> GetReactive();
    
    Zilch::HandleOf<WheelJoint> GetWheelJoint();
    
    Zilch::HandleOf<WeldJoint> GetWeldJoint();
    
    Zilch::HandleOf<Fog> GetFog();
    
    Zilch::HandleOf<MainConfig> GetMainConfig();
    
    Zilch::HandleOf<DefaultGameSetup> GetDefaultGameSetup();
    
    Zilch::HandleOf<LockStepGame> GetLockStepGame();
    
    Zilch::HandleOf<Gizmo> GetGizmo();
    
    Zilch::HandleOf<MassOverride> GetMassOverride();
    
    Zilch::HandleOf<ThrustEffect> GetThrustEffect();
    
    Zilch::HandleOf<ObjectLink> GetObjectLink();
    
    Zilch::HandleOf<DynamicMeshSaver> GetDynamicMeshSaver();
    
    Zilch::HandleOf<VoxelChunk> GetVoxelChunk();
    
    Zilch::HandleOf<SoundListener> GetSoundListener();
    
    Zilch::HandleOf<SoundEmitter> GetSoundEmitter();
    
    Zilch::HandleOf<AttachSystem> GetAttachSystem();
    
    Zilch::HandleOf<ScreenDrops> GetScreenDrops();
    
    Zilch::HandleOf<RevoluteJoint> GetRevoluteJoint();
    
    Zilch::HandleOf<Shadow> GetShadow();
    
    Zilch::HandleOf<ProxyControlPoint> GetProxyControlPoint();
    
    Zilch::HandleOf<ParticleColorAnimator> GetParticleColorAnimator();
    
    Zilch::HandleOf<DynamicMeshGenerator> GetDynamicMeshGenerator();
    
    Zilch::HandleOf<GeometryMesh3D> GetGeometryMesh3D();
    
    Zilch::HandleOf<DynamicMesh> GetDynamicMesh();
    
    Zilch::HandleOf<PointForceEffect> GetPointForceEffect();
    
    Zilch::HandleOf<CapsuleCollider> GetCapsuleCollider();
    
    Zilch::HandleOf<Joint> GetJoint();
    
    Zilch::HandleOf<ParentingTool> GetParentingTool();
    
    Zilch::HandleOf<Light> GetLight();
    
    Zilch::HandleOf<VoxelChunkMaterials> GetVoxelChunkMaterials();
    
    Zilch::HandleOf<SoundSpace> GetSoundSpace();
    
    Zilch::HandleOf<TransformProxyObject> GetTransformProxyObject();
    
    Zilch::HandleOf<HeightMapModel> GetHeightMapModel();
    
    Zilch::HandleOf<SpriteTextBlock> GetSpriteTextBlock();
    
    Zilch::HandleOf<CogTransformGizmo> GetCogTransformGizmo();
    
    Zilch::HandleOf<CogSizerGizmo> GetCogSizerGizmo();
    
    Zilch::HandleOf<MeshCollider> GetMeshCollider();
    
    Zilch::HandleOf<MultiConvexMeshCollider> GetMultiConvexMeshCollider();
    
    Zilch::HandleOf<RelativeVelocityJoint> GetRelativeVelocityJoint();
    
    Zilch::HandleOf<SpriteBeam> GetSpriteBeam();
    
    Zilch::HandleOf<GodRayLight> GetGodRayLight();
    
    Zilch::HandleOf<Attractive> GetAttractive();
    
    Zilch::HandleOf<EditorIcon> GetEditorIcon();
    
    Zilch::HandleOf<SelectTool> GetSelectTool();
    
    Zilch::HandleOf<GraphicsSpace> GetGraphicsSpace();
    
    Zilch::HandleOf<GeometryMesh> GetGeometryMesh();
    
    Zilch::HandleOf<ScreenWarpRing> GetScreenWarpRing();
    
    Zilch::HandleOf<Model> GetModel();
    
    Zilch::HandleOf<RayTraceProperties> GetRayTraceProperties();
    
    Zilch::HandleOf<SphericalParticleEmitter> GetSphericalParticleEmitter();
    
    Zilch::HandleOf<DefaultCamera> GetDefaultCamera();
    
    Zilch::HandleOf<ParticleWander> GetParticleWander();
    
    Zilch::HandleOf<MainWindowConfig> GetMainWindowConfig();
    
    Zilch::HandleOf<RopeCreator> GetRopeCreator();
    
    Zilch::HandleOf<ParticleSystem> GetParticleSystem();
    
    Zilch::HandleOf<LineParticleEmitter> GetLineParticleEmitter();
    
    Zilch::HandleOf<Area> GetArea();
    
    Zilch::HandleOf<ReactiveSpace> GetReactiveSpace();
    
    Zilch::HandleOf<LinearParticleAnimator> GetLinearParticleAnimator();
    
    Zilch::HandleOf<DynamicController> GetDynamicController();
    
    Zilch::HandleOf<JointSpring> GetJointSpring();
    
    Zilch::HandleOf<RayTracedPhysicsProvider> GetRayTracedPhysicsProvider();
    
    Zilch::HandleOf<Camera> GetCamera();
    
    Zilch::HandleOf<TranslateTool> GetTranslateTool();
    
    Zilch::HandleOf<ParticleTwister> GetParticleTwister();
    
    Zilch::HandleOf<GizmoDrag> GetGizmoDrag();
    
    Zilch::HandleOf<SimpleSound> GetSimpleSound();
    
    Zilch::HandleOf<MouseCapture> GetMouseCapture();
    
    Zilch::HandleOf<TranslateGizmo> GetTranslateGizmo();
    
    Zilch::HandleOf<GeometryPainter2D> GetGeometryPainter2D();
    
    Zilch::HandleOf<TileEditor2D> GetTileEditor2D();
    
    Zilch::HandleOf<CustomJoint> GetCustomJoint();
    
    Zilch::HandleOf<WheelJoint2d> GetWheelJoint2d();
    
    Zilch::HandleOf<RayTracedGraphicsProvider> GetRayTracedGraphicsProvider();
    
    Zilch::HandleOf<EditorRenderer> GetEditorRenderer();
    
    Zilch::HandleOf<Ssao> GetSsao();
    
    Zilch::HandleOf<CameraViewports> GetCameraViewports();
    
    Zilch::HandleOf<Collider> GetCollider();
    
    Zilch::HandleOf<JointTool3D> GetJointTool3D();
    
    Zilch::HandleOf<PositionJoint> GetPositionJoint();
    
    Zilch::HandleOf<Attractor> GetAttractor();
    
    Zilch::HandleOf<GizmoSpace> GetGizmoSpace();
    
    Zilch::HandleOf<NetPeer> GetNetPeer();
    
    Zilch::HandleOf<NavMesh> GetNavMesh();
    
    Zilch::HandleOf<AutoOrientToVelocity> GetAutoOrientToVelocity();
    
    Zilch::HandleOf<PulleyJoint> GetPulleyJoint();
    
    Zilch::HandleOf<ParticleGradientAnimator> GetParticleGradientAnimator();
    
    Zilch::HandleOf<DragEffect> GetDragEffect();
    
    Zilch::HandleOf<ModelVisualizer> GetModelVisualizer();
    
    Zilch::HandleOf<DeferredRenderer> GetDeferredRenderer();
    
    Zilch::HandleOf<Feelers> GetFeelers();
    
    Zilch::HandleOf<Project> GetProject();
    
    Zilch::HandleOf<HeightMap> GetHeightMap();
    
    Zilch::HandleOf<ObjectSystem> GetObjectSystem();
    
    Zilch::HandleOf<LightningParticleEmitter> GetLightningParticleEmitter();
    
    Zilch::HandleOf<RotateTool> GetRotateTool();
    
    Zilch::HandleOf<ForwardRenderer> GetForwardRenderer();
    
    Zilch::HandleOf<PointMassAnchor> GetPointMassAnchor();
    
    Zilch::HandleOf<SpriteParticleSystem> GetSpriteParticleSystem();
    
    Zilch::HandleOf<ScaleTool> GetScaleTool();
    
    Zilch::HandleOf<ParticleCollisionHeightmap> GetParticleCollisionHeightmap();
    
    Zilch::HandleOf<RotationProxy> GetRotationProxy();
    
    Zilch::HandleOf<CogScaleGizmo> GetCogScaleGizmo();
    
    Zilch::HandleOf<ZilchPluginConfig> GetZilchPluginConfig();
    
    Zilch::HandleOf<JointConfigOverride> GetJointConfigOverride();
    
    Zilch::HandleOf<Blocking> GetBlocking();
    
    Zilch::HandleOf<CustomCollisionEventTracker> GetCustomCollisionEventTracker();
    
    Zilch::HandleOf<SplineParticleEmitter> GetSplineParticleEmitter();
    
    Zilch::HandleOf<TimeSpace> GetTimeSpace();
    
    Zilch::HandleOf<FixedAngleJoint> GetFixedAngleJoint();
    
    Zilch::HandleOf<CustomPhysicsEffect> GetCustomPhysicsEffect();
    
    Zilch::HandleOf<LockStepSyncIgnore> GetLockStepSyncIgnore();
    
    Zilch::HandleOf<BoxCollider> GetBoxCollider();
    
    Zilch::HandleOf<ContentConfig> GetContentConfig();
    
    Zilch::HandleOf<FixedAspectRatio> GetFixedAspectRatio();
    
    Zilch::HandleOf<PointGravityEffect> GetPointGravityEffect();
    
    Zilch::HandleOf<TextEditorConfig> GetTextEditorConfig();
    
    Zilch::HandleOf<NetObject> GetNetObject();
    
    Zilch::HandleOf<SimpleAnimation> GetSimpleAnimation();
    
    Zilch::HandleOf<DeveloperConfig> GetDeveloperConfig();
    
    Zilch::HandleOf<SkyBox> GetSkyBox();
    
    Zilch::HandleOf<LockStepGamepads> GetLockStepGamepads();
    
    Zilch::HandleOf<EllipsoidCollider> GetEllipsoidCollider();
    
    Zilch::HandleOf<SquareGizmo> GetSquareGizmo();
    
    Zilch::HandleOf<CogTranslateGizmo> GetCogTranslateGizmo();
    
    Zilch::HandleOf<Wandering> GetWandering();
    
    Zilch::HandleOf<CylinderCollider> GetCylinderCollider();
    
    Zilch::HandleOf<Region> GetRegion();
    
    Zilch::HandleOf<GraphicsConfig> GetGraphicsConfig();
    
    Zilch::HandleOf<ScreenDropGenerator> GetScreenDropGenerator();
    
    Zilch::HandleOf<GearJoint> GetGearJoint();
    
    unsigned char mValue[124];
    
  protected:
    Cog(Zilch::NoType none) : ZeroObject(none) {}
    ZilchNoCopy(Cog);
  };
  
  // This event can be sent over the network.
  class SendableEvent : public Event
  {
  public:
    unsigned char mValue[4];
    
  protected:
    SendableEvent(Zilch::NoType none) : Event(none) {}
    ZilchNoCopy(SendableEvent);
  };
  
  class LockStepEvent : public SendableEvent
  {
  public:
    Zilch::HandleOf<LockStepPeer> GetPeer();
    
    void SetPeer(LockStepPeer* value);
    
    unsigned char mValue[4];
    
  protected:
    LockStepEvent(Zilch::NoType none) : SendableEvent(none) {}
    ZilchNoCopy(LockStepEvent);
  };
  
  // A synced keyboard event.
  class LockStepKeyEvent : public LockStepEvent
  {
  public:
    int GetKey();
    
    void SetKey(int value);
    
    bool GetKeyDown();
    
    void SetKeyDown(bool value);
    
    bool GetShiftPressed();
    
    void SetShiftPressed(bool value);
    
    bool GetAltPressed();
    
    void SetAltPressed(bool value);
    
    bool GetCtrlPressed();
    
    void SetCtrlPressed(bool value);
    
    unsigned char mValue[8];
    
  protected:
    LockStepKeyEvent(Zilch::NoType none) : LockStepEvent(none) {}
    ZilchNoCopy(LockStepKeyEvent);
  };
  
  // IPv4/IPv6 network host identifier Provided for convenience Note: This class is not slice-able, it has extra data.
  class IpAddress : public Zilch::ReferenceType
  {
  public:
    bool GetIsValid();
    
    InternetProtocol GetInternetProtocol();
    
    Zilch::String GetString();
    
    int GetHash();
    
    Zilch::String GetHost();
    
    void SetHost(const Zilch::String& value);
    
    int GetPort();
    
    void SetPort(int value);
    
    Zilch::String GetPortString();
    
    // Clears the IP address.
    void Clear();
    
    unsigned char mValue[132];
    
  protected:
    IpAddress(Zilch::NoType none) : Zilch::ReferenceType(none) {}
    ZilchNoCopy(IpAddress);
  };
  
  class InternetProtocol : public Zilch::ValueType
  {
  public:
    static InternetProtocol GetV4();
    
    static InternetProtocol GetUnspecified();
    
    static InternetProtocol GetV6();
    
    static InternetProtocol GetBoth();
    
    int mValue;
    InternetProtocol();
  };
  
  // Sent out when a joint signals some kind of event. For example, when a joint exceeds its force limit or when a joint hits a limit.
  class JointEvent : public Event
  {
  public:
    Zilch::HandleOf<Cog> GetObjectA();
    
    Zilch::HandleOf<Cog> GetObjectB();
    
    Zilch::HandleOf<Cog> GetJointCog();
    
    Zilch::HandleOf<Joint> GetJoint();
    
    unsigned char mValue[24];
    
  protected:
    JointEvent(Zilch::NoType none) : Event(none) {}
    ZilchNoCopy(JointEvent);
  };
  
  // A synced gamepad event.
  class LockStepGamepadEvent : public LockStepEvent
  {
  public:
    int GetIndex();
    
    void SetIndex(int value);
    
    unsigned char mValue[4];
    
  protected:
    LockStepGamepadEvent(Zilch::NoType none) : LockStepEvent(none) {}
    ZilchNoCopy(LockStepGamepadEvent);
  };
  
  // A synced gamepad button event.
  class LockStepGamepadButtonEvent : public LockStepGamepadEvent
  {
  public:
    int GetButton();
    
    void SetButton(int value);
    
    bool GetButtonDown();
    
    void SetButtonDown(bool value);
    
    unsigned char mValue[48];
    
  protected:
    LockStepGamepadButtonEvent(Zilch::NoType none) : LockStepGamepadEvent(none) {}
    ZilchNoCopy(LockStepGamepadButtonEvent);
  };
  
  // Resource that can be edited as text and is searchable.
  class DocumentResource : public Resource
  {
  public:
    unsigned char mValue[16];
    
  protected:
    DocumentResource(Zilch::NoType none) : Resource(none) {}
    ZilchNoCopy(DocumentResource);
  };
  
  class CapsuleScalingMode : public Zilch::ValueType
  {
  public:
    static CapsuleScalingMode GetPreserveHeight();
    
    static CapsuleScalingMode GetPreserveScale();
    
    int mValue;
    CapsuleScalingMode();
  };
  
  class UprightJoint : public Joint
  {
  public:
    Zilch::Real3 GetLocalAxisA();
    
    void SetLocalAxisA(const Zilch::Real3& value);
    
    Zilch::Real3 GetLocalAxisB();
    
    void SetLocalAxisB(const Zilch::Real3& value);
    
    Zilch::Real3 GetWorldAxis();
    
    void SetWorldAxis(const Zilch::Real3& value);
    
    unsigned char mValue[48];
    
  protected:
    UprightJoint(Zilch::NoType none) : Joint(none) {}
    ZilchNoCopy(UprightJoint);
  };
  
  class SimpleSocket : public Component
  {
  public:
    Zilch::HandleOf<TcpSocket> GetSocket();
    
    unsigned char mValue[160];
    
  protected:
    SimpleSocket(Zilch::NoType none) : Component(none) {}
    ZilchNoCopy(SimpleSocket);
  };
  
  // Manages all the client/server/peer connections.
  class TcpSocket : public ZeroObject
  {
  public:
    int GetOutgoingConnectionCount();
    
    int GetIncomingConnectionCount();
    
    int GetConnectionCount();
    
    // Attempt to connect to a host on the given port.
    void Connect(const Zilch::String& host, int port);
    
    bool Listen(int port, int maxConnections);
    
    bool Listen(int port, int maxConnections, TcpSocketBind bindTo);
    
    // Close all activity(whether listening or connected to a server)
    void Close();
    
    void CloseConnection(int index);
    
    // Send an event to a specific connection index.
    void SendTo(const Zilch::String& eventId, SendableEvent* event, int index);
    
    // Send an event to all connections.
    void SendToAll(const Zilch::String& eventId, SendableEvent* event);
    
    // Send an event to all connections except a particular connection index.
    void SendToAllExcept(const Zilch::String& eventId, SendableEvent* event, int exceptIndex);
    
    // Send an event to all connections and dispatch on self.
    void SendToAllAndSelf(const Zilch::String& eventId, SendableEvent* event);
    
    // Check if we are currently connected to anyone.
    bool IsConnected();
    
    unsigned char mValue[156];
    
  protected:
    TcpSocket(Zilch::NoType none) : ZeroObject(none) {}
    ZilchNoCopy(TcpSocket);
  };
  
  class SimpleGizmoBase : public Component
  {
  public:
    bool GetMouseInput();
    
    void SetMouseInput(bool value);
    
    int GetPickingPriority();
    
    void SetPickingPriority(int value);
    
    Zilch::Real4 GetColor();
    
    void SetColor(const Zilch::Real4& value);
    
    Zilch::Real4 GetHoverColor();
    
    void SetHoverColor(const Zilch::Real4& value);
    
    bool GetViewScaled();
    
    void SetViewScaled(bool value);
    
    bool GetDrawOnTop();
    
    void SetDrawOnTop(bool value);
    
    unsigned char mValue[72];
    
  protected:
    SimpleGizmoBase(Zilch::NoType none) : Component(none) {}
    ZilchNoCopy(SimpleGizmoBase);
  };
  
  class ArrowGizmo : public SimpleGizmoBase
  {
  public:
    float GetHeadSize();
    
    void SetHeadSize(float value);
    
    float GetLength();
    
    void SetLength(float value);
    
    float GetSelectRadius();
    
    void SetSelectRadius(float value);
    
    int GetHeadType();
    
    void SetHeadType(int value);
    
    bool GetDualHeads();
    
    void SetDualHeads(bool value);
    
    bool GetFilledHeads();
    
    void SetFilledHeads(bool value);
    
    float GetLineDrawWidth();
    
    void SetLineDrawWidth(float value);
    
    unsigned char mValue[28];
    
  protected:
    ArrowGizmo(Zilch::NoType none) : SimpleGizmoBase(none) {}
    ZilchNoCopy(ArrowGizmo);
  };
  
  class GizmoPivot : public Zilch::ValueType
  {
  public:
    static GizmoPivot GetPrimary();
    
    static GizmoPivot GetAverage();
    
    static GizmoPivot GetCenter();
    
    int mValue;
    GizmoPivot();
  };
  
  // Dispatched after receiving a connect request If accepted, their net peer ID is assigned immediately after this Return true to accept the connect request, else false.
  class NetPeerReceivedConnectRequest : public Event
  {
  public:
    Zilch::HandleOf<IpAddress> GetTheirIpAddress();
    
    void SetTheirIpAddress(IpAddress* value);
    
    Zilch::HandleOf<EventBundle> GetTheirRequestBundle();
    
    void SetTheirRequestBundle(EventBundle* value);
    
    int GetTheirPendingUserAddRequestCount();
    
    void SetTheirPendingUserAddRequestCount(int value);
    
    Zilch::HandleOf<IpAddress> GetOurIpAddress();
    
    void SetOurIpAddress(IpAddress* value);
    
    bool GetReturnOurConnectResponse();
    
    void SetReturnOurConnectResponse(bool value);
    
    Zilch::HandleOf<EventBundle> GetReturnOurResponseBundle();
    
    void SetReturnOurResponseBundle(EventBundle* value);
    
    unsigned char mValue[368];
    
  protected:
    NetPeerReceivedConnectRequest(Zilch::NoType none) : Event(none) {}
    ZilchNoCopy(NetPeerReceivedConnectRequest);
  };
  
  // Event Bundle Serialized event storage container.
  class EventBundle : public ZeroObject
  {
  public:
    bool GetIsEmpty();
    
    // Adds the event to back of the event bundle Returns true if successful, else false(an event of that type has already been added)
    bool AddEvent(Event* event);
    
    // Returns all the events that have been added to the event bundle.
    Zilch::HandleOf<EventRange> GetEvents();
    
    // Removes the event specified from the event bundle Returns true if successful, else false(an event of that type has already been added)
    bool RemoveEvent(Event* event);
    
    // Removes the event specified from the event bundle Returns true if successful, else false(an event of that type has already been added)
    bool RemoveEvent(const Zilch::String& event);
    
    // Clears the event bundle.
    void Clear();
    
    unsigned char mValue[44];
    
  protected:
    EventBundle(Zilch::NoType none) : ZeroObject(none) {}
    ZilchNoCopy(EventBundle);
  };
  
  class MaterialBlendMode : public Zilch::ValueType
  {
  public:
    static MaterialBlendMode GetMultiply();
    
    static MaterialBlendMode GetAlpha();
    
    static MaterialBlendMode GetAdditive();
    
    int mValue;
    MaterialBlendMode();
  };
  
  // Gamepads is a collection of gamepads.
  class Gamepads : public ZeroObject
  {
  public:
    int GetMaxGamepadCount();
    
    // Pause Vibration on all gamepads.
    void PauseVibration();
    
    // Resume vibration on all gamepads.
    void ResumeVibration();
    
    // Get the gamepad for a given index from[0, GamepadCount].
    Zilch::HandleOf<Gamepad> GetGamePad(int gamepadIndex);
    
    unsigned char mValue[52];
    
  protected:
    Gamepads(Zilch::NoType none) : ZeroObject(none) {}
    ZilchNoCopy(Gamepads);
  };
  
  // Game pad is a object for getting game pad input.
  class Gamepad : public ZeroObject
  {
  public:
    bool GetIsActive();
    
    void SetIsActive(bool value);
    
    int GetGamepadIndex();
    
    void SetGamepadIndex(int value);
    
    Zilch::Real2 GetLeftStick();
    
    void SetLeftStick(const Zilch::Real2& value);
    
    Zilch::Real2 GetRightStick();
    
    void SetRightStick(const Zilch::Real2& value);
    
    Zilch::Real2 GetLeftStickDelta();
    
    void SetLeftStickDelta(const Zilch::Real2& value);
    
    Zilch::Real2 GetRightStickDelta();
    
    void SetRightStickDelta(const Zilch::Real2& value);
    
    float GetLeftTrigger();
    
    void SetLeftTrigger(float value);
    
    float GetRightTrigger();
    
    void SetRightTrigger(float value);
    
    // Has the button just been pressed this frame.
    bool IsButtonPressed(int index);
    
    // Is the button currently being held down.
    bool IsButtonHeld(int index);
    
    // Is the button just been released.
    bool IsButtonReleased(int index);
    
    // How long has this button been held down.
    float TimeButtonHeld(int index);
    
    // Vibrate this controller for a given time. Speed is a value between zero and one.
    void Vibrate(float time, float LeftSpeed, float RightSpeed);
    
    unsigned char mValue[380];
    
  protected:
    Gamepad(Zilch::NoType none) : ZeroObject(none) {}
    ZilchNoCopy(Gamepad);
  };
  
  // A position joint that is designed to manipulate one object. The only difference between this and the position joint is that the manipulator always draws itself, draws differently, and configures the max force differently.
  class ManipulatorJoint : public Joint
  {
  public:
    Zilch::Real3 GetTargetPoint();
    
    void SetTargetPoint(const Zilch::Real3& value);
    
    Zilch::Real3 GetLocalPoint();
    
    void SetLocalPoint(const Zilch::Real3& value);
    
    Zilch::Real3 GetWorldPoint();
    
    void SetWorldPoint(const Zilch::Real3& value);
    
    unsigned char mValue[48];
    
  protected:
    ManipulatorJoint(Zilch::NoType none) : Joint(none) {}
    ZilchNoCopy(ManipulatorJoint);
  };
  
  // Applies a general torque to the object(objects will act differently based on their mass).
  class TorqueEffect : public PhysicsEffect
  {
  public:
    bool GetLocalTorque();
    
    void SetLocalTorque(bool value);
    
    float GetTorqueStrength();
    
    void SetTorqueStrength(float value);
    
    Zilch::Real3 GetTorqueDirection();
    
    void SetTorqueDirection(const Zilch::Real3& value);
    
    unsigned char mValue[36];
    
  protected:
    TorqueEffect(Zilch::NoType none) : PhysicsEffect(none) {}
    ZilchNoCopy(TorqueEffect);
  };
  
  class SyncDebugFrameEvent : public SendableEvent
  {
  public:
    Zilch::HandleOf<LockStepPeer> GetPeer();
    
    void SetPeer(LockStepPeer* value);
    
    unsigned char mValue[16];
    
  protected:
    SyncDebugFrameEvent(Zilch::NoType none) : SendableEvent(none) {}
    ZilchNoCopy(SyncDebugFrameEvent);
  };
  
  class LockStepPeer : public ZeroObject
  {
  public:
    int GetGuid();
    
    void SetGuid(int value);
    
    unsigned char mValue[28];
    
  protected:
    LockStepPeer(Zilch::NoType none) : ZeroObject(none) {}
    ZilchNoCopy(LockStepPeer);
  };
  
  class VerticalAlignment : public Zilch::ValueType
  {
  public:
    static VerticalAlignment GetBottom();
    
    static VerticalAlignment GetTop();
    
    static VerticalAlignment GetCenter();
    
    int mValue;
    VerticalAlignment();
  };
  
  class PointMassAnchorConnection : public Component
  {
  public:
    Zilch::Real3 GetPositionOffset();
    
    void SetPositionOffset(const Zilch::Real3& value);
    
    unsigned char mValue[48];
    
  protected:
    PointMassAnchorConnection(Zilch::NoType none) : Component(none) {}
    ZilchNoCopy(PointMassAnchorConnection);
  };
  
  class ConstraintPositionCorrection : public Zilch::ValueType
  {
  public:
    static ConstraintPositionCorrection GetBaumgarte();
    
    static ConstraintPositionCorrection GetInherit();
    
    static ConstraintPositionCorrection GetPostStabilization();
    
    int mValue;
    ConstraintPositionCorrection();
  };
  
  class TaskButton_ : public ZeroObject
  {
  public:
    Zilch::Real4 GetIconColor();
    
    void SetIconColor(const Zilch::Real4& value);
    
    Zilch::Real4 GetIconFlash();
    
    void SetIconFlash(const Zilch::Real4& value);
    
    Zilch::Real4 GetIconBackgroundFlash();
    
    void SetIconBackgroundFlash(const Zilch::Real4& value);
    
    Zilch::Real4 GetProgressPrimaryColor();
    
    void SetProgressPrimaryColor(const Zilch::Real4& value);
    
    Zilch::Real4 GetProgressBackgroundColor();
    
    void SetProgressBackgroundColor(const Zilch::Real4& value);
    
    unsigned char mValue[52];
    
  protected:
    TaskButton_(Zilch::NoType none) : ZeroObject(none) {}
    ZilchNoCopy(TaskButton_);
  };
  
  class GodRayLightType : public Zilch::ValueType
  {
  public:
    static GodRayLightType GetPoint();
    
    static GodRayLightType GetDirectional();
    
    int mValue;
    GodRayLightType();
  };
  
  class NetRole : public Zilch::ValueType
  {
  public:
    static NetRole GetUnspecified();
    
    static NetRole GetOffline();
    
    static NetRole GetClient();
    
    static NetRole GetServer();
    
    int mValue;
    NetRole();
  };
  
  class DebugBox : public Zilch::ReferenceType
  {
  public:
    Zilch::HandleOf<DebugBox> Float4Color(const Zilch::Real4& __0);
    
    Zilch::HandleOf<DebugBox> Width(float __0);
    
    Zilch::HandleOf<DebugBox> Duration(float __0);
    
    Zilch::HandleOf<DebugBox> OnTop(bool __0);
    
    Zilch::HandleOf<DebugBox> Filled(bool __0);
    
    Zilch::HandleOf<DebugBox> Border(bool __0);
    
    Zilch::HandleOf<DebugBox> BackShade(bool __0);
    
    Zilch::HandleOf<DebugBox> SpaceId(int __0);
    
    void Draw();
    
    Zilch::HandleOf<DebugBox> ViewAligned(bool __0);
    
    Zilch::HandleOf<DebugBox> Position(const Zilch::Real3& __0);
    
    Zilch::HandleOf<DebugBox> Size(const Zilch::Real3& __0);
    
    Zilch::HandleOf<DebugBox> Corners(bool __0);
    
    unsigned char mValue[56];
    
  protected:
    DebugBox(Zilch::NoType none) : Zilch::ReferenceType(none) {}
    ZilchNoCopy(DebugBox);
  };
  
  // Model that used bones to deform a mesh.
  class SkinnedModel : public Graphical
  {
  public:
    Zilch::HandleOf<Material> GetMaterial();
    
    void SetMaterial(Material* value);
    
    Zilch::HandleOf<Mesh> GetMesh();
    
    void SetMesh(Mesh* value);
    
    Zilch::Real4 GetColor();
    
    void SetColor(const Zilch::Real4& value);
    
    Zilch::Real3 GetBoundingCenter();
    
    void SetBoundingCenter(const Zilch::Real3& value);
    
    Zilch::Real3 GetBoundingExtents();
    
    void SetBoundingExtents(const Zilch::Real3& value);
    
    unsigned char mValue[104];
    
  protected:
    SkinnedModel(Zilch::NoType none) : Graphical(none) {}
    ZilchNoCopy(SkinnedModel);
  };
  
  class UserConfig : public Component
  {
  public:
    Zilch::String GetUserName();
    
    void SetUserName(const Zilch::String& value);
    
    Zilch::String GetUserEmail();
    
    void SetUserEmail(const Zilch::String& value);
    
    unsigned char mValue[32];
    
  protected:
    UserConfig(Zilch::NoType none) : Component(none) {}
    ZilchNoCopy(UserConfig);
  };
  
  // Applies a buoyancy force to an object in a given direction.
  class BuoyancyEffect : public PhysicsEffect
  {
  public:
    float GetDensity();
    
    void SetDensity(float value);
    
    Zilch::Real3 GetGravity();
    
    void SetGravity(const Zilch::Real3& value);
    
    int GetDetail();
    
    void SetDetail(int value);
    
    bool GetDebugDraw();
    
    void SetDebugDraw(bool value);
    
    unsigned char mValue[28];
    
  protected:
    BuoyancyEffect(Zilch::NoType none) : PhysicsEffect(none) {}
    ZilchNoCopy(BuoyancyEffect);
  };
  
  class WheelJoint2dBlock : public Zilch::ReferenceType
  {
  public:
    float GetSlop();
    
    void SetSlop(float value);
    
    float GetLinearBaumgarte();
    
    void SetLinearBaumgarte(float value);
    
    float GetAngularBaumgarte();
    
    void SetAngularBaumgarte(float value);
    
    float GetLinearErrorCorrection();
    
    void SetLinearErrorCorrection(float value);
    
    float GetAngularErrorCorrection();
    
    void SetAngularErrorCorrection(float value);
    
    int GetCorrectionType();
    
    void SetCorrectionType(int value);
    
    unsigned char mValue[32];
    
  protected:
    WheelJoint2dBlock(Zilch::NoType none) : Zilch::ReferenceType(none) {}
    ZilchNoCopy(WheelJoint2dBlock);
  };
  
  class AnimationBuilder : public Zilch::ReferenceType
  {
  public:
    Zilch::String GetName();
    
    void SetName(const Zilch::String& value);
    
    bool GetMakeAnimationSet();
    
    void SetMakeAnimationSet(bool value);
    
    int GetCompressAnimation();
    
    void SetCompressAnimation(int value);
    
    Zilch::String GetPreviewArchetype();
    
    void SetPreviewArchetype(const Zilch::String& value);
    
    unsigned char mValue[72];
    
  protected:
    AnimationBuilder(Zilch::NoType none) : Zilch::ReferenceType(none) {}
    ZilchNoCopy(AnimationBuilder);
  };
  
  class HeightMapSubTool : public Zilch::ReferenceType
  {
  public:
    unsigned char mValue[16];
    
  protected:
    HeightMapSubTool(Zilch::NoType none) : Zilch::ReferenceType(none) {}
    ZilchNoCopy(HeightMapSubTool);
  };
  
  class CreateDestroyTool : public HeightMapSubTool
  {
  public:
    float GetBaseHeight();
    
    void SetBaseHeight(float value);
    
    bool GetUsePerlinNoise();
    
    void SetUsePerlinNoise(bool value);
    
    float GetPerlinFrequency();
    
    void SetPerlinFrequency(float value);
    
    float GetPerlinAmplitude();
    
    void SetPerlinAmplitude(float value);
    
    unsigned char mValue[16];
    
  protected:
    CreateDestroyTool(Zilch::NoType none) : HeightMapSubTool(none) {}
    ZilchNoCopy(CreateDestroyTool);
  };
  
  class Keys : public Zilch::ValueType
  {
  public:
    static Keys GetTab();
    
    static Keys GetAlt();
    
    static Keys GetNumPad1();
    
    static Keys GetRight();
    
    static Keys GetEnd();
    
    static Keys GetThree();
    
    static Keys GetCapital();
    
    static Keys GetTilde();
    
    static Keys GetZero();
    
    static Keys GetF2();
    
    static Keys GetEscape();
    
    static Keys GetNumPad4();
    
    static Keys GetNumPad7();
    
    static Keys GetF6();
    
    static Keys GetEnter();
    
    static Keys GetF12();
    
    static Keys GetUnknown();
    
    static Keys GetDown();
    
    static Keys GetFive();
    
    static Keys GetF11();
    
    static Keys GetPageUp();
    
    static Keys GetNumPad0();
    
    static Keys GetMultiply();
    
    static Keys GetF10();
    
    static Keys GetLeftBracket();
    
    static Keys GetTwo();
    
    static Keys GetMinus();
    
    static Keys GetF1();
    
    static Keys GetSlash();
    
    static Keys GetSeven();
    
    static Keys GetEight();
    
    static Keys GetApostrophe();
    
    static Keys GetSix();
    
    static Keys GetSubtract();
    
    static Keys GetF5();
    
    static Keys GetBackslash();
    
    static Keys GetF9();
    
    static Keys GetNone();
    
    static Keys GetDivide();
    
    static Keys GetDecimal();
    
    static Keys GetComma();
    
    static Keys GetFour();
    
    static Keys GetLeft();
    
    static Keys GetBack();
    
    static Keys GetOne();
    
    static Keys GetNumPad2();
    
    static Keys GetF7();
    
    static Keys GetDelete();
    
    static Keys GetSpace();
    
    static Keys GetNumPad8();
    
    static Keys GetR();
    
    static Keys GetF4();
    
    static Keys GetPageDown();
    
    static Keys GetNumPad3();
    
    static Keys GetSemicolon();
    
    static Keys GetEqual();
    
    static Keys GetNumPad5();
    
    static Keys GetControl();
    
    static Keys GetShift();
    
    static Keys GetHome();
    
    static Keys GetF8();
    
    static Keys GetAdd();
    
    static Keys GetA();
    
    static Keys GetF3();
    
    static Keys GetC();
    
    static Keys GetB();
    
    static Keys GetE();
    
    static Keys GetD();
    
    static Keys GetG();
    
    static Keys GetNine();
    
    static Keys GetI();
    
    static Keys GetH();
    
    static Keys GetPeriod();
    
    static Keys GetJ();
    
    static Keys GetM();
    
    static Keys GetL();
    
    static Keys GetO();
    
    static Keys GetN();
    
    static Keys GetQ();
    
    static Keys GetP();
    
    static Keys GetS();
    
    static Keys GetUp();
    
    static Keys GetU();
    
    static Keys GetT();
    
    static Keys GetW();
    
    static Keys GetV();
    
    static Keys GetY();
    
    static Keys GetX();
    
    static Keys GetNumPad6();
    
    static Keys GetZ();
    
    static Keys GetF();
    
    static Keys GetK();
    
    static Keys GetRightBracket();
    
    static Keys GetNumPad9();
    
    int mValue;
    Keys();
  };
  
  // Tells a cog to ignore certain effects on the space/level. Used to special case objects to ignore things such as drag or gravity.
  class IgnoreSpaceEffects : public Component
  {
  public:
    bool GetIgnoreDrag();
    
    void SetIgnoreDrag(bool value);
    
    bool GetIgnoreFlow();
    
    void SetIgnoreFlow(bool value);
    
    bool GetIgnoreForce();
    
    void SetIgnoreForce(bool value);
    
    bool GetIgnoreGravity();
    
    void SetIgnoreGravity(bool value);
    
    bool GetIgnorePointForce();
    
    void SetIgnorePointForce(bool value);
    
    bool GetIgnorePointGravity();
    
    void SetIgnorePointGravity(bool value);
    
    bool GetIgnoreThrust();
    
    void SetIgnoreThrust(bool value);
    
    bool GetIgnoreVortex();
    
    void SetIgnoreVortex(bool value);
    
    bool GetIgnoreWind();
    
    void SetIgnoreWind(bool value);
    
    bool GetIgnoreTorque();
    
    void SetIgnoreTorque(bool value);
    
    bool GetIgnoreBuoyancy();
    
    void SetIgnoreBuoyancy(bool value);
    
    bool GetIgnoreCustom();
    
    void SetIgnoreCustom(bool value);
    
    unsigned char mValue[4];
    
  protected:
    IgnoreSpaceEffects(Zilch::NoType none) : Component(none) {}
    ZilchNoCopy(IgnoreSpaceEffects);
  };
  
  class BasicAnimation : public AnimationNode
  {
  public:
    Zilch::HandleOf<Animation> GetAnimation();
    
    void SetAnimation(Animation* value);
    
    AnimPlayMode GetPlayMode();
    
    void SetPlayMode(AnimPlayMode value);
    
    unsigned char mValue[44];
    
  protected:
    BasicAnimation(Zilch::NoType none) : AnimationNode(none) {}
    ZilchNoCopy(BasicAnimation);
  };
  
  // The Animation resource class is used to store animations of game objects and their properties.
  class Animation : public Resource
  {
  public:
    float GetDuration();
    
    static Zilch::HandleOf<Animation> Find(const Zilch::String& name);
    
    unsigned char mValue[16];
    
  protected:
    Animation(Zilch::NoType none) : Resource(none) {}
    ZilchNoCopy(Animation);
  };
  
  class AnimPlayMode : public Zilch::ValueType
  {
  public:
    static AnimPlayMode GetPingpong();
    
    static AnimPlayMode GetLoop();
    
    static AnimPlayMode GetPlayOnce();
    
    int mValue;
    AnimPlayMode();
  };
  
  // A synced mouse event.
  class LockStepMouseEvent : public LockStepEvent
  {
  public:
    Zilch::Real3 GetWorldStart();
    
    void SetWorldStart(const Zilch::Real3& value);
    
    Zilch::Real3 GetWorldDirection();
    
    void SetWorldDirection(const Zilch::Real3& value);
    
    Zilch::Real2 GetScreenPosition();
    
    void SetScreenPosition(const Zilch::Real2& value);
    
    Zilch::Real2 GetScreenDelta();
    
    void SetScreenDelta(const Zilch::Real2& value);
    
    bool GetLeftPressed();
    
    void SetLeftPressed(bool value);
    
    bool GetMiddlePressed();
    
    void SetMiddlePressed(bool value);
    
    bool GetRightPressed();
    
    void SetRightPressed(bool value);
    
    bool GetShiftPressed();
    
    void SetShiftPressed(bool value);
    
    bool GetAltPressed();
    
    void SetAltPressed(bool value);
    
    bool GetCtrlPressed();
    
    void SetCtrlPressed(bool value);
    
    unsigned char mValue[48];
    
  protected:
    LockStepMouseEvent(Zilch::NoType none) : LockStepEvent(none) {}
    ZilchNoCopy(LockStepMouseEvent);
  };
  
  // A synced mouse event.
  class LockStepMouseButtonEvent : public LockStepMouseEvent
  {
  public:
    int GetButton();
    
    void SetButton(int value);
    
    bool GetButtonDown();
    
    void SetButtonDown(bool value);
    
    unsigned char mValue[8];
    
  protected:
    LockStepMouseButtonEvent(Zilch::NoType none) : LockStepMouseEvent(none) {}
    ZilchNoCopy(LockStepMouseButtonEvent);
  };
  
  class TreeView_ : public ZeroObject
  {
  public:
    Zilch::Real4 GetHeaderColor();
    
    void SetHeaderColor(const Zilch::Real4& value);
    
    Zilch::Real4 GetHeaderHighlight();
    
    void SetHeaderHighlight(const Zilch::Real4& value);
    
    Zilch::Real4 GetColumnSeparatorColor();
    
    void SetColumnSeparatorColor(const Zilch::Real4& value);
    
    float GetItemHeight();
    
    void SetItemHeight(float value);
    
    float GetItemSpacing();
    
    void SetItemSpacing(float value);
    
    float GetIndentSize();
    
    void SetIndentSize(float value);
    
    float GetMaxDragScrollSpeed();
    
    void SetMaxDragScrollSpeed(float value);
    
    float GetDragScrollSize();
    
    void SetDragScrollSize(float value);
    
    float GetDragInsertSize();
    
    void SetDragInsertSize(float value);
    
    unsigned char mValue[52];
    
  protected:
    TreeView_(Zilch::NoType none) : ZeroObject(none) {}
    ZilchNoCopy(TreeView_);
  };
  
  class PositionCorrection : public Zilch::ValueType
  {
  public:
    static PositionCorrection GetBaumgarte();
    
    static PositionCorrection GetPostStabilization();
    
    int mValue;
    PositionCorrection();
  };
  
  class PlayersJoinedEvent : public SendableEvent
  {
  public:
    unsigned char mValue[16];
    
  protected:
    PlayersJoinedEvent(Zilch::NoType none) : SendableEvent(none) {}
    ZilchNoCopy(PlayersJoinedEvent);
  };
  
  class Chrome : public ZeroObject
  {
  public:
    unsigned char mValue[164];
    
  protected:
    Chrome(Zilch::NoType none) : ZeroObject(none) {}
    ZilchNoCopy(Chrome);
  };
  
  class TransformGizmo : public Component
  {
  public:
    unsigned char mValue[180];
    
  protected:
    TransformGizmo(Zilch::NoType none) : Component(none) {}
    ZilchNoCopy(TransformGizmo);
  };
  
  class ManipulatorTool : public TransformGizmo
  {
  public:
    bool GetSizeBoxCollider();
    
    void SetSizeBoxCollider(bool value);
    
    bool GetScalingMode();
    
    void SetScalingMode(bool value);
    
    bool GetSnapping();
    
    void SetSnapping(bool value);
    
    float GetSnapDistance();
    
    void SetSnapDistance(float value);
    
    unsigned char mValue[68];
    
  protected:
    ManipulatorTool(Zilch::NoType none) : TransformGizmo(none) {}
    ZilchNoCopy(ManipulatorTool);
  };
  
  class ViewportMenu_ : public ZeroObject
  {
  public:
    float GetHeight();
    
    void SetHeight(float value);
    
    float GetMouseOffTransparency();
    
    void SetMouseOffTransparency(float value);
    
    float GetMouseOffSpeed();
    
    void SetMouseOffSpeed(float value);
    
    Zilch::Real4 GetBackgroundColor();
    
    void SetBackgroundColor(const Zilch::Real4& value);
    
    unsigned char mValue[52];
    
  protected:
    ViewportMenu_(Zilch::NoType none) : ZeroObject(none) {}
    ZilchNoCopy(ViewportMenu_);
  };
  
  class SystemChildMode : public Zilch::ValueType
  {
  public:
    static SystemChildMode GetGenerational();
    
    static SystemChildMode GetSorted();
    
    static SystemChildMode GetIndependent();
    
    int mValue;
    SystemChildMode();
  };
  
  // Sprite Text is sprite based text box.
  class SpriteText : public BaseSprite
  {
  public:
    Zilch::HandleOf<Font> GetFont();
    
    void SetFont(Font* value);
    
    int GetFontSize();
    
    void SetFontSize(int value);
    
    Zilch::String GetText();
    
    void SetText(const Zilch::String& value);
    
    float GetPixelsPerUnit();
    
    void SetPixelsPerUnit(float value);
    
    bool GetSmoothing();
    
    void SetSmoothing(bool value);
    
    int GetAlign();
    
    void SetAlign(int value);
    
    // Get the size of the text block.
    Zilch::Real2 MeasureText();
    
    // Get the size that the sprite text would be if this was its text.
    Zilch::Real2 MeasureGivenText(const Zilch::String& text);
    
    // Get position of character in world space.
    Zilch::Real3 GetCharacterPosition(int a);
    
    unsigned char mValue[32];
    
  protected:
    SpriteText(Zilch::NoType none) : BaseSprite(none) {}
    ZilchNoCopy(SpriteText);
  };
  
  class GraphicsQuality : public Zilch::ValueType
  {
  public:
    static GraphicsQuality GetHigh();
    
    static GraphicsQuality GetLow();
    
    static GraphicsQuality GetMedium();
    
    int mValue;
    GraphicsQuality();
  };
  
  class HierarchyNameRange : public Zilch::ReferenceType
  {
  public:
    Zilch::HandleOf<HierarchyNameRange> GetAll();
    
    bool GetIsNotEmpty();
    
    Zilch::HandleOf<Cog> GetCurrent();
    
    void MoveNext();
    
    unsigned char mValue[12];
    
  protected:
    HierarchyNameRange(Zilch::NoType none) : Zilch::ReferenceType(none) {}
    ZilchNoCopy(HierarchyNameRange);
  };
  
  class WidgetListRange : public Zilch::ReferenceType
  {
  public:
    Zilch::HandleOf<WidgetListRange> GetAll();
    
    bool GetIsNotEmpty();
    
    Zilch::HandleOf<Widget> GetCurrent();
    
    void MoveNext();
    
    unsigned char mValue[8];
    
  protected:
    WidgetListRange(Zilch::NoType none) : Zilch::ReferenceType(none) {}
    ZilchNoCopy(WidgetListRange);
  };
  
  class Location : public Zilch::ValueType
  {
  public:
    static Location GetCenterRight();
    
    static Location GetBottomCenter();
    
    static Location GetBottomLeft();
    
    static Location GetTopLeft();
    
    static Location GetTopCenter();
    
    static Location GetTopRight();
    
    static Location GetCenter();
    
    static Location GetCenterLeft();
    
    static Location GetBottomRight();
    
    int mValue;
    Location();
  };
  
  // A wheel for a high speed physics based car. Used to manage the connection to the car body. The wheel contains most of the properties about how it interacts(eg. spring forces, friction etc).
  class PhysicsCarWheel : public Component
  {
  public:
    Zilch::HandleOf<PhysicsCar> GetCarBody();
    
    void SetCarBody(PhysicsCar* value);
    
    float GetSpringMin();
    
    void SetSpringMin(float value);
    
    float GetSpringStart();
    
    void SetSpringStart(float value);
    
    float GetSpringMax();
    
    void SetSpringMax(float value);
    
    float GetSpringRest();
    
    void SetSpringRest(float value);
    
    float GetDriveFactor();
    
    void SetDriveFactor(float value);
    
    float GetSteerFactor();
    
    void SetSteerFactor(float value);
    
    float GetRadius();
    
    void SetRadius(float value);
    
    float GetFrequencyHz();
    
    void SetFrequencyHz(float value);
    
    float GetDampeningCompressionRatio();
    
    void SetDampeningCompressionRatio(float value);
    
    float GetDampeningRelaxationRatio();
    
    void SetDampeningRelaxationRatio(float value);
    
    float GetMaxSpringForce();
    
    void SetMaxSpringForce(float value);
    
    float GetMaxBrakeStrength();
    
    void SetMaxBrakeStrength(float value);
    
    bool GetIsDriveWheel();
    
    void SetIsDriveWheel(bool value);
    
    bool GetIs2DWheel();
    
    void SetIs2DWheel(bool value);
    
    float GetForwardStaticFriction();
    
    void SetForwardStaticFriction(float value);
    
    float GetForwardDynamicFriction();
    
    void SetForwardDynamicFriction(float value);
    
    float GetSideStaticFriction();
    
    void SetSideStaticFriction(float value);
    
    float GetSideDynamicFriction();
    
    void SetSideDynamicFriction(float value);
    
    float GetGripScalar();
    
    void SetGripScalar(float value);
    
    float GetMaxSpringCompressionDistance();
    
    void SetMaxSpringCompressionDistance(float value);
    
    float GetMaxSpringRelaxationDistance();
    
    void SetMaxSpringRelaxationDistance(float value);
    
    Zilch::Real3 GetBodyStartPos();
    
    void SetBodyStartPos(const Zilch::Real3& value);
    
    Zilch::Quaternion GetPreRotation();
    
    void SetPreRotation(const Zilch::Quaternion& value);
    
    bool GetIsInContact();
    
    bool GetIsSliding();
    
    float GetRotation();
    
    float GetRotationalVelocity();
    
    float GetGrip();
    
    float GetNormalImpulse();
    
    float GetForwardImpulse();
    
    float GetSideImpulse();
    
    float GetSpringLength();
    
    Zilch::HandleOf<Cog> GetContactedObject();
    
    Zilch::Real3 GetContactPoint();
    
    Zilch::Real3 GetContactNormal();
    
    Zilch::Real3 GetWorldAxleAxis();
    
    Zilch::Real3 GetWorldForwardAxis();
    
    Zilch::Real3 GetWorldSpringAxis();
    
    Zilch::Real3 GetWorldLinearVelocity();
    
    Zilch::Real3 GetWorldAngularVelocity();
    
    // Spawns a proxy transform object so that the basis of the car can be set.
    void EditBasis();
    
    // Sets what directions the forward, axle and spring are on the wheel. The forward direction is taken from the x-axis of the basis passed in. Likewise the axle is from the y-axis and the spring is from the z-axis. Use BuildFromBases on quaternion to construct this.
    void SetWheelBasis(const Zilch::Quaternion& basis);
    
    unsigned char mValue[284];
    
  protected:
    PhysicsCarWheel(Zilch::NoType none) : Component(none) {}
    ZilchNoCopy(PhysicsCarWheel);
  };
  
  // A controller for a high speed physics based car. The car is controlled with a steer, gas and a brake coefficient. The car will raycast wheel positions to try to keep the wheels on the ground and then apply friction and normal forces to propel the car.
  class PhysicsCar : public Component
  {
  public:
    float GetSteer();
    
    void SetSteer(float value);
    
    float GetGas();
    
    void SetGas(float value);
    
    float GetBrake();
    
    void SetBrake(float value);
    
    float GetWheelFrictionSideRollCoef();
    
    void SetWheelFrictionSideRollCoef(float value);
    
    float GetWheelFrictionFrontRollCoef();
    
    void SetWheelFrictionFrontRollCoef(float value);
    
    bool GetDebugDraw();
    
    void SetDebugDraw(bool value);
    
    Zilch::HandleOf<PhysicsCarCarWheelRange> GetWheels();
    
    float GetMaxSpeed();
    
    void SetMaxSpeed(float value);
    
    float GetMaxTorque();
    
    void SetMaxTorque(float value);
    
    float GetGripScalar();
    
    void SetGripScalar(float value);
    
    bool GetAntiLockBrakes();
    
    void SetAntiLockBrakes(bool value);
    
    bool GetTorqueGovernor();
    
    void SetTorqueGovernor(bool value);
    
    bool GetActive();
    
    void SetActive(bool value);
    
    // The number of wheels currently in contact with an object.
    int NumberOfWheelsInContact();
    
    // Add the PhysicsCarWheel to be controlled by this car.
    void AddWheelCog(Cog* wheelCog);
    
    // Remove the PhysicsCarWheel from being controlled by this car.
    void RemoveWheelCog(Cog* wheelCog);
    
    unsigned char mValue[140];
    
  protected:
    PhysicsCar(Zilch::NoType none) : Component(none) {}
    ZilchNoCopy(PhysicsCar);
  };
  
  class LinearAxisJointBlock : public Zilch::ReferenceType
  {
  public:
    float GetSlop();
    
    void SetSlop(float value);
    
    float GetLinearBaumgarte();
    
    void SetLinearBaumgarte(float value);
    
    float GetAngularBaumgarte();
    
    void SetAngularBaumgarte(float value);
    
    float GetLinearErrorCorrection();
    
    void SetLinearErrorCorrection(float value);
    
    float GetAngularErrorCorrection();
    
    void SetAngularErrorCorrection(float value);
    
    int GetCorrectionType();
    
    void SetCorrectionType(int value);
    
    unsigned char mValue[32];
    
  protected:
    LinearAxisJointBlock(Zilch::NoType none) : Zilch::ReferenceType(none) {}
    ZilchNoCopy(LinearAxisJointBlock);
  };
  
  class HeightManipulationTool : public HeightMapSubTool
  {
  public:
    float GetRadius();
    
    void SetRadius(float value);
    
    float GetFeatherRadius();
    
    void SetFeatherRadius(float value);
    
    unsigned char mValue[8];
    
  protected:
    HeightManipulationTool(Zilch::NoType none) : HeightMapSubTool(none) {}
    ZilchNoCopy(HeightManipulationTool);
  };
  
  class RaiseLowerTool : public HeightManipulationTool
  {
  public:
    float GetStrength();
    
    void SetStrength(float value);
    
    bool GetRelative();
    
    void SetRelative(bool value);
    
    unsigned char mValue[8];
    
  protected:
    RaiseLowerTool(Zilch::NoType none) : HeightManipulationTool(none) {}
    ZilchNoCopy(RaiseLowerTool);
  };
  
  // Dispatched after receiving a connect response If accepted, our net peer ID is set immediately before this and a connect confirmation is sent after this If denied, our net peer ID is cleared and link is destroyed immediately after this.
  class NetPeerReceivedConnectResponse : public Event
  {
  public:
    Zilch::HandleOf<IpAddress> GetTheirIpAddress();
    
    void SetTheirIpAddress(IpAddress* value);
    
    Zilch::HandleOf<EventBundle> GetOurRequestBundle();
    
    void SetOurRequestBundle(EventBundle* value);
    
    int GetOurPendingUserAddRequestCount();
    
    void SetOurPendingUserAddRequestCount(int value);
    
    Zilch::HandleOf<IpAddress> GetOurIpAddress();
    
    void SetOurIpAddress(IpAddress* value);
    
    ConnectResponse GetTheirConnectResponse();
    
    void SetTheirConnectResponse(ConnectResponse value);
    
    Zilch::HandleOf<EventBundle> GetTheirResponseBundle();
    
    void SetTheirResponseBundle(EventBundle* value);
    
    int GetOurNetPeerId();
    
    void SetOurNetPeerId(int value);
    
    unsigned char mValue[372];
    
  protected:
    NetPeerReceivedConnectResponse(Zilch::NoType none) : Event(none) {}
    ZilchNoCopy(NetPeerReceivedConnectResponse);
  };
  
  class ConnectResponse : public Zilch::ValueType
  {
  public:
    static ConnectResponse GetAccept();
    
    static ConnectResponse GetDeny();
    
    static ConnectResponse GetDenyFull();
    
    static ConnectResponse GetDenyTimeout();
    
    int mValue;
    ConnectResponse();
  };
  
  class ZilchComponent : public Component
  {
  public:
    unsigned char mValue[12];
    
  protected:
    ZilchComponent();
    
    ZilchComponent(Zilch::NoType none) : Component(none) {}
    ZilchNoCopy(ZilchComponent);
  };
  
  class SplineAnimatorMode : public Zilch::ValueType
  {
  public:
    static SplineAnimatorMode GetSpring();
    
    static SplineAnimatorMode GetExact();
    
    int mValue;
    SplineAnimatorMode();
  };
  
  class StackLayout : public Layout
  {
  public:
    Zilch::Real2 GetSpacing();
    
    void SetSpacing(const Zilch::Real2& value);
    
    static Zilch::HandleOf<StackLayout> CreateRowLayout();
    
    unsigned char mValue[12];
    
  protected:
    StackLayout(Zilch::NoType none) : Layout(none) {}
    ZilchNoCopy(StackLayout);
  };
  
  class LayoutDirection : public Zilch::ValueType
  {
  public:
    static LayoutDirection GetTopToBottom();
    
    static LayoutDirection GetBottomToTop();
    
    static LayoutDirection GetLeftToRight();
    
    static LayoutDirection GetRightToLeft();
    
    int mValue;
    LayoutDirection();
  };
  
  class Sphere : public Zilch::ValueType
  {
  public:
    Zilch::Real3 GetCenter();
    
    void SetCenter(const Zilch::Real3& value);
    
    float GetRadius();
    
    void SetRadius(float value);
    
    bool Overlap(Sphere __0);
    
    float GetVolume();
    
    float GetSurfaceArea();
    
    unsigned char mValue[16];
    Sphere();
  };
  
  // Graphical Event for visibility.
  class GraphicalEvent : public Event
  {
  public:
    Zilch::HandleOf<Cog> GetViewingObject();
    
    void SetViewingObject(Cog* value);
    
    unsigned char mValue[4];
    
  protected:
    GraphicalEvent(Zilch::NoType none) : Event(none) {}
    ZilchNoCopy(GraphicalEvent);
  };
  
  class MaterialBlock : public ZeroObject
  {
  public:
    unsigned char mValue[8];
    
  protected:
    MaterialBlock(Zilch::NoType none) : ZeroObject(none) {}
    ZilchNoCopy(MaterialBlock);
  };
  
  class Lambert : public MaterialBlock
  {
  public:
    
  protected:
    Lambert(Zilch::NoType none) : MaterialBlock(none) {}
    ZilchNoCopy(Lambert);
  };
  
  class IntegrationMethods : public Zilch::ValueType
  {
  public:
    static IntegrationMethods GetEuler();
    
    static IntegrationMethods GetRk4();
    
    static IntegrationMethods GetVerlet();
    
    static IntegrationMethods GetRk2();
    
    int mValue;
    IntegrationMethods();
  };
  
  // Particle Animator Interface. Particle Animators effect partices in the system.
  class ParticleAnimator : public Component
  {
  public:
    unsigned char mValue[16];
    
  protected:
    ParticleAnimator(Zilch::NoType none) : Component(none) {}
    ZilchNoCopy(ParticleAnimator);
  };
  
  class ParticleCollisionPlane : public ParticleAnimator
  {
  public:
    float GetRestitution();
    
    void SetRestitution(float value);
    
    unsigned char mValue[4];
    
  protected:
    ParticleCollisionPlane(Zilch::NoType none) : ParticleAnimator(none) {}
    ZilchNoCopy(ParticleCollisionPlane);
  };
  
  class TextEvent : public Event
  {
  public:
    Zilch::String GetText();
    
    void SetText(const Zilch::String& value);
    
    unsigned char mValue[4];
    
  protected:
    TextEvent(Zilch::NoType none) : Event(none) {}
    ZilchNoCopy(TextEvent);
  };
  
  class BaseCastFilter : public Zilch::ReferenceType
  {
  public:
    int GetBitFlags();
    
    void SetBitFlags(int value);
    
    bool GetIgnoreStatic();
    
    void SetIgnoreStatic(bool value);
    
    bool GetIgnoreDynamic();
    
    void SetIgnoreDynamic(bool value);
    
    bool GetIgnoreKinematic();
    
    void SetIgnoreKinematic(bool value);
    
    bool GetIgnoreGhost();
    
    void SetIgnoreGhost(bool value);
    
    bool GetIgnoreChildren();
    
    void SetIgnoreChildren(bool value);
    
    bool IsSet(int __0);
    
    void Set(int __0);
    
    void Clear(int __0);
    
    void SetGroupId(int __0);
    
    unsigned char mValue[16];
    
  protected:
    BaseCastFilter(Zilch::NoType none) : Zilch::ReferenceType(none) {}
    ZilchNoCopy(BaseCastFilter);
  };
  
  class CastFilter : public BaseCastFilter
  {
  public:
    Zilch::HandleOf<CollisionGroup> GetCollisionGroup();
    
    void SetCollisionGroup(CollisionGroup* value);
    
    Zilch::HandleOf<Cog> GetIgnoreCog();
    
    void SetIgnoreCog(Cog* value);
    
    Zilch::HandleOf<ZeroObject> GetCallbackObject();
    
    void SetCallbackObject(ZeroObject* value);
    
    Zilch::String GetCallbackEventName();
    
    void SetCallbackEventName(const Zilch::String& value);
    
    unsigned char mValue[12];
    
  protected:
    CastFilter(Zilch::NoType none) : BaseCastFilter(none) {}
    ZilchNoCopy(CastFilter);
  };
  
  // A collision group object. Most implementation data is handled in an instance. A collision group just maintains the user defined(and readable) name for the group.
  class CollisionGroup : public Resource
  {
  public:
    static Zilch::HandleOf<CollisionGroup> Find(const Zilch::String& name);
    
    
  protected:
    CollisionGroup(Zilch::NoType none) : Resource(none) {}
    ZilchNoCopy(CollisionGroup);
  };
  
  class AttachType : public Zilch::ValueType
  {
  public:
    static AttachType GetNormal();
    
    static AttachType GetDirect();
    
    int mValue;
    AttachType();
  };
  
  class ParticleTorusRoller : public ParticleAnimator
  {
  public:
    float GetMajorRadius();
    
    void SetMajorRadius(float value);
    
    float GetSpeed();
    
    void SetSpeed(float value);
    
    unsigned char mValue[12];
    
  protected:
    ParticleTorusRoller(Zilch::NoType none) : ParticleAnimator(none) {}
    ZilchNoCopy(ParticleTorusRoller);
  };
  
  // Event type used by the GameSession.
  class GameEvent : public Event
  {
  public:
    Zilch::String GetLevelName();
    
    void SetLevelName(const Zilch::String& value);
    
    Zilch::HandleOf<GameSession> GetGame();
    
    void SetGame(GameSession* value);
    
    bool GetHandled();
    
    void SetHandled(bool value);
    
    unsigned char mValue[16];
    
  protected:
    GameEvent(Zilch::NoType none) : Event(none) {}
    ZilchNoCopy(GameEvent);
  };
  
  // The GameSession manages all spaces and data for a a game.
  class GameSession : public Cog
  {
  public:
    Zilch::HandleOf<SpaceMapvalueRange> GetAllSpaces();
    
    bool GetFocused();
    
    Zilch::Real2 GetResolution();
    
    bool GetFullScreen();
    
    bool GetEditing();
    
    // Start the game.
    void Start();
    
    // Quit the game and exit the engine if not in editor.
    void Quit();
    
    // Request to quit sending out the GameRequestQuit event.
    void RequestQuit();
    
    // Create a space in the game. Use the archetype's name.
    Zilch::HandleOf<Space> CreateSpace(Archetype* archetype);
    
    // Create a space from an archetype with the given name.
    Zilch::HandleOf<Space> CreateNamedSpace(const Zilch::String& name, Archetype* archetype);
    
    // Change display mode of primary window.
    void ChangeResolution(bool fullscreen, const Zilch::Real2& resolution);
    
    // Find a named space.
    Zilch::HandleOf<Space> FindSpaceByName(const Zilch::String& name);
    
    Zilch::HandleOf<SpaceMapvalueRange> FindAllSpacesByName(const Zilch::String& name);
    
    Zilch::HandleOf<ProjectDescription> GetProjectDescription();
    
    Zilch::HandleOf<JointTool2D> GetJointTool2D();
    
    Zilch::HandleOf<SharedContent> GetSharedContent();
    
    Zilch::HandleOf<RenderToTexture> GetRenderToTexture();
    
    Zilch::HandleOf<MultiSprite> GetMultiSprite();
    
    Zilch::HandleOf<FlowEffect> GetFlowEffect();
    
    Zilch::HandleOf<Transform> GetTransform();
    
    Zilch::HandleOf<ZilchState> GetZilchState();
    
    Zilch::HandleOf<ConvexMeshCollider> GetConvexMeshCollider();
    
    Zilch::HandleOf<ActionSpace> GetActionSpace();
    
    Zilch::HandleOf<NetSpace> GetNetSpace();
    
    Zilch::HandleOf<MeshBender> GetMeshBender();
    
    Zilch::HandleOf<RuntimeSpline> GetRuntimeSpline();
    
    Zilch::HandleOf<LevelPath> GetLevelPath();
    
    Zilch::HandleOf<ParticleAttractor> GetParticleAttractor();
    
    Zilch::HandleOf<PhysicsSpace> GetPhysicsSpace();
    
    Zilch::HandleOf<GravityEffect> GetGravityEffect();
    
    Zilch::HandleOf<PointMassSystem> GetPointMassSystem();
    
    Zilch::HandleOf<NetUserCreator> GetNetUserCreator();
    
    Zilch::HandleOf<Projector> GetProjector();
    
    Zilch::HandleOf<ForceEffect> GetForceEffect();
    
    Zilch::HandleOf<AmbientLight> GetAmbientLight();
    
    Zilch::HandleOf<CogRotateGizmo> GetCogRotateGizmo();
    
    Zilch::HandleOf<HeightMapTool> GetHeightMapTool();
    
    Zilch::HandleOf<SphereCollider> GetSphereCollider();
    
    Zilch::HandleOf<Hierarchy> GetHierarchy();
    
    Zilch::HandleOf<StickJoint> GetStickJoint();
    
    Zilch::HandleOf<LockStepMouse> GetLockStepMouse();
    
    Zilch::HandleOf<LinearAxisJoint> GetLinearAxisJoint();
    
    Zilch::HandleOf<CreationTool> GetCreationTool();
    
    Zilch::HandleOf<EditorSettings> GetEditorSettings();
    
    Zilch::HandleOf<ClothSystem> GetClothSystem();
    
    Zilch::HandleOf<RecentProjects> GetRecentProjects();
    
    Zilch::HandleOf<GridDraw> GetGridDraw();
    
    Zilch::HandleOf<DynamicModel> GetDynamicModel();
    
    Zilch::HandleOf<SplineParticleAnimator> GetSplineParticleAnimator();
    
    Zilch::HandleOf<RingGizmo> GetRingGizmo();
    
    Zilch::HandleOf<Sprite> GetSprite();
    
    Zilch::HandleOf<GeometryPointManipulator> GetGeometryPointManipulator();
    
    Zilch::HandleOf<Orientation> GetOrientation();
    
    Zilch::HandleOf<PhyGunJoint> GetPhyGunJoint();
    
    Zilch::HandleOf<MeshParticleEmitter> GetMeshParticleEmitter();
    
    Zilch::HandleOf<UprightJoint> GetUprightJoint();
    
    Zilch::HandleOf<SimpleSocket> GetSimpleSocket();
    
    Zilch::HandleOf<WebRequester> GetWebRequester();
    
    Zilch::HandleOf<DynamicMotor> GetDynamicMotor();
    
    Zilch::HandleOf<MotionBlur> GetMotionBlur();
    
    Zilch::HandleOf<ArrowGizmo> GetArrowGizmo();
    
    Zilch::HandleOf<HeightMapCollider> GetHeightMapCollider();
    
    Zilch::HandleOf<ManipulatorJoint> GetManipulatorJoint();
    
    Zilch::HandleOf<CameraViewport> GetCameraViewport();
    
    Zilch::HandleOf<DefaultViewportSetup> GetDefaultViewportSetup();
    
    Zilch::HandleOf<LockStepSyncChecker> GetLockStepSyncChecker();
    
    Zilch::HandleOf<TorqueEffect> GetTorqueEffect();
    
    Zilch::HandleOf<LauncherConfig> GetLauncherConfig();
    
    Zilch::HandleOf<AnimationGraph> GetAnimationGraph();
    
    Zilch::HandleOf<PointMassAnchorConnection> GetPointMassAnchorConnection();
    
    Zilch::HandleOf<SkinnedModel> GetSkinnedModel();
    
    Zilch::HandleOf<UserConfig> GetUserConfig();
    
    Zilch::HandleOf<BuoyancyEffect> GetBuoyancyEffect();
    
    Zilch::HandleOf<EditorBone> GetEditorBone();
    
    Zilch::HandleOf<LockStepSpace> GetLockStepSpace();
    
    Zilch::HandleOf<TileMap> GetTileMap();
    
    Zilch::HandleOf<IgnoreSpaceEffects> GetIgnoreSpaceEffects();
    
    Zilch::HandleOf<JointMotor> GetJointMotor();
    
    Zilch::HandleOf<SpriteText> GetSpriteText();
    
    Zilch::HandleOf<TimeConfig> GetTimeConfig();
    
    Zilch::HandleOf<ManipulatorTool> GetManipulatorTool();
    
    Zilch::HandleOf<EditorCameraController> GetEditorCameraController();
    
    Zilch::HandleOf<SizerGizmo> GetSizerGizmo();
    
    Zilch::HandleOf<JointDebugDrawConfig> GetJointDebugDrawConfig();
    
    Zilch::HandleOf<UniversalJoint> GetUniversalJoint();
    
    Zilch::HandleOf<ObjectLinkAnchor> GetObjectLinkAnchor();
    
    Zilch::HandleOf<NavGrid> GetNavGrid();
    
    Zilch::HandleOf<LockStepKeyboard> GetLockStepKeyboard();
    
    Zilch::HandleOf<PrismaticJoint> GetPrismaticJoint();
    
    Zilch::HandleOf<RandomContext> GetRandomContext();
    
    Zilch::HandleOf<DynamicMeshCollider> GetDynamicMeshCollider();
    
    Zilch::HandleOf<PhysicsCarWheel> GetPhysicsCarWheel();
    
    Zilch::HandleOf<VortexEffect> GetVortexEffect();
    
    Zilch::HandleOf<EditorConfig> GetEditorConfig();
    
    Zilch::HandleOf<PhysicsCar> GetPhysicsCar();
    
    Zilch::HandleOf<BoxParticleEmitter> GetBoxParticleEmitter();
    
    Zilch::HandleOf<ParticleCollisionPlane> GetParticleCollisionPlane();
    
    Zilch::HandleOf<PrismaticJoint2d> GetPrismaticJoint2d();
    
    Zilch::HandleOf<RigidBody> GetRigidBody();
    
    Zilch::HandleOf<WindEffect> GetWindEffect();
    
    Zilch::HandleOf<Ribbon> GetRibbon();
    
    Zilch::HandleOf<ParticleTorusRoller> GetParticleTorusRoller();
    
    Zilch::HandleOf<LevelGeometry> GetLevelGeometry();
    
    Zilch::HandleOf<RevoluteJoint2d> GetRevoluteJoint2d();
    
    Zilch::HandleOf<JointLimit> GetJointLimit();
    
    Zilch::HandleOf<NetUser> GetNetUser();
    
    Zilch::HandleOf<Reactive> GetReactive();
    
    Zilch::HandleOf<WheelJoint> GetWheelJoint();
    
    Zilch::HandleOf<WeldJoint> GetWeldJoint();
    
    Zilch::HandleOf<Fog> GetFog();
    
    Zilch::HandleOf<MainConfig> GetMainConfig();
    
    Zilch::HandleOf<DefaultGameSetup> GetDefaultGameSetup();
    
    Zilch::HandleOf<LockStepGame> GetLockStepGame();
    
    Zilch::HandleOf<Gizmo> GetGizmo();
    
    Zilch::HandleOf<MassOverride> GetMassOverride();
    
    Zilch::HandleOf<ThrustEffect> GetThrustEffect();
    
    Zilch::HandleOf<ObjectLink> GetObjectLink();
    
    Zilch::HandleOf<DynamicMeshSaver> GetDynamicMeshSaver();
    
    Zilch::HandleOf<VoxelChunk> GetVoxelChunk();
    
    Zilch::HandleOf<SoundListener> GetSoundListener();
    
    Zilch::HandleOf<SoundEmitter> GetSoundEmitter();
    
    Zilch::HandleOf<AttachSystem> GetAttachSystem();
    
    Zilch::HandleOf<ScreenDrops> GetScreenDrops();
    
    Zilch::HandleOf<RevoluteJoint> GetRevoluteJoint();
    
    Zilch::HandleOf<Shadow> GetShadow();
    
    Zilch::HandleOf<ProxyControlPoint> GetProxyControlPoint();
    
    Zilch::HandleOf<ParticleColorAnimator> GetParticleColorAnimator();
    
    Zilch::HandleOf<DynamicMeshGenerator> GetDynamicMeshGenerator();
    
    Zilch::HandleOf<GeometryMesh3D> GetGeometryMesh3D();
    
    Zilch::HandleOf<DynamicMesh> GetDynamicMesh();
    
    Zilch::HandleOf<PointForceEffect> GetPointForceEffect();
    
    Zilch::HandleOf<CapsuleCollider> GetCapsuleCollider();
    
    Zilch::HandleOf<Joint> GetJoint();
    
    Zilch::HandleOf<ParentingTool> GetParentingTool();
    
    Zilch::HandleOf<Light> GetLight();
    
    Zilch::HandleOf<VoxelChunkMaterials> GetVoxelChunkMaterials();
    
    Zilch::HandleOf<SoundSpace> GetSoundSpace();
    
    Zilch::HandleOf<TransformProxyObject> GetTransformProxyObject();
    
    Zilch::HandleOf<HeightMapModel> GetHeightMapModel();
    
    Zilch::HandleOf<SpriteTextBlock> GetSpriteTextBlock();
    
    Zilch::HandleOf<CogTransformGizmo> GetCogTransformGizmo();
    
    Zilch::HandleOf<CogSizerGizmo> GetCogSizerGizmo();
    
    Zilch::HandleOf<MeshCollider> GetMeshCollider();
    
    Zilch::HandleOf<MultiConvexMeshCollider> GetMultiConvexMeshCollider();
    
    Zilch::HandleOf<RelativeVelocityJoint> GetRelativeVelocityJoint();
    
    Zilch::HandleOf<SpriteBeam> GetSpriteBeam();
    
    Zilch::HandleOf<GodRayLight> GetGodRayLight();
    
    Zilch::HandleOf<Attractive> GetAttractive();
    
    Zilch::HandleOf<EditorIcon> GetEditorIcon();
    
    Zilch::HandleOf<SelectTool> GetSelectTool();
    
    Zilch::HandleOf<GraphicsSpace> GetGraphicsSpace();
    
    Zilch::HandleOf<GeometryMesh> GetGeometryMesh();
    
    Zilch::HandleOf<ScreenWarpRing> GetScreenWarpRing();
    
    Zilch::HandleOf<Model> GetModel();
    
    Zilch::HandleOf<RayTraceProperties> GetRayTraceProperties();
    
    Zilch::HandleOf<SphericalParticleEmitter> GetSphericalParticleEmitter();
    
    Zilch::HandleOf<DefaultCamera> GetDefaultCamera();
    
    Zilch::HandleOf<ParticleWander> GetParticleWander();
    
    Zilch::HandleOf<MainWindowConfig> GetMainWindowConfig();
    
    Zilch::HandleOf<RopeCreator> GetRopeCreator();
    
    Zilch::HandleOf<ParticleSystem> GetParticleSystem();
    
    Zilch::HandleOf<LineParticleEmitter> GetLineParticleEmitter();
    
    Zilch::HandleOf<Area> GetArea();
    
    Zilch::HandleOf<ReactiveSpace> GetReactiveSpace();
    
    Zilch::HandleOf<LinearParticleAnimator> GetLinearParticleAnimator();
    
    Zilch::HandleOf<DynamicController> GetDynamicController();
    
    Zilch::HandleOf<JointSpring> GetJointSpring();
    
    Zilch::HandleOf<RayTracedPhysicsProvider> GetRayTracedPhysicsProvider();
    
    Zilch::HandleOf<Camera> GetCamera();
    
    Zilch::HandleOf<TranslateTool> GetTranslateTool();
    
    Zilch::HandleOf<ParticleTwister> GetParticleTwister();
    
    Zilch::HandleOf<GizmoDrag> GetGizmoDrag();
    
    Zilch::HandleOf<SimpleSound> GetSimpleSound();
    
    Zilch::HandleOf<MouseCapture> GetMouseCapture();
    
    Zilch::HandleOf<TranslateGizmo> GetTranslateGizmo();
    
    Zilch::HandleOf<GeometryPainter2D> GetGeometryPainter2D();
    
    Zilch::HandleOf<TileEditor2D> GetTileEditor2D();
    
    Zilch::HandleOf<CustomJoint> GetCustomJoint();
    
    Zilch::HandleOf<WheelJoint2d> GetWheelJoint2d();
    
    Zilch::HandleOf<RayTracedGraphicsProvider> GetRayTracedGraphicsProvider();
    
    Zilch::HandleOf<EditorRenderer> GetEditorRenderer();
    
    Zilch::HandleOf<Ssao> GetSsao();
    
    Zilch::HandleOf<CameraViewports> GetCameraViewports();
    
    Zilch::HandleOf<Collider> GetCollider();
    
    Zilch::HandleOf<JointTool3D> GetJointTool3D();
    
    Zilch::HandleOf<PositionJoint> GetPositionJoint();
    
    Zilch::HandleOf<Attractor> GetAttractor();
    
    Zilch::HandleOf<GizmoSpace> GetGizmoSpace();
    
    Zilch::HandleOf<NetPeer> GetNetPeer();
    
    Zilch::HandleOf<NavMesh> GetNavMesh();
    
    Zilch::HandleOf<AutoOrientToVelocity> GetAutoOrientToVelocity();
    
    Zilch::HandleOf<PulleyJoint> GetPulleyJoint();
    
    Zilch::HandleOf<ParticleGradientAnimator> GetParticleGradientAnimator();
    
    Zilch::HandleOf<DragEffect> GetDragEffect();
    
    Zilch::HandleOf<ModelVisualizer> GetModelVisualizer();
    
    Zilch::HandleOf<DeferredRenderer> GetDeferredRenderer();
    
    Zilch::HandleOf<Feelers> GetFeelers();
    
    Zilch::HandleOf<Project> GetProject();
    
    Zilch::HandleOf<HeightMap> GetHeightMap();
    
    Zilch::HandleOf<ObjectSystem> GetObjectSystem();
    
    Zilch::HandleOf<LightningParticleEmitter> GetLightningParticleEmitter();
    
    Zilch::HandleOf<RotateTool> GetRotateTool();
    
    Zilch::HandleOf<ForwardRenderer> GetForwardRenderer();
    
    Zilch::HandleOf<PointMassAnchor> GetPointMassAnchor();
    
    Zilch::HandleOf<SpriteParticleSystem> GetSpriteParticleSystem();
    
    Zilch::HandleOf<ScaleTool> GetScaleTool();
    
    Zilch::HandleOf<ParticleCollisionHeightmap> GetParticleCollisionHeightmap();
    
    Zilch::HandleOf<RotationProxy> GetRotationProxy();
    
    Zilch::HandleOf<CogScaleGizmo> GetCogScaleGizmo();
    
    Zilch::HandleOf<ZilchPluginConfig> GetZilchPluginConfig();
    
    Zilch::HandleOf<JointConfigOverride> GetJointConfigOverride();
    
    Zilch::HandleOf<Blocking> GetBlocking();
    
    Zilch::HandleOf<CustomCollisionEventTracker> GetCustomCollisionEventTracker();
    
    Zilch::HandleOf<SplineParticleEmitter> GetSplineParticleEmitter();
    
    Zilch::HandleOf<TimeSpace> GetTimeSpace();
    
    Zilch::HandleOf<FixedAngleJoint> GetFixedAngleJoint();
    
    Zilch::HandleOf<CustomPhysicsEffect> GetCustomPhysicsEffect();
    
    Zilch::HandleOf<LockStepSyncIgnore> GetLockStepSyncIgnore();
    
    Zilch::HandleOf<BoxCollider> GetBoxCollider();
    
    Zilch::HandleOf<ContentConfig> GetContentConfig();
    
    Zilch::HandleOf<FixedAspectRatio> GetFixedAspectRatio();
    
    Zilch::HandleOf<PointGravityEffect> GetPointGravityEffect();
    
    Zilch::HandleOf<TextEditorConfig> GetTextEditorConfig();
    
    Zilch::HandleOf<NetObject> GetNetObject();
    
    Zilch::HandleOf<SimpleAnimation> GetSimpleAnimation();
    
    Zilch::HandleOf<DeveloperConfig> GetDeveloperConfig();
    
    Zilch::HandleOf<SkyBox> GetSkyBox();
    
    Zilch::HandleOf<LockStepGamepads> GetLockStepGamepads();
    
    Zilch::HandleOf<EllipsoidCollider> GetEllipsoidCollider();
    
    Zilch::HandleOf<SquareGizmo> GetSquareGizmo();
    
    Zilch::HandleOf<CogTranslateGizmo> GetCogTranslateGizmo();
    
    Zilch::HandleOf<Wandering> GetWandering();
    
    Zilch::HandleOf<CylinderCollider> GetCylinderCollider();
    
    Zilch::HandleOf<Region> GetRegion();
    
    Zilch::HandleOf<GraphicsConfig> GetGraphicsConfig();
    
    Zilch::HandleOf<ScreenDropGenerator> GetScreenDropGenerator();
    
    Zilch::HandleOf<GearJoint> GetGearJoint();
    
    unsigned char mValue[56];
    
  protected:
    GameSession(Zilch::NoType none) : Cog(none) {}
    ZilchNoCopy(GameSession);
  };
  
  // A limit for a joint. Used to add a min/max bounds to a joint. When the joint is in between the min/max bounds, the"limited" portion will be ignored(The stick will not solve when it is in between the bounds, making it a rope). See each joint for a description of how it reacts to a limit.
  class JointLimit : public Component
  {
  public:
    bool GetActive();
    
    void SetActive(bool value);
    
    float GetLowerLimit();
    
    void SetLowerLimit(float value);
    
    float GetUpperLimit();
    
    void SetUpperLimit(float value);
    
    int GetAtomIds();
    
    void SetAtomIds(int value);
    
    unsigned char mValue[20];
    
  protected:
    JointLimit(Zilch::NoType none) : Component(none) {}
    ZilchNoCopy(JointLimit);
  };
  
  class BeamGeometryMode : public Zilch::ValueType
  {
  public:
    static BeamGeometryMode GetViewAligned();
    
    static BeamGeometryMode GetMode2D();
    
    int mValue;
    BeamGeometryMode();
  };
  
  // A revolute joint is used to create a wheel or a hinge. This is the 2d version of the revolute joint. This joint is used in 2d mode for increased speed and stability. The motor axis is automatically set to the z axis, as that is the only axis objects can rotate upon. Also, the translation on the z axis is ignored so that objects can be arbitrarily far apart. Add on definitions: Limit: A limit will provide a min/max angle on the motor axis. Motor: A motor will turn the objects about the motor axis. Spring: A spring will make the motor axis springy at the limits.
  class RevoluteJoint2d : public Joint
  {
  public:
    Zilch::Real3 GetLocalPointA();
    
    void SetLocalPointA(const Zilch::Real3& value);
    
    Zilch::Real3 GetLocalPointB();
    
    void SetLocalPointB(const Zilch::Real3& value);
    
    Zilch::Real3 GetWorldPointA();
    
    void SetWorldPointA(const Zilch::Real3& value);
    
    Zilch::Real3 GetWorldPointB();
    
    void SetWorldPointB(const Zilch::Real3& value);
    
    // Sets the position of the anchor on object A and B given a position in world space
    void SetWorldPoints(const Zilch::Real3& __0);
    
    unsigned char mValue[104];
    
  protected:
    RevoluteJoint2d(Zilch::NoType none) : Joint(none) {}
    ZilchNoCopy(RevoluteJoint2d);
  };
  
  class GizmoGrab : public Zilch::ValueType
  {
  public:
    static GizmoGrab GetHold();
    
    static GizmoGrab GetToggle();
    
    int mValue;
    GizmoGrab();
  };
  
  class BlendMode : public Zilch::ValueType
  {
  public:
    static BlendMode GetMultiplyAdd();
    
    static BlendMode GetMultiply();
    
    static BlendMode GetAlpha();
    
    static BlendMode GetAdditive();
    
    static BlendMode GetColorAdditive();
    
    static BlendMode GetNone();
    
    int mValue;
    BlendMode();
  };
  
  class ContentHistory : public Zilch::ReferenceType
  {
  public:
    unsigned char mValue[24];
    
  protected:
    ContentHistory(Zilch::NoType none) : Zilch::ReferenceType(none) {}
    ZilchNoCopy(ContentHistory);
  };
  
  class HotKeyBinding : public Zilch::ReferenceType
  {
  public:
    int GetModifier1();
    
    void SetModifier1(int value);
    
    int GetModifier2();
    
    void SetModifier2(int value);
    
    int GetMainKey();
    
    void SetMainKey(int value);
    
    unsigned char mValue[16];
    
  protected:
    HotKeyBinding(Zilch::NoType none) : Zilch::ReferenceType(none) {}
    ZilchNoCopy(HotKeyBinding);
  };
  
  // Reactive component allows the object to react to mouse events. Uses the collision volume of the collider on this composition for picking.
  class Reactive : public Component
  {
  public:
    bool GetActive();
    
    void SetActive(bool value);
    
    bool GetCaptureMouse();
    
    void SetCaptureMouse(bool value);
    
    unsigned char mValue[8];
    
  protected:
    Reactive(Zilch::NoType none) : Component(none) {}
    ZilchNoCopy(Reactive);
  };
  
  // This material describes properties of a collider mainly used during collision.
  class PhysicsMaterial : public Resource
  {
  public:
    float GetDensity();
    
    void SetDensity(float value);
    
    float GetRestitution();
    
    void SetRestitution(float value);
    
    float GetFriction();
    
    void SetFriction(float value);
    
    bool GetHighPriority();
    
    void SetHighPriority(bool value);
    
    static Zilch::HandleOf<PhysicsMaterial> Find(const Zilch::String& name);
    
    unsigned char mValue[24];
    
  protected:
    PhysicsMaterial(Zilch::NoType none) : Resource(none) {}
    ZilchNoCopy(PhysicsMaterial);
  };
  
  // A weld joint is used to lock to position and orientation of two objects together. This can be useful to lock two objects together. However, welds should generally not be used as they are computationally more expensive and less rigid than using composites. The only uses for welds are for quick connections or connections that are desired to not be fully rigid. Also, while it can be done with composites too, welds can be used to model the breaking apart of two objects. Limits, motors and springs should most likely not be used on this. Add on definitions: Limit: A limit will provide a min/max translation on the x,y and z axes. Motor: A motor will attempt to drive the rotation on the x,y and z axes. Spring: A spring will make the x,y and z axis springy.
  class WeldJoint : public Joint
  {
  public:
    Zilch::Real3 GetLocalPointA();
    
    void SetLocalPointA(const Zilch::Real3& value);
    
    Zilch::Real3 GetLocalPointB();
    
    void SetLocalPointB(const Zilch::Real3& value);
    
    Zilch::Real3 GetWorldPointA();
    
    void SetWorldPointA(const Zilch::Real3& value);
    
    Zilch::Real3 GetWorldPointB();
    
    void SetWorldPointB(const Zilch::Real3& value);
    
    Zilch::Quaternion GetLocalAngleA();
    
    void SetLocalAngleA(const Zilch::Quaternion& value);
    
    Zilch::Quaternion GetLocalAngleB();
    
    void SetLocalAngleB(const Zilch::Quaternion& value);
    
    // Sets the position of the anchor on object A and B given a position in world space
    void SetWorldPoints(const Zilch::Real3& __0);
    
    unsigned char mValue[104];
    
  protected:
    WeldJoint(Zilch::NoType none) : Joint(none) {}
    ZilchNoCopy(WeldJoint);
  };
  
  class JointToolTypes3D : public Zilch::ValueType
  {
  public:
    static JointToolTypes3D GetLinearAxisJoint();
    
    static JointToolTypes3D GetUniversalJoint();
    
    static JointToolTypes3D GetObjectLink();
    
    static JointToolTypes3D GetUprightJoint();
    
    static JointToolTypes3D GetPrismaticJoint();
    
    static JointToolTypes3D GetPositionJoint();
    
    static JointToolTypes3D GetWheelJoint();
    
    static JointToolTypes3D GetFixedAngleJoint();
    
    static JointToolTypes3D GetWeldJoint();
    
    static JointToolTypes3D GetGearJoint();
    
    static JointToolTypes3D GetPulleyJoint();
    
    static JointToolTypes3D GetStickJoint();
    
    static JointToolTypes3D GetRevoluteJoint();
    
    int mValue;
    JointToolTypes3D();
  };
  
  class NodeGraph_ : public ZeroObject
  {
  public:
    Zilch::Real4 GetBorderColor();
    
    void SetBorderColor(const Zilch::Real4& value);
    
    Zilch::Real4 GetEdgeColor();
    
    void SetEdgeColor(const Zilch::Real4& value);
    
    Zilch::Real4 GetEdgeErrorColor();
    
    void SetEdgeErrorColor(const Zilch::Real4& value);
    
    Zilch::Real4 GetEdgeHighlightColor();
    
    void SetEdgeHighlightColor(const Zilch::Real4& value);
    
    Zilch::Real4 GetEdgeSelectColor();
    
    void SetEdgeSelectColor(const Zilch::Real4& value);
    
    Zilch::Real4 GetEdgeRunningColor();
    
    void SetEdgeRunningColor(const Zilch::Real4& value);
    
    float GetEdgeWidth();
    
    void SetEdgeWidth(float value);
    
    float GetEdgeExtrudeLength();
    
    void SetEdgeExtrudeLength(float value);
    
    int GetEdgeResolution();
    
    void SetEdgeResolution(int value);
    
    float GetEdgeHitTestDistance();
    
    void SetEdgeHitTestDistance(float value);
    
    int GetEdgeHitTestResolution();
    
    void SetEdgeHitTestResolution(int value);
    
    float GetFocusPanTime();
    
    void SetFocusPanTime(float value);
    
    Zilch::Real4 GetNodeColor();
    
    void SetNodeColor(const Zilch::Real4& value);
    
    Zilch::Real4 GetNodeHighlightColor();
    
    void SetNodeHighlightColor(const Zilch::Real4& value);
    
    Zilch::Real4 GetNodeErrorColor();
    
    void SetNodeErrorColor(const Zilch::Real4& value);
    
    Zilch::Real4 GetNodeSelectColor();
    
    void SetNodeSelectColor(const Zilch::Real4& value);
    
    Zilch::Real2 GetSocketSize();
    
    void SetSocketSize(const Zilch::Real2& value);
    
    Zilch::Real4 GetSocketColor();
    
    void SetSocketColor(const Zilch::Real4& value);
    
    Zilch::Real4 GetSocketTextColor();
    
    void SetSocketTextColor(const Zilch::Real4& value);
    
    Zilch::Real4 GetNodeHeaderColor();
    
    void SetNodeHeaderColor(const Zilch::Real4& value);
    
    Zilch::Real4 GetHeaderTextColor();
    
    void SetHeaderTextColor(const Zilch::Real4& value);
    
    Zilch::Real4 GetEditableHeaderTextColor();
    
    void SetEditableHeaderTextColor(const Zilch::Real4& value);
    
    unsigned char mValue[52];
    
  protected:
    NodeGraph_(Zilch::NoType none) : ZeroObject(none) {}
    ZilchNoCopy(NodeGraph_);
  };
  
  // Takes a snap shot of the current mass and inertia and overrides the object's mass so it can be resized while keeping it's old mass.
  class MassOverride : public Component
  {
  public:
    bool GetActive();
    
    void SetActive(bool value);
    
    float GetMass();
    
    void SetMass(float value);
    
    Zilch::Real3 GetLocalCenterOfMass();
    
    void SetLocalCenterOfMass(const Zilch::Real3& value);
    
    // Returns the diagonal of the inertia tensor. This is a hack for now with zero gravity.
    Zilch::Real3 GetInvInertiaLocalDiagonal(const Zilch::Quaternion& rotation);
    
    // Set the diagonal of the inertia tensor. This is a hack for now with zero gravity.
    void SetInvInertiaLocalDiagonal(const Zilch::Quaternion& rotation, const Zilch::Real3& invInertiaDiag);
    
    // Takes a new snapshot of the current mass and inertia.
    void RecomputeMass();
    
    // Frees the lock that this has on the center of mass and then recomputes the physically correct center of mass for this body.
    void ClearCenterOfMassLock();
    
    unsigned char mValue[104];
    
  protected:
    MassOverride(Zilch::NoType none) : Component(none) {}
    ZilchNoCopy(MassOverride);
  };
  
  class CogInitializerEvent : public Event
  {
  public:
    Zilch::HandleOf<CogInitializer> GetCogInitializer();
    
    void SetCogInitializer(CogInitializer* value);
    
    unsigned char mValue[4];
    
  protected:
    CogInitializerEvent(Zilch::NoType none) : Event(none) {}
    ZilchNoCopy(CogInitializerEvent);
  };
  
  class CogInitializer : public ZeroObject
  {
  public:
    Zilch::HandleOf<Space> GetSpace();
    
    Zilch::HandleOf<Cog> GetParent();
    
    Zilch::HandleOf<GameSession> GetGameSession();
    
    void DispatchEvent(const Zilch::String& __0, Event* __1);
    
    unsigned char mValue[68];
    
  protected:
    CogInitializer(Zilch::NoType none) : ZeroObject(none) {}
    ZilchNoCopy(CogInitializer);
  };
  
  class DynamicMeshSaver : public Component
  {
  public:
    unsigned char mValue[68];
    
  protected:
    DynamicMeshSaver(Zilch::NoType none) : Component(none) {}
    ZilchNoCopy(DynamicMeshSaver);
  };
  
  // MetaDropEvent for dropping MetaObjects.
  class MetaDropEvent : public Event
  {
  public:
    bool GetHandled();
    
    void SetHandled(bool value);
    
    bool GetFailed();
    
    void SetFailed(bool value);
    
    bool GetTesting();
    
    void SetTesting(bool value);
    
    Zilch::Real2 GetPosition();
    
    void SetPosition(const Zilch::Real2& value);
    
    Zilch::String GetResult();
    
    void SetResult(const Zilch::String& value);
    
    Zilch::HandleOf<ZeroObject> GetObject();
    
    Zilch::HandleOf<ZeroObject> GetMouseOverObject();
    
    Zilch::HandleOf<MouseEvent> GetMouseEvent();
    
    Zilch::HandleOf<ViewportMouseEvent> GetViewportMouseEvent();
    
    unsigned char mValue[88];
    
  protected:
    MetaDropEvent(Zilch::NoType none) : Event(none) {}
    ZilchNoCopy(MetaDropEvent);
  };
  
  // Mouse events for any every with the mouse.
  class MouseEvent : public Event
  {
  public:
    MouseButtons GetButton();
    
    void SetButton(MouseButtons value);
    
    bool GetButtonDown();
    
    void SetButtonDown(bool value);
    
    Zilch::Real2 GetPosition();
    
    void SetPosition(const Zilch::Real2& value);
    
    Zilch::Real2 GetMovement();
    
    void SetMovement(const Zilch::Real2& value);
    
    Zilch::Real2 GetScroll();
    
    void SetScroll(const Zilch::Real2& value);
    
    bool GetShiftPressed();
    
    void SetShiftPressed(bool value);
    
    bool GetAltPressed();
    
    void SetAltPressed(bool value);
    
    bool GetCtrlPressed();
    
    void SetCtrlPressed(bool value);
    
    Zilch::HandleOf<Mouse> GetMouse();
    
    bool GetHandledEvent();
    
    void SetHandledEvent(bool value);
    
    bool IsButtonDown(MouseButtons button);
    
    bool IsButtonUp(MouseButtons button);
    
    unsigned char mValue[56];
    
  protected:
    MouseEvent(Zilch::NoType none) : Event(none) {}
    ZilchNoCopy(MouseEvent);
  };
  
  // All mouse events that are forwarded to reactive components or the space use this event to add extra data.
  class ViewportMouseEvent : public MouseEvent
  {
  public:
    Ray GetWorldRay();
    
    void SetWorldRay(Ray value);
    
    Zilch::Real3 GetRayStart();
    
    void SetRayStart(const Zilch::Real3& value);
    
    Zilch::Real3 GetRayDirection();
    
    void SetRayDirection(const Zilch::Real3& value);
    
    Zilch::Real3 GetHitPosition();
    
    void SetHitPosition(const Zilch::Real3& value);
    
    Zilch::Real3 GetHitNormal();
    
    void SetHitNormal(const Zilch::Real3& value);
    
    Zilch::Real2 GetHitUv();
    
    void SetHitUv(const Zilch::Real2& value);
    
    bool GetHitUvProvided();
    
    void SetHitUvProvided(bool value);
    
    float GetHitDistance();
    
    void SetHitDistance(float value);
    
    Zilch::HandleOf<Cog> GetHitObject();
    
    Zilch::HandleOf<CameraViewport> GetCameraViewport();
    
    Zilch::HandleOf<Viewport> GetViewport();
    
    // The world mouse position on the z plane at depth.
    Zilch::Real3 ToWorldZPlane(float worldDepth);
    
    // The world mouse position on the view plane at view depth.
    Zilch::Real3 ToWorldViewPlane(float viewDepth);
    
    // The world mouse position on any arbitrary plane.
    Zilch::Real3 ToWorldPlane(const Zilch::Real3& worldPlaneNormal, const Zilch::Real3& worldPlanePosition);
    
    unsigned char mValue[116];
    
  protected:
    ViewportMouseEvent(Zilch::NoType none) : MouseEvent(none) {}
    ZilchNoCopy(ViewportMouseEvent);
  };
  
  // Dispatched after sending or receiving a disconnect notice Their net peer ID is released and link is destroyed immediately after this.
  class NetLinkDisconnected : public Event
  {
  public:
    int GetTheirNetPeerId();
    
    void SetTheirNetPeerId(int value);
    
    Zilch::HandleOf<IpAddress> GetTheirIpAddress();
    
    void SetTheirIpAddress(IpAddress* value);
    
    DisconnectReason GetDisconnectReason();
    
    void SetDisconnectReason(DisconnectReason value);
    
    Zilch::HandleOf<EventBundle> GetRequestBundle();
    
    void SetRequestBundle(EventBundle* value);
    
    TransmissionDirection GetDirection();
    
    void SetDirection(TransmissionDirection value);
    
    unsigned char mValue[192];
    
  protected:
    NetLinkDisconnected(Zilch::NoType none) : Event(none) {}
    ZilchNoCopy(NetLinkDisconnected);
  };
  
  class DisconnectReason : public Zilch::ValueType
  {
  public:
    static DisconnectReason GetTimeout();
    
    static DisconnectReason GetRequest();
    
    static DisconnectReason GetLatency();
    
    int mValue;
    DisconnectReason();
  };
  
  class TransmissionDirection : public Zilch::ValueType
  {
  public:
    static TransmissionDirection GetUnspecified();
    
    static TransmissionDirection GetIncoming();
    
    static TransmissionDirection GetOutgoing();
    
    int mValue;
    TransmissionDirection();
  };
  
  class Text : public Widget
  {
  public:
    Zilch::String GetText();
    
    void SetText(const Zilch::String& value);
    
    void SetMultiLine(bool __0);
    
    void FitToWidth(float __0, float __1);
    
    Zilch::Real2 GetBoundedSize(float __0, float __1);
    
    unsigned char mValue[40];
    
  protected:
    Text(Zilch::NoType none) : Widget(none) {}
    ZilchNoCopy(Text);
  };
  
  class ParticleSystem : public Graphical
  {
  public:
    int GetChildMode();
    
    void SetChildMode(int value);
    
    int GetSystemSpace();
    
    void SetSystemSpace(int value);
    
    int GetDrawOrder();
    
    void SetDrawOrder(int value);
    
    float GetWarmUpTime();
    
    void SetWarmUpTime(float value);
    
    Zilch::Real4 GetTint();
    
    void SetTint(const Zilch::Real4& value);
    
    unsigned char mValue[44];
    
  protected:
    ParticleSystem(Zilch::NoType none) : Graphical(none) {}
    ZilchNoCopy(ParticleSystem);
  };
  
  class AttachSystem : public ParticleSystem
  {
  public:
    
  protected:
    AttachSystem(Zilch::NoType none) : ParticleSystem(none) {}
    ZilchNoCopy(AttachSystem);
  };
  
  class TextureCompression : public Zilch::ValueType
  {
  public:
    static TextureCompression GetCompressed();
    
    static TextureCompression GetNone();
    
    int mValue;
    TextureCompression();
  };
  
  class MaterialEditorOnly : public MaterialBlock
  {
  public:
    
  protected:
    MaterialEditorOnly(Zilch::NoType none) : MaterialBlock(none) {}
    ZilchNoCopy(MaterialEditorOnly);
  };
  
  class ListControls_ : public ZeroObject
  {
  public:
    Zilch::Real4 GetBackgroundColor();
    
    void SetBackgroundColor(const Zilch::Real4& value);
    
    Zilch::Real4 GetBorderColor();
    
    void SetBorderColor(const Zilch::Real4& value);
    
    Zilch::Real4 GetFocusBorderColor();
    
    void SetFocusBorderColor(const Zilch::Real4& value);
    
    Zilch::Real4 GetListPrimaryColor();
    
    void SetListPrimaryColor(const Zilch::Real4& value);
    
    Zilch::Real4 GetListSecondaryColor();
    
    void SetListSecondaryColor(const Zilch::Real4& value);
    
    Zilch::Real4 GetListBackgroundColor();
    
    void SetListBackgroundColor(const Zilch::Real4& value);
    
    unsigned char mValue[52];
    
  protected:
    ListControls_(Zilch::NoType none) : ZeroObject(none) {}
    ZilchNoCopy(ListControls_);
  };
  
  class UiAutomator : public Zilch::ReferenceType
  {
  public:
    Zilch::HandleOf<Widget> GetRoot();
    
    void MouseMoveToPosition(const Zilch::Real2& __0);
    
    void MouseMoveToWidget(Widget* __0);
    
    void MouseLeftClick();
    
    void MouseLeftDoubleClick();
    
    void MouseLeftDown();
    
    void MouseLeftUp();
    
    void MouseRightClick();
    
    void MouseRightDown();
    
    void MouseRightUp();
    
    void MouseMiddleClick();
    
    void MouseMiddleDown();
    
    void MouseMiddleUp();
    
    unsigned char mValue[84];
    
  protected:
    UiAutomator(Zilch::NoType none) : Zilch::ReferenceType(none) {}
    ZilchNoCopy(UiAutomator);
  };
  
  class OsMouseEvent : public Zilch::ReferenceType
  {
  public:
    Zilch::String GetEventId();
    
    void SetEventId(const Zilch::String& value);
    
    unsigned char mValue[48];
    
  protected:
    OsMouseEvent(Zilch::NoType none) : Zilch::ReferenceType(none) {}
    ZilchNoCopy(OsMouseEvent);
  };
  
  class TextBox_ : public ZeroObject
  {
  public:
    Zilch::Real4 GetBackgroundColor();
    
    void SetBackgroundColor(const Zilch::Real4& value);
    
    Zilch::Real4 GetBorderColor();
    
    void SetBorderColor(const Zilch::Real4& value);
    
    Zilch::Real4 GetFocusBorderColor();
    
    void SetFocusBorderColor(const Zilch::Real4& value);
    
    Zilch::Real4 GetReadOnlyBackgroundColor();
    
    void SetReadOnlyBackgroundColor(const Zilch::Real4& value);
    
    Zilch::Real4 GetReadOnlyTextColor();
    
    void SetReadOnlyTextColor(const Zilch::Real4& value);
    
    Zilch::Real4 GetHintColor();
    
    void SetHintColor(const Zilch::Real4& value);
    
    unsigned char mValue[52];
    
  protected:
    TextBox_(Zilch::NoType none) : ZeroObject(none) {}
    ZilchNoCopy(TextBox_);
  };
  
  class ShaderView : public Widget
  {
  public:
    void SetShaderName(const Zilch::String& __0);
    
    void SetShader(Shader* __0);
    
    void SetCentering(Centering __0);
    
    void SetUv(const Zilch::Real2& __0, const Zilch::Real2& __1, TextureUvMode __2);
    
    unsigned char mValue[48];
    
  protected:
    ShaderView(Zilch::NoType none) : Widget(none) {}
    ZilchNoCopy(ShaderView);
  };
  
  class TextureView : public ShaderView
  {
  public:
    void SetTexture(Texture* __0);
    
    unsigned char mValue[8];
    
  protected:
    TextureView(Zilch::NoType none) : ShaderView(none) {}
    ZilchNoCopy(TextureView);
  };
  
  // Texture resource class.
  class Texture : public TextureRegion
  {
  public:
    static Zilch::HandleOf<Texture> Find(const Zilch::String& name);
    
    unsigned char mValue[80];
    
  protected:
    Texture(Zilch::NoType none) : TextureRegion(none) {}
    ZilchNoCopy(Texture);
  };
  
  class SpriteSourceBuilder : public Zilch::ReferenceType
  {
  public:
    unsigned char mValue[104];
    
  protected:
    SpriteSourceBuilder(Zilch::NoType none) : Zilch::ReferenceType(none) {}
    ZilchNoCopy(SpriteSourceBuilder);
  };
  
  class RevoluteJointBlock : public Zilch::ReferenceType
  {
  public:
    float GetSlop();
    
    void SetSlop(float value);
    
    float GetLinearBaumgarte();
    
    void SetLinearBaumgarte(float value);
    
    float GetAngularBaumgarte();
    
    void SetAngularBaumgarte(float value);
    
    float GetLinearErrorCorrection();
    
    void SetLinearErrorCorrection(float value);
    
    float GetAngularErrorCorrection();
    
    void SetAngularErrorCorrection(float value);
    
    int GetCorrectionType();
    
    void SetCorrectionType(int value);
    
    unsigned char mValue[32];
    
  protected:
    RevoluteJointBlock(Zilch::NoType none) : Zilch::ReferenceType(none) {}
    ZilchNoCopy(RevoluteJointBlock);
  };
  
  class CustomConstraintInfo : public Zilch::ReferenceType
  {
  public:
    Zilch::Real3 GetLinear0();
    
    void SetLinear0(const Zilch::Real3& value);
    
    Zilch::Real3 GetAngular0();
    
    void SetAngular0(const Zilch::Real3& value);
    
    Zilch::Real3 GetLinear1();
    
    void SetLinear1(const Zilch::Real3& value);
    
    Zilch::Real3 GetAngular1();
    
    void SetAngular1(const Zilch::Real3& value);
    
    float GetEffectiveMass();
    
    void SetEffectiveMass(float value);
    
    float GetGamma();
    
    void SetGamma(float value);
    
    float GetBias();
    
    void SetBias(float value);
    
    float GetMinImpulse();
    
    void SetMinImpulse(float value);
    
    float GetMaxImpulse();
    
    void SetMaxImpulse(float value);
    
    float GetImpulse();
    
    void SetImpulse(float value);
    
    float GetError();
    
    void SetError(float value);
    
    float GetBaumgarte();
    
    void SetBaumgarte(float value);
    
    bool GetActive();
    
    void SetActive(bool value);
    
    bool GetSolvePosition();
    
    void SetSolvePosition(bool value);
    
    Zilch::HandleOf<CustomJoint> GetOwner();
    
    void SetJacobian(const Zilch::Real3& __0, const Zilch::Real3& __1, const Zilch::Real3& __2, const Zilch::Real3& __3);
    
    void SetErrorAndBias(float __0);
    
    void ComputeMotor(float __0, float __1, float __2);
    
    void ComputeSpring(float __0, float __1);
    
    void DetachFromOwner();
    
    bool IsOwned();
    
    unsigned char mValue[104];
    
  protected:
    CustomConstraintInfo(Zilch::NoType none) : Zilch::ReferenceType(none) {}
    ZilchNoCopy(CustomConstraintInfo);
  };
  
  class CustomJoint : public Joint
  {
  public:
    int GetConstraintCount();
    
    Zilch::HandleOf<CustomConstraintInfo> CreateConstraint();
    
    void AddConstraint(CustomConstraintInfo* constraint);
    
    void RemoveConstraint(CustomConstraintInfo* constraint);
    
    void ClearConstraints();
    
    Zilch::HandleOf<CustomConstraintInfo> GetConstraint(int index);
    
    unsigned char mValue[16];
    
  protected:
    CustomJoint(Zilch::NoType none) : Joint(none) {}
    ZilchNoCopy(CustomJoint);
  };
  
  // Capsule Collider is a basic collision primitive of a capsule.
  class CapsuleCollider : public Collider
  {
  public:
    float GetRadius();
    
    void SetRadius(float value);
    
    float GetHeight();
    
    void SetHeight(float value);
    
    AxisDirection GetDirection();
    
    void SetDirection(AxisDirection value);
    
    CapsuleScalingMode GetScalingMode();
    
    void SetScalingMode(CapsuleScalingMode value);
    
    unsigned char mValue[16];
    
  protected:
    CapsuleCollider(Zilch::NoType none) : Collider(none) {}
    ZilchNoCopy(CapsuleCollider);
  };
  
  class AxisDirection : public Zilch::ValueType
  {
  public:
    static AxisDirection GetY();
    
    static AxisDirection GetX();
    
    static AxisDirection GetZ();
    
    int mValue;
    AxisDirection();
  };
  
  // Set of animations.
  class AnimationSet : public Resource
  {
  public:
    static Zilch::HandleOf<AnimationSet> Find(const Zilch::String& name);
    
    unsigned char mValue[32];
    
  protected:
    AnimationSet(Zilch::NoType none) : Resource(none) {}
    ZilchNoCopy(AnimationSet);
  };
  
  // SoundSpace component provides sound for a space.
  class SoundSpace : public Component
  {
  public:
    float GetVolume();
    
    void SetVolume(float value);
    
    float GetVolumeDB();
    
    void SetVolumeDB(float value);
    
    float GetPitch();
    
    void SetPitch(float value);
    
    float GetPitchSemitones();
    
    void SetPitchSemitones(float value);
    
    bool GetPause();
    
    void SetPause(bool value);
    
    bool GetPauseWithLevel();
    
    void SetPauseWithLevel(bool value);
    
    void InterpolatePitch(float pitch, float time);
    
    void InterpolatePitchSemitones(float __0, float __1);
    
    void InterpolateVolume(float value, float interpolationTime);
    
    void InterpolateVolumeDB(float __0, float __1);
    
    // Play a sound cue at a position.
    Zilch::HandleOf<SoundInstance> PlayCueAt(SoundCue* cue, const Zilch::Real3& position);
    
    // Play a sound cue in 2d.
    Zilch::HandleOf<SoundInstance> PlayCue(SoundCue* cue);
    
    void StopAllSounds();
    
    void PrintAudioStartupMessage();
    
    unsigned char mValue[116];
    
  protected:
    SoundSpace(Zilch::NoType none) : Component(none) {}
    ZilchNoCopy(SoundSpace);
  };
  
  class SoundInstance : public Zilch::ReferenceType
  {
  public:
    float GetVolume();
    
    void SetVolume(float value);
    
    float GetVolumeDB();
    
    void SetVolumeDB(float value);
    
    float GetPitch();
    
    void SetPitch(float value);
    
    float GetPitchSemitones();
    
    void SetPitchSemitones(float value);
    
    bool GetIsPlaying();
    
    void InterpolatePitch(float __0, float __1);
    
    void InterpolatePitchSemitones(float __0, float __1);
    
    void InterpolateVolume(float __0, float __1);
    
    void InterpolateVolumeDB(float __0, float __1);
    
    void Pause();
    
    void Continue();
    
    void Stop();
    
    unsigned char mValue[76];
    
  protected:
    SoundInstance(Zilch::NoType none) : Zilch::ReferenceType(none) {}
    ZilchNoCopy(SoundInstance);
  };
  
  // Basic sound Cue with various options.
  class SoundCue : public Resource
  {
  public:
    int GetPlayMode();
    
    void SetPlayMode(int value);
    
    bool GetUseVolumeDB();
    
    void SetUseVolumeDB(bool value);
    
    float GetVolume();
    
    void SetVolume(float value);
    
    float GetVolumeVariation();
    
    void SetVolumeVariation(float value);
    
    float GetVolumeDB();
    
    void SetVolumeDB(float value);
    
    float GetVolumeDBVariation();
    
    void SetVolumeDBVariation(float value);
    
    bool GetUsePitchSemitones();
    
    void SetUsePitchSemitones(bool value);
    
    float GetPitch();
    
    void SetPitch(float value);
    
    float GetPitchSemitones();
    
    void SetPitchSemitones(float value);
    
    float GetPitchVariation();
    
    void SetPitchVariation(float value);
    
    float GetPitchSTVariation();
    
    void SetPitchSTVariation(float value);
    
    float GetMinDistance();
    
    void SetMinDistance(float value);
    
    float GetMaxDistance();
    
    void SetMaxDistance(float value);
    
    float GetMinAttenuatedVolume();
    
    void SetMinAttenuatedVolume(float value);
    
    int GetRolloffCurveType();
    
    void SetRolloffCurveType(int value);
    
    Zilch::HandleOf<SampleCurve> GetRolloffCurve();
    
    void SetRolloffCurve(SampleCurve* value);
    
    void AddSoundTagEntry(SoundTag* soundTag);
    
    void Preview();
    
    void StopPreview();
    
    static Zilch::HandleOf<SoundCue> Find(const Zilch::String& name);
    
    unsigned char mValue[120];
    
  protected:
    SoundCue(Zilch::NoType none) : Resource(none) {}
    ZilchNoCopy(SoundCue);
  };
  
  class SpaceMapvalueRange : public Zilch::ReferenceType
  {
  public:
    Zilch::HandleOf<SpaceMapvalueRange> GetAll();
    
    bool GetIsNotEmpty();
    
    Zilch::HandleOf<Space> GetCurrent();
    
    void MoveNext();
    
    unsigned char mValue[8];
    
  protected:
    SpaceMapvalueRange(Zilch::NoType none) : Zilch::ReferenceType(none) {}
    ZilchNoCopy(SpaceMapvalueRange);
  };
  
  // A space is a near boundless, three-dimensional extent in which objects and events occur and have relative position, direction, and time. Essentially a world of objects that exist together. Used to divide objects between UI, World, Editor, and others. The two most Common spaces are the'World' for the game world and the'Ui' for the HUD and menus.
  class Space : public Cog
  {
  public:
    int GetObjectCount();
    
    Zilch::HandleOf<Level> GetCurrentLevel();
    
    // Create an object in the space.
    Zilch::HandleOf<Cog> Create(Archetype* archetype);
    
    // Create a object at a position in the space.
    Zilch::HandleOf<Cog> CreateAtPosition(Archetype* archetype, const Zilch::Real3& position);
    
    Zilch::HandleOf<Cog> CreateLink(Archetype* archetype, Cog* objectA, Cog* objectB);
    
    // Load new level replace the current level.
    void LoadLevel(Level* levelName);
    
    // Reload the current level.
    void ReloadLevel();
    
    // Add all objects from a level.
    Zilch::HandleOf<Level> AddObjectsFromLevel(Level* levelName);
    
    // Find an object in the space with a given name.
    Zilch::HandleOf<Cog> FindObjectByName(const Zilch::String& name);
    
    Zilch::HandleOf<Cog> FindFirstObjectByName(const Zilch::String& name);
    
    Zilch::HandleOf<Cog> FindLastObjectByName(const Zilch::String& name);
    
    Zilch::HandleOf<Cog> FindFirstRootObjectByName(const Zilch::String& name);
    
    Zilch::HandleOf<Cog> FindLastRootObjectByName(const Zilch::String& name);
    
    // Find an object in the space with a given name.
    Zilch::HandleOf<CogNameRange> FindAllObjectsByName(const Zilch::String& name);
    
    // Destroy all objects in space.
    void DestroyAll();
    
    // Destroy all objects created from level.
    void DestroyAllFromLevel();
    
    // All objects in the space.
    Zilch::HandleOf<Spacerange> AllObjects();
    
    bool IsEditorMode();
    
    void Modified();
    
    Zilch::HandleOf<ProjectDescription> GetProjectDescription();
    
    Zilch::HandleOf<JointTool2D> GetJointTool2D();
    
    Zilch::HandleOf<SharedContent> GetSharedContent();
    
    Zilch::HandleOf<RenderToTexture> GetRenderToTexture();
    
    Zilch::HandleOf<MultiSprite> GetMultiSprite();
    
    Zilch::HandleOf<FlowEffect> GetFlowEffect();
    
    Zilch::HandleOf<Transform> GetTransform();
    
    Zilch::HandleOf<ZilchState> GetZilchState();
    
    Zilch::HandleOf<ConvexMeshCollider> GetConvexMeshCollider();
    
    Zilch::HandleOf<ActionSpace> GetActionSpace();
    
    Zilch::HandleOf<NetSpace> GetNetSpace();
    
    Zilch::HandleOf<MeshBender> GetMeshBender();
    
    Zilch::HandleOf<RuntimeSpline> GetRuntimeSpline();
    
    Zilch::HandleOf<LevelPath> GetLevelPath();
    
    Zilch::HandleOf<ParticleAttractor> GetParticleAttractor();
    
    Zilch::HandleOf<PhysicsSpace> GetPhysicsSpace();
    
    Zilch::HandleOf<GravityEffect> GetGravityEffect();
    
    Zilch::HandleOf<PointMassSystem> GetPointMassSystem();
    
    Zilch::HandleOf<NetUserCreator> GetNetUserCreator();
    
    Zilch::HandleOf<Projector> GetProjector();
    
    Zilch::HandleOf<ForceEffect> GetForceEffect();
    
    Zilch::HandleOf<AmbientLight> GetAmbientLight();
    
    Zilch::HandleOf<CogRotateGizmo> GetCogRotateGizmo();
    
    Zilch::HandleOf<HeightMapTool> GetHeightMapTool();
    
    Zilch::HandleOf<SphereCollider> GetSphereCollider();
    
    Zilch::HandleOf<Hierarchy> GetHierarchy();
    
    Zilch::HandleOf<StickJoint> GetStickJoint();
    
    Zilch::HandleOf<LockStepMouse> GetLockStepMouse();
    
    Zilch::HandleOf<LinearAxisJoint> GetLinearAxisJoint();
    
    Zilch::HandleOf<CreationTool> GetCreationTool();
    
    Zilch::HandleOf<EditorSettings> GetEditorSettings();
    
    Zilch::HandleOf<ClothSystem> GetClothSystem();
    
    Zilch::HandleOf<RecentProjects> GetRecentProjects();
    
    Zilch::HandleOf<GridDraw> GetGridDraw();
    
    Zilch::HandleOf<DynamicModel> GetDynamicModel();
    
    Zilch::HandleOf<SplineParticleAnimator> GetSplineParticleAnimator();
    
    Zilch::HandleOf<RingGizmo> GetRingGizmo();
    
    Zilch::HandleOf<Sprite> GetSprite();
    
    Zilch::HandleOf<GeometryPointManipulator> GetGeometryPointManipulator();
    
    Zilch::HandleOf<Orientation> GetOrientation();
    
    Zilch::HandleOf<PhyGunJoint> GetPhyGunJoint();
    
    Zilch::HandleOf<MeshParticleEmitter> GetMeshParticleEmitter();
    
    Zilch::HandleOf<UprightJoint> GetUprightJoint();
    
    Zilch::HandleOf<SimpleSocket> GetSimpleSocket();
    
    Zilch::HandleOf<WebRequester> GetWebRequester();
    
    Zilch::HandleOf<DynamicMotor> GetDynamicMotor();
    
    Zilch::HandleOf<MotionBlur> GetMotionBlur();
    
    Zilch::HandleOf<ArrowGizmo> GetArrowGizmo();
    
    Zilch::HandleOf<HeightMapCollider> GetHeightMapCollider();
    
    Zilch::HandleOf<ManipulatorJoint> GetManipulatorJoint();
    
    Zilch::HandleOf<CameraViewport> GetCameraViewport();
    
    Zilch::HandleOf<DefaultViewportSetup> GetDefaultViewportSetup();
    
    Zilch::HandleOf<LockStepSyncChecker> GetLockStepSyncChecker();
    
    Zilch::HandleOf<TorqueEffect> GetTorqueEffect();
    
    Zilch::HandleOf<LauncherConfig> GetLauncherConfig();
    
    Zilch::HandleOf<AnimationGraph> GetAnimationGraph();
    
    Zilch::HandleOf<PointMassAnchorConnection> GetPointMassAnchorConnection();
    
    Zilch::HandleOf<SkinnedModel> GetSkinnedModel();
    
    Zilch::HandleOf<UserConfig> GetUserConfig();
    
    Zilch::HandleOf<BuoyancyEffect> GetBuoyancyEffect();
    
    Zilch::HandleOf<EditorBone> GetEditorBone();
    
    Zilch::HandleOf<LockStepSpace> GetLockStepSpace();
    
    Zilch::HandleOf<TileMap> GetTileMap();
    
    Zilch::HandleOf<IgnoreSpaceEffects> GetIgnoreSpaceEffects();
    
    Zilch::HandleOf<JointMotor> GetJointMotor();
    
    Zilch::HandleOf<SpriteText> GetSpriteText();
    
    Zilch::HandleOf<TimeConfig> GetTimeConfig();
    
    Zilch::HandleOf<ManipulatorTool> GetManipulatorTool();
    
    Zilch::HandleOf<EditorCameraController> GetEditorCameraController();
    
    Zilch::HandleOf<SizerGizmo> GetSizerGizmo();
    
    Zilch::HandleOf<JointDebugDrawConfig> GetJointDebugDrawConfig();
    
    Zilch::HandleOf<UniversalJoint> GetUniversalJoint();
    
    Zilch::HandleOf<ObjectLinkAnchor> GetObjectLinkAnchor();
    
    Zilch::HandleOf<NavGrid> GetNavGrid();
    
    Zilch::HandleOf<LockStepKeyboard> GetLockStepKeyboard();
    
    Zilch::HandleOf<PrismaticJoint> GetPrismaticJoint();
    
    Zilch::HandleOf<RandomContext> GetRandomContext();
    
    Zilch::HandleOf<DynamicMeshCollider> GetDynamicMeshCollider();
    
    Zilch::HandleOf<PhysicsCarWheel> GetPhysicsCarWheel();
    
    Zilch::HandleOf<VortexEffect> GetVortexEffect();
    
    Zilch::HandleOf<EditorConfig> GetEditorConfig();
    
    Zilch::HandleOf<PhysicsCar> GetPhysicsCar();
    
    Zilch::HandleOf<BoxParticleEmitter> GetBoxParticleEmitter();
    
    Zilch::HandleOf<ParticleCollisionPlane> GetParticleCollisionPlane();
    
    Zilch::HandleOf<PrismaticJoint2d> GetPrismaticJoint2d();
    
    Zilch::HandleOf<RigidBody> GetRigidBody();
    
    Zilch::HandleOf<WindEffect> GetWindEffect();
    
    Zilch::HandleOf<Ribbon> GetRibbon();
    
    Zilch::HandleOf<ParticleTorusRoller> GetParticleTorusRoller();
    
    Zilch::HandleOf<LevelGeometry> GetLevelGeometry();
    
    Zilch::HandleOf<RevoluteJoint2d> GetRevoluteJoint2d();
    
    Zilch::HandleOf<JointLimit> GetJointLimit();
    
    Zilch::HandleOf<NetUser> GetNetUser();
    
    Zilch::HandleOf<Reactive> GetReactive();
    
    Zilch::HandleOf<WheelJoint> GetWheelJoint();
    
    Zilch::HandleOf<WeldJoint> GetWeldJoint();
    
    Zilch::HandleOf<Fog> GetFog();
    
    Zilch::HandleOf<MainConfig> GetMainConfig();
    
    Zilch::HandleOf<DefaultGameSetup> GetDefaultGameSetup();
    
    Zilch::HandleOf<LockStepGame> GetLockStepGame();
    
    Zilch::HandleOf<Gizmo> GetGizmo();
    
    Zilch::HandleOf<MassOverride> GetMassOverride();
    
    Zilch::HandleOf<ThrustEffect> GetThrustEffect();
    
    Zilch::HandleOf<ObjectLink> GetObjectLink();
    
    Zilch::HandleOf<DynamicMeshSaver> GetDynamicMeshSaver();
    
    Zilch::HandleOf<VoxelChunk> GetVoxelChunk();
    
    Zilch::HandleOf<SoundListener> GetSoundListener();
    
    Zilch::HandleOf<SoundEmitter> GetSoundEmitter();
    
    Zilch::HandleOf<AttachSystem> GetAttachSystem();
    
    Zilch::HandleOf<ScreenDrops> GetScreenDrops();
    
    Zilch::HandleOf<RevoluteJoint> GetRevoluteJoint();
    
    Zilch::HandleOf<Shadow> GetShadow();
    
    Zilch::HandleOf<ProxyControlPoint> GetProxyControlPoint();
    
    Zilch::HandleOf<ParticleColorAnimator> GetParticleColorAnimator();
    
    Zilch::HandleOf<DynamicMeshGenerator> GetDynamicMeshGenerator();
    
    Zilch::HandleOf<GeometryMesh3D> GetGeometryMesh3D();
    
    Zilch::HandleOf<DynamicMesh> GetDynamicMesh();
    
    Zilch::HandleOf<PointForceEffect> GetPointForceEffect();
    
    Zilch::HandleOf<CapsuleCollider> GetCapsuleCollider();
    
    Zilch::HandleOf<Joint> GetJoint();
    
    Zilch::HandleOf<ParentingTool> GetParentingTool();
    
    Zilch::HandleOf<Light> GetLight();
    
    Zilch::HandleOf<VoxelChunkMaterials> GetVoxelChunkMaterials();
    
    Zilch::HandleOf<SoundSpace> GetSoundSpace();
    
    Zilch::HandleOf<TransformProxyObject> GetTransformProxyObject();
    
    Zilch::HandleOf<HeightMapModel> GetHeightMapModel();
    
    Zilch::HandleOf<SpriteTextBlock> GetSpriteTextBlock();
    
    Zilch::HandleOf<CogTransformGizmo> GetCogTransformGizmo();
    
    Zilch::HandleOf<CogSizerGizmo> GetCogSizerGizmo();
    
    Zilch::HandleOf<MeshCollider> GetMeshCollider();
    
    Zilch::HandleOf<MultiConvexMeshCollider> GetMultiConvexMeshCollider();
    
    Zilch::HandleOf<RelativeVelocityJoint> GetRelativeVelocityJoint();
    
    Zilch::HandleOf<SpriteBeam> GetSpriteBeam();
    
    Zilch::HandleOf<GodRayLight> GetGodRayLight();
    
    Zilch::HandleOf<Attractive> GetAttractive();
    
    Zilch::HandleOf<EditorIcon> GetEditorIcon();
    
    Zilch::HandleOf<SelectTool> GetSelectTool();
    
    Zilch::HandleOf<GraphicsSpace> GetGraphicsSpace();
    
    Zilch::HandleOf<GeometryMesh> GetGeometryMesh();
    
    Zilch::HandleOf<ScreenWarpRing> GetScreenWarpRing();
    
    Zilch::HandleOf<Model> GetModel();
    
    Zilch::HandleOf<RayTraceProperties> GetRayTraceProperties();
    
    Zilch::HandleOf<SphericalParticleEmitter> GetSphericalParticleEmitter();
    
    Zilch::HandleOf<DefaultCamera> GetDefaultCamera();
    
    Zilch::HandleOf<ParticleWander> GetParticleWander();
    
    Zilch::HandleOf<MainWindowConfig> GetMainWindowConfig();
    
    Zilch::HandleOf<RopeCreator> GetRopeCreator();
    
    Zilch::HandleOf<ParticleSystem> GetParticleSystem();
    
    Zilch::HandleOf<LineParticleEmitter> GetLineParticleEmitter();
    
    Zilch::HandleOf<Area> GetArea();
    
    Zilch::HandleOf<ReactiveSpace> GetReactiveSpace();
    
    Zilch::HandleOf<LinearParticleAnimator> GetLinearParticleAnimator();
    
    Zilch::HandleOf<DynamicController> GetDynamicController();
    
    Zilch::HandleOf<JointSpring> GetJointSpring();
    
    Zilch::HandleOf<RayTracedPhysicsProvider> GetRayTracedPhysicsProvider();
    
    Zilch::HandleOf<Camera> GetCamera();
    
    Zilch::HandleOf<TranslateTool> GetTranslateTool();
    
    Zilch::HandleOf<ParticleTwister> GetParticleTwister();
    
    Zilch::HandleOf<GizmoDrag> GetGizmoDrag();
    
    Zilch::HandleOf<SimpleSound> GetSimpleSound();
    
    Zilch::HandleOf<MouseCapture> GetMouseCapture();
    
    Zilch::HandleOf<TranslateGizmo> GetTranslateGizmo();
    
    Zilch::HandleOf<GeometryPainter2D> GetGeometryPainter2D();
    
    Zilch::HandleOf<TileEditor2D> GetTileEditor2D();
    
    Zilch::HandleOf<CustomJoint> GetCustomJoint();
    
    Zilch::HandleOf<WheelJoint2d> GetWheelJoint2d();
    
    Zilch::HandleOf<RayTracedGraphicsProvider> GetRayTracedGraphicsProvider();
    
    Zilch::HandleOf<EditorRenderer> GetEditorRenderer();
    
    Zilch::HandleOf<Ssao> GetSsao();
    
    Zilch::HandleOf<CameraViewports> GetCameraViewports();
    
    Zilch::HandleOf<Collider> GetCollider();
    
    Zilch::HandleOf<JointTool3D> GetJointTool3D();
    
    Zilch::HandleOf<PositionJoint> GetPositionJoint();
    
    Zilch::HandleOf<Attractor> GetAttractor();
    
    Zilch::HandleOf<GizmoSpace> GetGizmoSpace();
    
    Zilch::HandleOf<NetPeer> GetNetPeer();
    
    Zilch::HandleOf<NavMesh> GetNavMesh();
    
    Zilch::HandleOf<AutoOrientToVelocity> GetAutoOrientToVelocity();
    
    Zilch::HandleOf<PulleyJoint> GetPulleyJoint();
    
    Zilch::HandleOf<ParticleGradientAnimator> GetParticleGradientAnimator();
    
    Zilch::HandleOf<DragEffect> GetDragEffect();
    
    Zilch::HandleOf<ModelVisualizer> GetModelVisualizer();
    
    Zilch::HandleOf<DeferredRenderer> GetDeferredRenderer();
    
    Zilch::HandleOf<Feelers> GetFeelers();
    
    Zilch::HandleOf<Project> GetProject();
    
    Zilch::HandleOf<HeightMap> GetHeightMap();
    
    Zilch::HandleOf<ObjectSystem> GetObjectSystem();
    
    Zilch::HandleOf<LightningParticleEmitter> GetLightningParticleEmitter();
    
    Zilch::HandleOf<RotateTool> GetRotateTool();
    
    Zilch::HandleOf<ForwardRenderer> GetForwardRenderer();
    
    Zilch::HandleOf<PointMassAnchor> GetPointMassAnchor();
    
    Zilch::HandleOf<SpriteParticleSystem> GetSpriteParticleSystem();
    
    Zilch::HandleOf<ScaleTool> GetScaleTool();
    
    Zilch::HandleOf<ParticleCollisionHeightmap> GetParticleCollisionHeightmap();
    
    Zilch::HandleOf<RotationProxy> GetRotationProxy();
    
    Zilch::HandleOf<CogScaleGizmo> GetCogScaleGizmo();
    
    Zilch::HandleOf<ZilchPluginConfig> GetZilchPluginConfig();
    
    Zilch::HandleOf<JointConfigOverride> GetJointConfigOverride();
    
    Zilch::HandleOf<Blocking> GetBlocking();
    
    Zilch::HandleOf<CustomCollisionEventTracker> GetCustomCollisionEventTracker();
    
    Zilch::HandleOf<SplineParticleEmitter> GetSplineParticleEmitter();
    
    Zilch::HandleOf<TimeSpace> GetTimeSpace();
    
    Zilch::HandleOf<FixedAngleJoint> GetFixedAngleJoint();
    
    Zilch::HandleOf<CustomPhysicsEffect> GetCustomPhysicsEffect();
    
    Zilch::HandleOf<LockStepSyncIgnore> GetLockStepSyncIgnore();
    
    Zilch::HandleOf<BoxCollider> GetBoxCollider();
    
    Zilch::HandleOf<ContentConfig> GetContentConfig();
    
    Zilch::HandleOf<FixedAspectRatio> GetFixedAspectRatio();
    
    Zilch::HandleOf<PointGravityEffect> GetPointGravityEffect();
    
    Zilch::HandleOf<TextEditorConfig> GetTextEditorConfig();
    
    Zilch::HandleOf<NetObject> GetNetObject();
    
    Zilch::HandleOf<SimpleAnimation> GetSimpleAnimation();
    
    Zilch::HandleOf<DeveloperConfig> GetDeveloperConfig();
    
    Zilch::HandleOf<SkyBox> GetSkyBox();
    
    Zilch::HandleOf<LockStepGamepads> GetLockStepGamepads();
    
    Zilch::HandleOf<EllipsoidCollider> GetEllipsoidCollider();
    
    Zilch::HandleOf<SquareGizmo> GetSquareGizmo();
    
    Zilch::HandleOf<CogTranslateGizmo> GetCogTranslateGizmo();
    
    Zilch::HandleOf<Wandering> GetWandering();
    
    Zilch::HandleOf<CylinderCollider> GetCylinderCollider();
    
    Zilch::HandleOf<Region> GetRegion();
    
    Zilch::HandleOf<GraphicsConfig> GetGraphicsConfig();
    
    Zilch::HandleOf<ScreenDropGenerator> GetScreenDropGenerator();
    
    Zilch::HandleOf<GearJoint> GetGearJoint();
    
    unsigned char mValue[104];
    
  protected:
    Space(Zilch::NoType none) : Cog(none) {}
    ZilchNoCopy(Space);
  };
  
  class CastResult : public Zilch::ReferenceType
  {
  public:
    Zilch::HandleOf<Cog> GetObjectHit();
    
    Zilch::HandleOf<Collider> GetCollider();
    
    Zilch::Real3 GetWorldPosition();
    
    Zilch::Real3 GetNormal();
    
    float GetDistance();
    
    Zilch::Real3 GetBodySpacePosition(int __0);
    
    unsigned char mValue[48];
    
  protected:
    CastResult(Zilch::NoType none) : Zilch::ReferenceType(none) {}
    ZilchNoCopy(CastResult);
  };
  
  class LauncherConfig : public Component
  {
  public:
    int GetAutoRunMode();
    
    void SetAutoRunMode(int value);
    
    unsigned char mValue[60];
    
  protected:
    LauncherConfig(Zilch::NoType none) : Component(none) {}
    ZilchNoCopy(LauncherConfig);
  };
  
  class TransformProxyObject : public Component
  {
  public:
    unsigned char mValue[28];
    
  protected:
    TransformProxyObject(Zilch::NoType none) : Component(none) {}
    ZilchNoCopy(TransformProxyObject);
  };
  
  class PrismaticJointBlock : public Zilch::ReferenceType
  {
  public:
    float GetSlop();
    
    void SetSlop(float value);
    
    float GetLinearBaumgarte();
    
    void SetLinearBaumgarte(float value);
    
    float GetAngularBaumgarte();
    
    void SetAngularBaumgarte(float value);
    
    float GetLinearErrorCorrection();
    
    void SetLinearErrorCorrection(float value);
    
    float GetAngularErrorCorrection();
    
    void SetAngularErrorCorrection(float value);
    
    int GetCorrectionType();
    
    void SetCorrectionType(int value);
    
    unsigned char mValue[32];
    
  protected:
    PrismaticJointBlock(Zilch::NoType none) : Zilch::ReferenceType(none) {}
    ZilchNoCopy(PrismaticJointBlock);
  };
  
  class WebBrowserSetup : public ZeroObject
  {
  public:
    Zilch::String GetUrl();
    
    void SetUrl(const Zilch::String& value);
    
    Zilch::Integer2 GetSize();
    
    void SetSize(const Zilch::Integer2& value);
    
    bool GetTransparent();
    
    void SetTransparent(bool value);
    
    Zilch::Real4 GetBackgroundColor();
    
    void SetBackgroundColor(const Zilch::Real4& value);
    
    Zilch::Real2 GetScrollSpeed();
    
    void SetScrollSpeed(const Zilch::Real2& value);
    
    unsigned char mValue[40];
    
  protected:
    WebBrowserSetup(Zilch::NoType none) : ZeroObject(none) {}
    ZilchNoCopy(WebBrowserSetup);
  };
  
  class Viewport_ : public ZeroObject
  {
  public:
    bool GetEditorViewportAutoTakeFocus();
    
    void SetEditorViewportAutoTakeFocus(bool value);
    
    float GetDragSelectDistance();
    
    void SetDragSelectDistance(float value);
    
    Zilch::Real4 GetBorderColor();
    
    void SetBorderColor(const Zilch::Real4& value);
    
    unsigned char mValue[52];
    
  protected:
    Viewport_(Zilch::NoType none) : ZeroObject(none) {}
    ZilchNoCopy(Viewport_);
  };
  
  // Mesh Collider is a collision primitive for colliding with a non-moving triangle mesh.
  class MeshCollider : public Collider
  {
  public:
    Zilch::HandleOf<PhysicsMesh> GetPhysicsMesh();
    
    void SetPhysicsMesh(PhysicsMesh* value);
    
    bool GetDrawEdges();
    
    void SetDrawEdges(bool value);
    
    bool GetDrawFaces();
    
    void SetDrawFaces(bool value);
    
    bool GetDrawFaceNormals();
    
    void SetDrawFaceNormals(bool value);
    
    unsigned char mValue[60];
    
  protected:
    MeshCollider(Zilch::NoType none) : Collider(none) {}
    ZilchNoCopy(MeshCollider);
  };
  
  // Used to represent the game world or a static object as a mesh of triangles. Used by the StaticMeshCollider class.
  class PhysicsMesh : public Resource
  {
  public:
    static Zilch::HandleOf<PhysicsMesh> Find(const Zilch::String& name);
    
    unsigned char mValue[224];
    
  protected:
    PhysicsMesh(Zilch::NoType none) : Resource(none) {}
    ZilchNoCopy(PhysicsMesh);
  };
  
  class MultiConvexMeshCollider : public Collider
  {
  public:
    Zilch::HandleOf<MultiConvexMesh> GetMesh();
    
    void SetMesh(MultiConvexMesh* value);
    
    unsigned char mValue[4];
    
  protected:
    MultiConvexMeshCollider(Zilch::NoType none) : Collider(none) {}
    ZilchNoCopy(MultiConvexMeshCollider);
  };
  
  class RelativeVelocityJoint : public Joint
  {
  public:
    Zilch::Real3 GetAxis(int __0);
    
    void SetAxis(int __0, const Zilch::Real3& __1);
    
    float GetSpeed(int __0);
    
    void SetSpeed(int __0, float __1);
    
    float GetMaxForce(int __0);
    
    void SetMaxForce(int __0, float __1);
    
    bool GetAxisActive(int __0);
    
    void SetAxisActive(int __0, bool __1);
    
    unsigned char mValue[88];
    
  protected:
    RelativeVelocityJoint(Zilch::NoType none) : Joint(none) {}
    ZilchNoCopy(RelativeVelocityJoint);
  };
  
  class ReflectiveMapping : public MaterialBlock
  {
  public:
    Zilch::HandleOf<Texture> GetReflectiveMap();
    
    void SetReflectiveMap(Texture* value);
    
    unsigned char mValue[4];
    
  protected:
    ReflectiveMapping(Zilch::NoType none) : MaterialBlock(none) {}
    ZilchNoCopy(ReflectiveMapping);
  };
  
  class TilePaletteSource : public Resource
  {
  public:
    static Zilch::HandleOf<TilePaletteSource> Find(const Zilch::String& name);
    
    unsigned char mValue[32];
    
  protected:
    TilePaletteSource(Zilch::NoType none) : Resource(none) {}
    ZilchNoCopy(TilePaletteSource);
  };
  
  class FillLayout : public Layout
  {
  public:
    
  protected:
    FillLayout(Zilch::NoType none) : Layout(none) {}
    ZilchNoCopy(FillLayout);
  };
  
  class SelectTool : public Component
  {
  public:
    bool GetSelectChildren();
    
    void SetSelectChildren(bool value);
    
    bool GetSelectRoot();
    
    void SetSelectRoot(bool value);
    
    Zilch::HandleOf<Cog> RayCast(Viewport* __0, const Zilch::Real2& __1);
    
    unsigned char mValue[28];
    
  protected:
    SelectTool(Zilch::NoType none) : Component(none) {}
    ZilchNoCopy(SelectTool);
  };
  
  class Viewport : public Composite
  {
  public:
    Zilch::HandleOf<Space> GetTargetSpace();
    
    void SetTargetSpace(Space* value);
    
    Zilch::HandleOf<Cog> GetRenderer();
    
    void SetRenderer(Cog* value);
    
    Zilch::HandleOf<Cog> GetCamera();
    
    void SetCamera(Cog* value);
    
    void SetScalingAndSize(int __0, int __1, int __2);
    
    void SetMarginColor(const Zilch::Real4& __0);
    
    void ScreenCapture(const Zilch::String& __0);
    
    Zilch::Real2 ScreenToViewport(const Zilch::Real2& __0);
    
    Zilch::Real2 ViewportToScreen(const Zilch::Real2& __0);
    
    Ray ScreenToWorldRay(const Zilch::Real2& __0);
    
    Zilch::Real3 ScreenToWorldZPlane(const Zilch::Real2& __0, float __1);
    
    Zilch::Real3 ScreenToWorldViewPlane(const Zilch::Real2& __0, float __1);
    
    Zilch::Real3 ScreenToWorldPlane(const Zilch::Real2& __0, const Zilch::Real3& __1, const Zilch::Real3& __2);
    
    Zilch::Real2 WorldToScreen(const Zilch::Real3& __0);
    
    Zilch::Real2 ViewPlaneSize(float __0);
    
    unsigned char mValue[8];
    
  protected:
    Viewport(Zilch::NoType none) : Composite(none) {}
    ZilchNoCopy(Viewport);
  };
  
  class GizmoBasis : public Zilch::ValueType
  {
  public:
    static GizmoBasis GetLocal();
    
    static GizmoBasis GetWorld();
    
    int mValue;
    GizmoBasis();
  };
  
  class PropertyEditors : public Zilch::ReferenceType
  {
  public:
    unsigned char mValue[60];
    
  protected:
    PropertyEditors(Zilch::NoType none) : Zilch::ReferenceType(none) {}
    ZilchNoCopy(PropertyEditors);
  };
  
  // Particle animator that causes particle to wander or smoothly vary directions.
  class ParticleWander : public ParticleAnimator
  {
  public:
    float GetWanderAngle();
    
    void SetWanderAngle(float value);
    
    float GetWanderAngleVariance();
    
    void SetWanderAngleVariance(float value);
    
    float GetWanderStrength();
    
    void SetWanderStrength(float value);
    
    unsigned char mValue[12];
    
  protected:
    ParticleWander(Zilch::NoType none) : ParticleAnimator(none) {}
    ZilchNoCopy(ParticleWander);
  };
  
  class RayTracedProvider : public Component
  {
  public:
    
  protected:
    RayTracedProvider(Zilch::NoType none) : Component(none) {}
    ZilchNoCopy(RayTracedProvider);
  };
  
  class HierarchyEvent : public Event
  {
  public:
    Zilch::HandleOf<Cog> GetParent();
    
    void SetParent(Cog* value);
    
    Zilch::HandleOf<Cog> GetChild();
    
    void SetChild(Cog* value);
    
    unsigned char mValue[8];
    
  protected:
    HierarchyEvent(Zilch::NoType none) : Event(none) {}
    ZilchNoCopy(HierarchyEvent);
  };
  
  class ContentCopyright : public Zilch::ReferenceType
  {
  public:
    Zilch::String GetOwner();
    
    void SetOwner(const Zilch::String& value);
    
    Zilch::String GetDate();
    
    void SetDate(const Zilch::String& value);
    
    unsigned char mValue[16];
    
  protected:
    ContentCopyright(Zilch::NoType none) : Zilch::ReferenceType(none) {}
    ZilchNoCopy(ContentCopyright);
  };
  
  class EventConnection : public Zilch::ReferenceType
  {
  public:
    unsigned char mValue[32];
    
  protected:
    EventConnection(Zilch::NoType none) : Zilch::ReferenceType(none) {}
    ZilchNoCopy(EventConnection);
  };
  
  // Stores the filters between collision group instances. This is space specific data. Also bakes out the filters into the internal flags of each instance for faster runtime operations.
  class CollisionTable : public Resource
  {
  public:
    Zilch::HandleOf<CollisionFilter> FindFilter(CollisionGroup* groupA, CollisionGroup* groupB);
    
    static Zilch::HandleOf<CollisionTable> Find(const Zilch::String& name);
    
    unsigned char mValue[72];
    
  protected:
    CollisionTable(Zilch::NoType none) : Resource(none) {}
    ZilchNoCopy(CollisionTable);
  };
  
  class OsWindow : public ZeroObject
  {
  public:
    Zilch::Integer2 GetPosition();
    
    void SetPosition(const Zilch::Integer2& value);
    
    Zilch::Integer2 GetSize();
    
    void SetSize(const Zilch::Integer2& value);
    
    Zilch::Integer2 GetClientSize();
    
    void SetClientSize(const Zilch::Integer2& value);
    
    bool GetVisible();
    
    void SetVisible(bool value);
    
    Zilch::Integer2 ScreenToClient(const Zilch::Integer2& __0);
    
    Zilch::Integer2 ClientToScreen(const Zilch::Integer2& __0);
    
    unsigned char mValue[32];
    
  protected:
    OsWindow(Zilch::NoType none) : ZeroObject(none) {}
    ZilchNoCopy(OsWindow);
  };
  
  class WindowsOsWindow : public OsWindow
  {
  public:
    unsigned char mValue[80];
    
  protected:
    WindowsOsWindow(Zilch::NoType none) : OsWindow(none) {}
    ZilchNoCopy(WindowsOsWindow);
  };
  
  class ConstraintConfigBlock : public Zilch::ReferenceType
  {
  public:
    float GetSlop();
    
    void SetSlop(float value);
    
    float GetLinearBaumgarte();
    
    void SetLinearBaumgarte(float value);
    
    float GetAngularBaumgarte();
    
    void SetAngularBaumgarte(float value);
    
    float GetLinearErrorCorrection();
    
    void SetLinearErrorCorrection(float value);
    
    float GetAngularErrorCorrection();
    
    void SetAngularErrorCorrection(float value);
    
    int GetCorrectionType();
    
    void SetCorrectionType(int value);
    
    unsigned char mValue[32];
    
  protected:
    ConstraintConfigBlock(Zilch::NoType none) : Zilch::ReferenceType(none) {}
    ZilchNoCopy(ConstraintConfigBlock);
  };
  
  class JoystickRange : public Zilch::ReferenceType
  {
  public:
    Zilch::HandleOf<JoystickRange> GetAll();
    
    bool GetIsNotEmpty();
    
    Zilch::HandleOf<Joystick> GetCurrent();
    
    void MoveNext();
    
    unsigned char mValue[12];
    
  protected:
    JoystickRange(Zilch::NoType none) : Zilch::ReferenceType(none) {}
    ZilchNoCopy(JoystickRange);
  };
  
  // A Joystick is associated with a hardware joystick, and provides the ability to query axes and buttons.
  class Joystick : public Zilch::ReferenceType
  {
  public:
    bool GetIsActive();
    
    Zilch::String GetName();
    
    int GetButtonCount();
    
    int GetAxisCount();
    
    // Queries an axes and returns a value between[-1, 1] The valid range of axes is between 0 and'GetMaxAxes' If the axis is not valid, then the value returned is 0.
    float GetAxisValue(int index);
    
    Zilch::String GetAxisName(int index);
    
    int GetAxisIndex(const Zilch::String& name);
    
    float GetAxisValueByName(const Zilch::String& name);
    
    // Queries a button and returns true if it is down, false if it is up The valid range of buttons is between 0 and'GetMaxButtons' If the button is not valid, then the value returned is false.
    bool GetButtonValue(int index);
    
    // Load an input mapping.
    void LoadInputMapping(const Zilch::String& name);
    
    void SaveInputMapping(const Zilch::String& name);
    
    void StartCalibration();
    
    void EndCalibration();
    
    bool Calibrating();
    
    unsigned char mValue[76];
    
  protected:
    Joystick(Zilch::NoType none) : Zilch::ReferenceType(none) {}
    ZilchNoCopy(Joystick);
  };
  
  // Dispatched after the net object changes network ownership.
  class NetUserOwnerChanged : public Event
  {
  public:
    Zilch::HandleOf<Cog> GetPreviousNetUserOwner();
    
    void SetPreviousNetUserOwner(Cog* value);
    
    Zilch::HandleOf<Cog> GetCurrentNetUserOwner();
    
    void SetCurrentNetUserOwner(Cog* value);
    
    unsigned char mValue[8];
    
  protected:
    NetUserOwnerChanged(Zilch::NoType none) : Event(none) {}
    ZilchNoCopy(NetUserOwnerChanged);
  };
  
  class DebugCircle : public Zilch::ReferenceType
  {
  public:
    Zilch::HandleOf<DebugCircle> Float4Color(const Zilch::Real4& __0);
    
    Zilch::HandleOf<DebugCircle> Width(float __0);
    
    Zilch::HandleOf<DebugCircle> Duration(float __0);
    
    Zilch::HandleOf<DebugCircle> OnTop(bool __0);
    
    Zilch::HandleOf<DebugCircle> Filled(bool __0);
    
    Zilch::HandleOf<DebugCircle> Border(bool __0);
    
    Zilch::HandleOf<DebugCircle> BackShade(bool __0);
    
    Zilch::HandleOf<DebugCircle> SpaceId(int __0);
    
    void Draw();
    
    Zilch::HandleOf<DebugCircle> ViewAligned(bool __0);
    
    Zilch::HandleOf<DebugCircle> Position(const Zilch::Real3& __0);
    
    Zilch::HandleOf<DebugCircle> Axis(const Zilch::Real3& __0);
    
    Zilch::HandleOf<DebugCircle> Radius(float __0);
    
    unsigned char mValue[48];
    
  protected:
    DebugCircle(Zilch::NoType none) : Zilch::ReferenceType(none) {}
    ZilchNoCopy(DebugCircle);
  };
  
  class ShaderGraph : public Resource
  {
  public:
    bool GetLit();
    
    void SetLit(bool value);
    
    static Zilch::HandleOf<ShaderGraph> Find(const Zilch::String& name);
    
    unsigned char mValue[16];
    
  protected:
    ShaderGraph(Zilch::NoType none) : Resource(none) {}
    ZilchNoCopy(ShaderGraph);
  };
  
  class SearchView_ : public ZeroObject
  {
  public:
    Zilch::Real4 GetBackgroundColor();
    
    void SetBackgroundColor(const Zilch::Real4& value);
    
    Zilch::Real4 GetPrimaryColor();
    
    void SetPrimaryColor(const Zilch::Real4& value);
    
    Zilch::Real4 GetSecondaryColor();
    
    void SetSecondaryColor(const Zilch::Real4& value);
    
    Zilch::Real4 GetHoverColor();
    
    void SetHoverColor(const Zilch::Real4& value);
    
    Zilch::Real4 GetInvalidTextColor();
    
    void SetInvalidTextColor(const Zilch::Real4& value);
    
    Zilch::Real4 GetInvalidTipBorder();
    
    void SetInvalidTipBorder(const Zilch::Real4& value);
    
    float GetRowSize();
    
    void SetRowSize(float value);
    
    unsigned char mValue[52];
    
  protected:
    SearchView_(Zilch::NoType none) : ZeroObject(none) {}
    ZilchNoCopy(SearchView_);
  };
  
  // Dispatched after sending a net user add request.
  class NetPeerSentUserAddRequest : public Event
  {
  public:
    int GetTheirNetPeerId();
    
    void SetTheirNetPeerId(int value);
    
    Zilch::HandleOf<IpAddress> GetTheirIpAddress();
    
    void SetTheirIpAddress(IpAddress* value);
    
    Zilch::HandleOf<EventBundle> GetOurRequestBundle();
    
    void SetOurRequestBundle(EventBundle* value);
    
    unsigned char mValue[184];
    
  protected:
    NetPeerSentUserAddRequest(Zilch::NoType none) : Event(none) {}
    ZilchNoCopy(NetPeerSentUserAddRequest);
  };
  
  // A motor for a joint. Used to add a constant pull or push to a joint. A motor defines a desired speed to move at as well as a max force that can be applied to reach that force at any timestep. See each joint for a description of how it reacts to a motor.
  class JointMotor : public Component
  {
  public:
    bool GetActive();
    
    void SetActive(bool value);
    
    bool GetReverse();
    
    void SetReverse(bool value);
    
    float GetSpeed();
    
    void SetSpeed(float value);
    
    float GetMaxForce();
    
    void SetMaxForce(float value);
    
    int GetAtomIds();
    
    void SetAtomIds(int value);
    
    unsigned char mValue[24];
    
  protected:
    JointMotor(Zilch::NoType none) : Component(none) {}
    ZilchNoCopy(JointMotor);
  };
  
  // A spring for a joint. Used to make a joint soft and therefore behave spring-like. A joint spring has a frequency in hertz at which to oscillate as well as a dampening ratio. The ratio should vary from 0 to 1 where 0 is no dampening and 1 is critical dampening. See each joint for a description of how it reacts to a spring.
  class JointSpring : public Component
  {
  public:
    bool GetActive();
    
    void SetActive(bool value);
    
    float GetFrequencyHz();
    
    void SetFrequencyHz(float value);
    
    float GetDampRatio();
    
    void SetDampRatio(float value);
    
    int GetAtomIds();
    
    void SetAtomIds(int value);
    
    unsigned char mValue[20];
    
  protected:
    JointSpring(Zilch::NoType none) : Component(none) {}
    ZilchNoCopy(JointSpring);
  };
  
  class EffectBuilder : public Zilch::ReferenceType
  {
  public:
    unsigned char mValue[40];
    
  protected:
    EffectBuilder(Zilch::NoType none) : Zilch::ReferenceType(none) {}
    ZilchNoCopy(EffectBuilder);
  };
  
  class SoundTag : public Resource
  {
  public:
    float GetVolume();
    
    void SetVolume(float value);
    
    float GetVolumeDB();
    
    void SetVolumeDB(float value);
    
    float GetPitch();
    
    void SetPitch(float value);
    
    float GetPitchSemitones();
    
    void SetPitchSemitones(float value);
    
    void TagSound(SoundInstance* instance);
    
    void UnTagSound(SoundInstance* instance);
    
    void PauseSounds();
    
    void StopSounds();
    
    void ContinueSounds();
    
    void InterpolateVolume(float value, float interpolationTime);
    
    void InterpolateVolumeDB(float __0, float __1);
    
    void InterpolatePitch(float pitch, float time);
    
    void InterpolatePitchSemitones(float __0, float __1);
    
    static Zilch::HandleOf<SoundTag> Find(const Zilch::String& name);
    
    unsigned char mValue[24];
    
  protected:
    SoundTag(Zilch::NoType none) : Resource(none) {}
    ZilchNoCopy(SoundTag);
  };
  
  class PhyGunJointBlock : public Zilch::ReferenceType
  {
  public:
    float GetSlop();
    
    void SetSlop(float value);
    
    float GetLinearBaumgarte();
    
    void SetLinearBaumgarte(float value);
    
    float GetAngularBaumgarte();
    
    void SetAngularBaumgarte(float value);
    
    float GetLinearErrorCorrection();
    
    void SetLinearErrorCorrection(float value);
    
    float GetAngularErrorCorrection();
    
    void SetAngularErrorCorrection(float value);
    
    int GetCorrectionType();
    
    void SetCorrectionType(int value);
    
    unsigned char mValue[32];
    
  protected:
    PhyGunJointBlock(Zilch::NoType none) : Zilch::ReferenceType(none) {}
    ZilchNoCopy(PhyGunJointBlock);
  };
  
  // The event sent when a path request job is finished.
  class PathRequestEvent : public Event
  {
  public:
    Zilch::Real3 GetDestination();
    
    void SetDestination(const Zilch::Real3& value);
    
    int GetState();
    
    void SetState(int value);
    
    Zilch::HandleOf<Path> GetPath();
    
    unsigned char mValue[20];
    
  protected:
    PathRequestEvent(Zilch::NoType none) : Event(none) {}
    ZilchNoCopy(PathRequestEvent);
  };
  
  class TextButton : public Composite
  {
  public:
    bool GetTabFocusStop();
    
    void SetTabFocusStop(bool value);
    
    int GetBorderColor();
    
    void SetBorderColor(int value);
    
    int GetFocusBorderColor();
    
    void SetFocusBorderColor(int value);
    
    int GetBackgroundColor();
    
    void SetBackgroundColor(int value);
    
    int GetBackgroundHoverColor();
    
    void SetBackgroundHoverColor(int value);
    
    int GetBackgroundClickedColor();
    
    void SetBackgroundClickedColor(int value);
    
    void SetToolTip(const Zilch::String& __0);
    
    void SetText(const Zilch::String& __0);
    
    unsigned char mValue[80];
    
  protected:
    TextButton(Zilch::NoType none) : Composite(none) {}
    ZilchNoCopy(TextButton);
  };
  
  class PhysicsMeshBuilder : public Zilch::ReferenceType
  {
  public:
    bool GetOnlyUseMarkedCollision();
    
    void SetOnlyUseMarkedCollision(bool value);
    
    int GetMeshBuilt();
    
    void SetMeshBuilt(int value);
    
    unsigned char mValue[32];
    
  protected:
    PhysicsMeshBuilder(Zilch::NoType none) : Zilch::ReferenceType(none) {}
    ZilchNoCopy(PhysicsMeshBuilder);
  };
  
  class Default_ : public ZeroObject
  {
  public:
    Zilch::Real4 GetIconColor();
    
    void SetIconColor(const Zilch::Real4& value);
    
    Zilch::Real4 GetProgressBarPrimaryColor();
    
    void SetProgressBarPrimaryColor(const Zilch::Real4& value);
    
    Zilch::Real4 GetProgressBackgroundColor();
    
    void SetProgressBackgroundColor(const Zilch::Real4& value);
    
    unsigned char mValue[52];
    
  protected:
    Default_(Zilch::NoType none) : ZeroObject(none) {}
    ZilchNoCopy(Default_);
  };
  
  class NetUserAddResponse : public Zilch::ValueType
  {
  public:
    static NetUserAddResponse GetAccept();
    
    static NetUserAddResponse GetDeny();
    
    int mValue;
    NetUserAddResponse();
  };
  
  // Simple event for general signals.
  class ObjectEvent : public Event
  {
  public:
    Zilch::HandleOf<ZeroObject> GetSource();
    
    unsigned char mValue[4];
    
  protected:
    ObjectEvent(Zilch::NoType none) : Event(none) {}
    ZilchNoCopy(ObjectEvent);
  };
  
  // Dispatched after sending a connect request.
  class NetPeerSentConnectRequest : public Event
  {
  public:
    Zilch::HandleOf<IpAddress> GetTheirIpAddress();
    
    void SetTheirIpAddress(IpAddress* value);
    
    Zilch::HandleOf<EventBundle> GetOurRequestBundle();
    
    void SetOurRequestBundle(EventBundle* value);
    
    int GetOurPendingUserAddRequestCount();
    
    void SetOurPendingUserAddRequestCount(int value);
    
    unsigned char mValue[184];
    
  protected:
    NetPeerSentConnectRequest(Zilch::NoType none) : Event(none) {}
    ZilchNoCopy(NetPeerSentConnectRequest);
  };
  
  class NetProperties : public Zilch::ReferenceType
  {
  public:
    unsigned char mValue[16];
    
  protected:
    NetProperties(Zilch::NoType none) : Zilch::ReferenceType(none) {}
    ZilchNoCopy(NetProperties);
  };
  
  class Baked : public MaterialBlock
  {
  public:
    int GetTextureWidth();
    
    void SetTextureWidth(int value);
    
    int GetTextureHeight();
    
    void SetTextureHeight(int value);
    
    unsigned char mValue[16];
    
  protected:
    Baked(Zilch::NoType none) : MaterialBlock(none) {}
    ZilchNoCopy(Baked);
  };
  
  class MouseButtons : public Zilch::ValueType
  {
  public:
    static MouseButtons GetXTwoForward();
    
    static MouseButtons GetRight();
    
    static MouseButtons GetLeft();
    
    static MouseButtons GetXOneBack();
    
    static MouseButtons GetMiddle();
    
    static MouseButtons GetNone();
    
    int mValue;
    MouseButtons();
  };
  
  // Mouse object for Display System.
  class Mouse : public Zilch::ReferenceType
  {
  public:
    Cursor GetCursor();
    
    void SetCursor(Cursor value);
    
    Zilch::Real2 GetScreenPosition();
    
    Zilch::Real2 GetScreenMovement();
    
    bool GetTrapped();
    
    void SetTrapped(bool value);
    
    Zilch::Real2 GetRawMovement();
    
    void SetRawMovement(const Zilch::Real2& value);
    
    // Is a mouse button currently down?
    bool IsButtonDown(MouseButtons button);
    
    void ToggleTrapped();
    
    unsigned char mValue[80];
    
  protected:
    Mouse(Zilch::NoType none) : Zilch::ReferenceType(none) {}
    ZilchNoCopy(Mouse);
  };
  
  // Particle emitters add new particles to the system and control where the particles will appear(sphere emitter, mesh emitter, etc)
  class ParticleEmitter : public Component
  {
  public:
    unsigned char mValue[28];
    
  protected:
    ParticleEmitter(Zilch::NoType none) : Component(none) {}
    ZilchNoCopy(ParticleEmitter);
  };
  
  // Particle Emitter Shared.
  class ParticleEmitterShared : public ParticleEmitter
  {
  public:
    bool GetActive();
    
    void SetActive(bool value);
    
    int GetEmitCount();
    
    void SetEmitCount(int value);
    
    float GetEmitRate();
    
    void SetEmitRate(float value);
    
    float GetEmitVariance();
    
    void SetEmitVariance(float value);
    
    float GetSize();
    
    void SetSize(float value);
    
    float GetSizeVariance();
    
    void SetSizeVariance(float value);
    
    float GetLifetime();
    
    void SetLifetime(float value);
    
    float GetLifetimeVariance();
    
    void SetLifetimeVariance(float value);
    
    float GetSpin();
    
    void SetSpin(float value);
    
    float GetSpinVariance();
    
    void SetSpinVariance(float value);
    
    bool GetRandomSpin();
    
    void SetRandomSpin(bool value);
    
    float GetFill();
    
    void SetFill(float value);
    
    float GetEmitterVelocityPercent();
    
    void SetEmitterVelocityPercent(float value);
    
    Zilch::Real3 GetStartVelocity();
    
    void SetStartVelocity(const Zilch::Real3& value);
    
    Zilch::Real3 GetRandomVelocity();
    
    void SetRandomVelocity(const Zilch::Real3& value);
    
    Zilch::Real3 GetTangentVelocity();
    
    void SetTangentVelocity(const Zilch::Real3& value);
    
    Zilch::Real3 GetEmitterSize();
    
    void SetEmitterSize(const Zilch::Real3& value);
    
    bool GetFastMovingEmitter();
    
    void SetFastMovingEmitter(bool value);
    
    // Reset the number of particles to emit back to EmitCount.
    void ResetCount();
    
    unsigned char mValue[120];
    
  protected:
    ParticleEmitterShared(Zilch::NoType none) : ParticleEmitter(none) {}
    ZilchNoCopy(ParticleEmitterShared);
  };
  
  class ContactRange : public Zilch::ReferenceType
  {
  public:
    Zilch::HandleOf<ContactRange> GetAll();
    
    bool GetIsNotEmpty();
    
    Zilch::HandleOf<ContactHolder> GetCurrent();
    
    void MoveNext();
    
    unsigned char mValue[20];
    
  protected:
    ContactRange(Zilch::NoType none) : Zilch::ReferenceType(none) {}
    ZilchNoCopy(ContactRange);
  };
  
  class GeometryMaterialBlock : public Zilch::ReferenceType
  {
  public:
    unsigned char mValue[8];
    
  protected:
    GeometryMaterialBlock(Zilch::NoType none) : Zilch::ReferenceType(none) {}
    ZilchNoCopy(GeometryMaterialBlock);
  };
  
  class PhysicsMaterialBlock : public GeometryMaterialBlock
  {
  public:
    
  protected:
    PhysicsMaterialBlock(Zilch::NoType none) : GeometryMaterialBlock(none) {}
    ZilchNoCopy(PhysicsMaterialBlock);
  };
  
  class TextureFilter : public Zilch::ValueType
  {
  public:
    static TextureFilter GetPoint();
    
    static TextureFilter GetTrilinear();
    
    static TextureFilter GetBilinear();
    
    int mValue;
    TextureFilter();
  };
  
  class ActiveFrameEvent : public SendableEvent
  {
  public:
    Zilch::HandleOf<LockStepPeer> GetPeer();
    
    void SetPeer(LockStepPeer* value);
    
    unsigned char mValue[16];
    
  protected:
    ActiveFrameEvent(Zilch::NoType none) : SendableEvent(none) {}
    ZilchNoCopy(ActiveFrameEvent);
  };
  
  class RubberBanding : public Zilch::ValueType
  {
  public:
    static RubberBanding GetDisabled();
    
    static RubberBanding GetConservative();
    
    int mValue;
    RubberBanding();
  };
  
  class CameraTransparentSort : public Zilch::ValueType
  {
  public:
    static CameraTransparentSort GetZDepth();
    
    static CameraTransparentSort GetInheritFromSpace();
    
    static CameraTransparentSort GetViewDepth();
    
    int mValue;
    CameraTransparentSort();
  };
  
  class ContentItem : public Zilch::ReferenceType
  {
  public:
    unsigned char mValue[48];
    
  protected:
    ContentItem(Zilch::NoType none) : Zilch::ReferenceType(none) {}
    ZilchNoCopy(ContentItem);
  };
  
  class FeelerMode : public Zilch::ValueType
  {
  public:
    static FeelerMode GetPrimaryAndSideFeelers();
    
    static FeelerMode GetSideFeelers();
    
    static FeelerMode GetRandomPrimaryFeeler();
    
    int mValue;
    FeelerMode();
  };
  
  class Atlas : public Resource
  {
  public:
    static Zilch::HandleOf<Atlas> Find(const Zilch::String& name);
    
    unsigned char mValue[32];
    
  protected:
    Atlas(Zilch::NoType none) : Resource(none) {}
    ZilchNoCopy(Atlas);
  };
  
  class NavMesh : public Component
  {
  public:
    int GetHeuristic();
    
    void SetHeuristic(int value);
    
    float GetHeuristicWeight();
    
    void SetHeuristicWeight(float value);
    
    int GetRubberbanding();
    
    void SetRubberbanding(int value);
    
    bool GetRemoveCoLinearPoints();
    
    void SetRemoveCoLinearPoints(bool value);
    
    int GetCurveType();
    
    void SetCurveType(int value);
    
    int GetPathResolution();
    
    void SetPathResolution(int value);
    
    Zilch::HandleOf<NavMeshSource> GetNavMesh();
    
    void SetNavMesh(NavMeshSource* value);
    
    int GetSearchMethod();
    
    void SetSearchMethod(int value);
    
    Zilch::Real3 GetUpVector();
    
    void SetUpVector(const Zilch::Real3& value);
    
    bool RequestPath(const Zilch::Real3& __0, const Zilch::Real3& __1, Cog* __2);
    
    void CancelPathRequest(Cog* __0);
    
    unsigned char mValue[96];
    
  protected:
    NavMesh(Zilch::NoType none) : Component(none) {}
    ZilchNoCopy(NavMesh);
  };
  
  class NavMeshSource : public Resource
  {
  public:
    static Zilch::HandleOf<NavMeshSource> Find(const Zilch::String& name);
    
    unsigned char mValue[56];
    
  protected:
    NavMeshSource(Zilch::NoType none) : Resource(none) {}
    ZilchNoCopy(NavMeshSource);
  };
  
  class AutoOrientToVelocity : public Component
  {
  public:
    float GetAngleOffset();
    
    void SetAngleOffset(float value);
    
    unsigned char mValue[4];
    
  protected:
    AutoOrientToVelocity(Zilch::NoType none) : Component(none) {}
    ZilchNoCopy(AutoOrientToVelocity);
  };
  
  class ParticleGradientAnimator : public ParticleAnimator
  {
  public:
    Zilch::HandleOf<ColorGradient> GetColorGradient();
    
    void SetColorGradient(ColorGradient* value);
    
    unsigned char mValue[4];
    
  protected:
    ParticleGradientAnimator(Zilch::NoType none) : ParticleAnimator(none) {}
    ZilchNoCopy(ParticleGradientAnimator);
  };
  
  class ColorGradient : public Resource
  {
  public:
    // Sample the curve at the given t.
    Zilch::Real4 Sample(float t);
    
    static Zilch::HandleOf<ColorGradient> Find(const Zilch::String& name);
    
    unsigned char mValue[16];
    
  protected:
    ColorGradient(Zilch::NoType none) : Resource(none) {}
    ZilchNoCopy(ColorGradient);
  };
  
  class LinkState : public Zilch::ValueType
  {
  public:
    static LinkState GetConnected();
    
    static LinkState GetReceivedConnectRequest();
    
    static LinkState GetUnspecified();
    
    static LinkState GetDisconnected();
    
    static LinkState GetSentNegativeConnectResponse();
    
    static LinkState GetReceivedDisconnectNotice();
    
    static LinkState GetReceivedNegativeConnectResponse();
    
    static LinkState GetSentConnectRequest();
    
    static LinkState GetSentDisconnectNotice();
    
    int mValue;
    LinkState();
  };
  
  class TcpSocketBind : public Zilch::ValueType
  {
  public:
    static TcpSocketBind GetLoopback();
    
    static TcpSocketBind GetAny();
    
    int mValue;
    TcpSocketBind();
  };
  
  // Joystick events are sent when a game pad button state is changed.
  class JoystickEvent : public Event
  {
  public:
    int GetButton();
    
    void SetButton(int value);
    
    Zilch::HandleOf<Joystick> GetJoystick();
    
    void SetJoystick(Joystick* value);
    
    unsigned char mValue[8];
    
  protected:
    JoystickEvent(Zilch::NoType none) : Event(none) {}
    ZilchNoCopy(JoystickEvent);
  };
  
  class GeometryMaterial : public Resource
  {
  public:
    static Zilch::HandleOf<GeometryMaterial> Find(const Zilch::String& name);
    
    Zilch::HandleOf<PhysicsMaterialBlock> GetPhysicsMaterialBlock();
    
    Zilch::HandleOf<Bevel> GetBevel();
    
    Zilch::HandleOf<GraphicsMaterialBlock> GetGraphicsMaterialBlock();
    
    unsigned char mValue[72];
    
  protected:
    GeometryMaterial(Zilch::NoType none) : Resource(none) {}
    ZilchNoCopy(GeometryMaterial);
  };
  
  class Mutator : public Zilch::ReferenceType
  {
  public:
    unsigned char mValue[8];
    
  protected:
    Mutator(Zilch::NoType none) : Zilch::ReferenceType(none) {}
    ZilchNoCopy(Mutator);
  };
  
  class Beveler : public Mutator
  {
  public:
    float GetBevelSize();
    
    void SetBevelSize(float value);
    
    unsigned char mValue[4];
    
  protected:
    Beveler(Zilch::NoType none) : Mutator(none) {}
    ZilchNoCopy(Beveler);
  };
  
  class Bevel : public Beveler
  {
  public:
    float GetAngle();
    
    void SetAngle(float value);
    
    unsigned char mValue[8];
    
  protected:
    Bevel(Zilch::NoType none) : Beveler(none) {}
    ZilchNoCopy(Bevel);
  };
  
  class GraphicsMaterialBlock : public GeometryMaterialBlock
  {
  public:
    Zilch::HandleOf<Material> GetFaceMaterial();
    
    void SetFaceMaterial(Material* value);
    
    Zilch::HandleOf<Material> GetSurfaceMaterial();
    
    void SetSurfaceMaterial(Material* value);
    
    Zilch::Real2 GetTextureScalarFace();
    
    void SetTextureScalarFace(const Zilch::Real2& value);
    
    float GetTextureScalarSurface();
    
    void SetTextureScalarSurface(float value);
    
    bool GetDoubleSided();
    
    void SetDoubleSided(bool value);
    
    unsigned char mValue[20];
    
  protected:
    GraphicsMaterialBlock(Zilch::NoType none) : GeometryMaterialBlock(none) {}
    ZilchNoCopy(GraphicsMaterialBlock);
  };
  
  class HotKeyDataSet : public Resource
  {
  public:
    static Zilch::HandleOf<HotKeyDataSet> Find(const Zilch::String& name);
    
    unsigned char mValue[16];
    
  protected:
    HotKeyDataSet(Zilch::NoType none) : Resource(none) {}
    ZilchNoCopy(HotKeyDataSet);
  };
  
  class DockArea : public Zilch::ValueType
  {
  public:
    static DockArea GetBottom();
    
    static DockArea GetFloating();
    
    static DockArea GetRight();
    
    static DockArea GetLeft();
    
    static DockArea GetTop();
    
    static DockArea GetCenter();
    
    static DockArea GetCount();
    
    static DockArea GetTopTool();
    
    static DockArea GetBotTool();
    
    int mValue;
    DockArea();
  };
  
  class ContentComposition : public ContentItem
  {
  public:
    Zilch::HandleOf<FontBuilder> GetFontBuilder();
    
    Zilch::HandleOf<GeneratedArchetype> GetGeneratedArchetype();
    
    Zilch::HandleOf<AnimationBuilder> GetAnimationBuilder();
    
    Zilch::HandleOf<SkeletonBuilder> GetSkeletonBuilder();
    
    Zilch::HandleOf<SoundBuilder> GetSoundBuilder();
    
    Zilch::HandleOf<ContentHistory> GetContentHistory();
    
    Zilch::HandleOf<SpriteSourceBuilder> GetSpriteSourceBuilder();
    
    Zilch::HandleOf<ContentCopyright> GetContentCopyright();
    
    Zilch::HandleOf<DataBuilder> GetDataBuilder();
    
    Zilch::HandleOf<BinaryBuilder> GetBinaryBuilder();
    
    Zilch::HandleOf<EffectBuilder> GetEffectBuilder();
    
    Zilch::HandleOf<ContentTags> GetContentTags();
    
    Zilch::HandleOf<ZilchScriptBuilder> GetZilchScriptBuilder();
    
    Zilch::HandleOf<TextureBuilder> GetTextureBuilder();
    
    Zilch::HandleOf<RichAnimationBuilder> GetRichAnimationBuilder();
    
    Zilch::HandleOf<FragmentBuilder> GetFragmentBuilder();
    
    Zilch::HandleOf<PhysicsMeshBuilder> GetPhysicsMeshBuilder();
    
    Zilch::HandleOf<NavMeshBuilder> GetNavMeshBuilder();
    
    Zilch::HandleOf<ContentNotes> GetContentNotes();
    
    Zilch::HandleOf<ZilchPluginBuilder> GetZilchPluginBuilder();
    
    Zilch::HandleOf<TextBuilder> GetTextBuilder();
    
    Zilch::HandleOf<HeightToNormalBuilder> GetHeightToNormalBuilder();
    
    Zilch::HandleOf<DirectImageBuilder> GetDirectImageBuilder();
    
    Zilch::HandleOf<ZilchFragmentBuilder> GetZilchFragmentBuilder();
    
    Zilch::HandleOf<GeometryImport> GetGeometryImport();
    
    Zilch::HandleOf<MeshBuilder> GetMeshBuilder();
    
    unsigned char mValue[32];
    
  protected:
    ContentComposition(Zilch::NoType none) : ContentItem(none) {}
    ZilchNoCopy(ContentComposition);
  };
  
  class DataContent : public ContentComposition
  {
  public:
    Zilch::HandleOf<FontBuilder> GetFontBuilder();
    
    Zilch::HandleOf<GeneratedArchetype> GetGeneratedArchetype();
    
    Zilch::HandleOf<AnimationBuilder> GetAnimationBuilder();
    
    Zilch::HandleOf<SkeletonBuilder> GetSkeletonBuilder();
    
    Zilch::HandleOf<SoundBuilder> GetSoundBuilder();
    
    Zilch::HandleOf<ContentHistory> GetContentHistory();
    
    Zilch::HandleOf<SpriteSourceBuilder> GetSpriteSourceBuilder();
    
    Zilch::HandleOf<ContentCopyright> GetContentCopyright();
    
    Zilch::HandleOf<DataBuilder> GetDataBuilder();
    
    Zilch::HandleOf<BinaryBuilder> GetBinaryBuilder();
    
    Zilch::HandleOf<EffectBuilder> GetEffectBuilder();
    
    Zilch::HandleOf<ContentTags> GetContentTags();
    
    Zilch::HandleOf<ZilchScriptBuilder> GetZilchScriptBuilder();
    
    Zilch::HandleOf<TextureBuilder> GetTextureBuilder();
    
    Zilch::HandleOf<RichAnimationBuilder> GetRichAnimationBuilder();
    
    Zilch::HandleOf<FragmentBuilder> GetFragmentBuilder();
    
    Zilch::HandleOf<PhysicsMeshBuilder> GetPhysicsMeshBuilder();
    
    Zilch::HandleOf<NavMeshBuilder> GetNavMeshBuilder();
    
    Zilch::HandleOf<ContentNotes> GetContentNotes();
    
    Zilch::HandleOf<ZilchPluginBuilder> GetZilchPluginBuilder();
    
    Zilch::HandleOf<TextBuilder> GetTextBuilder();
    
    Zilch::HandleOf<HeightToNormalBuilder> GetHeightToNormalBuilder();
    
    Zilch::HandleOf<DirectImageBuilder> GetDirectImageBuilder();
    
    Zilch::HandleOf<ZilchFragmentBuilder> GetZilchFragmentBuilder();
    
    Zilch::HandleOf<GeometryImport> GetGeometryImport();
    
    Zilch::HandleOf<MeshBuilder> GetMeshBuilder();
    
    
  protected:
    DataContent(Zilch::NoType none) : ContentComposition(none) {}
    ZilchNoCopy(DataContent);
  };
  
  class FontBuilder : public Zilch::ReferenceType
  {
  public:
    unsigned char mValue[40];
    
  protected:
    FontBuilder(Zilch::NoType none) : Zilch::ReferenceType(none) {}
    ZilchNoCopy(FontBuilder);
  };
  
  class GeneratedArchetype : public Zilch::ReferenceType
  {
  public:
    unsigned char mValue[16];
    
  protected:
    GeneratedArchetype(Zilch::NoType none) : Zilch::ReferenceType(none) {}
    ZilchNoCopy(GeneratedArchetype);
  };
  
  class SkeletonBuilder : public Zilch::ReferenceType
  {
  public:
    Zilch::String GetName();
    
    void SetName(const Zilch::String& value);
    
    unsigned char mValue[40];
    
  protected:
    SkeletonBuilder(Zilch::NoType none) : Zilch::ReferenceType(none) {}
    ZilchNoCopy(SkeletonBuilder);
  };
  
  class SoundBuilder : public Zilch::ReferenceType
  {
  public:
    Zilch::String GetName();
    
    void SetName(const Zilch::String& value);
    
    bool GetCompressed();
    
    void SetCompressed(bool value);
    
    bool GetStreamed();
    
    void SetStreamed(bool value);
    
    unsigned char mValue[48];
    
  protected:
    SoundBuilder(Zilch::NoType none) : Zilch::ReferenceType(none) {}
    ZilchNoCopy(SoundBuilder);
  };
  
  class DataBuilder : public Zilch::ReferenceType
  {
  public:
    unsigned char mValue[40];
    
  protected:
    DataBuilder(Zilch::NoType none) : Zilch::ReferenceType(none) {}
    ZilchNoCopy(DataBuilder);
  };
  
  class BinaryBuilder : public Zilch::ReferenceType
  {
  public:
    unsigned char mValue[48];
    
  protected:
    BinaryBuilder(Zilch::NoType none) : Zilch::ReferenceType(none) {}
    ZilchNoCopy(BinaryBuilder);
  };
  
  class ContentTags : public Zilch::ReferenceType
  {
  public:
    unsigned char mValue[32];
    
  protected:
    ContentTags(Zilch::NoType none) : Zilch::ReferenceType(none) {}
    ZilchNoCopy(ContentTags);
  };
  
  class ZilchScriptBuilder : public Zilch::ReferenceType
  {
  public:
    unsigned char mValue[40];
    
  protected:
    ZilchScriptBuilder(Zilch::NoType none) : Zilch::ReferenceType(none) {}
    ZilchNoCopy(ZilchScriptBuilder);
  };
  
  class TextureBuilder : public Zilch::ReferenceType
  {
  public:
    Zilch::String GetName();
    
    void SetName(const Zilch::String& value);
    
    int GetRgbUsage();
    
    void SetRgbUsage(int value);
    
    int GetAlphaUsage();
    
    void SetAlphaUsage(int value);
    
    int GetCompression();
    
    void SetCompression(int value);
    
    int GetWrapping();
    
    void SetWrapping(int value);
    
    int GetFilter();
    
    void SetFilter(int value);
    
    float GetAnisotropy();
    
    void SetAnisotropy(float value);
    
    int GetMipGeneration();
    
    void SetMipGeneration(int value);
    
    int GetMipFilter();
    
    void SetMipFilter(int value);
    
    int GetFixPowerOf2();
    
    void SetFixPowerOf2(int value);
    
    int GetResizeFilter();
    
    void SetResizeFilter(int value);
    
    OutputTextureFormat GetFormat();
    
    void SetFormat(OutputTextureFormat value);
    
    unsigned char mValue[72];
    
  protected:
    TextureBuilder(Zilch::NoType none) : Zilch::ReferenceType(none) {}
    ZilchNoCopy(TextureBuilder);
  };
  
  class RichAnimationBuilder : public Zilch::ReferenceType
  {
  public:
    Zilch::String GetPreviewArchetype();
    
    void SetPreviewArchetype(const Zilch::String& value);
    
    unsigned char mValue[48];
    
  protected:
    RichAnimationBuilder(Zilch::NoType none) : Zilch::ReferenceType(none) {}
    ZilchNoCopy(RichAnimationBuilder);
  };
  
  class FragmentBuilder : public Zilch::ReferenceType
  {
  public:
    unsigned char mValue[40];
    
  protected:
    FragmentBuilder(Zilch::NoType none) : Zilch::ReferenceType(none) {}
    ZilchNoCopy(FragmentBuilder);
  };
  
  class NavMeshBuilder : public Zilch::ReferenceType
  {
  public:
    float GetNormalTolerance();
    
    void SetNormalTolerance(float value);
    
    unsigned char mValue[32];
    
  protected:
    NavMeshBuilder(Zilch::NoType none) : Zilch::ReferenceType(none) {}
    ZilchNoCopy(NavMeshBuilder);
  };
  
  class ContentNotes : public Zilch::ReferenceType
  {
  public:
    Zilch::String GetNotes();
    
    void SetNotes(const Zilch::String& value);
    
    unsigned char mValue[12];
    
  protected:
    ContentNotes(Zilch::NoType none) : Zilch::ReferenceType(none) {}
    ZilchNoCopy(ContentNotes);
  };
  
  class ZilchPluginBuilder : public Zilch::ReferenceType
  {
  public:
    unsigned char mValue[48];
    
  protected:
    ZilchPluginBuilder(Zilch::NoType none) : Zilch::ReferenceType(none) {}
    ZilchNoCopy(ZilchPluginBuilder);
  };
  
  class TextBuilder : public Zilch::ReferenceType
  {
  public:
    unsigned char mValue[40];
    
  protected:
    TextBuilder(Zilch::NoType none) : Zilch::ReferenceType(none) {}
    ZilchNoCopy(TextBuilder);
  };
  
  class HeightToNormalBuilder : public Zilch::ReferenceType
  {
  public:
    unsigned char mValue[24];
    
  protected:
    HeightToNormalBuilder(Zilch::NoType none) : Zilch::ReferenceType(none) {}
    ZilchNoCopy(HeightToNormalBuilder);
  };
  
  class DirectImageBuilder : public Zilch::ReferenceType
  {
  public:
    unsigned char mValue[40];
    
  protected:
    DirectImageBuilder(Zilch::NoType none) : Zilch::ReferenceType(none) {}
    ZilchNoCopy(DirectImageBuilder);
  };
  
  class ZilchFragmentBuilder : public Zilch::ReferenceType
  {
  public:
    unsigned char mValue[40];
    
  protected:
    ZilchFragmentBuilder(Zilch::NoType none) : Zilch::ReferenceType(none) {}
    ZilchNoCopy(ZilchFragmentBuilder);
  };
  
  class GeometryImport : public Zilch::ReferenceType
  {
  public:
    Zilch::Real3 GetTranslation();
    
    void SetTranslation(const Zilch::Real3& value);
    
    Zilch::Quaternion GetRotation();
    
    void SetRotation(const Zilch::Quaternion& value);
    
    Zilch::Real3 GetScale();
    
    void SetScale(const Zilch::Real3& value);
    
    bool GetChangeWinding();
    
    void SetChangeWinding(bool value);
    
    unsigned char mValue[52];
    
  protected:
    GeometryImport(Zilch::NoType none) : Zilch::ReferenceType(none) {}
    ZilchNoCopy(GeometryImport);
  };
  
  class MeshBuilder : public Zilch::ReferenceType
  {
  public:
    int GetMeshMode();
    
    void SetMeshMode(int value);
    
    unsigned char mValue[44];
    
  protected:
    MeshBuilder(Zilch::NoType none) : Zilch::ReferenceType(none) {}
    ZilchNoCopy(MeshBuilder);
  };
  
  // Applies a drag acceleration(damping) to slow down an object's linear and angular velocity. Note that this is an acceleration not a force so mass doesn't apply. Otherwise this uses a simple linear approximation of drag.
  class DragEffect : public PhysicsEffect
  {
  public:
    float GetDrag();
    
    void SetDrag(float value);
    
    float GetAngularDrag();
    
    void SetAngularDrag(float value);
    
    unsigned char mValue[8];
    
  protected:
    DragEffect(Zilch::NoType none) : PhysicsEffect(none) {}
    ZilchNoCopy(DragEffect);
  };
  
  class DebugLineCross : public Zilch::ReferenceType
  {
  public:
    Zilch::HandleOf<DebugLineCross> Float4Color(const Zilch::Real4& __0);
    
    Zilch::HandleOf<DebugLineCross> Width(float __0);
    
    Zilch::HandleOf<DebugLineCross> Duration(float __0);
    
    Zilch::HandleOf<DebugLineCross> OnTop(bool __0);
    
    Zilch::HandleOf<DebugLineCross> Filled(bool __0);
    
    Zilch::HandleOf<DebugLineCross> Border(bool __0);
    
    Zilch::HandleOf<DebugLineCross> BackShade(bool __0);
    
    Zilch::HandleOf<DebugLineCross> SpaceId(int __0);
    
    void Draw();
    
    Zilch::HandleOf<DebugLineCross> ViewAligned(bool __0);
    
    Zilch::HandleOf<DebugLineCross> Position(const Zilch::Real3& __0);
    
    Zilch::HandleOf<DebugLineCross> Size(float __0);
    
    unsigned char mValue[36];
    
  protected:
    DebugLineCross(Zilch::NoType none) : Zilch::ReferenceType(none) {}
    ZilchNoCopy(DebugLineCross);
  };
  
  class PreviewWidgets_ : public ZeroObject
  {
  public:
    Zilch::Real2 GetDefaultSize();
    
    void SetDefaultSize(const Zilch::Real2& value);
    
    Zilch::Real2 GetColorGradientSize();
    
    void SetColorGradientSize(const Zilch::Real2& value);
    
    Zilch::Real2 GetSpacePreviewSize();
    
    void SetSpacePreviewSize(const Zilch::Real2& value);
    
    unsigned char mValue[52];
    
  protected:
    PreviewWidgets_(Zilch::NoType none) : ZeroObject(none) {}
    ZilchNoCopy(PreviewWidgets_);
  };
  
  class TextureUvMode : public Zilch::ValueType
  {
  public:
    static TextureUvMode GetNormal();
    
    static TextureUvMode GetRenderTarget();
    
    int mValue;
    TextureUvMode();
  };
  
  class DocumentationLibrary : public Zilch::ReferenceType
  {
  public:
    unsigned char mValue[76];
    
  protected:
    DocumentationLibrary(Zilch::NoType none) : Zilch::ReferenceType(none) {}
    ZilchNoCopy(DocumentationLibrary);
  };
  
  // Scene rendering interface used to render 3d scene in a DisplayScene.
  class Renderer : public Component
  {
  public:
    Zilch::Real4 GetClearColor();
    
    void SetClearColor(const Zilch::Real4& value);
    
    bool GetDrawNonVisible();
    
    void SetDrawNonVisible(bool value);
    
    bool GetDrawDebugObjects();
    
    void SetDrawDebugObjects(bool value);
    
    bool GetDrawEditorIcons();
    
    void SetDrawEditorIcons(bool value);
    
    bool GetEditorIconDepth();
    
    void SetEditorIconDepth(bool value);
    
    unsigned char mValue[32];
    
  protected:
    Renderer(Zilch::NoType none) : Component(none) {}
    ZilchNoCopy(Renderer);
  };
  
  // Base Forward Renderer.
  class ForwardRenderer : public Renderer
  {
  public:
    bool GetWireframe();
    
    void SetWireframe(bool value);
    
    unsigned char mValue[8];
    
  protected:
    ForwardRenderer(Zilch::NoType none) : Renderer(none) {}
    ZilchNoCopy(ForwardRenderer);
  };
  
  // A synced mouse event.
  class LockStepMouseScrollEvent : public LockStepMouseEvent
  {
  public:
    Zilch::Real2 GetScrollDelta();
    
    void SetScrollDelta(const Zilch::Real2& value);
    
    unsigned char mValue[8];
    
  protected:
    LockStepMouseScrollEvent(Zilch::NoType none) : LockStepMouseEvent(none) {}
    ZilchNoCopy(LockStepMouseScrollEvent);
  };
  
  class SpecularFromAlpha : public MaterialBlock
  {
  public:
    
  protected:
    SpecularFromAlpha(Zilch::NoType none) : MaterialBlock(none) {}
    ZilchNoCopy(SpecularFromAlpha);
  };
  
  class ParticleSystemCommonData : public ParticleSystem
  {
  public:
    // Allows direct editing of particles.
    Zilch::HandleOf<ParticleListRange> AllParticles();
    
    unsigned char mValue[40];
    
  protected:
    ParticleSystemCommonData(Zilch::NoType none) : ParticleSystem(none) {}
    ZilchNoCopy(ParticleSystemCommonData);
  };
  
  // Sprite Particles system component. Renders particles system as billboarded sprites.
  class SpriteParticleSystem : public ParticleSystemCommonData
  {
  public:
    int GetGeometryMode();
    
    void SetGeometryMode(int value);
    
    int GetRenderMode();
    
    void SetRenderMode(int value);
    
    int GetSortMode();
    
    void SetSortMode(int value);
    
    int GetParticleAnimation();
    
    void SetParticleAnimation(int value);
    
    Zilch::HandleOf<TextureRegion> GetTexture();
    
    void SetTexture(TextureRegion* value);
    
    float GetVelocityScale();
    
    void SetVelocityScale(float value);
    
    float GetLengthScale();
    
    void SetLengthScale(float value);
    
    float GetMaxParticleSize();
    
    void SetMaxParticleSize(float value);
    
    Zilch::Real3 GetSystemSize();
    
    void SetSystemSize(const Zilch::Real3& value);
    
    void Clear();
    
    unsigned char mValue[48];
    
  protected:
    SpriteParticleSystem(Zilch::NoType none) : ParticleSystemCommonData(none) {}
    ZilchNoCopy(SpriteParticleSystem);
  };
  
  class RaycastProvider : public Zilch::ReferenceType
  {
  public:
    bool GetActive();
    
    void SetActive(bool value);
    
    unsigned char mValue[8];
    
  protected:
    RaycastProvider(Zilch::NoType none) : Zilch::ReferenceType(none) {}
    ZilchNoCopy(RaycastProvider);
  };
  
  class BackgroundTasks_ : public ZeroObject
  {
  public:
    Zilch::Real4 GetWindowBackgroundColor();
    
    void SetWindowBackgroundColor(const Zilch::Real4& value);
    
    Zilch::Real4 GetTaskBackgroundColor();
    
    void SetTaskBackgroundColor(const Zilch::Real4& value);
    
    Zilch::Real4 GetTaskBackgroundHighlight();
    
    void SetTaskBackgroundHighlight(const Zilch::Real4& value);
    
    Zilch::Real4 GetTaskXColor();
    
    void SetTaskXColor(const Zilch::Real4& value);
    
    Zilch::Real4 GetTaskXHighlight();
    
    void SetTaskXHighlight(const Zilch::Real4& value);
    
    Zilch::Real2 GetTaskSize();
    
    void SetTaskSize(const Zilch::Real2& value);
    
    float GetProgressBarHeight();
    
    void SetProgressBarHeight(float value);
    
    unsigned char mValue[52];
    
  protected:
    BackgroundTasks_(Zilch::NoType none) : ZeroObject(none) {}
    ZilchNoCopy(BackgroundTasks_);
  };
  
  class VortexInterpolationStates : public Zilch::ValueType
  {
  public:
    static VortexInterpolationStates GetQuadratic();
    
    static VortexInterpolationStates GetLinear();
    
    int mValue;
    VortexInterpolationStates();
  };
  
  class CogTransformGizmo : public Component
  {
  public:
    GizmoBasis GetBasis();
    
    void SetBasis(GizmoBasis value);
    
    GizmoPivot GetPivot();
    
    void SetPivot(GizmoPivot value);
    
    int GetObjectCount();
    
    // Adds an object to be modified by this gizmo.
    void AddObject(Cog* cog);
    
    void RemoveObject(Cog* cog);
    
    void ClearObjects();
    
    // If set, this Gizmo will add operations for all modifications to cogs.
    void SetOperationQueue(OperationQueue* opQueue);
    
    // Toggle between local/ world.
    void ToggleCoordinateMode();
    
    Zilch::HandleOf<Cog> GetObjectAtIndex(int index);
    
    unsigned char mValue[76];
    
  protected:
    CogTransformGizmo(Zilch::NoType none) : Component(none) {}
    ZilchNoCopy(CogTransformGizmo);
  };
  
  class CogScaleGizmo : public CogTransformGizmo
  {
  public:
    GizmoSnapMode GetSnapMode();
    
    void SetSnapMode(GizmoSnapMode value);
    
    float GetSnapDistance();
    
    void SetSnapDistance(float value);
    
    bool GetAffectTranslation();
    
    void SetAffectTranslation(bool value);
    
    unsigned char mValue[24];
    
  protected:
    CogScaleGizmo(Zilch::NoType none) : CogTransformGizmo(none) {}
    ZilchNoCopy(CogScaleGizmo);
  };
  
  // Overrides the joint's configuration values of slop, linear Baumgarte, angular Baumgarte and linear max error correction. Slop is the amount of error allowed before position correction takes effect. Baumgarte is used to exponentially correct the error. Baumgarte is split into linear and angular portions because of stability. The linear max error correction is only used when the joint is solved with post stabilization.
  class JointConfigOverride : public Component
  {
  public:
    float GetSlop();
    
    void SetSlop(float value);
    
    float GetLinearBaumgarte();
    
    void SetLinearBaumgarte(float value);
    
    float GetAngularBaumgarte();
    
    void SetAngularBaumgarte(float value);
    
    float GetLinearErrorCorrection();
    
    void SetLinearErrorCorrection(float value);
    
    float GetAngularErrorCorrection();
    
    void SetAngularErrorCorrection(float value);
    
    int GetPositionCorrectionType();
    
    void SetPositionCorrectionType(int value);
    
    unsigned char mValue[28];
    
  protected:
    JointConfigOverride(Zilch::NoType none) : Component(none) {}
    ZilchNoCopy(JointConfigOverride);
  };
  
  class Facing : public Zilch::ValueType
  {
  public:
    static Facing GetPositiveZ();
    
    static Facing GetNegativeZ();
    
    int mValue;
    Facing();
  };
  
  class ReactiveViewport : public Viewport
  {
  public:
    unsigned char mValue[64];
    
  protected:
    ReactiveViewport(Zilch::NoType none) : Viewport(none) {}
    ZilchNoCopy(ReactiveViewport);
  };
  
  class AntiAliasingType : public Zilch::ValueType
  {
  public:
    static AntiAliasingType GetNormal();
    
    static AntiAliasingType GetUniform();
    
    static AntiAliasingType GetAdaptive();
    
    static AntiAliasingType GetMonteCarlo();
    
    static AntiAliasingType GetJittered();
    
    int mValue;
    AntiAliasingType();
  };
  
  // Locks the orientation of two objects together. Used when two objects should always rotate in unison. Not useful by itself, but useful as a proof of concept for joints that use this functionality internally. Limits, motors and springs should most likely not be used on this. Add on definitions: Limit: A limit will provide a min/max angle on every axis that the objects must be between. Motor: A motor will attempt to drive the rotation on every axis forward. Spring: A spring will make the rotations on every axis at the bounds springy.
  class FixedAngleJoint : public Joint
  {
  public:
    Zilch::Quaternion GetLocalAngleA();
    
    void SetLocalAngleA(const Zilch::Quaternion& value);
    
    Zilch::Quaternion GetLocalAngleB();
    
    void SetLocalAngleB(const Zilch::Quaternion& value);
    
    unsigned char mValue[56];
    
  protected:
    FixedAngleJoint(Zilch::NoType none) : Joint(none) {}
    ZilchNoCopy(FixedAngleJoint);
  };
  
  // BoxCollider represents the collision volume of a box defined by a size.
  class BoxCollider : public Collider
  {
  public:
    Zilch::Real3 GetSize();
    
    void SetSize(const Zilch::Real3& value);
    
    Zilch::Real3 GetWorldSize();
    
    unsigned char mValue[12];
    
  protected:
    BoxCollider(Zilch::NoType none) : Collider(none) {}
    ZilchNoCopy(BoxCollider);
  };
  
  class Buttons : public Zilch::ValueType
  {
  public:
    static Buttons GetA();
    
    static Buttons GetDpadUp();
    
    static Buttons GetStickRight();
    
    static Buttons GetB();
    
    static Buttons GetLeftThumb();
    
    static Buttons GetDpadDown();
    
    static Buttons GetDpadRight();
    
    static Buttons GetBack();
    
    static Buttons GetRightShoulder();
    
    static Buttons GetDpadLeftFiltered();
    
    static Buttons GetStickLeft();
    
    static Buttons GetDpadRightFiltered();
    
    static Buttons GetDpadLeft();
    
    static Buttons GetLeftShoulder();
    
    static Buttons GetDpadUpFiltered();
    
    static Buttons GetAnyButton();
    
    static Buttons GetY();
    
    static Buttons GetX();
    
    static Buttons GetStickUp();
    
    static Buttons GetStickDown();
    
    static Buttons GetStart();
    
    static Buttons GetRightThumb();
    
    static Buttons GetDpadDownFiltered();
    
    int mValue;
    Buttons();
  };
  
  class TextBoxButton_ : public ZeroObject
  {
  public:
    Zilch::Real4 GetBackgroundColor();
    
    void SetBackgroundColor(const Zilch::Real4& value);
    
    Zilch::Real4 GetBackgroundHover();
    
    void SetBackgroundHover(const Zilch::Real4& value);
    
    Zilch::Real4 GetBackgroundClicked();
    
    void SetBackgroundClicked(const Zilch::Real4& value);
    
    float GetButtonWidth();
    
    void SetButtonWidth(float value);
    
    unsigned char mValue[52];
    
  protected:
    TextBoxButton_(Zilch::NoType none) : ZeroObject(none) {}
    ZilchNoCopy(TextBoxButton_);
  };
  
  class ModalStrip_ : public ZeroObject
  {
  public:
    Zilch::Real4 GetStipColor();
    
    void SetStipColor(const Zilch::Real4& value);
    
    float GetStripHeight();
    
    void SetStripHeight(float value);
    
    unsigned char mValue[52];
    
  protected:
    ModalStrip_(Zilch::NoType none) : ZeroObject(none) {}
    ZilchNoCopy(ModalStrip_);
  };
  
  class Transparency : public MaterialBlock
  {
  public:
    int GetBlendMode();
    
    void SetBlendMode(int value);
    
    unsigned char mValue[4];
    
  protected:
    Transparency(Zilch::NoType none) : MaterialBlock(none) {}
    ZilchNoCopy(Transparency);
  };
  
  class CameraViewportListrange : public Zilch::ReferenceType
  {
  public:
    Zilch::HandleOf<CameraViewportListrange> GetAll();
    
    bool GetIsNotEmpty();
    
    Zilch::HandleOf<CameraViewport> GetCurrent();
    
    void MoveNext();
    
    unsigned char mValue[8];
    
  protected:
    CameraViewportListrange(Zilch::NoType none) : Zilch::ReferenceType(none) {}
    ZilchNoCopy(CameraViewportListrange);
  };
  
  // Manages a viewport. If attached to a camera that viewport is used.
  class CameraViewport : public Component
  {
  public:
    bool GetActive();
    
    void SetActive(bool value);
    
    bool GetBackground();
    
    void SetBackground(bool value);
    
    int GetLayer();
    
    void SetLayer(int value);
    
    bool GetBlocking();
    
    void SetBlocking(bool value);
    
    Zilch::HandleOf<Cog> GetRenderer();
    
    void SetRenderer(Cog* value);
    
    Zilch::HandleOf<Cog> GetCamera();
    
    void SetCamera(Cog* value);
    
    Zilch::HandleOf<CogPath> GetRendererPath();
    
    void SetRendererPath(CogPath* value);
    
    Zilch::HandleOf<CogPath> GetCameraPath();
    
    void SetCameraPath(CogPath* value);
    
    Zilch::Real2 GetNormalizedSize();
    
    void SetNormalizedSize(const Zilch::Real2& value);
    
    Zilch::Real2 GetNormalizedOffset();
    
    void SetNormalizedOffset(const Zilch::Real2& value);
    
    Zilch::Real2 GetResolutionOrAspect();
    
    void SetResolutionOrAspect(const Zilch::Real2& value);
    
    int GetScaling();
    
    void SetScaling(int value);
    
    Zilch::Real4 GetMarginColor();
    
    void SetMarginColor(const Zilch::Real4& value);
    
    Zilch::Real2 GetViewportResolution();
    
    Zilch::Real2 GetViewportOffset();
    
    Zilch::Real2 GetViewportResolutionWithMargin();
    
    Zilch::HandleOf<GameViewport> GetViewport();
    
    Ray GetMouseWorldRay();
    
    // Convert a screen point to a ray.
    Ray ScreenToWorldRay(const Zilch::Real2& screenPoint);
    
    // Convert the screen point to a position on the z plane at a given depth.
    Zilch::Real3 ScreenToWorldZPlane(const Zilch::Real2& screenPoint, float worldDepth);
    
    // Convert the screen point to a position on the view plane at a given depth.
    Zilch::Real3 ScreenToWorldViewPlane(const Zilch::Real2& screenPoint, float viewDepth);
    
    // Convert the screen point to a position on a given plane.
    Zilch::Real3 ScreenToWorldPlane(const Zilch::Real2& screenPoint, const Zilch::Real3& worldPlaneNormal, const Zilch::Real3& worldPlanePosition);
    
    // Convert a world point to a screen point.
    Zilch::Real2 WorldToScreen(const Zilch::Real3& worldPoint);
    
    Zilch::Real2 ScreenToViewport(const Zilch::Real2& screenPoint);
    
    Zilch::Real2 ViewportToScreen(const Zilch::Real2& viewportPoint);
    
    // Size of the screen at a Depth.
    Zilch::Real2 ViewPlaneSize(float viewDepth);
    
    unsigned char mValue[124];
    
  protected:
    CameraViewport(Zilch::NoType none) : Component(none) {}
    ZilchNoCopy(CameraViewport);
  };
  
  class TileMapSource : public Resource
  {
  public:
    static Zilch::HandleOf<TileMapSource> Find(const Zilch::String& name);
    
    unsigned char mValue[32];
    
  protected:
    TileMapSource(Zilch::NoType none) : Resource(none) {}
    ZilchNoCopy(TileMapSource);
  };
  
  class GizmoDragMode : public Zilch::ValueType
  {
  public:
    static GizmoDragMode GetPlane();
    
    static GizmoDragMode GetLine();
    
    static GizmoDragMode GetViewPlane();
    
    int mValue;
    GizmoDragMode();
  };
  
  class DeveloperConfig : public Component
  {
  public:
    bool GetDoubleEscapeQuit();
    
    void SetDoubleEscapeQuit(bool value);
    
    bool GetProxyObjectsInPreviews();
    
    void SetProxyObjectsInPreviews(bool value);
    
    bool GetCanModifyReadOnlyResources();
    
    void SetCanModifyReadOnlyResources(bool value);
    
    unsigned char mValue[28];
    
  protected:
    DeveloperConfig(Zilch::NoType none) : Component(none) {}
    ZilchNoCopy(DeveloperConfig);
  };
  
  class SelectionSelectionRange : public Zilch::ReferenceType
  {
  public:
    Zilch::HandleOf<SelectionSelectionRange> GetAll();
    
    bool GetIsNotEmpty();
    
    Zilch::HandleOf<Cog> GetCurrent();
    
    void MoveNext();
    
    unsigned char mValue[16];
    
  protected:
    SelectionSelectionRange(Zilch::NoType none) : Zilch::ReferenceType(none) {}
    ZilchNoCopy(SelectionSelectionRange);
  };
  
  class CastFilterState : public Zilch::ValueType
  {
  public:
    static CastFilterState GetAccept();
    
    static CastFilterState GetDefaultBehavior();
    
    static CastFilterState GetReject();
    
    int mValue;
    CastFilterState();
  };
  
  class SquareGizmo : public SimpleGizmoBase
  {
  public:
    Zilch::Real3 GetSize();
    
    void SetSize(const Zilch::Real3& value);
    
    float GetSnapDistance();
    
    void SetSnapDistance(float value);
    
    bool GetViewAligned();
    
    void SetViewAligned(bool value);
    
    bool GetUseParentAsPivot();
    
    void SetUseParentAsPivot(bool value);
    
    bool GetFilled();
    
    void SetFilled(bool value);
    
    unsigned char mValue[20];
    
  protected:
    SquareGizmo(Zilch::NoType none) : SimpleGizmoBase(none) {}
    ZilchNoCopy(SquareGizmo);
  };
  
  // Base class for movement components.
  class MovementBase : public Component
  {
  public:
    bool GetActive();
    
    void SetActive(bool value);
    
    float GetMaxAngleChange();
    
    void SetMaxAngleChange(float value);
    
    float GetStrength();
    
    void SetStrength(float value);
    
    bool GetQueryOnly();
    
    void SetQueryOnly(bool value);
    
    bool GetDebugDraw();
    
    void SetDebugDraw(bool value);
    
    float QueryAngleChangeRadians();
    
    float QueryAngleChangeDegrees();
    
    unsigned char mValue[20];
    
  protected:
    MovementBase(Zilch::NoType none) : Component(none) {}
    ZilchNoCopy(MovementBase);
  };
  
  // Rotates the object in a way that would cause the object to wander if it was moving forward.
  class Wandering : public MovementBase
  {
  public:
    float GetCircleRadius();
    
    void SetCircleRadius(float value);
    
    float GetMaxWanderAngleChange();
    
    void SetMaxWanderAngleChange(float value);
    
    int GetRecursionLevels();
    
    void SetRecursionLevels(int value);
    
    float GetScalePerRecursion();
    
    void SetScalePerRecursion(float value);
    
    unsigned char mValue[28];
    
  protected:
    Wandering(Zilch::NoType none) : MovementBase(none) {}
    ZilchNoCopy(Wandering);
  };
  
  class Component_ : public ZeroObject
  {
  public:
    Zilch::Real4 GetTitleColor();
    
    void SetTitleColor(const Zilch::Real4& value);
    
    Zilch::Real4 GetTitleHighlight();
    
    void SetTitleHighlight(const Zilch::Real4& value);
    
    Zilch::Real4 GetTitleRemove();
    
    void SetTitleRemove(const Zilch::Real4& value);
    
    Zilch::Real4 GetBackgroundColor();
    
    void SetBackgroundColor(const Zilch::Real4& value);
    
    Zilch::Real4 GetBackgroundRemove();
    
    void SetBackgroundRemove(const Zilch::Real4& value);
    
    Zilch::Real4 GetErrorPopUpColor();
    
    void SetErrorPopUpColor(const Zilch::Real4& value);
    
    float GetOpenTime();
    
    void SetOpenTime(float value);
    
    float GetMaxToolTipWidth();
    
    void SetMaxToolTipWidth(float value);
    
    unsigned char mValue[52];
    
  protected:
    Component_(Zilch::NoType none) : ZeroObject(none) {}
    ZilchNoCopy(Component_);
  };
  
  class Heuristic : public Zilch::ValueType
  {
  public:
    static Heuristic GetOctile();
    
    static Heuristic GetChebyshev();
    
    static Heuristic GetManhattan();
    
    static Heuristic GetEuclidean();
    
    int mValue;
    Heuristic();
  };
  
  // Cylinder Collider is a basic collision primitive of a cylinder.
  class CylinderCollider : public Collider
  {
  public:
    float GetRadius();
    
    void SetRadius(float value);
    
    float GetHeight();
    
    void SetHeight(float value);
    
    AxisDirection GetDirection();
    
    void SetDirection(AxisDirection value);
    
    unsigned char mValue[12];
    
  protected:
    CylinderCollider(Zilch::NoType none) : Collider(none) {}
    ZilchNoCopy(CylinderCollider);
  };
  
  class ScreenDropGenerator : public Component
  {
  public:
    float GetRate();
    
    void SetRate(float value);
    
    float GetRateVariance();
    
    void SetRateVariance(float value);
    
    float GetSize();
    
    void SetSize(float value);
    
    float GetSizeVariance();
    
    void SetSizeVariance(float value);
    
    float GetIntensity();
    
    void SetIntensity(float value);
    
    float GetIntensityDissipation();
    
    void SetIntensityDissipation(float value);
    
    float GetOutwardForce();
    
    void SetOutwardForce(float value);
    
    Zilch::Real2 GetConstantForce();
    
    void SetConstantForce(const Zilch::Real2& value);
    
    unsigned char mValue[52];
    
  protected:
    ScreenDropGenerator(Zilch::NoType none) : Component(none) {}
    ZilchNoCopy(ScreenDropGenerator);
  };
  
  // Common interface for all collision events. Contains the core functionality of inspecting the contained manifold.
  class BaseCollisionEvent : public Event
  {
  public:
    Zilch::HandleOf<Cog> GetObject();
    
    Zilch::HandleOf<Cog> GetOtherObject();
    
    int GetContactPointCount();
    
    bool GetIsGhost();
    
    Zilch::HandleOf<ProxyContactPointRange> GetContactPoints();
    
    unsigned char mValue[16];
    
  protected:
    BaseCollisionEvent(Zilch::NoType none) : Event(none) {}
    ZilchNoCopy(BaseCollisionEvent);
  };
  
  // Event sent out from collision groups with the PreSolve block type. This event is sent out after collision detection but before collision resolution. This can be used to slightly alter the state of the two objects in a collision before they're resolved(say turn one from static to dynamic). Warning: Do not delete objects or do any other significant changes as this may destabilize the system.
  class PreSolveEvent : public BaseCollisionEvent
  {
  public:
    unsigned char mValue[12];
    
  protected:
    PreSolveEvent(Zilch::NoType none) : BaseCollisionEvent(none) {}
    ZilchNoCopy(PreSolveEvent);
  };
  
  class AlphaTest : public MaterialBlock
  {
  public:
    float GetAlphaTestValue();
    
    void SetAlphaTestValue(float value);
    
    unsigned char mValue[4];
    
  protected:
    AlphaTest(Zilch::NoType none) : MaterialBlock(none) {}
    ZilchNoCopy(AlphaTest);
  };
  
  class LightFrag : public Zilch::ReferenceType
  {
  public:
    Zilch::String GetFragmentSource();
    
    Zilch::HandleOf<Texture> GetTestTexture();
    
    void SetTestTexture(Texture* value);
    
    float GetEdgeFalloffPower();
    
    void SetEdgeFalloffPower(float value);
    
    float GetEdgeFalloffScale();
    
    void SetEdgeFalloffScale(float value);
    
    Zilch::Real4 GetEdgeGlowColor();
    
    void SetEdgeGlowColor(const Zilch::Real4& value);
    
    unsigned char mValue[48];
    
  protected:
    LightFrag(Zilch::NoType none) : Zilch::ReferenceType(none) {}
    ZilchNoCopy(LightFrag);
  };
  
  class TileView_ : public ZeroObject
  {
  public:
    Zilch::Real4 GetBorderColor();
    
    void SetBorderColor(const Zilch::Real4& value);
    
    Zilch::Real4 GetSelectedBorderColor();
    
    void SetSelectedBorderColor(const Zilch::Real4& value);
    
    Zilch::Real4 GetMouseOverBorderColor();
    
    void SetMouseOverBorderColor(const Zilch::Real4& value);
    
    float GetStartingTileSize();
    
    void SetStartingTileSize(float value);
    
    float GetMinTileSize();
    
    void SetMinTileSize(float value);
    
    float GetMaxTileSize();
    
    void SetMaxTileSize(float value);
    
    float GetTilePadding();
    
    void SetTilePadding(float value);
    
    float GetMaxDragScrollSpeed();
    
    void SetMaxDragScrollSpeed(float value);
    
    float GetDragScrollSize();
    
    void SetDragScrollSize(float value);
    
    unsigned char mValue[52];
    
  protected:
    TileView_(Zilch::NoType none) : ZeroObject(none) {}
    ZilchNoCopy(TileView_);
  };
  
  class Editors_ : public ZeroObject
  {
  public:
    Zilch::Real4 GetColorWidgetHighlight();
    
    void SetColorWidgetHighlight(const Zilch::Real4& value);
    
    float GetVectorElementMinSize();
    
    void SetVectorElementMinSize(float value);
    
    bool GetElementLables();
    
    void SetElementLables(bool value);
    
    Zilch::Real4 GetResourceEditColor();
    
    void SetResourceEditColor(const Zilch::Real4& value);
    
    Zilch::Real4 GetResourceEditMouseOver();
    
    void SetResourceEditMouseOver(const Zilch::Real4& value);
    
    float GetCogPathPickerIndent();
    
    void SetCogPathPickerIndent(float value);
    
    float GetCogPathCogLabelMinWidth();
    
    void SetCogPathCogLabelMinWidth(float value);
    
    float GetCogPathCogLabelSpace();
    
    void SetCogPathCogLabelSpace(float value);
    
    unsigned char mValue[52];
    
  protected:
    Editors_(Zilch::NoType none) : ZeroObject(none) {}
    ZilchNoCopy(Editors_);
  };
  
  class IslandType : public Zilch::ValueType
  {
  public:
    static IslandType GetKinematics();
    
    static IslandType GetComposites();
    
    static IslandType GetForcedOne();
    
    int mValue;
    IslandType();
  };
  
  class RenderToTexture : public Component
  {
  public:
    Zilch::HandleOf<Texture> GetTargetTexture();
    
    void SetTargetTexture(Texture* value);
    
    bool GetActive();
    
    void SetActive(bool value);
    
    unsigned char mValue[24];
    
  protected:
    RenderToTexture(Zilch::NoType none) : Component(none) {}
    ZilchNoCopy(RenderToTexture);
  };
  
  class SoundTagEntry : public Zilch::ReferenceType
  {
  public:
    Zilch::HandleOf<SoundTag> GetSoundTag();
    
    void SetSoundTag(SoundTag* value);
    
    unsigned char mValue[4];
    
  protected:
    SoundTagEntry(Zilch::NoType none) : Zilch::ReferenceType(none) {}
    ZilchNoCopy(SoundTagEntry);
  };
  
  class ParticleGeometry : public Zilch::ValueType
  {
  public:
    static ParticleGeometry GetFlat();
    
    static ParticleGeometry GetFaceVelocity();
    
    static ParticleGeometry GetBillboarded();
    
    static ParticleGeometry GetBeam();
    
    static ParticleGeometry GetOutward();
    
    static ParticleGeometry GetAligned();
    
    int mValue;
    ParticleGeometry();
  };
  
  class ZilchEvent : public Event
  {
  public:
    unsigned char mValue[12];
    
  protected:
    ZilchEvent();
    
    ZilchEvent(Zilch::NoType none) : Event(none) {}
    ZilchNoCopy(ZilchEvent);
  };
  
  class MultiSprite : public BaseSprite
  {
  public:
    void Add(const Zilch::String& __0, const Zilch::Real3& __1);
    
    void Clear();
    
    unsigned char mValue[52];
    
  protected:
    MultiSprite(Zilch::NoType none) : BaseSprite(none) {}
    ZilchNoCopy(MultiSprite);
  };
  
  // Dispatched after a dispatched net event is sent.
  class NetEventSent : public Event
  {
  public:
    int GetTheirNetPeerId();
    
    void SetTheirNetPeerId(int value);
    
    Zilch::HandleOf<Event> GetNetEvent();
    
    void SetNetEvent(Event* value);
    
    Zilch::HandleOf<Cog> GetDestination();
    
    void SetDestination(Cog* value);
    
    unsigned char mValue[12];
    
  protected:
    NetEventSent(Zilch::NoType none) : Event(none) {}
    ZilchNoCopy(NetEventSent);
  };
  
  class SolverSubType : public Zilch::ValueType
  {
  public:
    static SolverSubType GetBasicSolving();
    
    static SolverSubType GetBlockSolving();
    
    int mValue;
    SolverSubType();
  };
  
  class ZilchState : public Component
  {
  public:
    unsigned char mValue[12];
    
  protected:
    ZilchState(Zilch::NoType none) : Component(none) {}
    ZilchNoCopy(ZilchState);
  };
  
  class ImageFilter : public Zilch::ValueType
  {
  public:
    static ImageFilter GetBox();
    
    static ImageFilter GetKaiser();
    
    int mValue;
    ImageFilter();
  };
  
  class OutputTextureFormat : public Zilch::ValueType
  {
  public:
    static OutputTextureFormat GetAutoNormal();
    
    static OutputTextureFormat GetUpdated();
    
    static OutputTextureFormat GetAutoColor();
    
    int mValue;
    OutputTextureFormat();
  };
  
  class ContactPoint : public Zilch::ReferenceType
  {
  public:
    Zilch::Real3 GetBodyPoint();
    
    Zilch::Real3 GetOtherBodyPoint();
    
    Zilch::Real3 GetWorldPoint();
    
    Zilch::Real3 GetWorldNormalTowardsOther();
    
    float GetNormalImpulse();
    
    float GetFrictionImpulse();
    
    Zilch::Real3 GetComplexImpulse();
    
    float GetPenetration();
    
    float GetRelativeVelocity();
    
    unsigned char mValue[12];
    
  protected:
    ContactPoint(Zilch::NoType none) : Zilch::ReferenceType(none) {}
    ZilchNoCopy(ContactPoint);
  };
  
  // Bends a mesh(typically for per instance modification)
  class MeshBender : public Component
  {
  public:
    int GetResolutionX();
    
    void SetResolutionX(int value);
    
    int GetResolutionY();
    
    void SetResolutionY(int value);
    
    int GetResolutionZ();
    
    void SetResolutionZ(int value);
    
    Zilch::Real3 GetDimensions();
    
    void SetDimensions(const Zilch::Real3& value);
    
    Zilch::Real3 GetOffset();
    
    void SetOffset(const Zilch::Real3& value);
    
    Zilch::Quaternion GetRotation();
    
    void SetRotation(const Zilch::Quaternion& value);
    
    unsigned char mValue[96];
    
  protected:
    MeshBender(Zilch::NoType none) : Component(none) {}
    ZilchNoCopy(MeshBender);
  };
  
  // A spline that is manipulated at runtime(such as a rope)
  class RuntimeSpline : public Component
  {
  public:
    int GetSplineType();
    
    void SetSplineType(int value);
    
    bool GetClosed();
    
    void SetClosed(bool value);
    
    int GetTargetSpace();
    
    void SetTargetSpace(int value);
    
    int GetSubdivisions();
    
    void SetSubdivisions(int value);
    
    int GetControlPointCount();
    
    int GetBakedPointCount();
    
    // Add a control point to the spline.
    void AddControlPoint(const Zilch::Real3& point);
    
    // Removes a control point from the spline.
    void RemoveControlPoint(int index);
    
    // Removes all control points from the spline.
    void ClearControlPoints();
    
    // Push another point onto the curve.
    void PushControlPoint();
    
    // Pops a control point from the back of the spline.
    void PopControlPoint();
    
    // Get a control point by index.
    Zilch::Real3 GetControlPoint(int index);
    
    // Set a control point by index.
    void SetControlPoint(int index, const Zilch::Real3& point);
    
    // Get a baked point by index.
    Zilch::Real3 GetBakedLocalPoint(int bakedIndex);
    
    Zilch::Real3 GetBakedWorldPoint(int bakedIndex);
    
    // Get a quaternion that represents the rotation of a control point.
    Zilch::Quaternion GetLocalBakedRotation(int bakedIndex);
    
    Zilch::Quaternion GetWorldBakedRotation(int bakedIndex);
    
    unsigned char mValue[52];
    
  protected:
    RuntimeSpline(Zilch::NoType none) : Component(none) {}
    ZilchNoCopy(RuntimeSpline);
  };
  
  class ControlMode : public Zilch::ValueType
  {
  public:
    static ControlMode GetOrbit();
    
    static ControlMode GetZPlane();
    
    static ControlMode GetFirstPerson();
    
    int mValue;
    ControlMode();
  };
  
  class ParticleAttractor : public ParticleAnimator
  {
  public:
    float GetStrength();
    
    void SetStrength(float value);
    
    float GetMinDistance();
    
    void SetMinDistance(float value);
    
    float GetMaxDistance();
    
    void SetMaxDistance(float value);
    
    unsigned char mValue[12];
    
  protected:
    ParticleAttractor(Zilch::NoType none) : ParticleAnimator(none) {}
    ZilchNoCopy(ParticleAttractor);
  };
  
  class Skeleton_ : public ZeroObject
  {
  public:
    Zilch::Real4 GetBoneColor();
    
    void SetBoneColor(const Zilch::Real4& value);
    
    Zilch::Real4 GetBoneSelectedColor();
    
    void SetBoneSelectedColor(const Zilch::Real4& value);
    
    float GetMinBoneRadius();
    
    void SetMinBoneRadius(float value);
    
    float GetBoneLengthScale();
    
    void SetBoneLengthScale(float value);
    
    unsigned char mValue[52];
    
  protected:
    Skeleton_(Zilch::NoType none) : ZeroObject(none) {}
    ZilchNoCopy(Skeleton_);
  };
  
  class ResourceSystem : public Zilch::ReferenceType
  {
  public:
    Zilch::HandleOf<Resource> GetResourceByName(const Zilch::String& __0);
    
    Zilch::HandleOf<Resource> GetResourceByTypeAndName(const Zilch::String& __0, const Zilch::String& __1);
    
    unsigned char mValue[196];
    
  protected:
    ResourceSystem(Zilch::NoType none) : Zilch::ReferenceType(none) {}
    ZilchNoCopy(ResourceSystem);
  };
  
  // SphereCollider is a basic collision primitive of a sphere.
  class SphereCollider : public Collider
  {
  public:
    float GetRadius();
    
    void SetRadius(float value);
    
    unsigned char mValue[4];
    
  protected:
    SphereCollider(Zilch::NoType none) : Collider(none) {}
    ZilchNoCopy(SphereCollider);
  };
  
  class EditorUi_ : public ZeroObject
  {
  public:
    Zilch::Real4 GetClearColor();
    
    void SetClearColor(const Zilch::Real4& value);
    
    Zilch::Real4 GetTextColor();
    
    void SetTextColor(const Zilch::Real4& value);
    
    unsigned char mValue[52];
    
  protected:
    EditorUi_(Zilch::NoType none) : ZeroObject(none) {}
    ZilchNoCopy(EditorUi_);
  };
  
  class CogPath : public ZeroObject
  {
  public:
    Zilch::String GetPath();
    
    void SetPath(const Zilch::String& value);
    
    Zilch::HandleOf<Cog> GetCog();
    
    void SetCog(Cog* value);
    
    Zilch::HandleOf<Cog> GetDirectCog();
    
    void SetDirectCog(Cog* value);
    
    Zilch::HandleOf<Cog> GetRelativeTo();
    
    void SetRelativeTo(Cog* value);
    
    bool GetRequired();
    
    void SetRequired(bool value);
    
    bool GetErrorOnResolveToNull();
    
    void SetErrorOnResolveToNull(bool value);
    
    bool GetErrorOnPathCantCompute();
    
    void SetErrorOnPathCantCompute(bool value);
    
    bool GetErrorOnDirectLinkFail();
    
    void SetErrorOnDirectLinkFail(bool value);
    
    bool GetUpdateCogOnPathChange();
    
    void SetUpdateCogOnPathChange(bool value);
    
    bool GetUpdateCogOnInitialize();
    
    void SetUpdateCogOnInitialize(bool value);
    
    bool GetUpdatePathOnCogChange();
    
    void SetUpdatePathOnCogChange(bool value);
    
    CogPathPreference GetPathPreference0();
    
    void SetPathPreference0(CogPathPreference value);
    
    CogPathPreference GetPathPreference1();
    
    void SetPathPreference1(CogPathPreference value);
    
    CogPathPreference GetPathPreference2();
    
    void SetPathPreference2(CogPathPreference value);
    
    bool Refresh();
    
    void RefreshIfNull();
    
    // Creates a new copy of a cog path(since cog paths are reference counted and shared)
    Zilch::HandleOf<CogPath> Clone();
    
    static Zilch::HandleOf<Cog> Resolve(Cog* status, const Zilch::String& startFrom);
    
    static Zilch::String ComputePath(Cog* status, Cog* from, CogPathPreference to);
    
    unsigned char mValue[4];
    
  protected:
    CogPath(Zilch::NoType none) : ZeroObject(none) {}
    ZilchNoCopy(CogPath);
  };
  
  class CogPathPreference : public Zilch::ValueType
  {
  public:
    static CogPathPreference GetCogRelative();
    
    static CogPathPreference GetSpaceRelative();
    
    static CogPathPreference GetAbsolute();
    
    int mValue;
    CogPathPreference();
  };
  
  // Component that gives an game object the ability to have child objects and contains a list of children.
  class Hierarchy : public Component
  {
  public:
    Zilch::HandleOf<HierarchyListrange> GetChildren();
    
    unsigned char mValue[8];
    
  protected:
    Hierarchy(Zilch::NoType none) : Component(none) {}
    ZilchNoCopy(Hierarchy);
  };
  
  class CheckBox_ : public ZeroObject
  {
  public:
    Zilch::Real4 GetBackgroundColor();
    
    void SetBackgroundColor(const Zilch::Real4& value);
    
    Zilch::Real4 GetBorderColor();
    
    void SetBorderColor(const Zilch::Real4& value);
    
    Zilch::Real4 GetCheckColor();
    
    void SetCheckColor(const Zilch::Real4& value);
    
    Zilch::Real4 GetFocusBorderColor();
    
    void SetFocusBorderColor(const Zilch::Real4& value);
    
    Zilch::Real2 GetCheckSize();
    
    void SetCheckSize(const Zilch::Real2& value);
    
    unsigned char mValue[52];
    
  protected:
    CheckBox_(Zilch::NoType none) : ZeroObject(none) {}
    ZilchNoCopy(CheckBox_);
  };
  
  class EditorViewport : public ReactiveViewport
  {
  public:
    void SetUpEditorCamera(Cog* __0);
    
    void SelectRenderer(Cog* __0);
    
    void ToggleLighting();
    
    unsigned char mValue[136];
    
  protected:
    EditorViewport(Zilch::NoType none) : ReactiveViewport(none) {}
    ZilchNoCopy(EditorViewport);
  };
  
  class OwnerShip : public Zilch::ValueType
  {
  public:
    static OwnerShip GetSharing();
    
    static OwnerShip GetOwner();
    
    int mValue;
    OwnerShip();
  };
  
  class AlphaUsage : public Zilch::ValueType
  {
  public:
    static AlphaUsage GetUnused();
    
    static AlphaUsage GetMask();
    
    static AlphaUsage GetTransparency();
    
    int mValue;
    AlphaUsage();
  };
  
  class CreationTool : public Component
  {
  public:
    int GetPlacementMode();
    
    void SetPlacementMode(int value);
    
    Zilch::HandleOf<Archetype> GetObjectToSpawn();
    
    void SetObjectToSpawn(Archetype* value);
    
    Zilch::Real3 GetOffset();
    
    void SetOffset(const Zilch::Real3& value);
    
    bool GetSnapping();
    
    void SetSnapping(bool value);
    
    float GetSnapDistance();
    
    void SetSnapDistance(float value);
    
    float GetDepth();
    
    void SetDepth(float value);
    
    float GetDepthPlane();
    
    void SetDepthPlane(float value);
    
    unsigned char mValue[64];
    
  protected:
    CreationTool(Zilch::NoType none) : Component(none) {}
    ZilchNoCopy(CreationTool);
  };
  
  class PointMassSystem : public Component
  {
  public:
    int GetIntegrationMethod();
    
    void SetIntegrationMethod(int value);
    
    float GetPointMass();
    
    void SetPointMass(float value);
    
    int GetIterations();
    
    void SetIterations(int value);
    
    float GetSpringK();
    
    void SetSpringK(float value);
    
    float GetSystemDamping();
    
    void SetSystemDamping(float value);
    
    bool GetCanTear();
    
    void SetCanTear(bool value);
    
    float GetTearThreshold();
    
    void SetTearThreshold(float value);
    
    bool GetDebugDraw();
    
    void SetDebugDraw(bool value);
    
    bool GetDrawPointStress();
    
    void SetDrawPointStress(bool value);
    
    bool GetDrawTriangles();
    
    void SetDrawTriangles(bool value);
    
    bool GetDrawSprings();
    
    void SetDrawSprings(bool value);
    
    bool GetDrawSupportSprings();
    
    void SetDrawSupportSprings(bool value);
    
    unsigned char mValue[168];
    
  protected:
    PointMassSystem(Zilch::NoType none) : Component(none) {}
    ZilchNoCopy(PointMassSystem);
  };
  
  class ClothSystem : public PointMassSystem
  {
  public:
    float GetBendSpringK();
    
    void SetBendSpringK(float value);
    
    float GetBendTearThreshold();
    
    void SetBendTearThreshold(float value);
    
    unsigned char mValue[8];
    
  protected:
    ClothSystem(Zilch::NoType none) : PointMassSystem(none) {}
    ZilchNoCopy(ClothSystem);
  };
  
  class ContentImporter_ : public ZeroObject
  {
  public:
    Zilch::Real4 GetToolTipBorderColor();
    
    void SetToolTipBorderColor(const Zilch::Real4& value);
    
    unsigned char mValue[52];
    
  protected:
    ContentImporter_(Zilch::NoType none) : ZeroObject(none) {}
    ZilchNoCopy(ContentImporter_);
  };
  
  class SplineParticleAnimator : public ParticleAnimator
  {
  public:
    float GetSpeed();
    
    void SetSpeed(float value);
    
    bool GetAutoCalculateLifetime();
    
    void SetAutoCalculateLifetime(bool value);
    
    bool GetHelix();
    
    void SetHelix(bool value);
    
    float GetHelixRadius();
    
    void SetHelixRadius(float value);
    
    float GetHelixWaveLength();
    
    void SetHelixWaveLength(float value);
    
    float GetHelixOffset();
    
    void SetHelixOffset(float value);
    
    SplineAnimatorMode GetMode();
    
    void SetMode(SplineAnimatorMode value);
    
    float GetSpringFrequencyHz();
    
    void SetSpringFrequencyHz(float value);
    
    float GetSpringDampingRatio();
    
    void SetSpringDampingRatio(float value);
    
    unsigned char mValue[36];
    
  protected:
    SplineParticleAnimator(Zilch::NoType none) : ParticleAnimator(none) {}
    ZilchNoCopy(SplineParticleAnimator);
  };
  
  class Ray : public Zilch::ValueType
  {
  public:
    Zilch::Real3 GetStart();
    
    void SetStart(const Zilch::Real3& value);
    
    Zilch::Real3 GetDirection();
    
    void SetDirection(const Zilch::Real3& value);
    
    unsigned char mValue[24];
    Ray();
  };
  
  class Orientation : public Component
  {
  public:
    Zilch::Real3 GetGlobalUp();
    
    void SetGlobalUp(const Zilch::Real3& value);
    
    int GetDefaultOrientationBases();
    
    void SetDefaultOrientationBases(int value);
    
    Zilch::Real3 GetLocalUp();
    
    void SetLocalUp(const Zilch::Real3& value);
    
    Zilch::Real3 GetLocalForward();
    
    void SetLocalForward(const Zilch::Real3& value);
    
    Zilch::Real3 GetLocalRight();
    
    Zilch::Real3 GetWorldForward();
    
    Zilch::Real3 GetWorldUp();
    
    Zilch::Real3 GetWorldRight();
    
    float GetAbsoluteAngle();
    
    Zilch::Quaternion GetRotation();
    
    Zilch::Quaternion GetLocalToWorldRotation();
    
    Zilch::Quaternion GetWorldRotation();
    
    // Spawns a proxy transform object so that the basis of the object can be set.
    void EditBasis();
    
    // Sets the forward to look at the given point. Keeps the current world up.
    void LookAtPoint(const Zilch::Real3& lookPoint);
    
    // Sets the forward to look in the given direction. Keeps the current world up.
    void LookAtDirection(const Zilch::Real3& lookDir);
    
    // Get the rotation so that the forward will look at the given point. Keeps the current world up.
    Zilch::Quaternion GetLookAtPointRotation(const Zilch::Real3& lookPoint);
    
    // Gets the forward to look in the given direction. Keeps the current world up.
    Zilch::Quaternion GetLookAtDirectionRotation(const Zilch::Real3& lookDir);
    
    // Same as LookAtPoint but allows the user to specify the up vector.
    void LookAtPointWithUp(const Zilch::Real3& lookPoint, const Zilch::Real3& up);
    
    // Same as LookAtDirection but allows the user to specify the up vector.
    void LookAtDirectionWithUp(const Zilch::Real3& lookDir, const Zilch::Real3& up);
    
    // Same as GetLookAtPointRotation but allows the user to specify the up vector.
    Zilch::Quaternion GetLookAtPointWithUpRotation(const Zilch::Real3& lookPoint, const Zilch::Real3& up);
    
    // Same as GetLookAtDirectionRotation but allows the user to specify the up vector.
    Zilch::Quaternion GetLookAtDirectionWithUpRotation(const Zilch::Real3& lookDir, const Zilch::Real3& up);
    
    float ComputeSignedAngle(const Zilch::Real3& up, const Zilch::Real3& forward, const Zilch::Real3& newVector);
    
    unsigned char mValue[44];
    
  protected:
    Orientation(Zilch::NoType none) : Component(none) {}
    ZilchNoCopy(Orientation);
  };
  
  class BitStream : public Zilch::ReferenceType
  {
  public:
    bool WriteBoolean(bool __0);
    
    bool WriteInteger(int __0);
    
    bool WriteInteger2(const Zilch::Integer2& __0);
    
    bool WriteInteger3(const Zilch::Integer3& __0);
    
    bool WriteInteger4(const Zilch::Integer4& __0);
    
    bool WriteReal(float __0);
    
    bool WriteDoubleReal(double __0);
    
    bool WriteReal2(const Zilch::Real2& __0);
    
    bool WriteReal3(const Zilch::Real3& __0);
    
    bool WriteReal4(const Zilch::Real4& __0);
    
    bool WriteQuaternion(const Zilch::Quaternion& __0);
    
    bool WriteString(const Zilch::String& __0);
    
    bool CanReadBoolean();
    
    bool CanReadInteger();
    
    bool CanReadInteger2();
    
    bool CanReadInteger3();
    
    bool CanReadInteger4();
    
    bool CanReadReal();
    
    bool CanReadDoubleReal();
    
    bool CanReadReal2();
    
    bool CanReadReal3();
    
    bool CanReadReal4();
    
    bool CanReadQuaternion();
    
    bool CanReadString();
    
    bool ReadBoolean();
    
    int ReadInteger();
    
    Zilch::Integer2 ReadInteger2();
    
    Zilch::Integer3 ReadInteger3();
    
    Zilch::Integer4 ReadInteger4();
    
    float ReadReal();
    
    double ReadDoubleReal();
    
    Zilch::Real2 ReadReal2();
    
    Zilch::Real3 ReadReal3();
    
    Zilch::Real4 ReadReal4();
    
    Zilch::Quaternion ReadQuaternion();
    
    Zilch::String ReadString();
    
    int GetBitCapacity();
    
    int GetByteCapacity();
    
    int GetBitsWritten();
    
    int GetBytesWritten();
    
    int GetBitsUnwritten();
    
    int GetBytesUnwritten();
    
    int GetBitsRead();
    
    int GetBytesRead();
    
    int GetBitsUnread();
    
    int GetBytesUnread();
    
    bool IsEmpty();
    
    void Reserve(int __0);
    
    void Clear(bool __0);
    
    void Unwrite(int __0);
    
    void SetBitsWritten(int __0);
    
    void SetBytesWritten(int __0);
    
    void ClearBitsWritten();
    
    void Unread(int __0);
    
    void SetBitsRead(int __0);
    
    void SetBytesRead(int __0);
    
    void ClearBitsRead();
    
    unsigned char mValue[20];
    
  protected:
    BitStream(Zilch::NoType none) : Zilch::ReferenceType(none) {}
    ZilchNoCopy(BitStream);
  };
  
  class HorizontalAlignment : public Zilch::ValueType
  {
  public:
    static HorizontalAlignment GetRight();
    
    static HorizontalAlignment GetLeft();
    
    static HorizontalAlignment GetCenter();
    
    int mValue;
    HorizontalAlignment();
  };
  
  class LogicGraph_ : public ZeroObject
  {
  public:
    float GetRowWidth();
    
    void SetRowWidth(float value);
    
    Zilch::Real4 GetRowColor();
    
    void SetRowColor(const Zilch::Real4& value);
    
    Zilch::Real4 GetRowOffColor();
    
    void SetRowOffColor(const Zilch::Real4& value);
    
    float GetEdgeArrowSize();
    
    void SetEdgeArrowSize(float value);
    
    Zilch::Real4 GetNodeColor();
    
    void SetNodeColor(const Zilch::Real4& value);
    
    Zilch::Real4 GetNodeHighlightColor();
    
    void SetNodeHighlightColor(const Zilch::Real4& value);
    
    Zilch::Real4 GetNodeErrorColor();
    
    void SetNodeErrorColor(const Zilch::Real4& value);
    
    Zilch::Real4 GetNodeSelectColor();
    
    void SetNodeSelectColor(const Zilch::Real4& value);
    
    float GetSocketSize();
    
    void SetSocketSize(float value);
    
    Zilch::Real4 GetSocketColor();
    
    void SetSocketColor(const Zilch::Real4& value);
    
    Zilch::Real4 GetSocketHoverColor();
    
    void SetSocketHoverColor(const Zilch::Real4& value);
    
    Zilch::Real4 GetSocketBackgroundColor();
    
    void SetSocketBackgroundColor(const Zilch::Real4& value);
    
    float GetSocketArrowSize();
    
    void SetSocketArrowSize(float value);
    
    unsigned char mValue[52];
    
  protected:
    LogicGraph_(Zilch::NoType none) : ZeroObject(none) {}
    ZilchNoCopy(LogicGraph_);
  };
  
  class Net_ : public ZeroObject
  {
  public:
    Zilch::Real4 GetDisabledNetPropertyIcon();
    
    void SetDisabledNetPropertyIcon(const Zilch::Real4& value);
    
    Zilch::Real4 GetEnabledNetPropertyIcon();
    
    void SetEnabledNetPropertyIcon(const Zilch::Real4& value);
    
    unsigned char mValue[52];
    
  protected:
    Net_(Zilch::NoType none) : ZeroObject(none) {}
    ZilchNoCopy(Net_);
  };
  
  // Emits particles on a mesh surface.
  class MeshParticleEmitter : public ParticleEmitterShared
  {
  public:
    Zilch::HandleOf<Mesh> GetMesh();
    
    void SetMesh(Mesh* value);
    
    int GetMeshEmitMode();
    
    void SetMeshEmitMode(int value);
    
    bool GetUseModelComponent();
    
    void SetUseModelComponent(bool value);
    
    unsigned char mValue[88];
    
  protected:
    MeshParticleEmitter(Zilch::NoType none) : ParticleEmitterShared(none) {}
    ZilchNoCopy(MeshParticleEmitter);
  };
  
  // Keyboard representing the physical keyboard.
  class Keyboard : public ZeroObject
  {
  public:
    // Is the particular currently down.
    bool KeyIsDown(Keys key);
    
    // Is the particular currently up.
    bool KeyIsUp(Keys key);
    
    // Is the key pressed this frame.
    bool KeyIsPressed(Keys key);
    
    // Is the key released this frame.
    bool KeyIsReleased(Keys key);
    
    // Gets a string name of a particular key.
    Zilch::String GetKeyName(Keys key);
    
    unsigned char mValue[208];
    
  protected:
    Keyboard(Zilch::NoType none) : ZeroObject(none) {}
    ZilchNoCopy(Keyboard);
  };
  
  class WebBrowserEvent : public Event
  {
  public:
    Zilch::HandleOf<WebBrowser> GetWebBrowser();
    
    unsigned char mValue[12];
    
  protected:
    WebBrowserEvent(Zilch::NoType none) : Event(none) {}
    ZilchNoCopy(WebBrowserEvent);
  };
  
  class WebBrowserPointQueryEvent : public WebBrowserEvent
  {
  public:
    Zilch::Integer2 GetViewPixelPosition();
    
    void SetViewPixelPosition(const Zilch::Integer2& value);
    
    Zilch::Integer2 GetScreenPixelPosition();
    
    void SetScreenPixelPosition(const Zilch::Integer2& value);
    
    unsigned char mValue[28];
    
  protected:
    WebBrowserPointQueryEvent(Zilch::NoType none) : WebBrowserEvent(none) {}
    ZilchNoCopy(WebBrowserPointQueryEvent);
  };
  
  // A component we can use to facilitate web requests.
  class WebRequester : public Component
  {
  public:
    Zilch::String GetUrl();
    
    void SetUrl(const Zilch::String& value);
    
    // Clear headers and post data.
    void Clear();
    
    // Run the web request(we should get data back in a WebResponse event)
    void Run();
    
    // Add a header to the web request.
    void SetHeader(const Zilch::String& name, const Zilch::String& data);
    
    // Add Post data to the request, this will also change the request to a post request.
    void SetPostData(const Zilch::String& data);
    
    unsigned char mValue[132];
    
  protected:
    WebRequester(Zilch::NoType none) : Component(none) {}
    ZilchNoCopy(WebRequester);
  };
  
  class DebugObb : public Zilch::ReferenceType
  {
  public:
    Zilch::HandleOf<DebugObb> Float4Color(const Zilch::Real4& __0);
    
    Zilch::HandleOf<DebugObb> Width(float __0);
    
    Zilch::HandleOf<DebugObb> Duration(float __0);
    
    Zilch::HandleOf<DebugObb> OnTop(bool __0);
    
    Zilch::HandleOf<DebugObb> Filled(bool __0);
    
    Zilch::HandleOf<DebugObb> Border(bool __0);
    
    Zilch::HandleOf<DebugObb> BackShade(bool __0);
    
    Zilch::HandleOf<DebugObb> SpaceId(int __0);
    
    void Draw();
    
    Zilch::HandleOf<DebugObb> ViewAligned(bool __0);
    
    Zilch::HandleOf<DebugObb> Position(const Zilch::Real3& __0);
    
    Zilch::HandleOf<DebugObb> Extents(const Zilch::Real3& __0);
    
    Zilch::HandleOf<DebugObb> Rotation(const Zilch::Quaternion& __0);
    
    Zilch::HandleOf<DebugObb> Corners(bool __0);
    
    unsigned char mValue[72];
    
  protected:
    DebugObb(Zilch::NoType none) : Zilch::ReferenceType(none) {}
    ZilchNoCopy(DebugObb);
  };
  
  class ProjectionMode : public Zilch::ValueType
  {
  public:
    static ProjectionMode GetOrthographic();
    
    static ProjectionMode GetPerspective();
    
    int mValue;
    ProjectionMode();
  };
  
  class LightingBlock : public ZeroObject
  {
  public:
    unsigned char mValue[8];
    
  protected:
    LightingBlock(Zilch::NoType none) : ZeroObject(none) {}
    ZilchNoCopy(LightingBlock);
  };
  
  class GameViewport : public ReactiveViewport
  {
  public:
    unsigned char mValue[32];
    
  protected:
    GameViewport(Zilch::NoType none) : ReactiveViewport(none) {}
    ZilchNoCopy(GameViewport);
  };
  
  class PrismaticJoint2dBlock : public Zilch::ReferenceType
  {
  public:
    float GetSlop();
    
    void SetSlop(float value);
    
    float GetLinearBaumgarte();
    
    void SetLinearBaumgarte(float value);
    
    float GetAngularBaumgarte();
    
    void SetAngularBaumgarte(float value);
    
    float GetLinearErrorCorrection();
    
    void SetLinearErrorCorrection(float value);
    
    float GetAngularErrorCorrection();
    
    void SetAngularErrorCorrection(float value);
    
    int GetCorrectionType();
    
    void SetCorrectionType(int value);
    
    unsigned char mValue[32];
    
  protected:
    PrismaticJoint2dBlock(Zilch::NoType none) : Zilch::ReferenceType(none) {}
    ZilchNoCopy(PrismaticJoint2dBlock);
  };
  
  // A synced gamepad update event.
  class LockStepGamepadUpdateEvent : public LockStepGamepadEvent
  {
  public:
    Zilch::Real2 GetLeftStick();
    
    void SetLeftStick(const Zilch::Real2& value);
    
    Zilch::Real2 GetRightStick();
    
    void SetRightStick(const Zilch::Real2& value);
    
    Zilch::Real2 GetLeftStickDelta();
    
    void SetLeftStickDelta(const Zilch::Real2& value);
    
    Zilch::Real2 GetRightStickDelta();
    
    void SetRightStickDelta(const Zilch::Real2& value);
    
    float GetLeftTrigger();
    
    void SetLeftTrigger(float value);
    
    float GetRightTrigger();
    
    void SetRightTrigger(float value);
    
    unsigned char mValue[40];
    
  protected:
    LockStepGamepadUpdateEvent(Zilch::NoType none) : LockStepGamepadEvent(none) {}
    ZilchNoCopy(LockStepGamepadUpdateEvent);
  };
  
  class PhysicsEngine : public Zilch::ReferenceType
  {
  public:
    unsigned char mValue[136];
    
  protected:
    PhysicsEngine(Zilch::NoType none) : Zilch::ReferenceType(none) {}
    ZilchNoCopy(PhysicsEngine);
  };
  
  class Slider_ : public ZeroObject
  {
  public:
    Zilch::Real4 GetFocusBorderColor();
    
    void SetFocusBorderColor(const Zilch::Real4& value);
    
    unsigned char mValue[52];
    
  protected:
    Slider_(Zilch::NoType none) : ZeroObject(none) {}
    ZilchNoCopy(Slider_);
  };
  
  class ScriptStack : public Zilch::ReferenceType
  {
  public:
    unsigned char mValue[52];
    
  protected:
    ScriptStack(Zilch::NoType none) : Zilch::ReferenceType(none) {}
    ZilchNoCopy(ScriptStack);
  };
  
  class SizeAxis : public Zilch::ValueType
  {
  public:
    static SizeAxis GetY();
    
    static SizeAxis GetX();
    
    int mValue;
    SizeAxis();
  };
  
  // Dispatched after the net user loses network ownership of a net object.
  class NetUserLostObjectOwnership : public Event
  {
  public:
    Zilch::HandleOf<Cog> GetLostObject();
    
    void SetLostObject(Cog* value);
    
    Zilch::HandleOf<Cog> GetCurrentNetUserOwner();
    
    void SetCurrentNetUserOwner(Cog* value);
    
    unsigned char mValue[8];
    
  protected:
    NetUserLostObjectOwnership(Zilch::NoType none) : Event(none) {}
    ZilchNoCopy(NetUserLostObjectOwnership);
  };
  
  class ParticleAnimation : public Zilch::ValueType
  {
  public:
    static ParticleAnimation GetSingle();
    
    static ParticleAnimation GetLooping();
    
    int mValue;
    ParticleAnimation();
  };
  
  class TileMap : public Component
  {
  public:
    Zilch::HandleOf<TileMapSource> GetSource();
    
    float GetUnitsPerTile();
    
    void SetUnitsPerTile(float value);
    
    float GetMeshThickness();
    
    void SetMeshThickness(float value);
    
    unsigned char mValue[164];
    
  protected:
    TileMap(Zilch::NoType none) : Component(none) {}
    ZilchNoCopy(TileMap);
  };
  
  class DockMode : public Zilch::ValueType
  {
  public:
    static DockMode GetDockLeft();
    
    static DockMode GetDockTop();
    
    static DockMode GetDockFill();
    
    static DockMode GetDockRight();
    
    static DockMode GetDockBottom();
    
    static DockMode GetDockNone();
    
    int mValue;
    DockMode();
  };
  
  class ShadowSoftening : public Zilch::ValueType
  {
  public:
    static ShadowSoftening GetPcf3x3();
    
    static ShadowSoftening GetPcf7x7();
    
    static ShadowSoftening GetPcf5x5();
    
    static ShadowSoftening GetBilinear();
    
    static ShadowSoftening GetNone();
    
    int mValue;
    ShadowSoftening();
  };
  
  class ActionGroup : public ActionSet
  {
  public:
    unsigned char mValue[8];
    
  protected:
    ActionGroup(Zilch::NoType none) : ActionSet(none) {}
    ZilchNoCopy(ActionGroup);
  };
  
  class ScreenSpaceReflections : public MaterialBlock
  {
  public:
    
  protected:
    ScreenSpaceReflections(Zilch::NoType none) : MaterialBlock(none) {}
    ZilchNoCopy(ScreenSpaceReflections);
  };
  
  // Object cache is use to store objects at runtime.
  class ObjectStore : public Zilch::ReferenceType
  {
  public:
    bool IsStored(const Zilch::String& name);
    
    // Store an object.
    StoreResult Store(const Zilch::String& name, Cog* object);
    
    // Restore an object to the space.
    Zilch::HandleOf<Cog> Restore(const Zilch::String& name, Space* space);
    
    // Restore an object if it is not stored use the archetype to create it.
    Zilch::HandleOf<Cog> RestoreOrArchetype(const Zilch::String& name, Archetype* archetype, Space* space);
    
    // Attempts to remove an object from the store.
    void Erase(const Zilch::String& name);
    
    // Clear the store.
    void ClearStore();
    
    // Create a substore of this objectstore(basically a child store)
    Zilch::HandleOf<ObjectStore> FindOrCreateSubStore(const Zilch::String& name);
    
    // Returns list of all the objects currently stored.
    Zilch::HandleOf<ResourceTable> GetObjectList();
    
    // Force updating list of files that were on the disk.
    void UpdateObjectListCache();
    
    unsigned char mValue[68];
    
  protected:
    ObjectStore(Zilch::NoType none) : Zilch::ReferenceType(none) {}
    ZilchNoCopy(ObjectStore);
  };
  
  class StoreResult : public Zilch::ValueType
  {
  public:
    static StoreResult GetReplaced();
    
    static StoreResult GetAdded();
    
    static StoreResult GetFailed();
    
    int mValue;
    StoreResult();
  };
  
  // A table of resources(or strings) that can be indexed, searched by name or sampled randomly. The table can be sampled to return a string or a resource pointer. If other info about the sampled value is needed, the table can be sampled for an index that can then be used to fetch the name, value, resource and weight at that index. This index can also be used to randomly sample arrays that are created along-side this resource.
  class ResourceTable : public Resource
  {
  public:
    Zilch::String GetResourceType();
    
    void SetResourceType(const Zilch::String& value);
    
    int GetSize();
    
    // Returns the kind of resource contained in this table.
    Zilch::String ResourceTypeContained();
    
    // Returns the name of the item at the given index.
    Zilch::String GetNameAt(int index);
    
    // Returns the name of the value at the given index.
    Zilch::String GetValueAt(int index);
    
    // Returns the weight of the item at the given index.
    float GetWeightAt(int index);
    
    // Returns the resource that represents the value at the given index(returns null in string mode).
    Zilch::HandleOf<Resource> GetResourceAt(int index);
    
    // Samples the table to return a random index into the table. Takes two(different) random floats from[0,1) in order to sample.
    int SampleIndex(float random1, float random2);
    
    // Samples the table to return a random value. Takes two(different) random floats from[0,1) in order to sample. Returns an empty string if the table is empty.
    Zilch::String SampleValue(float random1, float random2);
    
    // Searches for a value by name. Returns an empty string if the name did not exist.
    Zilch::String FindValue(const Zilch::String& name);
    
    // Samples the table to return a random value. Takes two(different) random floats from[0,1) in order to sample. Returns null if the table is empty or the table is in String mode.
    Zilch::HandleOf<Resource> SampleResource(float random1, float random2);
    
    // Searches for a value by name and returns the corresponding resource pointer. Returns null if the name does not exist(or if the table was in String mode).
    Zilch::HandleOf<Resource> FindResource(const Zilch::String& name);
    
    // Get the index of a resource. Returns-1 if not found.
    int FindIndexOfResource(Resource* resource);
    
    static Zilch::HandleOf<ResourceTable> Find(const Zilch::String& name);
    
    unsigned char mValue[72];
    
  protected:
    ResourceTable(Zilch::NoType none) : Resource(none) {}
    ZilchNoCopy(ResourceTable);
  };
  
  class ResourceEvent : public Event
  {
  public:
    unsigned char mValue[24];
    
  protected:
    ResourceEvent(Zilch::NoType none) : Event(none) {}
    ZilchNoCopy(ResourceEvent);
  };
  
  class TransferMode : public Zilch::ValueType
  {
  public:
    static TransferMode GetOrdered();
    
    static TransferMode GetSequenced();
    
    static TransferMode GetImmediate();
    
    int mValue;
    TransferMode();
  };
  
  class Aabb : public Zilch::ValueType
  {
  public:
    Zilch::Real3 GetMin();
    
    void SetMin(const Zilch::Real3& value);
    
    Zilch::Real3 GetMax();
    
    void SetMax(const Zilch::Real3& value);
    
    bool Overlap(Aabb __0);
    
    void Set(const Zilch::Real3& __0);
    
    void Expand(const Zilch::Real3& __0);
    
    Zilch::Real3 GetCenter();
    
    Zilch::Real3 GetExtents();
    
    Zilch::Real3 GetHalfExtents();
    
    float GetVolume();
    
    float GetSurfaceArea();
    
    void ZeroOut();
    
    unsigned char mValue[24];
    Aabb();
  };
  
  // Component used to keep track of what ObjectLinks a cog has. This component is added dynamically whenever a ObjectLink is added to a cog that did not contain an ObjectLink before. This can be used to traverse across linked objects and find the entire"island" of ObjectLinks.
  class ObjectLinkAnchor : public Component
  {
  public:
    Zilch::HandleOf<ObjectLinkRange> GetObjectLinks();
    
    unsigned char mValue[8];
    
  protected:
    ObjectLinkAnchor(Zilch::NoType none) : Component(none) {}
    ZilchNoCopy(ObjectLinkAnchor);
  };
  
  class ObjectLinkRange : public Zilch::ReferenceType
  {
  public:
    Zilch::HandleOf<ObjectLinkRange> GetAll();
    
    bool GetIsNotEmpty();
    
    Zilch::HandleOf<ObjectLinkEdge> GetCurrent();
    
    void MoveNext();
    
    unsigned char mValue[8];
    
  protected:
    ObjectLinkRange(Zilch::NoType none) : Zilch::ReferenceType(none) {}
    ZilchNoCopy(ObjectLinkRange);
  };
  
  // Keyboard Events are for when key state changes.
  class KeyboardEvent : public Event
  {
  public:
    Keys GetKey();
    
    void SetKey(Keys value);
    
    KeyState GetState();
    
    void SetState(KeyState value);
    
    bool GetShiftPressed();
    
    void SetShiftPressed(bool value);
    
    bool GetAltPressed();
    
    void SetAltPressed(bool value);
    
    bool GetCtrlPressed();
    
    void SetCtrlPressed(bool value);
    
    bool GetSpacePressed();
    
    void SetSpacePressed(bool value);
    
    bool GetHandledEvent();
    
    void SetHandledEvent(bool value);
    
    Zilch::HandleOf<Keyboard> GetKeyboard();
    
    int GetOsKey();
    
    void SetOsKey(int value);
    
    unsigned char mValue[24];
    
  protected:
    KeyboardEvent(Zilch::NoType none) : Event(none) {}
    ZilchNoCopy(KeyboardEvent);
  };
  
  class KeyState : public Zilch::ValueType
  {
  public:
    static KeyState GetRepeated();
    
    static KeyState GetUp();
    
    static KeyState GetDown();
    
    int mValue;
    KeyState();
  };
  
  // Network Property Manages the state of a single property.
  class NetProperty : public Zilch::ReferenceType
  {
  public:
    Zilch::String GetPropertyName();
    
    unsigned char mValue[16];
    
  protected:
    NetProperty(Zilch::NoType none) : Zilch::ReferenceType(none) {}
    ZilchNoCopy(NetProperty);
  };
  
  // Applies a force about an axis at the object's center. This will apply two forces to a body: One pulls the object towards the center of the vortex and the other applies a tangential force. Useful to model a vortex.
  class VortexEffect : public PhysicsEffect
  {
  public:
    bool GetLocalAxis();
    
    void SetLocalAxis(bool value);
    
    float GetMinDistance();
    
    void SetMinDistance(float value);
    
    float GetMaxDistance();
    
    void SetMaxDistance(float value);
    
    float GetForceStrengthAtMinDistance();
    
    void SetForceStrengthAtMinDistance(float value);
    
    float GetForceStrengthAtMaxDistance();
    
    void SetForceStrengthAtMaxDistance(float value);
    
    float GetInwardStrengthAtMinDistance();
    
    void SetInwardStrengthAtMinDistance(float value);
    
    float GetInwardStrengthAtMaxDistance();
    
    void SetInwardStrengthAtMaxDistance(float value);
    
    Zilch::Real3 GetVortexAxis();
    
    void SetVortexAxis(const Zilch::Real3& value);
    
    VortexInterpolationStates GetInterpolationType();
    
    void SetInterpolationType(VortexInterpolationStates value);
    
    VortexEndCondition GetEndCondition();
    
    void SetEndCondition(VortexEndCondition value);
    
    unsigned char mValue[68];
    
  protected:
    VortexEffect(Zilch::NoType none) : PhysicsEffect(none) {}
    ZilchNoCopy(VortexEffect);
  };
  
  class VortexEndCondition : public Zilch::ValueType
  {
  public:
    static VortexEndCondition GetNoEffect();
    
    static VortexEndCondition GetClampToMax();
    
    static VortexEndCondition GetContinueFalloff();
    
    int mValue;
    VortexEndCondition();
  };
  
  class EventRange : public Zilch::ReferenceType
  {
  public:
    bool Empty();
    
    Zilch::HandleOf<Event> Front();
    
    void PopFront();
    
    int Size();
    
    Zilch::HandleOf<EventRange> GetAll();
    
    bool GetIsNotEmpty();
    
    Zilch::HandleOf<Event> GetCurrent();
    
    void MoveNext();
    
    unsigned char mValue[8];
    
  protected:
    EventRange(Zilch::NoType none) : Zilch::ReferenceType(none) {}
    ZilchNoCopy(EventRange);
  };
  
  // Update event contains current time and delta time.
  class UpdateEvent : public Event
  {
  public:
    float GetDt();
    
    void SetDt(float value);
    
    float GetTimePassed();
    
    void SetTimePassed(float value);
    
    float GetRealTimePassed();
    
    void SetRealTimePassed(float value);
    
    unsigned char mValue[16];
    
  protected:
    UpdateEvent(Zilch::NoType none) : Event(none) {}
    ZilchNoCopy(UpdateEvent);
  };
  
  class PhysicsCarCarWheelRange : public Zilch::ReferenceType
  {
  public:
    Zilch::HandleOf<PhysicsCarCarWheelRange> GetAll();
    
    bool GetIsNotEmpty();
    
    Zilch::HandleOf<Cog> GetCurrent();
    
    void MoveNext();
    
    unsigned char mValue[12];
    
  protected:
    PhysicsCarCarWheelRange(Zilch::NoType none) : Zilch::ReferenceType(none) {}
    ZilchNoCopy(PhysicsCarCarWheelRange);
  };
  
  class SelectiveNode : public AnimationNode
  {
  public:
    Zilch::HandleOf<AnimationNode> GetFrom();
    
    void SetFrom(AnimationNode* value);
    
    Zilch::HandleOf<AnimationNode> GetTo();
    
    void SetTo(AnimationNode* value);
    
    Zilch::HandleOf<Cog> GetRoot();
    
    void SetRoot(Cog* value);
    
    unsigned char mValue[40];
    
  protected:
    SelectiveNode(Zilch::NoType none) : AnimationNode(none) {}
    ZilchNoCopy(SelectiveNode);
  };
  
  class AreaEvent : public Event
  {
  public:
    unsigned char mValue[4];
    
  protected:
    AreaEvent(Zilch::NoType none) : Event(none) {}
    ZilchNoCopy(AreaEvent);
  };
  
  class RigidBodyDynamicState : public Zilch::ValueType
  {
  public:
    static RigidBodyDynamicState GetDynamic();
    
    static RigidBodyDynamicState GetStatic();
    
    static RigidBodyDynamicState GetKinematic();
    
    int mValue;
    RigidBodyDynamicState();
  };
  
  class Mode2DStates : public Zilch::ValueType
  {
  public:
    static Mode2DStates GetMode3D();
    
    static Mode2DStates GetInheritFromSpace();
    
    static Mode2DStates GetMode2D();
    
    int mValue;
    Mode2DStates();
  };
  
  class WebBrowserDownloadEvent : public WebBrowserEvent
  {
  public:
    Zilch::String GetFilePath();
    
    void SetFilePath(const Zilch::String& value);
    
    bool GetCancel();
    
    void SetCancel(bool value);
    
    bool GetIsInProgress();
    
    void SetIsInProgress(bool value);
    
    bool GetIsComplete();
    
    void SetIsComplete(bool value);
    
    long long GetCurrentSpeed();
    
    void SetCurrentSpeed(long long value);
    
    long long GetReceivedBytes();
    
    void SetReceivedBytes(long long value);
    
    long long GetTotalBytes();
    
    void SetTotalBytes(long long value);
    
    int GetId();
    
    void SetId(int value);
    
    Zilch::String GetUrl();
    
    void SetUrl(const Zilch::String& value);
    
    Zilch::String GetOriginalUrl();
    
    void SetOriginalUrl(const Zilch::String& value);
    
    Zilch::String GetSuggestedFileName();
    
    void SetSuggestedFileName(const Zilch::String& value);
    
    Zilch::String GetContentDisposition();
    
    void SetContentDisposition(const Zilch::String& value);
    
    Zilch::String GetMimeType();
    
    void SetMimeType(const Zilch::String& value);
    
    unsigned char mValue[60];
    
  protected:
    WebBrowserDownloadEvent(Zilch::NoType none) : WebBrowserEvent(none) {}
    ZilchNoCopy(WebBrowserDownloadEvent);
  };
  
  class DockLayout : public Layout
  {
  public:
    
  protected:
    DockLayout(Zilch::NoType none) : Layout(none) {}
    ZilchNoCopy(DockLayout);
  };
  
  class DebugSphere : public Zilch::ReferenceType
  {
  public:
    Zilch::HandleOf<DebugSphere> Float4Color(const Zilch::Real4& __0);
    
    Zilch::HandleOf<DebugSphere> Width(float __0);
    
    Zilch::HandleOf<DebugSphere> Duration(float __0);
    
    Zilch::HandleOf<DebugSphere> OnTop(bool __0);
    
    Zilch::HandleOf<DebugSphere> Filled(bool __0);
    
    Zilch::HandleOf<DebugSphere> Border(bool __0);
    
    Zilch::HandleOf<DebugSphere> BackShade(bool __0);
    
    Zilch::HandleOf<DebugSphere> SpaceId(int __0);
    
    void Draw();
    
    Zilch::HandleOf<DebugSphere> ViewAligned(bool __0);
    
    Zilch::HandleOf<DebugSphere> Position(const Zilch::Real3& __0);
    
    Zilch::HandleOf<DebugSphere> Radius(float __0);
    
    Zilch::HandleOf<DebugSphere> Colored(bool __0);
    
    unsigned char mValue[36];
    
  protected:
    DebugSphere(Zilch::NoType none) : Zilch::ReferenceType(none) {}
    ZilchNoCopy(DebugSphere);
  };
  
  // Gamepad events are send when a game pad button state is changed.
  class GamepadEvent : public Event
  {
  public:
    Zilch::HandleOf<Gamepad> GetGamepad();
    
    void SetGamepad(Gamepad* value);
    
    int GetButton();
    
    void SetButton(int value);
    
    Zilch::Real2 GetFlickDirection();
    
    void SetFlickDirection(const Zilch::Real2& value);
    
    int GetFlickedStick();
    
    void SetFlickedStick(int value);
    
    unsigned char mValue[20];
    
  protected:
    GamepadEvent(Zilch::NoType none) : Event(none) {}
    ZilchNoCopy(GamepadEvent);
  };
  
  class Popup_ : public ZeroObject
  {
  public:
    Zilch::Real4 GetBackgroundColor();
    
    void SetBackgroundColor(const Zilch::Real4& value);
    
    Zilch::Real4 GetBorderColor();
    
    void SetBorderColor(const Zilch::Real4& value);
    
    unsigned char mValue[52];
    
  protected:
    Popup_(Zilch::NoType none) : ZeroObject(none) {}
    ZilchNoCopy(Popup_);
  };
  
  class Actions : public ActionSet
  {
  public:
    unsigned char mValue[32];
    
  protected:
    Actions(Zilch::NoType none) : ActionSet(none) {}
    ZilchNoCopy(Actions);
  };
  
  class ObjectConnectingTool : public Component
  {
  public:
    unsigned char mValue[40];
    
  protected:
    ObjectConnectingTool(Zilch::NoType none) : Component(none) {}
    ZilchNoCopy(ObjectConnectingTool);
  };
  
  class BaseJointTool : public ObjectConnectingTool
  {
  public:
    bool GetOverrideLength();
    
    void SetOverrideLength(bool value);
    
    float GetLength();
    
    void SetLength(float value);
    
    float GetMaxForce();
    
    void SetMaxForce(float value);
    
    bool GetUseCenter();
    
    void SetUseCenter(bool value);
    
    bool GetConnectToWorld();
    
    void SetConnectToWorld(bool value);
    
    bool GetAutoSnaps();
    
    void SetAutoSnaps(bool value);
    
    bool GetAttachToCommonParent();
    
    void SetAttachToCommonParent(bool value);
    
    unsigned char mValue[40];
    
  protected:
    BaseJointTool(Zilch::NoType none) : ObjectConnectingTool(none) {}
    ZilchNoCopy(BaseJointTool);
  };
  
  class JointTool2D : public BaseJointTool
  {
  public:
    int GetJointType();
    
    void SetJointType(int value);
    
    
  protected:
    JointTool2D(Zilch::NoType none) : BaseJointTool(none) {}
    ZilchNoCopy(JointTool2D);
  };
  
  class SharedContent : public Component
  {
  public:
    unsigned char mValue[16];
    
  protected:
    SharedContent(Zilch::NoType none) : Component(none) {}
    ZilchNoCopy(SharedContent);
  };
  
  // Transform component class. The transform component provides the position, rotation and scale of an object.
  class Transform : public Component
  {
  public:
    Zilch::Real3 GetTranslation();
    
    void SetTranslation(const Zilch::Real3& value);
    
    Zilch::Quaternion GetRotation();
    
    void SetRotation(const Zilch::Quaternion& value);
    
    Zilch::Real3 GetScale();
    
    void SetScale(const Zilch::Real3& value);
    
    Zilch::Real3 GetEulerAngles();
    
    void SetEulerAngles(const Zilch::Real3& value);
    
    Zilch::Real3 GetLocalScale();
    
    void SetLocalScale(const Zilch::Real3& value);
    
    Zilch::Quaternion GetLocalRotation();
    
    void SetLocalRotation(const Zilch::Quaternion& value);
    
    Zilch::Real3 GetLocalTranslation();
    
    void SetLocalTranslation(const Zilch::Real3& value);
    
    Zilch::Real3 GetWorldScale();
    
    void SetWorldScale(const Zilch::Real3& value);
    
    Zilch::Quaternion GetWorldRotation();
    
    void SetWorldRotation(const Zilch::Quaternion& value);
    
    Zilch::Real3 GetWorldTranslation();
    
    void SetWorldTranslation(const Zilch::Real3& value);
    
    // Generates a rotation matrix from the given bases.
    void SetRotationBases(const Zilch::Real3& facing, const Zilch::Real3& up, const Zilch::Real3& right);
    
    // Transforms a local normal(direction) into world space.
    Zilch::Real3 TransformNormal(const Zilch::Real3& normal);
    
    // Transforms a local point into world space.
    Zilch::Real3 TransformPoint(const Zilch::Real3& point);
    
    // Transforms a normal by the local matrix(ignores parent's transform) Needed now because there is no quaternion times vector in script.
    Zilch::Real3 TransformNormalLocal(const Zilch::Real3& normal);
    
    // Transforms a point by the local matrix(ignores parent's transform)
    Zilch::Real3 TransformPointLocal(const Zilch::Real3& point);
    
    // Transforms a world normal(direction) into local space.
    Zilch::Real3 TransformNormalInverse(const Zilch::Real3& normal);
    
    // Transforms a world point into local space.
    Zilch::Real3 TransformPointInverse(const Zilch::Real3& point);
    
    // Rotate object in local space.
    void RotateLocal(const Zilch::Quaternion& rotation);
    
    // Rotate object in world space.
    void RotateWorld(const Zilch::Quaternion& rotation);
    
    void RotateAround(const Zilch::Real3& point, const Zilch::Quaternion& rotation);
    
    // Rotate object in local space by the given Euler angle vector(in radians).
    void RotateAnglesLocal(const Zilch::Real3& angles);
    
    // Rotate object in world space by the given Euler angle vector(in radians).
    void RotateAnglesWorld(const Zilch::Real3& angles);
    
    // Sets the rotation of the transform by the given Euler angles in radians.
    void SetEulerAnglesXYZ(float xRadians, float yRadians, float zRadians);
    
    unsigned char mValue[48];
    
  protected:
    Transform(Zilch::NoType none) : Component(none) {}
    ZilchNoCopy(Transform);
  };
  
  class ActionSpace : public Component
  {
  public:
    unsigned char mValue[24];
    
  protected:
    ActionSpace(Zilch::NoType none) : Component(none) {}
    ZilchNoCopy(ActionSpace);
  };
  
  // Network Object Manages the replication of a single object on the network.
  class NetObject : public Component
  {
  public:
    NetRole GetRole();
    
    bool GetIsClient();
    
    bool GetIsServer();
    
    bool GetIsOffline();
    
    bool GetIsClientOrOffline();
    
    bool GetIsServerOrOffline();
    
    bool GetIsClientOrServer();
    
    bool GetIsOnline();
    
    int GetNetObjectId();
    
    bool GetIsOwnedByAUser();
    
    bool GetIsNotOwnedByAUser();
    
    bool GetIsMine();
    
    bool GetIsNotMine();
    
    bool GetIsClientAndMine();
    
    bool GetIsClientButNotMine();
    
    bool GetIsServerAndMine();
    
    bool GetIsServerButNotMine();
    
    bool GetIsOfflineAndMine();
    
    bool GetIsOfflineButNotMine();
    
    Zilch::HandleOf<Cog> GetNetUserOwner();
    
    void SetNetUserOwner(Cog* value);
    
    int GetNetUserOwnerUserId();
    
    int GetNetUserOwnerPeerId();
    
    Zilch::HandleOf<NetChannelConfig> GetAutomaticChannel();
    
    void SetAutomaticChannel(NetChannelConfig* value);
    
    // [Client] Forgets the online net object locally[Server] Forgets the online net object locally and remotely for all relevant peers Effectively removes the net object from the network system without destroying it Returns true if successful, else false
    bool Forget();
    
    // [Client] Selects the remote net object on the first server peer found running in another game session instance on the engine[Server] Selects the remote net object on the first client peer found running in another game session instance on the engine Will fail if the net object is not online, or not found remotely Returns true if successful, else false
    bool SelectRemote();
    
    bool HasNetChannel(const Zilch::String& netChannelConfig);
    
    bool HasNetChannel(NetChannelConfig* netChannelConfig);
    
    Zilch::HandleOf<NetChannel> GetNetChannel(const Zilch::String& netChannelConfig);
    
    Zilch::HandleOf<NetChannel> GetNetChannel(NetChannelConfig* netChannelConfig);
    
    // Returns true if the net object is conceptually owned by the specified user, else false.
    bool IsOwnedByUser(Cog* cog);
    
    // Returns true if the net object is conceptually owned by a user added by the specified peer, else false.
    bool IsOwnedByPeer(int netPeerId);
    
    void SetNetUserOwnerUp(Cog* cog);
    
    void SetNetUserOwnerDown(Cog* cog);
    
    // Dispatches the net event on the net object for the local peer.
    void DispatchLocal(const Zilch::String& eventId, Event* event);
    
    // Dispatches the net event on the net object for the remote peer In Offline mode, this calls DispatchLocal only.
    void DispatchRemote(const Zilch::String& eventId, Event* event, int netPeerId);
    
    // Dispatches the net event on the net object for all remote peers In Offline mode, this calls DispatchLocal only.
    void DispatchBroadcast(const Zilch::String& eventId, Event* event);
    
    // Dispatches the net event on the net object for the local peer and for the remote peer In Offline mode, this calls DispatchLocal only.
    void DispatchLocalAndRemote(const Zilch::String& eventId, Event* event, int netPeerId);
    
    // Dispatches the net event on the net object for the local peer and for all remote peers In Offline mode, this calls DispatchLocal only.
    void DispatchLocalAndBroadcast(const Zilch::String& eventId, Event* event);
    
    unsigned char mValue[88];
    
  protected:
    NetObject(Zilch::NoType none) : Component(none) {}
    ZilchNoCopy(NetObject);
  };
  
  // Network Space Manages the replication of a single space on the network.
  class NetSpace : public NetObject
  {
  public:
    Zilch::HandleOf<NetChannelConfig> GetAutomaticChannel();
    
    void SetAutomaticChannel(NetChannelConfig* value);
    
    int GetNetObjectCount();
    
    int GetNetUserCount();
    
    // Dispatches the net event on the net object for the local peer.
    void DispatchLocal(const Zilch::String& eventId, Event* event);
    
    // Dispatches the net event on the net object for the remote peer In Offline mode, this calls DispatchLocal only.
    void DispatchRemote(const Zilch::String& eventId, Event* event, int netPeerId);
    
    // Dispatches the net event on the net object for all remote peers In Offline mode, this calls DispatchLocal only.
    void DispatchBroadcast(const Zilch::String& eventId, Event* event);
    
    // Dispatches the net event on the net object for the local peer and for the remote peer In Offline mode, this calls DispatchLocal only.
    void DispatchLocalAndRemote(const Zilch::String& eventId, Event* event, int netPeerId);
    
    // Dispatches the net event on the net object for the local peer and for all remote peers In Offline mode, this calls DispatchLocal only.
    void DispatchLocalAndBroadcast(const Zilch::String& eventId, Event* event);
    
    unsigned char mValue[20];
    
  protected:
    NetSpace(Zilch::NoType none) : NetObject(none) {}
    ZilchNoCopy(NetSpace);
  };
  
  // The PhysicsSpace is an"instance" of a world. This world manages and stores all of the other physical components of this world. PhysicSpaces act independently of each other.
  class PhysicsSpace : public Component
  {
  public:
    int GetSubStepCount();
    
    void SetSubStepCount(int value);
    
    bool GetAllowSleep();
    
    void SetAllowSleep(bool value);
    
    bool GetMode2D();
    
    void SetMode2D(bool value);
    
    bool GetDeterministic();
    
    void SetDeterministic(bool value);
    
    Zilch::HandleOf<CollisionTable> GetCollisionTable();
    
    void SetCollisionTable(CollisionTable* value);
    
    Zilch::HandleOf<PhysicsSolverConfig> GetPhysicsSolverConfig();
    
    void SetPhysicsSolverConfig(PhysicsSolverConfig* value);
    
    int GetIslandType();
    
    void SetIslandType(int value);
    
    int GetPreProcessing();
    
    void SetPreProcessing(int value);
    
    bool GetPostProcessIslands();
    
    void SetPostProcessIslands(bool value);
    
    bool GetIsSolverShared();
    
    void SetIsSolverShared(bool value);
    
    int GetIslandCount();
    
    void SetIslandCount(int value);
    
    int GetContactTangentType();
    
    void SetContactTangentType(int value);
    
    Zilch::String GetDynamicBroadphaseType();
    
    void SetDynamicBroadphaseType(const Zilch::String& value);
    
    Zilch::String GetStaticBroadphaseType();
    
    void SetStaticBroadphaseType(const Zilch::String& value);
    
    // Filters these two cogs to not resolve collision. This is a runtime only feature and will not be saved.
    void AddPairFilter(Cog* cog1, Cog* cog2);
    
    // Adds a filter to ignore collision between both trees passed in. See AddPairFilter for more info.
    void AddHierarchyPairFilter(Cog* cog1, Cog* cog2);
    
    // Removes the filter between these two cogs so they can collide again.
    void RemovePairFilter(Cog* cog1, Cog* cog2);
    
    // Removes the filters between both trees. See RemovePairFilter for more info.
    void RemoveHierarchyPairFilter(Cog* cog1, Cog* cog2);
    
    // Returns a defaulted CastFilter for use in script.
    Zilch::HandleOf<CastFilter> CreateDefaultCastFilter();
    
    // Debug.
    void FlushPhysicsQueue();
    
    // Computes the velocity to push a rigid body based upon a velocity, normal and world point. The normal is assumed to point from the other body to the pushing object.
    Zilch::Real3 ComputePushImpulse(const Zilch::Real3& pushVelocity, const Zilch::Real3& pushNormal, RigidBody* otherBody, const Zilch::Real3& worldPoint);
    
    // Performs a ray cast and returns the first object that is collided with.
    Zilch::HandleOf<CastResult> CastRayFirst(Ray worldRay);
    
    // Performs a ray cast and returns the first object that is collided with.
    Zilch::HandleOf<CastResult> CastRayFirstFiltered(Ray worldRay, CastFilter* filter);
    
    // Returns the results of the ray cast. The number of objects returned is based on the count passed in.
    Zilch::HandleOf<CastResultsRange> CastRayResults(Ray worldRay, int count);
    
    // Returns the results of the filtered ray cast. The number of objects returned is based on the count passed in.
    Zilch::HandleOf<CastResultsRange> CastRayResultsFiltered(Ray worldRay, int count, CastFilter* filter);
    
    // Returns the results of the segment cast. The amount of objects returned is based on the count passed in.
    Zilch::HandleOf<CastResultsRange> CastSegmentResults(const Zilch::Real3& start, const Zilch::Real3& end, int count);
    
    // Returns the results of the filtered segment cast. The number of objects returned is based on the count passed in.
    Zilch::HandleOf<CastResultsRange> CastSegmentResultsFiltered(const Zilch::Real3& start, const Zilch::Real3& end, int count, CastFilter* filter);
    
    // Dispatches an event to all objects within the given sphere.
    void DispatchWithinSphere(const Zilch::Real3& center, float radius, const Zilch::String& eventId, Event* event);
    
    // Dispatches an event to all objects within the given box.
    void DispatchWithinBox(const Zilch::Real3& center, const Zilch::Real3& size, const Zilch::String& eventId, Event* event);
    
    // Returns the results of the filtered Aabb cast. The amount of objects returned is based on the count passed in.
    Zilch::HandleOf<CastResultsRange> CastAabbResults(const Zilch::Real3& center, const Zilch::Real3& size, int count, CastFilter* filter);
    
    // Returns the results of the filtered Sphere cast. The amount of objects returned is based on the count passed in.
    Zilch::HandleOf<CastResultsRange> CastSphereResults(const Zilch::Real3& center, float radius, int count, CastFilter* filter);
    
    // Cast out a collider to see what it's colliding with.
    Zilch::HandleOf<CastResultsRange> CastColliderResults(const Zilch::Real3& offset, Collider* testCollider, CastFilter* filter);
    
    // Generate sweep data from the current position to a new location(stop at the first contact).
    Zilch::HandleOf<SweepResult> SweepCollider(Collider* collider, const Zilch::Real3& worldOffset, CastFilter* filter);
    
    Zilch::HandleOf<ContinuousResultRange> ContinuousCollider(Collider* collider, const Zilch::Real3& velocity, float dt, CastFilter* filter);
    
    // Creates a joint of jointName between the two cogs passed in. The anchor of the joint is set to the world point passed in.
    Zilch::HandleOf<Cog> CreateJoint(Cog* cog0, Cog* cog1, const Zilch::String& jointName, const Zilch::Real3& worldPoint);
    
    Zilch::String WhyAreTheyNotColliding(Cog* cog1, Cog* cog2);
    
    unsigned char mValue[312];
    
  protected:
    PhysicsSpace(Zilch::NoType none) : Component(none) {}
    ZilchNoCopy(PhysicsSpace);
  };
  
  // A constant acceleration that is applied in the given direction(mass is ignored). This is useful for creating gravity(either on the entire world or in a region) that will push/pull objects in a given direction at a constant acceleration.
  class GravityEffect : public BasicDirectionEffect
  {
  public:
    
  protected:
    GravityEffect(Zilch::NoType none) : BasicDirectionEffect(none) {}
    ZilchNoCopy(GravityEffect);
  };
  
  // Projector component class. Used for masking or coloring lights.
  class Projector : public Component
  {
  public:
    bool GetIsActive();
    
    void SetIsActive(bool value);
    
    bool GetIsMask();
    
    void SetIsMask(bool value);
    
    Zilch::HandleOf<Texture> GetTexture();
    
    void SetTexture(Texture* value);
    
    unsigned char mValue[12];
    
  protected:
    Projector(Zilch::NoType none) : Component(none) {}
    ZilchNoCopy(Projector);
  };
  
  class CogRotateGizmo : public CogTransformGizmo
  {
  public:
    GizmoSnapMode GetSnapMode();
    
    void SetSnapMode(GizmoSnapMode value);
    
    float GetSnapDistance();
    
    void SetSnapDistance(float value);
    
    bool GetAffectTranslation();
    
    void SetAffectTranslation(bool value);
    
    unsigned char mValue[12];
    
  protected:
    CogRotateGizmo(Zilch::NoType none) : CogTransformGizmo(none) {}
    ZilchNoCopy(CogRotateGizmo);
  };
  
  class HeightMapTool : public Component
  {
  public:
    int GetCurrentTool();
    
    void SetCurrentTool(int value);
    
    unsigned char mValue[52];
    
  protected:
    HeightMapTool(Zilch::NoType none) : Component(none) {}
    ZilchNoCopy(HeightMapTool);
  };
  
  // Provides synced mouse input across lock step.
  class LockStepMouse : public Component
  {
  public:
    Zilch::HandleOf<Cog> GetInputCameraViewport();
    
    void SetInputCameraViewport(Cog* value);
    
    unsigned char mValue[12];
    
  protected:
    LockStepMouse(Zilch::NoType none) : Component(none) {}
    ZilchNoCopy(LockStepMouse);
  };
  
  // A linear axis joint is used to keep an object locked on a plane that is defined by a normal. Special case use is for the dynamic controller. Should not be created by anyone else! If it is absolutely desired for movement, then the constraint should be turned off and a motor should be added. This will then push the objects in the direction of the normal of the plane.
  class LinearAxisJoint : public Joint
  {
  public:
    Zilch::Real3 GetWorldAxis();
    
    void SetWorldAxis(const Zilch::Real3& value);
    
    unsigned char mValue[20];
    
  protected:
    LinearAxisJoint(Zilch::NoType none) : Joint(none) {}
    ZilchNoCopy(LinearAxisJoint);
  };
  
  class EditorSettings : public Component
  {
  public:
    bool GetViewCube();
    
    void SetViewCube(bool value);
    
    float GetViewCubeViewportSize();
    
    void SetViewCubeViewportSize(float value);
    
    int GetScriptReloadEditor();
    
    void SetScriptReloadEditor(int value);
    
    int GetScriptReloadGame();
    
    void SetScriptReloadGame(int value);
    
    bool GetAutoUpdateContentChanges();
    
    void SetAutoUpdateContentChanges(bool value);
    
    unsigned char mValue[24];
    
  protected:
    EditorSettings(Zilch::NoType none) : Component(none) {}
    ZilchNoCopy(EditorSettings);
  };
  
  class RecentProjects : public Component
  {
  public:
    unsigned char mValue[28];
    
  protected:
    RecentProjects(Zilch::NoType none) : Component(none) {}
    ZilchNoCopy(RecentProjects);
  };
  
  class RingGizmo : public SimpleGizmoBase
  {
  public:
    float GetRadius();
    
    void SetRadius(float value);
    
    float GetSelectRadius();
    
    void SetSelectRadius(float value);
    
    float GetDragRadiansPerPixel();
    
    void SetDragRadiansPerPixel(float value);
    
    bool GetBackShade();
    
    void SetBackShade(bool value);
    
    bool GetViewAligned();
    
    void SetViewAligned(bool value);
    
    Zilch::Real4 GetGrabArrowColor();
    
    void SetGrabArrowColor(const Zilch::Real4& value);
    
    float GetGrabArrowLength();
    
    void SetGrabArrowLength(float value);
    
    float GetGrabArrowHeadSize();
    
    void SetGrabArrowHeadSize(float value);
    
    bool GetGrabArrowViewScaled();
    
    void SetGrabArrowViewScaled(bool value);
    
    bool GetGrabArrowOnTop();
    
    void SetGrabArrowOnTop(bool value);
    
    unsigned char mValue[80];
    
  protected:
    RingGizmo(Zilch::NoType none) : SimpleGizmoBase(none) {}
    ZilchNoCopy(RingGizmo);
  };
  
  // Sprite component. Sprite component is a 2d sprite class used for 2d sprites 3d billboarding.
  class Sprite : public BaseSprite
  {
  public:
    Zilch::HandleOf<SpriteSource> GetSpriteSource();
    
    void SetSpriteSource(SpriteSource* value);
    
    bool GetRenderMask();
    
    void SetRenderMask(bool value);
    
    bool GetFlipX();
    
    void SetFlipX(bool value);
    
    bool GetFlipY();
    
    void SetFlipY(bool value);
    
    bool GetAnimationActive();
    
    void SetAnimationActive(bool value);
    
    float GetAnimationSpeed();
    
    void SetAnimationSpeed(float value);
    
    int GetStartFrame();
    
    void SetStartFrame(int value);
    
    int GetCurrentFrame();
    
    void SetCurrentFrame(int value);
    
    unsigned char mValue[28];
    
  protected:
    Sprite(Zilch::NoType none) : BaseSprite(none) {}
    ZilchNoCopy(Sprite);
  };
  
  class GeometryPointManipulator : public Component
  {
  public:
    float GetSnapThreshold();
    
    void SetSnapThreshold(float value);
    
    bool GetSnapping();
    
    void SetSnapping(bool value);
    
    bool GetSnapAcrossLayers();
    
    void SetSnapAcrossLayers(bool value);
    
    bool GetHideNonWorkingLayers();
    
    void SetHideNonWorkingLayers(bool value);
    
    unsigned char mValue[112];
    
  protected:
    GeometryPointManipulator(Zilch::NoType none) : Component(none) {}
    ZilchNoCopy(GeometryPointManipulator);
  };
  
  // A Physics gun joint is just a tool for the editor. This acts as a weld between an object and the world.
  class PhyGunJoint : public Joint
  {
  public:
    Zilch::Real3 GetTargetPoint();
    
    void SetTargetPoint(const Zilch::Real3& value);
    
    Zilch::Real3 GetLocalPoint();
    
    void SetLocalPoint(const Zilch::Real3& value);
    
    Zilch::Real3 GetWorldPoint();
    
    void SetWorldPoint(const Zilch::Real3& value);
    
    Zilch::Quaternion GetTargetRotation();
    
    void SetTargetRotation(const Zilch::Quaternion& value);
    
    Zilch::Quaternion GetWorldRotation();
    
    void SetWorldRotation(const Zilch::Quaternion& value);
    
    unsigned char mValue[104];
    
  protected:
    PhyGunJoint(Zilch::NoType none) : Joint(none) {}
    ZilchNoCopy(PhyGunJoint);
  };
  
  // A controller to move an object with physics. This gives the controller realistic reactions to the physics world for free.
  class DynamicMotor : public Component
  {
  public:
    float GetMaxMoveForce();
    
    void SetMaxMoveForce(float value);
    
    // Attempts to move the character in the given direction.
    void MoveInDirection(const Zilch::Real3& direction, const Zilch::Real3& up);
    
    void SetReferenceFrameToWorld();
    
    void SetReferenceFrameToObject(Cog* object);
    
    // Deactivates all functionality of the dynamic controller.
    void Deactivate();
    
    // Activates all functionality of the dynamic controller.
    void Activate();
    
    unsigned char mValue[28];
    
  protected:
    DynamicMotor(Zilch::NoType none) : Component(none) {}
    ZilchNoCopy(DynamicMotor);
  };
  
  // A camera component that provides motion blur.
  class MotionBlur : public Component
  {
  public:
    int GetSamples();
    
    void SetSamples(int value);
    
    float GetDensity();
    
    void SetDensity(float value);
    
    bool GetRadialOnly();
    
    void SetRadialOnly(bool value);
    
    unsigned char mValue[12];
    
  protected:
    MotionBlur(Zilch::NoType none) : Component(none) {}
    ZilchNoCopy(MotionBlur);
  };
  
  // Used to represent a height map for collision.
  class HeightMapCollider : public Collider
  {
  public:
    float GetThickness();
    
    void SetThickness(float value);
    
    unsigned char mValue[80];
    
  protected:
    HeightMapCollider(Zilch::NoType none) : Collider(none) {}
    ZilchNoCopy(HeightMapCollider);
  };
  
  class DefaultViewportSetup : public Component
  {
  public:
    bool GetCreateDefaultCamera();
    
    void SetCreateDefaultCamera(bool value);
    
    Zilch::HandleOf<Archetype> GetRenderer();
    
    void SetRenderer(Archetype* value);
    
    unsigned char mValue[8];
    
  protected:
    DefaultViewportSetup(Zilch::NoType none) : Component(none) {}
    ZilchNoCopy(DefaultViewportSetup);
  };
  
  // Ensures that particular objects never fall out of sync.
  class LockStepSyncChecker : public Component
  {
  public:
    bool GetIncludeHierarchy();
    
    void SetIncludeHierarchy(bool value);
    
    unsigned char mValue[12];
    
  protected:
    LockStepSyncChecker(Zilch::NoType none) : Component(none) {}
    ZilchNoCopy(LockStepSyncChecker);
  };
  
  // The AnimationGraph component controls animation for an individual game object. It stores all needed per instance(vs what is shared in the animation resource) manages the current time and enumerates the animation sets. The AnimationGraph can animate multiple child objects and properties enabling bone animation, and other hierarchical animations.
  class AnimationGraph : public Component
  {
  public:
    Zilch::HandleOf<AnimationNode> GetActiveNode();
    
    void SetActiveNode(AnimationNode* value);
    
    bool GetActive();
    
    void SetActive(bool value);
    
    float GetTimeScale();
    
    void SetTimeScale(float value);
    
    bool IsPlayingInGraph(Animation* animation);
    
    void PrintGraph();
    
    // Node creation functions.
    Zilch::HandleOf<BasicAnimation> CreateBasicNode(Animation* animation, AnimPlayMode mode);
    
    Zilch::HandleOf<DirectBlend> CreateDirectBlendNode();
    
    Zilch::HandleOf<CrossBlend> CreateCrossBlendNode();
    
    Zilch::HandleOf<SelectiveNode> CreateSelectiveNode();
    
    Zilch::HandleOf<ChainNode> CreateChainNode();
    
    // Editor preview functionality.
    void PreviewGraph();
    
    unsigned char mValue[56];
    
  protected:
    AnimationGraph(Zilch::NoType none) : Component(none) {}
    ZilchNoCopy(AnimationGraph);
  };
  
  class EditorBone : public Component
  {
  public:
    unsigned char mValue[16];
    
  protected:
    EditorBone(Zilch::NoType none) : Component(none) {}
    ZilchNoCopy(EditorBone);
  };
  
  // Manages object sync testing as well as time manipulation in lock-step.
  class LockStepSpace : public Component
  {
  public:
    unsigned char mValue[28];
    
  protected:
    LockStepSpace(Zilch::NoType none) : Component(none) {}
    ZilchNoCopy(LockStepSpace);
  };
  
  class TimeConfig : public Component
  {
  public:
    bool GetLimitFrameRate();
    
    void SetLimitFrameRate(bool value);
    
    float GetFrameRate();
    
    void SetFrameRate(float value);
    
    unsigned char mValue[8];
    
  protected:
    TimeConfig(Zilch::NoType none) : Component(none) {}
    ZilchNoCopy(TimeConfig);
  };
  
  class EditorCameraController : public Component
  {
  public:
    float GetMoveSensitivity();
    
    void SetMoveSensitivity(float value);
    
    Zilch::Real3 GetLookTarget();
    
    void SetLookTarget(const Zilch::Real3& value);
    
    float GetLookDistance();
    
    void SetLookDistance(float value);
    
    float GetVerticalAngle();
    
    void SetVerticalAngle(float value);
    
    float GetHorizontalAngle();
    
    void SetHorizontalAngle(float value);
    
    Zilch::HandleOf<Viewport> GetViewport();
    
    int GetControlMode();
    
    void SetControlMode(int value);
    
    void Reset();
    
    unsigned char mValue[144];
    
  protected:
    EditorCameraController(Zilch::NoType none) : Component(none) {}
    ZilchNoCopy(EditorCameraController);
  };
  
  class SizerGizmo : public Component
  {
  public:
    Zilch::HandleOf<Archetype> GetAnchorGizmo();
    
    void SetAnchorGizmo(Archetype* value);
    
    Zilch::Real3 GetSize();
    
    void SetSize(const Zilch::Real3& value);
    
    SizerSnapMode GetSnapMode();
    
    void SetSnapMode(SizerSnapMode value);
    
    float GetSnapDistance();
    
    void SetSnapDistance(float value);
    
    Zilch::Real4 GetBoxColor();
    
    void SetBoxColor(const Zilch::Real4& value);
    
    Zilch::Real4 GetAnchorColor();
    
    void SetAnchorColor(const Zilch::Real4& value);
    
    Zilch::Real4 GetAnchorHoverColor();
    
    void SetAnchorHoverColor(const Zilch::Real4& value);
    
    Zilch::Real4 GetArrowColor();
    
    void SetArrowColor(const Zilch::Real4& value);
    
    unsigned char mValue[168];
    
  protected:
    SizerGizmo(Zilch::NoType none) : Component(none) {}
    ZilchNoCopy(SizerGizmo);
  };
  
  // Allows the user to override some parameters for debug drawing of joints. Used to debug draw more from different object perspectives and to change the size of drawn data. This class is nothing more than a piece of data that each joint looks at to determine how it draws itself.
  class JointDebugDrawConfig : public Component
  {
  public:
    bool GetActive();
    
    void SetActive(bool value);
    
    float GetSize();
    
    void SetSize(float value);
    
    float GetDetail();
    
    void SetDetail(float value);
    
    bool GetObject1Perspective();
    
    void SetObject1Perspective(bool value);
    
    bool GetObject2Perspective();
    
    void SetObject2Perspective(bool value);
    
    unsigned char mValue[12];
    
  protected:
    JointDebugDrawConfig(Zilch::NoType none) : Component(none) {}
    ZilchNoCopy(JointDebugDrawConfig);
  };
  
  // A universal joint locks positional movement of two points together as well as locks rotation about 1 axis. This means it is a joint that constrains 4 axes and leaves 2 free rotational axes. This joint is most useful to model something like a arm or leg that has a nice range of rotational movement.
  class UniversalJoint : public Joint
  {
  public:
    Zilch::Real3 GetLocalPointA();
    
    void SetLocalPointA(const Zilch::Real3& value);
    
    Zilch::Real3 GetLocalPointB();
    
    void SetLocalPointB(const Zilch::Real3& value);
    
    Zilch::Real3 GetWorldPointA();
    
    void SetWorldPointA(const Zilch::Real3& value);
    
    Zilch::Real3 GetWorldPointB();
    
    void SetWorldPointB(const Zilch::Real3& value);
    
    Zilch::Real3 GetLocalAxis0OfBodyA();
    
    void SetLocalAxis0OfBodyA(const Zilch::Real3& value);
    
    Zilch::Real3 GetLocalAxis1OfBodyA();
    
    void SetLocalAxis1OfBodyA(const Zilch::Real3& value);
    
    Zilch::Real3 GetLocalAxis0OfBodyB();
    
    void SetLocalAxis0OfBodyB(const Zilch::Real3& value);
    
    Zilch::Real3 GetLocalAxis1OfBodyB();
    
    void SetLocalAxis1OfBodyB(const Zilch::Real3& value);
    
    // Sets the position of the anchor on object A and B given a position in world space
    void SetWorldPoints(const Zilch::Real3& __0);
    
    unsigned char mValue[120];
    
  protected:
    UniversalJoint(Zilch::NoType none) : Joint(none) {}
    ZilchNoCopy(UniversalJoint);
  };
  
  class NavGrid : public Component
  {
  public:
    int GetHeuristic();
    
    void SetHeuristic(int value);
    
    float GetHeuristicWeight();
    
    void SetHeuristicWeight(float value);
    
    int GetRubberbanding();
    
    void SetRubberbanding(int value);
    
    bool GetRemoveCoLinearPoints();
    
    void SetRemoveCoLinearPoints(bool value);
    
    int GetCurveType();
    
    void SetCurveType(int value);
    
    int GetPathResolution();
    
    void SetPathResolution(int value);
    
    bool GetDraw();
    
    void SetDraw(bool value);
    
    bool RequestPath(const Zilch::Real3& __0, const Zilch::Real3& __1, Cog* __2);
    
    void CancelPathRequest(Cog* __0);
    
    unsigned char mValue[124];
    
  protected:
    NavGrid(Zilch::NoType none) : Component(none) {}
    ZilchNoCopy(NavGrid);
  };
  
  // Provides synced keyboard input across lock step.
  class LockStepKeyboard : public Component
  {
  public:
    unsigned char mValue[4];
    
  protected:
    LockStepKeyboard(Zilch::NoType none) : Component(none) {}
    ZilchNoCopy(LockStepKeyboard);
  };
  
  // A prismatic joint is used to create something similar to a piston. This joint fixes all degrees of rotation and leaves one linear axis free. Therefore, the bodies will rotate with each other and move with each other, except on one axis they can slide in and out. Add on definitions: Limit: A limit will provide a min/max translational distance for the two objects on the slider axis. Motor: A motor will push/pull the objects on the slider axis. Spring: A spring will make the slider axis springy at its limits.
  class PrismaticJoint : public Joint
  {
  public:
    Zilch::Real3 GetLocalPointA();
    
    void SetLocalPointA(const Zilch::Real3& value);
    
    Zilch::Real3 GetLocalPointB();
    
    void SetLocalPointB(const Zilch::Real3& value);
    
    Zilch::Real3 GetWorldPointA();
    
    void SetWorldPointA(const Zilch::Real3& value);
    
    Zilch::Real3 GetWorldPointB();
    
    void SetWorldPointB(const Zilch::Real3& value);
    
    Zilch::Quaternion GetLocalAngleA();
    
    void SetLocalAngleA(const Zilch::Quaternion& value);
    
    Zilch::Quaternion GetLocalAngleB();
    
    void SetLocalAngleB(const Zilch::Quaternion& value);
    
    Zilch::Real3 GetLocalAxisA();
    
    void SetLocalAxisA(const Zilch::Real3& value);
    
    Zilch::Real3 GetLocalAxisB();
    
    void SetLocalAxisB(const Zilch::Real3& value);
    
    Zilch::Real3 GetWorldAxis();
    
    void SetWorldAxis(const Zilch::Real3& value);
    
    // Sets the position of the anchor on object A and B given a position in world space
    void SetWorldPoints(const Zilch::Real3& __0);
    
    unsigned char mValue[128];
    
  protected:
    PrismaticJoint(Zilch::NoType none) : Joint(none) {}
    ZilchNoCopy(PrismaticJoint);
  };
  
  // A random object that contains its own unique random state apart from all other instances of this class.
  class RandomContext : public Component
  {
  public:
    int GetSeed();
    
    void SetSeed(int value);
    
    bool GetRandomSeed();
    
    void SetRandomSeed(bool value);
    
    int GetMaxInt();
    
    // Returns a random bool value.
    bool Bool();
    
    // Returns a random int in the range of[0, MaxInt].
    int Int();
    
    // Returns a random float in the range[0,1].
    float Float();
    
    // Returns a random float in the range[0,1].
    float Real();
    
    // Generates a unit length Vec2.
    Zilch::Real2 UnitVector2();
    
    // Randomly generates a Vec2 with its length between min and max.
    Zilch::Real2 Vector2(float minLength, float maxLength);
    
    // Generates a unit length Vec3.
    Zilch::Real3 UnitVector3();
    
    // Randomly generates a Vec3 with its length between min and max.
    Zilch::Real3 Vector3(float minLength, float maxLength);
    
    // Random unit length quaternion. This is also a unit quaternion.
    Zilch::Quaternion Quaternion();
    
    // Int in the range[min, max].
    int RangeInclusiveMax(int min, int max);
    
    // Int in the range[min, max)
    int RangeExclusiveMax(int min, int max);
    
    // Int in the range[base- variance, base+ variance].
    int IntVariance(int base, int variance);
    
    // A random float in the range[min,max].
    float Range(float min, float max);
    
    // Returns a float in the range[base- variance, base+ variance].
    float FloatVariance(float base, float variance);
    
    // Returns a float in the range[base- variance, base+ variance].
    float RealVariance(float base, float variance);
    
    // Randomly rolls a number in the range[1, sides].
    int DieRoll(int sides);
    
    // Takes a given probability that we get a true value.
    bool Probability(float probOfTrue);
    
    // Returns true if the coin flips heads.
    bool CoinFlip();
    
    // Random rotation quaternion. This is the same as calling Quaternion()
    Zilch::Quaternion Rotation();
    
    // Samples a bell curve with standard normal distribution in the range[0,1] This is equivalent to a Gaussian distribution with standard deviation of 1.
    float BellCurve();
    
    // Samples a bell curve with in the range[center- range, center+ range] This uses a standard deviation of 1.
    float BellCurveRange(float center, float range);
    
    // Samples a bell curve in the range[center- range, center+ range] with the given standard deviation. Around 68% will lie within the 1st standard deviation.
    float BellCurveDistribution(float center, float range, float standardDeviation);
    
    unsigned char mValue[8];
    
  protected:
    RandomContext(Zilch::NoType none) : Component(none) {}
    ZilchNoCopy(RandomContext);
  };
  
  // Dynamic Mesh Collider is a collision primitive for colliding with a moving and deforming triangle mesh.
  class DynamicMeshCollider : public Collider
  {
  public:
    unsigned char mValue[8];
    
  protected:
    DynamicMeshCollider(Zilch::NoType none) : Collider(none) {}
    ZilchNoCopy(DynamicMeshCollider);
  };
  
  class EditorConfig : public Component
  {
  public:
    unsigned char mValue[8];
    
  protected:
    EditorConfig(Zilch::NoType none) : Component(none) {}
    ZilchNoCopy(EditorConfig);
  };
  
  // Emits particles inside a box.
  class BoxParticleEmitter : public ParticleEmitterShared
  {
  public:
    
  protected:
    BoxParticleEmitter(Zilch::NoType none) : ParticleEmitterShared(none) {}
    ZilchNoCopy(BoxParticleEmitter);
  };
  
  // A prismatic joint is used to create something similar to a piston. This is the 2d version of the prismatic joint. This joint is used in 2d mode for increased speed and stability. The slider axis is projected onto the z axis(the z component is ignored) so that the objects can be arbitrarily far apart. The x and y rotations are also ignored since the objects are only allowed to rotate about the z axis. Add on definitions: Limit: A limit will provide a min/max translational distance for the two objects on the slider axis. Motor: A motor will push/pull the objects on the slider axis. Spring: A spring will make the slider axis springy at its limits.
  class PrismaticJoint2d : public Joint
  {
  public:
    Zilch::Real3 GetLocalPointA();
    
    void SetLocalPointA(const Zilch::Real3& value);
    
    Zilch::Real3 GetLocalPointB();
    
    void SetLocalPointB(const Zilch::Real3& value);
    
    Zilch::Real3 GetWorldPointA();
    
    void SetWorldPointA(const Zilch::Real3& value);
    
    Zilch::Real3 GetWorldPointB();
    
    void SetWorldPointB(const Zilch::Real3& value);
    
    Zilch::Quaternion GetLocalAngleA();
    
    void SetLocalAngleA(const Zilch::Quaternion& value);
    
    Zilch::Quaternion GetLocalAngleB();
    
    void SetLocalAngleB(const Zilch::Quaternion& value);
    
    Zilch::Real3 GetLocalAxisA();
    
    void SetLocalAxisA(const Zilch::Real3& value);
    
    Zilch::Real3 GetLocalAxisB();
    
    void SetLocalAxisB(const Zilch::Real3& value);
    
    Zilch::Real3 GetWorldAxis();
    
    void SetWorldAxis(const Zilch::Real3& value);
    
    // Sets the position of the anchor on object A and B given a position in world space
    void SetWorldPoints(const Zilch::Real3& __0);
    
    unsigned char mValue[104];
    
  protected:
    PrismaticJoint2d(Zilch::NoType none) : Joint(none) {}
    ZilchNoCopy(PrismaticJoint2d);
  };
  
  // Applies a wind force to an object in a given direction. A wind force approximates the surface area of the object in the direction of the force to determine how large the force should be.
  class WindEffect : public PhysicsEffect
  {
  public:
    float GetWindSpeed();
    
    void SetWindSpeed(float value);
    
    Zilch::Real3 GetWindDirection();
    
    void SetWindDirection(const Zilch::Real3& value);
    
    unsigned char mValue[16];
    
  protected:
    WindEffect(Zilch::NoType none) : PhysicsEffect(none) {}
    ZilchNoCopy(WindEffect);
  };
  
  class Ribbon : public Component
  {
  public:
    bool GetSpawning();
    
    void SetSpawning(bool value);
    
    Zilch::Real3 GetLocalSpawnPointA();
    
    void SetLocalSpawnPointA(const Zilch::Real3& value);
    
    Zilch::Real3 GetLocalSpawnPointB();
    
    void SetLocalSpawnPointB(const Zilch::Real3& value);
    
    int GetMaxLength();
    
    void SetMaxLength(int value);
    
    float GetLengthBetweenSpawn();
    
    void SetLengthBetweenSpawn(float value);
    
    float GetTimeBetweenSpawn();
    
    void SetTimeBetweenSpawn(float value);
    
    int GetCurveType();
    
    void SetCurveType(int value);
    
    float GetCurveResolution();
    
    void SetCurveResolution(float value);
    
    Zilch::Real2 GetTextureScalar();
    
    void SetTextureScalar(const Zilch::Real2& value);
    
    bool GetFlipTextureX();
    
    void SetFlipTextureX(bool value);
    
    bool GetFlipTextureY();
    
    void SetFlipTextureY(bool value);
    
    bool GetUseDecayCurve();
    
    void SetUseDecayCurve(bool value);
    
    Zilch::HandleOf<SampleCurve> GetDecayCurve();
    
    void SetDecayCurve(SampleCurve* value);
    
    unsigned char mValue[112];
    
  protected:
    Ribbon(Zilch::NoType none) : Component(none) {}
    ZilchNoCopy(Ribbon);
  };
  
  class LevelGeometry : public Component
  {
  public:
    float GetLayerDepth();
    
    void SetLayerDepth(float value);
    
    unsigned char mValue[24];
    
  protected:
    LevelGeometry(Zilch::NoType none) : Component(none) {}
    ZilchNoCopy(LevelGeometry);
  };
  
  // Network User Manages the replication of a single negotiated user on the network.
  class NetUser : public NetObject
  {
  public:
    bool GetAddedByMyPeer();
    
    Zilch::HandleOf<CogHashSetRange> GetOwnedNetObjects();
    
    int GetOwnedNetObjectCount();
    
    int GetNetUserId();
    
    void SetNetUserId(int value);
    
    int GetNetPeerId();
    
    void SetNetPeerId(int value);
    
    // Returns true if the user was added by the specified peer, else false.
    bool AddedByPeer(int netPeerId);
    
    // Finds a net object with the given name owned by this user in the specified space, else nullptr.
    Zilch::HandleOf<Cog> FindOwnedNetObjectByNameInSpace(const Zilch::String& name, Space* space);
    
    // Finds a net object with the given name owned by this user in any space, else nullptr.
    Zilch::HandleOf<Cog> FindOwnedNetObjectByName(const Zilch::String& name);
    
    // [Server/Offline] Releases ownership of all net objects owned by this user in all spaces
    void ReleaseOwnedNetObjects();
    
    unsigned char mValue[128];
    
  protected:
    NetUser(Zilch::NoType none) : NetObject(none) {}
    ZilchNoCopy(NetUser);
  };
  
  // A joint that models a wheel with shocks. A wheel aligns the two local axes together and allows free rotation about this axis. The specified shock axis is turned into a soft constraint to model the shocks. Note: object 0 should be the root object as the shock axis rotates with this object. If object 0 is the wheel, then the shock axis will rotate with the wheel, causing the shocks to not stay aligned. Add on definitions: Limit: A limit will provide a min/max angle on the motor axis. Motor: A motor will turn the objects about the motor axis. Spring: A spring will make the shock axis springy. A spring is attached by default to a wheel.
  class WheelJoint : public Joint
  {
  public:
    Zilch::Real3 GetLocalPointA();
    
    void SetLocalPointA(const Zilch::Real3& value);
    
    Zilch::Real3 GetLocalPointB();
    
    void SetLocalPointB(const Zilch::Real3& value);
    
    Zilch::Real3 GetWorldPointA();
    
    void SetWorldPointA(const Zilch::Real3& value);
    
    Zilch::Real3 GetWorldPointB();
    
    void SetWorldPointB(const Zilch::Real3& value);
    
    Zilch::Quaternion GetLocalAngleA();
    
    void SetLocalAngleA(const Zilch::Quaternion& value);
    
    Zilch::Quaternion GetLocalAngleB();
    
    void SetLocalAngleB(const Zilch::Quaternion& value);
    
    Zilch::Real3 GetLocalAxisA();
    
    void SetLocalAxisA(const Zilch::Real3& value);
    
    Zilch::Real3 GetLocalAxisB();
    
    void SetLocalAxisB(const Zilch::Real3& value);
    
    Zilch::Real3 GetWorldAxis();
    
    void SetWorldAxis(const Zilch::Real3& value);
    
    Zilch::Real3 GetWorldShockAxis();
    
    void SetWorldShockAxis(const Zilch::Real3& value);
    
    // Sets the position of the anchor on object A and B given a position in world space
    void SetWorldPoints(const Zilch::Real3& __0);
    
    unsigned char mValue[152];
    
  protected:
    WheelJoint(Zilch::NoType none) : Joint(none) {}
    ZilchNoCopy(WheelJoint);
  };
  
  // A component that provides fog.
  class Fog : public Component
  {
  public:
    int GetFogType();
    
    void SetFogType(int value);
    
    Zilch::Real4 GetColor();
    
    void SetColor(const Zilch::Real4& value);
    
    float GetBeginDepth();
    
    void SetBeginDepth(float value);
    
    float GetEndDepth();
    
    void SetEndDepth(float value);
    
    float GetBeginDensity();
    
    void SetBeginDensity(float value);
    
    float GetEndDensity();
    
    void SetEndDensity(float value);
    
    float GetFogDensity();
    
    void SetFogDensity(float value);
    
    float GetFogStart();
    
    void SetFogStart(float value);
    
    unsigned char mValue[44];
    
  protected:
    Fog(Zilch::NoType none) : Component(none) {}
    ZilchNoCopy(Fog);
  };
  
  // Main configuration component.
  class MainConfig : public Component
  {
  public:
    Zilch::String GetApplicationName();
    
    void SetApplicationName(const Zilch::String& value);
    
    Zilch::String GetBuildDate();
    
    void SetBuildDate(const Zilch::String& value);
    
    Zilch::String GetBuildVersion();
    
    void SetBuildVersion(const Zilch::String& value);
    
    unsigned char mValue[56];
    
  protected:
    MainConfig(Zilch::NoType none) : Component(none) {}
    ZilchNoCopy(MainConfig);
  };
  
  class DefaultGameSetup : public Component
  {
  public:
    Zilch::HandleOf<Archetype> GetStartingSpace();
    
    void SetStartingSpace(Archetype* value);
    
    Zilch::HandleOf<Level> GetStartingLevel();
    
    void SetStartingLevel(Level* value);
    
    unsigned char mValue[20];
    
  protected:
    DefaultGameSetup(Zilch::NoType none) : Component(none) {}
    ZilchNoCopy(DefaultGameSetup);
  };
  
  // Manages all the client/server/peer connections.
  class LockStepGame : public Component
  {
  public:
    int GetBufferFramesAllowed();
    
    void SetBufferFramesAllowed(int value);
    
    bool GetDebugMode();
    
    void SetDebugMode(bool value);
    
    Zilch::HandleOf<LockStepPeer> GetUnsafeLocalPeer();
    
    int GetUnsafeLocalPeerGuid();
    
    void QueueSyncedEvent(const Zilch::String& eventId, LockStepEvent* event);
    
    Zilch::HandleOf<LockStepPeer> GetPeerByGuid(int guid);
    
    unsigned char mValue[216];
    
  protected:
    LockStepGame(Zilch::NoType none) : Component(none) {}
    ZilchNoCopy(LockStepGame);
  };
  
  class Gizmo : public Component
  {
  public:
    bool GetActive();
    
    void SetActive(bool value);
    
    bool GetForwardEventsToChildren();
    
    void SetForwardEventsToChildren(bool value);
    
    Zilch::HandleOf<Cog> GetEditingObject();
    
    bool GetMouseOver();
    
    unsigned char mValue[12];
    
  protected:
    Gizmo(Zilch::NoType none) : Component(none) {}
    ZilchNoCopy(Gizmo);
  };
  
  // Applies a directional force at the thrust effects center. When applied to a rigid body, this force will cause the rigid body to torque if the force's direction does not go through the center of mass. Useful for modeling any sort of a thruster.
  class ThrustEffect : public PhysicsEffect
  {
  public:
    bool GetLocalSpaceDirection();
    
    void SetLocalSpaceDirection(bool value);
    
    float GetForceStrength();
    
    void SetForceStrength(float value);
    
    Zilch::Real3 GetForceDirection();
    
    void SetForceDirection(const Zilch::Real3& value);
    
    unsigned char mValue[44];
    
  protected:
    ThrustEffect(Zilch::NoType none) : PhysicsEffect(none) {}
    ZilchNoCopy(ThrustEffect);
  };
  
  // Forms a link between two positions on two objects. ObjectLinks are used primarily by physics to represent joints, but can also be used by graphics, gameplay, etc... to represent some connection between two objects.
  class ObjectLink : public Component
  {
  public:
    Zilch::HandleOf<CogPath> GetObjectAPath();
    
    void SetObjectAPath(CogPath* value);
    
    Zilch::HandleOf<CogPath> GetObjectBPath();
    
    void SetObjectBPath(CogPath* value);
    
    Zilch::HandleOf<Cog> GetObjectA();
    
    void SetObjectA(Cog* value);
    
    Zilch::HandleOf<Cog> GetObjectB();
    
    void SetObjectB(Cog* value);
    
    Zilch::Real3 GetWorldPointA();
    
    void SetWorldPointA(const Zilch::Real3& value);
    
    Zilch::Real3 GetWorldPointB();
    
    void SetWorldPointB(const Zilch::Real3& value);
    
    Zilch::Real3 GetLocalPointA();
    
    void SetLocalPointA(const Zilch::Real3& value);
    
    Zilch::Real3 GetLocalPointB();
    
    void SetLocalPointB(const Zilch::Real3& value);
    
    unsigned char mValue[108];
    
  protected:
    ObjectLink(Zilch::NoType none) : Component(none) {}
    ZilchNoCopy(ObjectLink);
  };
  
  // A voxel chunk builds a cube mesh where each cube face is a sprite(sprites are atlased for performance) The voxel chunk can represent multiple graphical materials within it(such as a transparent material, diffuse material, etc) Keep in mind that the more graphical materials added, the more draw calls and meshes the chunk will have to make.
  class VoxelChunk : public Component
  {
  public:
    int GetVoxelCount();
    
    Zilch::Integer3 GetDimensions();
    
    void SetDimensions(const Zilch::Integer3& value);
    
    Zilch::HandleOf<Cog> GetVoxelChunkMaterialsCog();
    
    void SetVoxelChunkMaterialsCog(Cog* value);
    
    Zilch::HandleOf<VoxelChunkMaterials> GetVoxelChunkMaterials();
    
    void SetVoxelChunkMaterials(VoxelChunkMaterials* value);
    
    bool GetAutoRebuild();
    
    void SetAutoRebuild(bool value);
    
    // Set the voxel type at a given position The voxel id must be registered with the VoxelChunkMaterials or else it will not be drawn.
    void SetVoxel(const Zilch::Integer3& position, int voxelType);
    
    int GetVoxel(const Zilch::Integer3& position);
    
    int GetVoxelOrDefault(const Zilch::Integer3& position, int defaultVoxelType);
    
    // Set the color of a given voxel(default is white(1, 1, 1, 1))
    void SetColor(const Zilch::Integer3& position, const Zilch::Real4& color);
    
    Zilch::Real4 GetColor(const Zilch::Integer3& position);
    
    Zilch::Real4 GetColorOrDefault(const Zilch::Integer3& position, const Zilch::Real4& color);
    
    // Checks if a position is valid.
    bool IsPositionValid(const Zilch::Integer3& position);
    
    // Force rebuilding of a mesh(only needed to be called if'AutoRebuild' is false)
    void RebuildMesh();
    
    // Only rebuilds the mesh if it is needed(only needed to be called if'AutoRebuild' is false)
    void RebuildMeshIfNeeded();
    
    unsigned char mValue[120];
    
  protected:
    VoxelChunk(Zilch::NoType none) : Component(none) {}
    ZilchNoCopy(VoxelChunk);
  };
  
  // The SoundListener component uses the transform to compute all 3d sound effects./Doppler, Falloff, Reverb regions, etc.
  class SoundListener : public Component
  {
  public:
    bool GetActive();
    
    void SetActive(bool value);
    
    float GetVolume();
    
    void SetVolume(float value);
    
    unsigned char mValue[40];
    
  protected:
    SoundListener(Zilch::NoType none) : Component(none) {}
    ZilchNoCopy(SoundListener);
  };
  
  // Sound Emitter component emits 3d sound at its location.
  class SoundEmitter : public Component
  {
  public:
    bool GetUsePitchSemitones();
    
    void SetUsePitchSemitones(bool value);
    
    float GetPitch();
    
    void SetPitch(float value);
    
    float GetPitchSemitones();
    
    void SetPitchSemitones(float value);
    
    bool GetUseVolumeDB();
    
    void SetUseVolumeDB(bool value);
    
    float GetVolume();
    
    void SetVolume(float value);
    
    float GetVolumeDB();
    
    void SetVolumeDB(float value);
    
    bool GetPositional();
    
    void SetPositional(bool value);
    
    // Stop all cues on this emitter.
    void Stop();
    
    void Pause();
    
    void Continue();
    
    // Play a cue by name on this emitter.
    Zilch::HandleOf<SoundInstance> PlayCue(SoundCue* cue);
    
    // Is this emitter currently playing sound?
    bool IsPlaying();
    
    void InterpolatePitch(float pitch, float interpolationTime);
    
    void InterpolatePitchSemitones(float __0, float __1);
    
    void InterpolateVolume(float volume, float interpolationTime);
    
    void InterpolateVolumeDB(float __0, float __1);
    
    unsigned char mValue[92];
    
  protected:
    SoundEmitter(Zilch::NoType none) : Component(none) {}
    ZilchNoCopy(SoundEmitter);
  };
  
  // A camera component that provides screen drops blur.
  class ScreenDrops : public Component
  {
  public:
    unsigned char mValue[16];
    
  protected:
    ScreenDrops(Zilch::NoType none) : Component(none) {}
    ZilchNoCopy(ScreenDrops);
  };
  
  // A revolute joint is used to create a wheel or a hinge. A revolute joint bring the two locally defined axes together and allows free rotation on only that axis. This axis is also where the motor is applied. The two axes that are orthogonal to the motor axis have their rotation locked(objects rotate together unless on the motor axis). Add on definitions: Limit: A limit will provide a min/max angle on the motor axis. Motor: A motor will turn the objects about the motor axis. Spring: A spring will make the motor axis springy at the limits.
  class RevoluteJoint : public Joint
  {
  public:
    Zilch::Real3 GetLocalPointA();
    
    void SetLocalPointA(const Zilch::Real3& value);
    
    Zilch::Real3 GetLocalPointB();
    
    void SetLocalPointB(const Zilch::Real3& value);
    
    Zilch::Real3 GetWorldPointA();
    
    void SetWorldPointA(const Zilch::Real3& value);
    
    Zilch::Real3 GetWorldPointB();
    
    void SetWorldPointB(const Zilch::Real3& value);
    
    bool GetUseFrameA();
    
    void SetUseFrameA(bool value);
    
    Zilch::Real3 GetWorldAxis();
    
    void SetWorldAxis(const Zilch::Real3& value);
    
    // Sets the position of the anchor on object A and B given a position in world space
    void SetWorldPoints(const Zilch::Real3& __0);
    
    // Spawns a proxy transform widget that allows the user to configure the basis for object A. The basis is used to specify the rotation basis and the other two axes used for computing the reference angles for limits.
    void EditBasisA();
    
    // Spawns a proxy transform widget that allows the user to configure the basis for object B. The basis is used to specify the rotation basis and the other two axes used for computing the reference angles for limits.
    void EditBasisB();
    
    // Same as Basis1 except this sets the basis for both objects simultaneously.
    void EditWorldBasis();
    
    // Used to set the entire frame in world space for this joint. The x and y axes are used as a basis for limiting the joint. The x axis is at angle 0 and the y axis is at angle 90. The z axis is the axis of rotational freedom.
    void SetWorldFrame(const Zilch::Quaternion& rot);
    
    unsigned char mValue[108];
    
  protected:
    RevoluteJoint(Zilch::NoType none) : Joint(none) {}
    ZilchNoCopy(RevoluteJoint);
  };
  
  // Shadow component for dynamic shadowing with lights.
  class Shadow : public Component
  {
  public:
    bool GetActive();
    
    void SetActive(bool value);
    
    int GetQuality();
    
    void SetQuality(int value);
    
    int GetShadowMapping();
    
    void SetShadowMapping(int value);
    
    int GetShadowSoftening();
    
    void SetShadowSoftening(int value);
    
    Zilch::Real4 GetColor();
    
    void SetColor(const Zilch::Real4& value);
    
    float GetNormalOffsetBias();
    
    void SetNormalOffsetBias(float value);
    
    float GetMinFrustumDepth();
    
    void SetMinFrustumDepth(float value);
    
    float GetSplitPlaneDistribution();
    
    void SetSplitPlaneDistribution(float value);
    
    bool GetShowCascadeColors();
    
    void SetShowCascadeColors(bool value);
    
    unsigned char mValue[708];
    
  protected:
    Shadow(Zilch::NoType none) : Component(none) {}
    ZilchNoCopy(Shadow);
  };
  
  class ProxyControlPoint : public Component
  {
  public:
    unsigned char mValue[12];
    
  protected:
    ProxyControlPoint(Zilch::NoType none) : Component(none) {}
    ZilchNoCopy(ProxyControlPoint);
  };
  
  class ParticleColorAnimator : public ParticleAnimator
  {
  public:
    Zilch::Real4 GetColor0();
    
    void SetColor0(const Zilch::Real4& value);
    
    Zilch::Real4 GetColor1();
    
    void SetColor1(const Zilch::Real4& value);
    
    Zilch::Real4 GetColor2();
    
    void SetColor2(const Zilch::Real4& value);
    
    Zilch::Real4 GetColor3();
    
    void SetColor3(const Zilch::Real4& value);
    
    Zilch::Real4 GetColor4();
    
    void SetColor4(const Zilch::Real4& value);
    
    unsigned char mValue[80];
    
  protected:
    ParticleColorAnimator(Zilch::NoType none) : ParticleAnimator(none) {}
    ZilchNoCopy(ParticleColorAnimator);
  };
  
  // Used to generate Dynamic Meshes from the Mesh resource.
  class DynamicMeshGenerator : public Component
  {
  public:
    Zilch::HandleOf<Mesh> GetMesh();
    
    void SetMesh(Mesh* value);
    
    // Adds all the vertices and indices of a mesh with a given offset.
    void AddMesh(Mesh* mesh, const Zilch::Real3& translation, const Zilch::Quaternion& rotation, const Zilch::Real3& scale);
    
    // Copies the mesh info from the Mesh resource passed in.
    void BuildFromMesh(Mesh* mesh);
    
    unsigned char mValue[8];
    
  protected:
    DynamicMeshGenerator(Zilch::NoType none) : Component(none) {}
    ZilchNoCopy(DynamicMeshGenerator);
  };
  
  class GeometryMesh3D : public Component
  {
  public:
    Zilch::Real3 GetSampleDistances();
    
    void SetSampleDistances(const Zilch::Real3& value);
    
    float GetSurfaceLevel();
    
    void SetSurfaceLevel(float value);
    
    float GetMinDensity();
    
    void SetMinDensity(float value);
    
    float GetMaxDensity();
    
    void SetMaxDensity(float value);
    
    unsigned char mValue[372];
    
  protected:
    GeometryMesh3D(Zilch::NoType none) : Component(none) {}
    ZilchNoCopy(GeometryMesh3D);
  };
  
  class DynamicMesh : public Component
  {
  public:
    bool GetGenerateNormals();
    
    void SetGenerateNormals(bool value);
    
    bool GetDrawVertices();
    
    void SetDrawVertices(bool value);
    
    bool GetDrawTriangles();
    
    void SetDrawTriangles(bool value);
    
    bool GetDrawNormals();
    
    void SetDrawNormals(bool value);
    
    int GetVertexCount();
    
    // Adds a new vertex.
    void AddVertex(const Zilch::Real3& vertex);
    
    void AddNormal(const Zilch::Real3& normal);
    
    void AddUV(const Zilch::Real2& uv);
    
    // Adds new triangle.
    void AddTriangleIndices(int index0, int index1, int index2);
    
    // Used for script access.
    Zilch::Real3 GetVertex(int index);
    
    Zilch::Real3 GetNormal(int index);
    
    void SetVertex(int index, const Zilch::Real3& position);
    
    // Clears out all data on the mesh.
    void Clear();
    
    void GenerateAabb();
    
    // Used to denote that the user has completed their modifications.
    void Modified();
    
    unsigned char mValue[132];
    
  protected:
    DynamicMesh(Zilch::NoType none) : Component(none) {}
    ZilchNoCopy(DynamicMesh);
  };
  
  class BasicPointEffect : public PhysicsEffect
  {
  public:
    float GetMinDistance();
    
    void SetMinDistance(float value);
    
    float GetMaxDistance();
    
    void SetMaxDistance(float value);
    
    float GetStrengthAtMin();
    
    void SetStrengthAtMin(float value);
    
    float GetStrengthAtMax();
    
    void SetStrengthAtMax(float value);
    
    Zilch::Real3 GetLocalPositionOffset();
    
    void SetLocalPositionOffset(const Zilch::Real3& value);
    
    PointInterpolationStates GetInterpolationType();
    
    void SetInterpolationType(PointInterpolationStates value);
    
    PointEndCondition GetEndCondition();
    
    void SetEndCondition(PointEndCondition value);
    
    unsigned char mValue[44];
    
  protected:
    BasicPointEffect(Zilch::NoType none) : PhysicsEffect(none) {}
    ZilchNoCopy(BasicPointEffect);
  };
  
  // A force effect who's direction and strength is based upon the distance from a central point. The direction of the force will always point to the center of the field, but the strength will vary depending on the min/max distance and strength values. Useful to make planetary force field like effects.
  class PointForceEffect : public BasicPointEffect
  {
  public:
    
  protected:
    PointForceEffect(Zilch::NoType none) : BasicPointEffect(none) {}
    ZilchNoCopy(PointForceEffect);
  };
  
  class ParentingTool : public ObjectConnectingTool
  {
  public:
    bool GetMaintainPosition();
    
    void SetMaintainPosition(bool value);
    
    unsigned char mValue[4];
    
  protected:
    ParentingTool(Zilch::NoType none) : ObjectConnectingTool(none) {}
    ZilchNoCopy(ParentingTool);
  };
  
  // Light component for dynamic scene lighting.
  class Light : public Graphical
  {
  public:
    Zilch::String GetFragmentSource();
    
    unsigned char mValue[72];
    
  protected:
    Light(Zilch::NoType none) : Graphical(none) {}
    ZilchNoCopy(Light);
  };
  
  // Contains all the material definitions used by VoxelChunks when building the meshes The materials should generally be setup by script(typically the integer id used is an enum in script)
  class VoxelChunkMaterials : public Component
  {
  public:
    // Sets the graphical material used to draw the voxels(all faces/sides must be set using SetMaterialFaceSprite)
    void SetFaceGraphicsMaterial(int voxelType, VoxelFace face, Material* graphicsMaterial);
    
    // Sets one face/side of a material to the given sprite source.
    void SetFaceSprite(int voxelType, VoxelFace face, SpriteSource* spriteSource);
    
    // Sets one face/side of a material to be within a certain culling group All materials in the same culling group will cull faces if they are next to another mateiral in the same group.
    void SetInternalFaceCullGroup(int voxelType, VoxelFace face, int internalFaceCullGroup);
    
    // If a block is considered transparent, then shared faces of opaque voxels will not be culled.
    void SetTransparent(int voxelType, VoxelFace face, bool transparent);
    
    // Sets both the graphics material and all sides of the voxel to the given sprite.
    void SetUniformMaterial(int voxelType, Material* graphicsMaterial, SpriteSource* source, bool transparent);
    
    // Removes a material by id, or returns false if the material didn't exist.
    bool ClearMaterial(int voxelType);
    
    unsigned char mValue[52];
    
  protected:
    VoxelChunkMaterials(Zilch::NoType none) : Component(none) {}
    ZilchNoCopy(VoxelChunkMaterials);
  };
  
  class HeightMapModel : public Graphical
  {
  public:
    Zilch::HandleOf<Material> GetMaterial();
    
    void SetMaterial(Material* value);
    
    Zilch::Real4 GetColor();
    
    void SetColor(const Zilch::Real4& value);
    
    unsigned char mValue[80];
    
  protected:
    HeightMapModel(Zilch::NoType none) : Graphical(none) {}
    ZilchNoCopy(HeightMapModel);
  };
  
  class SpriteTextBlock : public Component
  {
  public:
    Zilch::HandleOf<TextBlock> GetTextBlock();
    
    void SetTextBlock(TextBlock* value);
    
    unsigned char mValue[4];
    
  protected:
    SpriteTextBlock(Zilch::NoType none) : Component(none) {}
    ZilchNoCopy(SpriteTextBlock);
  };
  
  class CogSizerGizmo : public CogTransformGizmo
  {
  public:
    bool GetSizeBoxCollider();
    
    void SetSizeBoxCollider(bool value);
    
    unsigned char mValue[4];
    
  protected:
    CogSizerGizmo(Zilch::NoType none) : CogTransformGizmo(none) {}
    ZilchNoCopy(CogSizerGizmo);
  };
  
  // SpriteBeam is a repeated series of sprites rendering along a link.
  class SpriteBeam : public BaseSprite
  {
  public:
    int GetBeamGeometryMode();
    
    void SetBeamGeometryMode(int value);
    
    Zilch::HandleOf<SpriteSource> GetSpriteSource();
    
    void SetSpriteSource(SpriteSource* value);
    
    float GetSpriteThickness();
    
    void SetSpriteThickness(float value);
    
    float GetSpriteLength();
    
    void SetSpriteLength(float value);
    
    float GetRepeatCount();
    
    void SetRepeatCount(float value);
    
    unsigned char mValue[52];
    
  protected:
    SpriteBeam(Zilch::NoType none) : BaseSprite(none) {}
    ZilchNoCopy(SpriteBeam);
  };
  
  // Light component that provides god rays.
  class GodRayLight : public Component
  {
  public:
    bool GetActive();
    
    void SetActive(bool value);
    
    int GetLightType();
    
    void SetLightType(int value);
    
    Zilch::Real4 GetColor();
    
    void SetColor(const Zilch::Real4& value);
    
    float GetIntensity();
    
    void SetIntensity(float value);
    
    float GetScreenRadius();
    
    void SetScreenRadius(float value);
    
    float GetOccluderClarity();
    
    void SetOccluderClarity(float value);
    
    bool GetScreenEdgeFade();
    
    void SetScreenEdgeFade(bool value);
    
    float GetBeginFade();
    
    void SetBeginFade(float value);
    
    float GetEndFade();
    
    void SetEndFade(float value);
    
    float GetDepthOffset();
    
    void SetDepthOffset(float value);
    
    unsigned char mValue[68];
    
  protected:
    GodRayLight(Zilch::NoType none) : Component(none) {}
    ZilchNoCopy(GodRayLight);
  };
  
  // Attracts objects with the Attractor component.
  class Attractive : public Component
  {
  public:
    bool GetActive();
    
    void SetActive(bool value);
    
    float GetStrength();
    
    void SetStrength(float value);
    
    unsigned char mValue[8];
    
  protected:
    Attractive(Zilch::NoType none) : Component(none) {}
    ZilchNoCopy(Attractive);
  };
  
  class EditorIcon : public Component
  {
  public:
    Zilch::String GetIcon();
    
    void SetIcon(const Zilch::String& value);
    
    unsigned char mValue[28];
    
  protected:
    EditorIcon(Zilch::NoType none) : Component(none) {}
    ZilchNoCopy(EditorIcon);
  };
  
  // A Space of geometric objects. The space contains Models and other 3d objects.
  class GraphicsSpace : public Component
  {
  public:
    int GetTransparentSort();
    
    void SetTransparentSort(int value);
    
    Zilch::HandleOf<SpriteLayerOrder> GetSpriteLayerOrder();
    
    void SetSpriteLayerOrder(SpriteLayerOrder* value);
    
    bool GetActive();
    
    void SetActive(bool value);
    
    bool GetUseRandomSeed();
    
    void SetUseRandomSeed(bool value);
    
    int GetRandomSeed();
    
    void SetRandomSeed(int value);
    
    unsigned char mValue[120];
    
  protected:
    GraphicsSpace(Zilch::NoType none) : Component(none) {}
    ZilchNoCopy(GraphicsSpace);
  };
  
  class GeometryMesh : public Component
  {
  public:
    Zilch::HandleOf<GeometryMaterial> GetGeometryMaterial();
    
    void SetGeometryMaterial(GeometryMaterial* value);
    
    unsigned char mValue[112];
    
  protected:
    GeometryMesh(Zilch::NoType none) : Component(none) {}
    ZilchNoCopy(GeometryMesh);
  };
  
  // A component that creates a graphical warping effect(in a ring). Requires the deferred renderer and that Refraction is enabled.
  class ScreenWarpRing : public Component
  {
  public:
    float GetSize();
    
    void SetSize(float value);
    
    float GetThickness();
    
    void SetThickness(float value);
    
    float GetIntensity();
    
    void SetIntensity(float value);
    
    unsigned char mValue[20];
    
  protected:
    ScreenWarpRing(Zilch::NoType none) : Component(none) {}
    ZilchNoCopy(ScreenWarpRing);
  };
  
  // 3D Model component. Basic 3D model made of a 3D polygonal mesh. Uses Transform component position, rotation, and scale.
  class Model : public Graphical
  {
  public:
    Zilch::HandleOf<Material> GetMaterial();
    
    void SetMaterial(Material* value);
    
    Zilch::HandleOf<Mesh> GetMesh();
    
    void SetMesh(Mesh* value);
    
    Zilch::Real4 GetColor();
    
    void SetColor(const Zilch::Real4& value);
    
    unsigned char mValue[52];
    
  protected:
    Model(Zilch::NoType none) : Graphical(none) {}
    ZilchNoCopy(Model);
  };
  
  class RayTraceProperties : public Component
  {
  public:
    Zilch::Real4 GetAttenuation();
    
    void SetAttenuation(const Zilch::Real4& value);
    
    float GetSpecularScalar();
    
    void SetSpecularScalar(float value);
    
    float GetSpecularPower();
    
    void SetSpecularPower(float value);
    
    float GetElectricPermittivity();
    
    void SetElectricPermittivity(float value);
    
    float GetMagneticPermeability();
    
    void SetMagneticPermeability(float value);
    
    float GetIndexOfRefraction();
    
    void SetIndexOfRefraction(float value);
    
    bool GetUseTexture();
    
    void SetUseTexture(bool value);
    
    unsigned char mValue[40];
    
  protected:
    RayTraceProperties(Zilch::NoType none) : Component(none) {}
    ZilchNoCopy(RayTraceProperties);
  };
  
  // Emits particles inside a sphere.
  class SphericalParticleEmitter : public ParticleEmitterShared
  {
  public:
    
  protected:
    SphericalParticleEmitter(Zilch::NoType none) : ParticleEmitterShared(none) {}
    ZilchNoCopy(SphericalParticleEmitter);
  };
  
  class DefaultCamera : public Component
  {
  public:
    bool GetActive();
    
    void SetActive(bool value);
    
    unsigned char mValue[4];
    
  protected:
    DefaultCamera(Zilch::NoType none) : Component(none) {}
    ZilchNoCopy(DefaultCamera);
  };
  
  // Configuration component that contains data for the main window. Used to control window size and placement. Also stores graphics context shared between graphics and the platform.
  class MainWindowConfig : public Component
  {
  public:
    Zilch::String GetTitle();
    
    void SetTitle(const Zilch::String& value);
    
    bool GetMaxSize();
    
    void SetMaxSize(bool value);
    
    int GetDesktopIndex();
    
    void SetDesktopIndex(int value);
    
    int GetWidth();
    
    void SetWidth(int value);
    
    int GetHeight();
    
    void SetHeight(int value);
    
    unsigned char mValue[28];
    
  protected:
    MainWindowConfig(Zilch::NoType none) : Component(none) {}
    ZilchNoCopy(MainWindowConfig);
  };
  
  class RopeCreator : public Component
  {
  public:
    int GetSlices();
    
    void SetSlices(int value);
    
    float GetThickness();
    
    void SetThickness(float value);
    
    float GetLengthUvScale();
    
    void SetLengthUvScale(float value);
    
    float GetRadialUvScale();
    
    void SetRadialUvScale(float value);
    
    bool GetAllowUvStretching();
    
    void SetAllowUvStretching(bool value);
    
    unsigned char mValue[28];
    
  protected:
    RopeCreator(Zilch::NoType none) : Component(none) {}
    ZilchNoCopy(RopeCreator);
  };
  
  class LineParticleEmitter : public ParticleEmitter
  {
  public:
    bool GetActive();
    
    void SetActive(bool value);
    
    float GetBeginSize();
    
    void SetBeginSize(float value);
    
    float GetEndSize();
    
    void SetEndSize(float value);
    
    float GetSpaceBetweenParticles();
    
    void SetSpaceBetweenParticles(float value);
    
    bool GetFitParticlesToLength();
    
    void SetFitParticlesToLength(bool value);
    
    Zilch::Real3 GetTargetPosition();
    
    void SetTargetPosition(const Zilch::Real3& value);
    
    int GetTargetSpace();
    
    void SetTargetSpace(int value);
    
    unsigned char mValue[36];
    
  protected:
    LineParticleEmitter(Zilch::NoType none) : ParticleEmitter(none) {}
    ZilchNoCopy(LineParticleEmitter);
  };
  
  class Area : public Component
  {
  public:
    Location GetOrigin();
    
    void SetOrigin(Location value);
    
    Zilch::Real2 GetTopLeft();
    
    Zilch::Real2 GetTopCenter();
    
    Zilch::Real2 GetTopRight();
    
    Zilch::Real2 GetCenterLeft();
    
    Zilch::Real2 GetCenter();
    
    Zilch::Real2 GetCenterRight();
    
    Zilch::Real2 GetBottomLeft();
    
    Zilch::Real2 GetBottomCenter();
    
    Zilch::Real2 GetBottomRight();
    
    Zilch::Real2 GetSize();
    
    void SetSize(const Zilch::Real2& value);
    
    Zilch::Real2 LocalOffsetOf(Location __0);
    
    unsigned char mValue[16];
    
  protected:
    Area(Zilch::NoType none) : Component(none) {}
    ZilchNoCopy(Area);
  };
  
  class ReactiveSpace : public Component
  {
  public:
    Zilch::HandleOf<Cog> GetOver();
    
    unsigned char mValue[24];
    
  protected:
    ReactiveSpace(Zilch::NoType none) : Component(none) {}
    ZilchNoCopy(ReactiveSpace);
  };
  
  // Basic Particle Animation Effects.
  class LinearParticleAnimator : public ParticleAnimator
  {
  public:
    Zilch::Real3 GetForce();
    
    void SetForce(const Zilch::Real3& value);
    
    Zilch::Real3 GetRandomForce();
    
    void SetRandomForce(const Zilch::Real3& value);
    
    float GetTorque();
    
    void SetTorque(float value);
    
    float GetGrowth();
    
    void SetGrowth(float value);
    
    float GetDampening();
    
    void SetDampening(float value);
    
    Zilch::Real3 GetTwist();
    
    void SetTwist(const Zilch::Real3& value);
    
    unsigned char mValue[48];
    
  protected:
    LinearParticleAnimator(Zilch::NoType none) : ParticleAnimator(none) {}
    ZilchNoCopy(LinearParticleAnimator);
  };
  
  class DynamicController : public Component
  {
  public:
    Zilch::Real3 GetUpVector();
    
    void SetUpVector(const Zilch::Real3& value);
    
    float GetTargetSpeed();
    
    void SetTargetSpeed(float value);
    
    float GetPrimaryForceCap();
    
    void SetPrimaryForceCap(float value);
    
    float GetBrakeForceCap();
    
    void SetBrakeForceCap(float value);
    
    float GetControlLossOnHit();
    
    void SetControlLossOnHit(float value);
    
    float GetControlGainSpeed();
    
    void SetControlGainSpeed(float value);
    
    float GetInitialJumpStrength();
    
    void SetInitialJumpStrength(float value);
    
    float GetAdditiveJumpStrength();
    
    void SetAdditiveJumpStrength(float value);
    
    float GetAdditiveJumpTime();
    
    void SetAdditiveJumpTime(float value);
    
    float GetForwardJumpStrength();
    
    void SetForwardJumpStrength(float value);
    
    float GetInAirControl();
    
    void SetInAirControl(float value);
    
    float GetSlideyness();
    
    void SetSlideyness(float value);
    
    float GetFootPercentage();
    
    void SetFootPercentage(float value);
    
    float GetOnGroundPlayPercentage();
    
    void SetOnGroundPlayPercentage(float value);
    
    float GetAddedOnGroundGravity();
    
    void SetAddedOnGroundGravity(float value);
    
    float GetLateJumpTimer();
    
    void SetLateJumpTimer(float value);
    
    bool GetOnGround();
    
    void SetOnGround(bool value);
    
    bool GetAlwaysOnGround();
    
    void SetAlwaysOnGround(bool value);
    
    Zilch::Real3 GetFacingDirection();
    
    void MoveInDirection(const Zilch::Real3& __0);
    
    bool AttemptJump(float __0);
    
    void Jump(float __0);
    
    void EndJump();
    
    void ApplyVelocity(const Zilch::Real3& __0);
    
    void ApplyForce(const Zilch::Real3& __0);
    
    void ApplyAcceleration(const Zilch::Real3& __0);
    
    bool IsStandingOn(const Zilch::Real3& __0);
    
    void Activate();
    
    void Deactivate();
    
    unsigned char mValue[168];
    
  protected:
    DynamicController(Zilch::NoType none) : Component(none) {}
    ZilchNoCopy(DynamicController);
  };
  
  class RayTracedPhysicsProvider : public RayTracedProvider
  {
  public:
    bool GetBasicLighting();
    
    void SetBasicLighting(bool value);
    
    bool GetDrawTransparent();
    
    void SetDrawTransparent(bool value);
    
    int GetObjectColorMode();
    
    void SetObjectColorMode(int value);
    
    unsigned char mValue[40];
    
  protected:
    RayTracedPhysicsProvider(Zilch::NoType none) : RayTracedProvider(none) {}
    ZilchNoCopy(RayTracedPhysicsProvider);
  };
  
  // 3D Camera class. The camera uses the position and rotation of the Transform component.
  class Camera : public Component
  {
  public:
    int GetProjectionMode();
    
    void SetProjectionMode(int value);
    
    int GetFacing();
    
    void SetFacing(int value);
    
    int GetTransparentSort();
    
    void SetTransparentSort(int value);
    
    float GetFieldOfView();
    
    void SetFieldOfView(float value);
    
    float GetNearPlane();
    
    void SetNearPlane(float value);
    
    float GetFarPlane();
    
    void SetFarPlane(float value);
    
    float GetSize();
    
    void SetSize(float value);
    
    Zilch::HandleOf<Cog> GetViewport();
    
    unsigned char mValue[552];
    
  protected:
    Camera(Zilch::NoType none) : Component(none) {}
    ZilchNoCopy(Camera);
  };
  
  class TranslateTool : public TransformGizmo
  {
  public:
    int GetBasis();
    
    void SetBasis(int value);
    
    int GetPivot();
    
    void SetPivot(int value);
    
    bool GetSnapping();
    
    void SetSnapping(bool value);
    
    float GetSnapDistance();
    
    void SetSnapDistance(float value);
    
    bool GetSnapToXPlane();
    
    void SetSnapToXPlane(bool value);
    
    bool GetSnapToYPlane();
    
    void SetSnapToYPlane(bool value);
    
    bool GetSnapToZPlane();
    
    void SetSnapToZPlane(bool value);
    
    int GetGizmoGrab();
    
    void SetGizmoGrab(int value);
    
    unsigned char mValue[4];
    
  protected:
    TranslateTool(Zilch::NoType none) : TransformGizmo(none) {}
    ZilchNoCopy(TranslateTool);
  };
  
  class ParticleTwister : public ParticleAnimator
  {
  public:
    Zilch::Real3 GetAxis();
    
    void SetAxis(const Zilch::Real3& value);
    
    float GetStrength();
    
    void SetStrength(float value);
    
    float GetMinDistance();
    
    void SetMinDistance(float value);
    
    float GetMaxDistance();
    
    void SetMaxDistance(float value);
    
    unsigned char mValue[24];
    
  protected:
    ParticleTwister(Zilch::NoType none) : ParticleAnimator(none) {}
    ZilchNoCopy(ParticleTwister);
  };
  
  class GizmoDrag : public Component
  {
  public:
    GizmoDragMode GetDragMode();
    
    void SetDragMode(GizmoDragMode value);
    
    Zilch::Real3 GetLineDirection();
    
    void SetLineDirection(const Zilch::Real3& value);
    
    Zilch::Real3 GetPlaneNormal();
    
    void SetPlaneNormal(const Zilch::Real3& value);
    
    bool GetNormalInWorld();
    
    void SetNormalInWorld(bool value);
    
    Zilch::Real3 GetGrabPoint();
    
    GizmoGrabMode GetGrabMode();
    
    void SetGrabMode(GizmoGrabMode value);
    
    bool GetAutoDrag();
    
    void SetAutoDrag(bool value);
    
    float GetDragDistance();
    
    void SetDragDistance(float value);
    
    bool GetDragActive();
    
    unsigned char mValue[100];
    
  protected:
    GizmoDrag(Zilch::NoType none) : Component(none) {}
    ZilchNoCopy(GizmoDrag);
  };
  
  class SimpleSound : public Component
  {
  public:
    Zilch::HandleOf<SoundCue> GetCue();
    
    void SetCue(SoundCue* value);
    
    bool GetStartPlaying();
    
    void SetStartPlaying(bool value);
    
    Zilch::HandleOf<SoundInstance> Play();
    
    void Stop();
    
    bool IsPlaying();
    
    unsigned char mValue[16];
    
  protected:
    SimpleSound(Zilch::NoType none) : Component(none) {}
    ZilchNoCopy(SimpleSound);
  };
  
  class MouseCapture : public Component
  {
  public:
    // Starts the mouse manipulation. All mouse events will now only go to the owner of this Component. Returns whether or not the manipulation can be started.
    bool Capture(ViewportMouseEvent* e);
    
    // Releases the mouse manipulation.
    void ReleaseCapture();
    
    // Returns whether or not this has an active mouse capture.
    bool IsCaptured();
    
    unsigned char mValue[12];
    
  protected:
    MouseCapture(Zilch::NoType none) : Component(none) {}
    ZilchNoCopy(MouseCapture);
  };
  
  // Updates the translation of the gizmo when it's being dragged.
  class TranslateGizmo : public Component
  {
  public:
    UpdateMode GetUpdateMode();
    
    void SetUpdateMode(UpdateMode value);
    
    GizmoSnapMode GetSnapMode();
    
    void SetSnapMode(GizmoSnapMode value);
    
    float GetSnapDistance();
    
    void SetSnapDistance(float value);
    
    unsigned char mValue[28];
    
  protected:
    TranslateGizmo(Zilch::NoType none) : Component(none) {}
    ZilchNoCopy(TranslateGizmo);
  };
  
  class GeometryPainter2D : public Component
  {
  public:
    int GetSelectedBrush();
    
    void SetSelectedBrush(int value);
    
    Zilch::HandleOf<GeometryMaterial> GetMaterial();
    
    void SetMaterial(GeometryMaterial* value);
    
    float GetBrushSize();
    
    void SetBrushSize(float value);
    
    float GetBrushOrientation();
    
    void SetBrushOrientation(float value);
    
    int GetLayer();
    
    void SetLayer(int value);
    
    float GetMinEdgeLength();
    
    void SetMinEdgeLength(float value);
    
    bool GetHideNonWorkingLayers();
    
    void SetHideNonWorkingLayers(bool value);
    
    unsigned char mValue[104];
    
  protected:
    GeometryPainter2D(Zilch::NoType none) : Component(none) {}
    ZilchNoCopy(GeometryPainter2D);
  };
  
  class TileEditor2D : public Component
  {
  public:
    int GetToolType();
    
    void SetToolType(int value);
    
    bool GetShowCollision();
    
    void SetShowCollision(bool value);
    
    bool GetShowCoordinates();
    
    void SetShowCoordinates(bool value);
    
    bool GetShowArchetype();
    
    void SetShowArchetype(bool value);
    
    bool GetShowInvalid();
    
    void SetShowInvalid(bool value);
    
    bool GetShowGrid();
    
    void SetShowGrid(bool value);
    
    bool GetTiledDrawing();
    
    void SetTiledDrawing(bool value);
    
    void CreateTileMap();
    
    unsigned char mValue[152];
    
  protected:
    TileEditor2D(Zilch::NoType none) : Component(none) {}
    ZilchNoCopy(TileEditor2D);
  };
  
  // A joint that models a wheel with shocks. This is the 2d version of the wheel joint. This joint is used in 2d mode for increased speed and stability. The motor axis is automatically set to the z axis, as that is the only axis objects can rotate upon. Also, the translation on the z axis is ignored so that objects can be arbitrarily far apart. Add on definitions: Limit: A limit will provide a min/max angle on the motor axis. Motor: A motor will turn the objects about the motor axis. Spring: A spring will make the shock axis springy. A spring is attached by default to a wheel.
  class WheelJoint2d : public Joint
  {
  public:
    Zilch::Real3 GetLocalPointA();
    
    void SetLocalPointA(const Zilch::Real3& value);
    
    Zilch::Real3 GetLocalPointB();
    
    void SetLocalPointB(const Zilch::Real3& value);
    
    Zilch::Real3 GetWorldPointA();
    
    void SetWorldPointA(const Zilch::Real3& value);
    
    Zilch::Real3 GetWorldPointB();
    
    void SetWorldPointB(const Zilch::Real3& value);
    
    Zilch::Quaternion GetLocalAngleA();
    
    void SetLocalAngleA(const Zilch::Quaternion& value);
    
    Zilch::Quaternion GetLocalAngleB();
    
    void SetLocalAngleB(const Zilch::Quaternion& value);
    
    Zilch::Real3 GetWorldShockAxis();
    
    void SetWorldShockAxis(const Zilch::Real3& value);
    
    // Sets the position of the anchor on object A and B given a position in world space
    void SetWorldPoints(const Zilch::Real3& __0);
    
    unsigned char mValue[128];
    
  protected:
    WheelJoint2d(Zilch::NoType none) : Joint(none) {}
    ZilchNoCopy(WheelJoint2d);
  };
  
  class RayTracedGraphicsProvider : public RayTracedProvider
  {
  public:
    int GetDepth();
    
    void SetDepth(int value);
    
    int GetShadowSamples();
    
    void SetShadowSamples(int value);
    
    int GetPixelSamples();
    
    void SetPixelSamples(int value);
    
    Zilch::Real4 GetAmbientColor();
    
    void SetAmbientColor(const Zilch::Real4& value);
    
    Zilch::Real4 GetAirAttenuation();
    
    void SetAirAttenuation(const Zilch::Real4& value);
    
    int GetPixelSampleType();
    
    void SetPixelSampleType(int value);
    
    unsigned char mValue[196];
    
  protected:
    RayTracedGraphicsProvider(Zilch::NoType none) : RayTracedProvider(none) {}
    ZilchNoCopy(RayTracedGraphicsProvider);
  };
  
  class EditorRenderer : public ForwardRenderer
  {
  public:
    int GetVisibilitySpyMode();
    
    void SetVisibilitySpyMode(int value);
    
    unsigned char mValue[44];
    
  protected:
    EditorRenderer(Zilch::NoType none) : ForwardRenderer(none) {}
    ZilchNoCopy(EditorRenderer);
  };
  
  class Ssao : public Component
  {
  public:
    bool GetEnabled();
    
    void SetEnabled(bool value);
    
    float GetSampleRadius();
    
    void SetSampleRadius(float value);
    
    float GetIntensity();
    
    void SetIntensity(float value);
    
    unsigned char mValue[12];
    
  protected:
    Ssao(Zilch::NoType none) : Component(none) {}
    ZilchNoCopy(Ssao);
  };
  
  class CameraViewports : public Component
  {
  public:
    Zilch::HandleOf<CameraViewportListrange> GetViewports();
    
    Zilch::HandleOf<StoredValueRangeCameraViewport> GetVisibleSortedViewports();
    
    unsigned char mValue[8];
    
  protected:
    CameraViewports(Zilch::NoType none) : Component(none) {}
    ZilchNoCopy(CameraViewports);
  };
  
  class JointTool3D : public BaseJointTool
  {
  public:
    int GetJointType();
    
    void SetJointType(int value);
    
    
  protected:
    JointTool3D(Zilch::NoType none) : BaseJointTool(none) {}
    ZilchNoCopy(JointTool3D);
  };
  
  // Represents a ball and socket joint. A position joint constrains the two anchor points on each object to be equal. Limits, motors and springs should most likely not be used on this. Add on definitions: Limit: A limit will provide a min/max translation on every axis(x,y,z) that the objects must be between. Motor: A motor will attempt to drive the translation in the positive direction on every axis. Spring: A spring will make the translation on every axis springy at the bounds.
  class PositionJoint : public Joint
  {
  public:
    Zilch::Real3 GetLocalPointA();
    
    void SetLocalPointA(const Zilch::Real3& value);
    
    Zilch::Real3 GetLocalPointB();
    
    void SetLocalPointB(const Zilch::Real3& value);
    
    Zilch::Real3 GetWorldPointA();
    
    void SetWorldPointA(const Zilch::Real3& value);
    
    Zilch::Real3 GetWorldPointB();
    
    void SetWorldPointB(const Zilch::Real3& value);
    
    // Sets the position of the anchor on object A and B given a position in world space
    void SetWorldPoints(const Zilch::Real3& __0);
    
    unsigned char mValue[48];
    
  protected:
    PositionJoint(Zilch::NoType none) : Joint(none) {}
    ZilchNoCopy(PositionJoint);
  };
  
  // Orients the object towards other objects with the Attractive component.
  class Attractor : public MovementBase
  {
  public:
    float GetCheckRadius();
    
    void SetCheckRadius(float value);
    
    int GetMaxObjects();
    
    void SetMaxObjects(int value);
    
    float GetTimeBetweenChecks();
    
    void SetTimeBetweenChecks(float value);
    
    bool GetAttractiveMustBeVisible();
    
    void SetAttractiveMustBeVisible(bool value);
    
    bool GetIgnoreStaticObjects();
    
    void SetIgnoreStaticObjects(bool value);
    
    // Returns the object at the given index.
    Zilch::HandleOf<Cog> GetObject(int index);
    
    // Returns the amount of objects it is currently being attracted to.
    int ObjectsAttractedTo();
    
    unsigned char mValue[40];
    
  protected:
    Attractor(Zilch::NoType none) : MovementBase(none) {}
    ZilchNoCopy(Attractor);
  };
  
  class GizmoSpace : public Component
  {
  public:
    unsigned char mValue[32];
    
  protected:
    GizmoSpace(Zilch::NoType none) : Component(none) {}
    ZilchNoCopy(GizmoSpace);
  };
  
  // Network Peer Acts as a host on the network Manages network object state and event replication.
  class NetPeer : public NetObject
  {
  public:
    Zilch::HandleOf<NetChannelConfig> GetAutomaticChannel();
    
    void SetAutomaticChannel(NetChannelConfig* value);
    
    bool GetIsOpen();
    
    int GetNetPeerId();
    
    Zilch::HandleOf<IpAddress> GetIpv4Address();
    
    Zilch::String GetIpv4Host();
    
    int GetIpv4Port();
    
    Zilch::HandleOf<IpAddress> GetIpv6Address();
    
    Zilch::String GetIpv6Host();
    
    int GetIpv6Port();
    
    int GetNetObjectCount();
    
    int GetNetUserCount();
    
    int GetNetSpaceCount();
    
    int GetLinkCount();
    
    Zilch::HandleOf<NetUserRange> GetUsersAddedByMyPeer();
    
    Zilch::HandleOf<NetUserRange> GetUsers();
    
    int GetUserCount();
    
    // Dispatches the net event on the net object for the local peer.
    void DispatchLocal(const Zilch::String& eventId, Event* event);
    
    // Dispatches the net event on the net object for the remote peer In Offline mode, this calls DispatchLocal only.
    void DispatchRemote(const Zilch::String& eventId, Event* event, int netPeerId);
    
    // Dispatches the net event on the net object for all remote peers In Offline mode, this calls DispatchLocal only.
    void DispatchBroadcast(const Zilch::String& eventId, Event* event);
    
    // Dispatches the net event on the net object for the local peer and for the remote peer In Offline mode, this calls DispatchLocal only.
    void DispatchLocalAndRemote(const Zilch::String& eventId, Event* event, int netPeerId);
    
    // Dispatches the net event on the net object for the local peer and for all remote peers In Offline mode, this calls DispatchLocal only.
    void DispatchLocalAndBroadcast(const Zilch::String& eventId, Event* event);
    
    bool Open(NetRole role, int __1, int __2);
    
    bool Open(NetRole role, int __1);
    
    bool Open(NetRole role);
    
    // Closes the peer(safe to call multiple times)
    void Close();
    
    bool ConnectLink(IpAddress* ipAddress, EventBundle* __1);
    
    bool ConnectLink(IpAddress* ipAddress, Event* __1);
    
    bool ConnectLink(IpAddress* ipAddress);
    
    bool DisconnectLink(IpAddress* netPeerId, EventBundle* __1);
    
    bool DisconnectLink(IpAddress* netPeerId, Event* __1);
    
    bool DisconnectLink(IpAddress* netPeerId);
    
    bool DisconnectLink(int netPeerId, EventBundle* __1);
    
    bool DisconnectLink(int netPeerId, Event* __1);
    
    bool DisconnectLink(int netPeerId);
    
    int DisconnectAllLinks(EventBundle* __0);
    
    int DisconnectAllLinks(Event* __0);
    
    int DisconnectAllLinks();
    
    // [Client/Server] Returns the direction in which the link was created(which peer initiated the connection), else TransmissionDirection::Unspecified
    TransmissionDirection GetLinkCreationDirection(int netPeerId);
    
    // [Client/Server] Returns the link's overall status, else LinkStatus::Unspecified
    LinkStatus GetLinkStatus(int netPeerId);
    
    // [Client/Server] Returns the link's specific state, else LinkState::Unspecified
    LinkState GetLinkState(int netPeerId);
    
    // [Client/Server] Returns the remote peer's IP address(as seen from our perspective), else IpAddress() For outgoing links this is the same IP address specified in our connect call This IP address will never change for the lifetime of this link
    Zilch::HandleOf<IpAddress> GetLinkIpAddress(int netPeerId);
    
    // [Client/Server] Returns our peer's IP address(as seen from their perspective), else IpAddress() For incoming links this is the same IP address specified in their connect call Set if the link is connected or incoming and attempting connection It is absolutely possible that this does not match our local IP address
    Zilch::HandleOf<IpAddress> GetOurIpAddressFromLink(int netPeerId);
    
    // [Client/Server] Returns the link's IP address protocol version, else InternetProtocol::Unspecified This IP address protocol will never change for the lifetime of this link
    InternetProtocol GetLinkInternetProtocol(int netPeerId);
    
    // Returns the remote peer's unique network identifier, else 0[Server] This will be non-zero if the client is connected, else zero[Client] This will always be zero.
    int GetLinkNetPeerId(IpAddress* ipAddress);
    
    bool AddUser(EventBundle* __0);
    
    bool AddUser(Event* __0);
    
    bool AddUser();
    
    // Returns the specified network user, else nullptr.
    Zilch::HandleOf<Cog> GetUser(int netUserId);
    
    // Returns the network users added by the specified peer.
    Zilch::HandleOf<NetUserRange> GetUsersAddedByPeer(int netPeerId);
    
    bool RemoveUser(Cog* cog, EventBundle* __1);
    
    bool RemoveUser(Cog* cog, Event* __1);
    
    bool RemoveUser(Cog* cog);
    
    // Returns the live net space specified if it is known locally, else nullptr.
    Zilch::HandleOf<Space> GetNetSpace(int netObjectId);
    
    // Returns the live net object specified if it is known locally, else nullptr.
    Zilch::HandleOf<Cog> GetNetObject(int netObjectId);
    
    unsigned char mValue[1320];
    
  protected:
    NetPeer(Zilch::NoType none) : NetObject(none) {}
    ZilchNoCopy(NetPeer);
  };
  
  // A PulleyJoint turn two StickJoints into a pulley via a pulley ratio. A PulleyJoint connects the two free objects of two different stick joints. These two objects will then be bound to move together via the formula length0+ ratio* length1= 0. Limits, motors and springs should not be used on a pulley.
  class PulleyJoint : public Joint
  {
  public:
    float GetRatio();
    
    void SetRatio(float value);
    
    Zilch::HandleOf<Cog> GetJointA();
    
    void SetJointA(Cog* value);
    
    Zilch::HandleOf<Cog> GetJointB();
    
    void SetJointB(Cog* value);
    
    unsigned char mValue[44];
    
  protected:
    PulleyJoint(Zilch::NoType none) : Joint(none) {}
    ZilchNoCopy(PulleyJoint);
  };
  
  class ModelVisualizer : public Component
  {
  public:
    bool GetDrawPoints();
    
    void SetDrawPoints(bool value);
    
    bool GetDrawNormals();
    
    void SetDrawNormals(bool value);
    
    bool GetDrawTangents();
    
    void SetDrawTangents(bool value);
    
    bool GetDrawBinormals();
    
    void SetDrawBinormals(bool value);
    
    bool GetCycleVertices();
    
    void SetCycleVertices(bool value);
    
    float GetNormalScale();
    
    void SetNormalScale(float value);
    
    unsigned char mValue[20];
    
  protected:
    ModelVisualizer(Zilch::NoType none) : Component(none) {}
    ZilchNoCopy(ModelVisualizer);
  };
  
  // Deferred Scene renderer. Renders a Geometric scene using the deferred rendering method.
  class DeferredRenderer : public Renderer
  {
  public:
    bool GetHdr();
    
    void SetHdr(bool value);
    
    bool GetShadows();
    
    void SetShadows(bool value);
    
    bool GetAntiAliasing();
    
    void SetAntiAliasing(bool value);
    
    bool GetRefraction();
    
    void SetRefraction(bool value);
    
    bool GetReflections();
    
    void SetReflections(bool value);
    
    Zilch::HandleOf<Texture> GetReflectionEnvironment();
    
    void SetReflectionEnvironment(Texture* value);
    
    bool GetGodRays();
    
    void SetGodRays(bool value);
    
    bool GetRenderMasks();
    
    void SetRenderMasks(bool value);
    
    bool GetGlow();
    
    void SetGlow(bool value);
    
    float GetGlowThreshold();
    
    void SetGlowThreshold(float value);
    
    unsigned char mValue[164];
    
  protected:
    DeferredRenderer(Zilch::NoType none) : Renderer(none) {}
    ZilchNoCopy(DeferredRenderer);
  };
  
  // Rotates the object away from obstacles by using feeler sensors that detect walls.
  class Feelers : public MovementBase
  {
  public:
    int GetFeelerMode();
    
    void SetFeelerMode(int value);
    
    float GetSideFeelerAngle();
    
    void SetSideFeelerAngle(float value);
    
    float GetSideFeelerDistance();
    
    void SetSideFeelerDistance(float value);
    
    float GetPrimaryFeelerMaxAngle();
    
    void SetPrimaryFeelerMaxAngle(float value);
    
    float GetPrimaryFeelerDistance();
    
    void SetPrimaryFeelerDistance(float value);
    
    Zilch::Real3 GetLocalOffset();
    
    void SetLocalOffset(const Zilch::Real3& value);
    
    unsigned char mValue[40];
    
  protected:
    Feelers(Zilch::NoType none) : MovementBase(none) {}
    ZilchNoCopy(Feelers);
  };
  
  class Project : public Component
  {
  public:
    Zilch::String GetProjectFolder();
    
    void SetProjectFolder(const Zilch::String& value);
    
    unsigned char mValue[104];
    
  protected:
    Project(Zilch::NoType none) : Component(none) {}
    ZilchNoCopy(Project);
  };
  
  // A common class that represents height map data.
  class HeightMap : public Component
  {
  public:
    Zilch::HandleOf<HeightMapSource> GetSource();
    
    float GetUnitsPerPatch();
    
    void SetUnitsPerPatch(float value);
    
    unsigned char mValue[64];
    
  protected:
    HeightMap(Zilch::NoType none) : Component(none) {}
    ZilchNoCopy(HeightMap);
  };
  
  // Object System creates particles as object.
  class ObjectSystem : public ParticleSystemCommonData
  {
  public:
    Zilch::Real3 GetStartRotation();
    
    void SetStartRotation(const Zilch::Real3& value);
    
    Zilch::Real3 GetRandomRotation();
    
    void SetRandomRotation(const Zilch::Real3& value);
    
    Zilch::Real3 GetStartTorque();
    
    void SetStartTorque(const Zilch::Real3& value);
    
    Zilch::Real3 GetRandomTorque();
    
    void SetRandomTorque(const Zilch::Real3& value);
    
    bool GetFaceVelocity();
    
    void SetFaceVelocity(bool value);
    
    bool GetEffectsTranslation();
    
    void SetEffectsTranslation(bool value);
    
    bool GetEffectsScale();
    
    void SetEffectsScale(bool value);
    
    bool GetEffectsColor();
    
    void SetEffectsColor(bool value);
    
    bool GetControlsLifetime();
    
    void SetControlsLifetime(bool value);
    
    Zilch::HandleOf<Archetype> GetSpawnArchetype();
    
    void SetSpawnArchetype(Archetype* value);
    
    Zilch::Real3 GetSystemSize();
    
    void SetSystemSize(const Zilch::Real3& value);
    
    unsigned char mValue[72];
    
  protected:
    ObjectSystem(Zilch::NoType none) : ParticleSystemCommonData(none) {}
    ZilchNoCopy(ObjectSystem);
  };
  
  class LightningParticleEmitter : public ParticleEmitter
  {
  public:
    int GetMinBranches();
    
    void SetMinBranches(int value);
    
    int GetMaxBranches();
    
    void SetMaxBranches(int value);
    
    float GetBranchProbabilityExponent();
    
    void SetBranchProbabilityExponent(float value);
    
    float GetDurationPerStrike();
    
    void SetDurationPerStrike(float value);
    
    int GetMinDepth();
    
    void SetMinDepth(int value);
    
    int GetMaxDepth();
    
    void SetMaxDepth(int value);
    
    float GetMinSegmentLength();
    
    void SetMinSegmentLength(float value);
    
    float GetMaxSegmentLength();
    
    void SetMaxSegmentLength(float value);
    
    float GetMinRandomOffset();
    
    void SetMinRandomOffset(float value);
    
    float GetMaxRandomOffset();
    
    void SetMaxRandomOffset(float value);
    
    float GetBeginSize();
    
    void SetBeginSize(float value);
    
    float GetEndSize();
    
    void SetEndSize(float value);
    
    float GetHackOffsetPercentage();
    
    void SetHackOffsetPercentage(float value);
    
    Zilch::Real3 GetTargetPosition();
    
    void SetTargetPosition(const Zilch::Real3& value);
    
    int GetTargetSpace();
    
    void SetTargetSpace(int value);
    
    unsigned char mValue[68];
    
  protected:
    LightningParticleEmitter(Zilch::NoType none) : ParticleEmitter(none) {}
    ZilchNoCopy(LightningParticleEmitter);
  };
  
  class RotateTool : public TransformGizmo
  {
  public:
    int GetBasis();
    
    void SetBasis(int value);
    
    int GetPivot();
    
    void SetPivot(int value);
    
    bool GetAffectTranslation();
    
    void SetAffectTranslation(bool value);
    
    bool GetSnapping();
    
    void SetSnapping(bool value);
    
    float GetSnapAngle();
    
    void SetSnapAngle(float value);
    
    int GetGizmoGrab();
    
    void SetGizmoGrab(int value);
    
    unsigned char mValue[20];
    
  protected:
    RotateTool(Zilch::NoType none) : TransformGizmo(none) {}
    ZilchNoCopy(RotateTool);
  };
  
  class PointMassAnchor : public Component
  {
  public:
    unsigned char mValue[20];
    
  protected:
    PointMassAnchor(Zilch::NoType none) : Component(none) {}
    ZilchNoCopy(PointMassAnchor);
  };
  
  class ScaleTool : public TransformGizmo
  {
  public:
    int GetPivot();
    
    void SetPivot(int value);
    
    bool GetAffectTranslation();
    
    void SetAffectTranslation(bool value);
    
    int GetGizmoGrab();
    
    void SetGizmoGrab(int value);
    
    bool GetSnapping();
    
    void SetSnapping(bool value);
    
    float GetSnapDistance();
    
    void SetSnapDistance(float value);
    
    unsigned char mValue[4];
    
  protected:
    ScaleTool(Zilch::NoType none) : TransformGizmo(none) {}
    ZilchNoCopy(ScaleTool);
  };
  
  class ParticleCollisionHeightmap : public ParticleAnimator
  {
  public:
    float GetRestitution();
    
    void SetRestitution(float value);
    
    Zilch::HandleOf<Cog> GetHeightMap();
    
    void SetHeightMap(Cog* value);
    
    unsigned char mValue[12];
    
  protected:
    ParticleCollisionHeightmap(Zilch::NoType none) : ParticleAnimator(none) {}
    ZilchNoCopy(ParticleCollisionHeightmap);
  };
  
  class RotationProxy : public TransformProxyObject
  {
  public:
    
  protected:
    RotationProxy(Zilch::NoType none) : TransformProxyObject(none) {}
    ZilchNoCopy(RotationProxy);
  };
  
  class ZilchPluginConfig : public Component
  {
  public:
    bool GetAttemptedIdeToolsInstall();
    
    void SetAttemptedIdeToolsInstall(bool value);
    
    unsigned char mValue[4];
    
  protected:
    ZilchPluginConfig(Zilch::NoType none) : Component(none) {}
    ZilchNoCopy(ZilchPluginConfig);
  };
  
  // Responsible for determining whether or not the object blocks path finding.
  class Blocking : public Component
  {
  public:
    
  protected:
    Blocking(Zilch::NoType none) : Component(none) {}
    ZilchNoCopy(Blocking);
  };
  
  class CustomCollisionEventTracker : public Component
  {
  public:
    void AddCollision(Collider* __0, const Zilch::Real3& __1, const Zilch::Real3& __2);
    
    void SendEvents(const Zilch::String& __0);
    
    unsigned char mValue[48];
    
  protected:
    CustomCollisionEventTracker(Zilch::NoType none) : Component(none) {}
    ZilchNoCopy(CustomCollisionEventTracker);
  };
  
  class SplineParticleEmitter : public ParticleEmitterShared
  {
  public:
    float GetEmitRadius();
    
    void SetEmitRadius(float value);
    
    float GetSpawnT();
    
    void SetSpawnT(float value);
    
    float GetSpawnTVariance();
    
    void SetSpawnTVariance(float value);
    
    bool GetClampT();
    
    void SetClampT(bool value);
    
    unsigned char mValue[20];
    
  protected:
    SplineParticleEmitter(Zilch::NoType none) : ParticleEmitterShared(none) {}
    ZilchNoCopy(SplineParticleEmitter);
  };
  
  // Time space component controls time for a Space.
  class TimeSpace : public Component
  {
  public:
    bool GetGloballyPaused();
    
    float GetDtOrZero();
    
    int GetTimeMode();
    
    void SetTimeMode(int value);
    
    float GetMinDt();
    
    void SetMinDt(float value);
    
    float GetMaxDt();
    
    void SetMaxDt(float value);
    
    float GetTimeScale();
    
    void SetTimeScale(float value);
    
    bool GetPaused();
    
    void SetPaused(bool value);
    
    float GetDt();
    
    void SetDt(float value);
    
    float GetRealDt();
    
    void SetRealDt(float value);
    
    float GetTimePassed();
    
    void SetTimePassed(float value);
    
    float GetRealTimePassed();
    
    void SetRealTimePassed(float value);
    
    int GetFrame();
    
    void SetFrame(int value);
    
    int GetStepCount();
    
    void SetStepCount(int value);
    
    // Toggles the state of paused.
    void TogglePause();
    
    // Allows the engine to be advance one frame forward. Useful for debugging one frame at a time.
    void Step();
    
    unsigned char mValue[76];
    
  protected:
    TimeSpace(Zilch::NoType none) : Component(none) {}
    ZilchNoCopy(TimeSpace);
  };
  
  // Sometimes when doing sync checking, we need to ignore specific components because we know that they will not be in sync. For example, player specific components such as the Microphone or the Camera.
  class LockStepSyncIgnore : public Component
  {
  public:
    bool GetIgnoreAllComponents();
    
    void SetIgnoreAllComponents(bool value);
    
    Zilch::String GetIgnoreComponent0();
    
    void SetIgnoreComponent0(const Zilch::String& value);
    
    Zilch::String GetIgnoreComponent1();
    
    void SetIgnoreComponent1(const Zilch::String& value);
    
    Zilch::String GetIgnoreComponent2();
    
    void SetIgnoreComponent2(const Zilch::String& value);
    
    Zilch::String GetIgnoreComponent3();
    
    void SetIgnoreComponent3(const Zilch::String& value);
    
    Zilch::String GetIgnoreComponent4();
    
    void SetIgnoreComponent4(const Zilch::String& value);
    
    Zilch::String GetIgnoreComponent5();
    
    void SetIgnoreComponent5(const Zilch::String& value);
    
    Zilch::String GetIgnoreComponent6();
    
    void SetIgnoreComponent6(const Zilch::String& value);
    
    Zilch::String GetIgnoreComponent7();
    
    void SetIgnoreComponent7(const Zilch::String& value);
    
    Zilch::String GetIgnoreComponent8();
    
    void SetIgnoreComponent8(const Zilch::String& value);
    
    Zilch::String GetIgnoreComponent9();
    
    void SetIgnoreComponent9(const Zilch::String& value);
    
    unsigned char mValue[60];
    
  protected:
    LockStepSyncIgnore(Zilch::NoType none) : Component(none) {}
    ZilchNoCopy(LockStepSyncIgnore);
  };
  
  class ContentConfig : public Component
  {
  public:
    unsigned char mValue[32];
    
  protected:
    ContentConfig(Zilch::NoType none) : Component(none) {}
    ZilchNoCopy(ContentConfig);
  };
  
  class FixedAspectRatio : public Component
  {
  public:
    float GetWidth();
    
    void SetWidth(float value);
    
    float GetHeight();
    
    void SetHeight(float value);
    
    unsigned char mValue[12];
    
  protected:
    FixedAspectRatio(Zilch::NoType none) : Component(none) {}
    ZilchNoCopy(FixedAspectRatio);
  };
  
  // A force effect that pulls an object towards a central point. This effect is identical to the PointForceEffect except it ignores the mass of the object. This means that all objects will accelerate at the same speed irrespective of their mass(just like gravity). This is useful to make planetary gravity or other similar effects.
  class PointGravityEffect : public BasicPointEffect
  {
  public:
    
  protected:
    PointGravityEffect(Zilch::NoType none) : BasicPointEffect(none) {}
    ZilchNoCopy(PointGravityEffect);
  };
  
  class TextEditorConfig : public Component
  {
  public:
    int GetTabWidth();
    
    void SetTabWidth(int value);
    
    bool GetShowWhiteSpace();
    
    void SetShowWhiteSpace(bool value);
    
    bool GetLineNumbers();
    
    void SetLineNumbers(bool value);
    
    bool GetCodeFolding();
    
    void SetCodeFolding(bool value);
    
    bool GetConfidentAutoCompleteOnSymbols();
    
    void SetConfidentAutoCompleteOnSymbols(bool value);
    
    bool GetLocalWordCompletion();
    
    void SetLocalWordCompletion(bool value);
    
    bool GetKeywordAndTypeCompletion();
    
    void SetKeywordAndTypeCompletion(bool value);
    
    bool GetAutoCompleteOnEnter();
    
    void SetAutoCompleteOnEnter(bool value);
    
    Zilch::String GetColorScheme();
    
    void SetColorScheme(const Zilch::String& value);
    
    int GetFontSize();
    
    void SetFontSize(int value);
    
    unsigned char mValue[20];
    
  protected:
    TextEditorConfig(Zilch::NoType none) : Component(none) {}
    ZilchNoCopy(TextEditorConfig);
  };
  
  // Plays a single animation on Initialize.
  class SimpleAnimation : public Component
  {
  public:
    AnimPlayMode GetPlayMode();
    
    void SetPlayMode(AnimPlayMode value);
    
    Zilch::HandleOf<Animation> GetAnimation();
    
    void SetAnimation(Animation* value);
    
    // Play animations directly.
    Zilch::HandleOf<AnimationNode> PlaySingle(Animation* animation, AnimPlayMode playMode);
    
    Zilch::HandleOf<AnimationNode> DirectBlend(Animation* animation, float transitionTime, AnimPlayMode playMode);
    
    Zilch::HandleOf<AnimationNode> CrossBlend(Animation* animation, float transitionTime, AnimPlayMode playMode);
    
    Zilch::HandleOf<AnimationNode> PlayIsolatedAnimation(Animation* animation, Cog* rootBone, AnimPlayMode playMode);
    
    Zilch::HandleOf<AnimationNode> ChainAnimation(Animation* animation, AnimPlayMode playMode);
    
    unsigned char mValue[12];
    
  protected:
    SimpleAnimation(Zilch::NoType none) : Component(none) {}
    ZilchNoCopy(SimpleAnimation);
  };
  
  class SceneEffect : public Component
  {
  public:
    unsigned char mValue[12];
    
  protected:
    SceneEffect(Zilch::NoType none) : Component(none) {}
    ZilchNoCopy(SceneEffect);
  };
  
  class SkyBox : public SceneEffect
  {
  public:
    Zilch::HandleOf<Texture> GetTexture();
    
    void SetTexture(Texture* value);
    
    Zilch::Quaternion GetRotation();
    
    void SetRotation(const Zilch::Quaternion& value);
    
    unsigned char mValue[20];
    
  protected:
    SkyBox(Zilch::NoType none) : SceneEffect(none) {}
    ZilchNoCopy(SkyBox);
  };
  
  // Provides synced gamepads input across lock step.
  class LockStepGamepads : public Component
  {
  public:
    int GetMaxGamepadsPerPeer();
    
    Zilch::HandleOf<LockStepGamepad> GetGamepad(LockStepPeer* peer, int index);
    
    unsigned char mValue[32];
    
  protected:
    LockStepGamepads(Zilch::NoType none) : Component(none) {}
    ZilchNoCopy(LockStepGamepads);
  };
  
  // Ellipsoid Collider is a basic collision primitive of a ellipsoid.
  class EllipsoidCollider : public Collider
  {
  public:
    Zilch::Real3 GetRadii();
    
    void SetRadii(const Zilch::Real3& value);
    
    unsigned char mValue[12];
    
  protected:
    EllipsoidCollider(Zilch::NoType none) : Collider(none) {}
    ZilchNoCopy(EllipsoidCollider);
  };
  
  class CogTranslateGizmo : public CogTransformGizmo
  {
  public:
    bool GetDuplicateOnCtrlDrag();
    
    void SetDuplicateOnCtrlDrag(bool value);
    
    unsigned char mValue[16];
    
  protected:
    CogTranslateGizmo(Zilch::NoType none) : CogTransformGizmo(none) {}
    ZilchNoCopy(CogTranslateGizmo);
  };
  
  // Regions are used to logically turn collision volumes(a collider) into trigger volume or a region for physics effects. Any effects attached to a cog with a Region will be applied to whatever is in contact with this region.
  class Region : public Component
  {
  public:
    bool GetWakeUpOnEffectChange();
    
    void SetWakeUpOnEffectChange(bool value);
    
    // Dispatches an event to all objects in the region.
    void DispatchEvent(const Zilch::String& eventId, Event* toSend);
    
    unsigned char mValue[28];
    
  protected:
    Region(Zilch::NoType none) : Component(none) {}
    ZilchNoCopy(Region);
  };
  
  class GraphicsConfig : public Component
  {
  public:
    int GetPerformanceMode();
    
    void SetPerformanceMode(int value);
    
    bool GetFullScreen();
    
    void SetFullScreen(bool value);
    
    bool GetVerticalSync();
    
    void SetVerticalSync(bool value);
    
    int GetMultiSample();
    
    void SetMultiSample(int value);
    
    int GetQuality();
    
    void SetQuality(int value);
    
    unsigned char mValue[32];
    
  protected:
    GraphicsConfig(Zilch::NoType none) : Component(none) {}
    ZilchNoCopy(GraphicsConfig);
  };
  
  // A gear connects two joints on two objects together. Either joint can be a prismatic or a revolute. A gear ratio is used to bind the two joints together. Limits, motors and springs should most likely not be used on this.
  class GearJoint : public Joint
  {
  public:
    float GetRatio();
    
    void SetRatio(float value);
    
    float GetConstant();
    
    void SetConstant(float value);
    
    Zilch::HandleOf<Cog> GetJointA();
    
    void SetJointA(Cog* value);
    
    Zilch::HandleOf<Cog> GetJointB();
    
    void SetJointB(Cog* value);
    
    unsigned char mValue[60];
    
  protected:
    GearJoint(Zilch::NoType none) : Joint(none) {}
    ZilchNoCopy(GearJoint);
  };
  
  class AuthorityMode : public Zilch::ValueType
  {
  public:
    static AuthorityMode GetDynamic();
    
    static AuthorityMode GetFixed();
    
    int mValue;
    AuthorityMode();
  };
  
  class RingGizmoEvent : public Event
  {
  public:
    Zilch::Quaternion GetWorldRotation();
    
    void SetWorldRotation(const Zilch::Quaternion& value);
    
    Zilch::Real3 GetWorldRotationAxis();
    
    void SetWorldRotationAxis(const Zilch::Real3& value);
    
    float GetRadiansAroundAxis();
    
    void SetRadiansAroundAxis(float value);
    
    unsigned char mValue[68];
    
  protected:
    RingGizmoEvent(Zilch::NoType none) : Event(none) {}
    ZilchNoCopy(RingGizmoEvent);
  };
  
  // An event sent out when a collision happens between two groups with a filter. Used to write hook up messages based upon certain types colliding(ie. when a player is hit by a bullet, catch on fire or something).
  class CollisionGroupEvent : public BaseCollisionEvent
  {
  public:
    Zilch::String GetTypeAName();
    
    Zilch::String GetTypeBName();
    
    Zilch::HandleOf<ContactPoint> GetFirstPoint();
    
    unsigned char mValue[12];
    
  protected:
    CollisionGroupEvent(Zilch::NoType none) : BaseCollisionEvent(none) {}
    ZilchNoCopy(CollisionGroupEvent);
  };
  
  class CogNameRange : public Zilch::ReferenceType
  {
  public:
    Zilch::HandleOf<CogNameRange> GetAll();
    
    bool GetIsNotEmpty();
    
    Zilch::HandleOf<Cog> GetCurrent();
    
    void MoveNext();
    
    unsigned char mValue[8];
    
  protected:
    CogNameRange(Zilch::NoType none) : Zilch::ReferenceType(none) {}
    ZilchNoCopy(CogNameRange);
  };
  
  class ZilchObject : public ZeroObject
  {
  public:
    unsigned char mValue[44];
    
  protected:
    ZilchObject();
    
    ZilchObject(Zilch::NoType none) : ZeroObject(none) {}
    ZilchNoCopy(ZilchObject);
  };
  
  class CogHashSetRange : public Zilch::ReferenceType
  {
  public:
    bool Empty();
    
    Zilch::HandleOf<CogId> Front();
    
    void PopFront();
    
    int Size();
    
    Zilch::HandleOf<CogHashSetRange> GetAll();
    
    bool GetIsNotEmpty();
    
    Zilch::HandleOf<Cog> GetCurrent();
    
    void MoveNext();
    
    unsigned char mValue[12];
    
  protected:
    CogHashSetRange(Zilch::NoType none) : Zilch::ReferenceType(none) {}
    ZilchNoCopy(CogHashSetRange);
  };
  
  class CogId : public Zilch::ReferenceType
  {
  public:
    unsigned char mValue[8];
    
  protected:
    CogId(Zilch::NoType none) : Zilch::ReferenceType(none) {}
    ZilchNoCopy(CogId);
  };
  
  class FontContent : public ContentComposition
  {
  public:
    Zilch::HandleOf<FontBuilder> GetFontBuilder();
    
    Zilch::HandleOf<GeneratedArchetype> GetGeneratedArchetype();
    
    Zilch::HandleOf<AnimationBuilder> GetAnimationBuilder();
    
    Zilch::HandleOf<SkeletonBuilder> GetSkeletonBuilder();
    
    Zilch::HandleOf<SoundBuilder> GetSoundBuilder();
    
    Zilch::HandleOf<ContentHistory> GetContentHistory();
    
    Zilch::HandleOf<SpriteSourceBuilder> GetSpriteSourceBuilder();
    
    Zilch::HandleOf<ContentCopyright> GetContentCopyright();
    
    Zilch::HandleOf<DataBuilder> GetDataBuilder();
    
    Zilch::HandleOf<BinaryBuilder> GetBinaryBuilder();
    
    Zilch::HandleOf<EffectBuilder> GetEffectBuilder();
    
    Zilch::HandleOf<ContentTags> GetContentTags();
    
    Zilch::HandleOf<ZilchScriptBuilder> GetZilchScriptBuilder();
    
    Zilch::HandleOf<TextureBuilder> GetTextureBuilder();
    
    Zilch::HandleOf<RichAnimationBuilder> GetRichAnimationBuilder();
    
    Zilch::HandleOf<FragmentBuilder> GetFragmentBuilder();
    
    Zilch::HandleOf<PhysicsMeshBuilder> GetPhysicsMeshBuilder();
    
    Zilch::HandleOf<NavMeshBuilder> GetNavMeshBuilder();
    
    Zilch::HandleOf<ContentNotes> GetContentNotes();
    
    Zilch::HandleOf<ZilchPluginBuilder> GetZilchPluginBuilder();
    
    Zilch::HandleOf<TextBuilder> GetTextBuilder();
    
    Zilch::HandleOf<HeightToNormalBuilder> GetHeightToNormalBuilder();
    
    Zilch::HandleOf<DirectImageBuilder> GetDirectImageBuilder();
    
    Zilch::HandleOf<ZilchFragmentBuilder> GetZilchFragmentBuilder();
    
    Zilch::HandleOf<GeometryImport> GetGeometryImport();
    
    Zilch::HandleOf<MeshBuilder> GetMeshBuilder();
    
    
  protected:
    FontContent(Zilch::NoType none) : ContentComposition(none) {}
    ZilchNoCopy(FontContent);
  };
  
  class RolloffCurveType : public Zilch::ValueType
  {
  public:
    static RolloffCurveType GetSine();
    
    static RolloffCurveType GetLog();
    
    static RolloffCurveType GetSquareRoot();
    
    static RolloffCurveType GetLinear();
    
    static RolloffCurveType GetSquared();
    
    static RolloffCurveType GetCustom();
    
    int mValue;
    RolloffCurveType();
  };
  
  class Environment : public Zilch::ReferenceType
  {
  public:
    Zilch::String GetCommandLine();
    
    void SetCommandLine(const Zilch::String& value);
    
    Zilch::String GetParsedArgument(const Zilch::String& __0);
    
    Zilch::String GetVariable(const Zilch::String& __0);
    
    unsigned char mValue[48];
    
  protected:
    Environment(Zilch::NoType none) : Zilch::ReferenceType(none) {}
    ZilchNoCopy(Environment);
  };
  
  class WeightedTextures : public MaterialBlock
  {
  public:
    Zilch::HandleOf<Texture> GetTexture0();
    
    void SetTexture0(Texture* value);
    
    Zilch::Real2 GetTile0();
    
    void SetTile0(const Zilch::Real2& value);
    
    Zilch::HandleOf<Texture> GetTexture1();
    
    void SetTexture1(Texture* value);
    
    Zilch::Real2 GetTile1();
    
    void SetTile1(const Zilch::Real2& value);
    
    Zilch::HandleOf<Texture> GetTexture2();
    
    void SetTexture2(Texture* value);
    
    Zilch::Real2 GetTile2();
    
    void SetTile2(const Zilch::Real2& value);
    
    Zilch::HandleOf<Texture> GetTexture3();
    
    void SetTexture3(Texture* value);
    
    Zilch::Real2 GetTile3();
    
    void SetTile3(const Zilch::Real2& value);
    
    unsigned char mValue[48];
    
  protected:
    WeightedTextures(Zilch::NoType none) : MaterialBlock(none) {}
    ZilchNoCopy(WeightedTextures);
  };
  
  class SoundData : public Zilch::ReferenceType
  {
  public:
    unsigned char mValue[4];
    
  protected:
    SoundData(Zilch::NoType none) : Zilch::ReferenceType(none) {}
    ZilchNoCopy(SoundData);
  };
  
  class UniversalJointBlock : public Zilch::ReferenceType
  {
  public:
    float GetSlop();
    
    void SetSlop(float value);
    
    float GetLinearBaumgarte();
    
    void SetLinearBaumgarte(float value);
    
    float GetAngularBaumgarte();
    
    void SetAngularBaumgarte(float value);
    
    float GetLinearErrorCorrection();
    
    void SetLinearErrorCorrection(float value);
    
    float GetAngularErrorCorrection();
    
    void SetAngularErrorCorrection(float value);
    
    int GetCorrectionType();
    
    void SetCorrectionType(int value);
    
    unsigned char mValue[32];
    
  protected:
    UniversalJointBlock(Zilch::NoType none) : Zilch::ReferenceType(none) {}
    ZilchNoCopy(UniversalJointBlock);
  };
  
  class ContactTangentTypes : public Zilch::ValueType
  {
  public:
    static ContactTangentTypes GetVelocityTangents();
    
    static ContactTangentTypes GetOrthonormalTangents();
    
    static ContactTangentTypes GetRandomTangents();
    
    int mValue;
    ContactTangentTypes();
  };
  
  class Spacerange : public Zilch::ReferenceType
  {
  public:
    Zilch::HandleOf<Spacerange> GetAll();
    
    bool GetIsNotEmpty();
    
    Zilch::HandleOf<Cog> GetCurrent();
    
    void MoveNext();
    
    unsigned char mValue[8];
    
  protected:
    Spacerange(Zilch::NoType none) : Zilch::ReferenceType(none) {}
    ZilchNoCopy(Spacerange);
  };
  
  class CoreGraphics : public Zilch::ReferenceType
  {
  public:
    unsigned char mValue[256];
    
  protected:
    CoreGraphics(Zilch::NoType none) : Zilch::ReferenceType(none) {}
    ZilchNoCopy(CoreGraphics);
  };
  
  class DebugText : public Zilch::ReferenceType
  {
  public:
    Zilch::HandleOf<DebugText> Float4Color(const Zilch::Real4& __0);
    
    Zilch::HandleOf<DebugText> Width(float __0);
    
    Zilch::HandleOf<DebugText> Duration(float __0);
    
    Zilch::HandleOf<DebugText> OnTop(bool __0);
    
    Zilch::HandleOf<DebugText> Filled(bool __0);
    
    Zilch::HandleOf<DebugText> Border(bool __0);
    
    Zilch::HandleOf<DebugText> BackShade(bool __0);
    
    Zilch::HandleOf<DebugText> SpaceId(int __0);
    
    void Draw();
    
    Zilch::HandleOf<DebugText> ViewAligned(bool __0);
    
    Zilch::HandleOf<DebugText> Position(const Zilch::Real3& __0);
    
    Zilch::HandleOf<DebugText> Size(float __0);
    
    Zilch::HandleOf<DebugText> DisplayText(const Zilch::String& __0);
    
    unsigned char mValue[40];
    
  protected:
    DebugText(Zilch::NoType none) : Zilch::ReferenceType(none) {}
    ZilchNoCopy(DebugText);
  };
  
  class Centering : public Zilch::ValueType
  {
  public:
    static Centering GetUpperLeft();
    
    static Centering GetMiddle();
    
    int mValue;
    Centering();
  };
  
  class SpecularMapping : public MaterialBlock
  {
  public:
    Zilch::HandleOf<Texture> GetSpecularMap();
    
    void SetSpecularMap(Texture* value);
    
    Zilch::Real2 GetSpecularTiling();
    
    void SetSpecularTiling(const Zilch::Real2& value);
    
    Zilch::Real2 GetSpecularOffset();
    
    void SetSpecularOffset(const Zilch::Real2& value);
    
    Zilch::Real2 GetSpecularScroll();
    
    void SetSpecularScroll(const Zilch::Real2& value);
    
    unsigned char mValue[28];
    
  protected:
    SpecularMapping(Zilch::NoType none) : MaterialBlock(none) {}
    ZilchNoCopy(SpecularMapping);
  };
  
  class MultiMaterialBlock : public Zilch::ReferenceType
  {
  public:
    unsigned char mValue[40];
    
  protected:
    MultiMaterialBlock(Zilch::NoType none) : Zilch::ReferenceType(none) {}
    ZilchNoCopy(MultiMaterialBlock);
  };
  
  // Dispatched after sending or receiving a connect confirmation.
  class NetLinkConnected : public Event
  {
  public:
    int GetTheirNetPeerId();
    
    void SetTheirNetPeerId(int value);
    
    Zilch::HandleOf<IpAddress> GetTheirIpAddress();
    
    void SetTheirIpAddress(IpAddress* value);
    
    TransmissionDirection GetDirection();
    
    void SetDirection(TransmissionDirection value);
    
    unsigned char mValue[140];
    
  protected:
    NetLinkConnected(Zilch::NoType none) : Event(none) {}
    ZilchNoCopy(NetLinkConnected);
  };
  
  class ActionSequence : public ActionSet
  {
  public:
    unsigned char mValue[8];
    
  protected:
    ActionSequence(Zilch::NoType none) : ActionSet(none) {}
    ZilchNoCopy(ActionSequence);
  };
  
  class MultiTouch : public ZeroObject
  {
  public:
    void Clear();
    
    void EnableDebug();
    
    void Activate(const Zilch::String& __0);
    
    unsigned char mValue[60];
    
  protected:
    MultiTouch(Zilch::NoType none) : ZeroObject(none) {}
    ZilchNoCopy(MultiTouch);
  };
  
  class WebBrowserTextEvent : public WebBrowserEvent
  {
  public:
    Zilch::String GetText();
    
    void SetText(const Zilch::String& value);
    
    unsigned char mValue[4];
    
  protected:
    WebBrowserTextEvent(Zilch::NoType none) : WebBrowserEvent(none) {}
    ZilchNoCopy(WebBrowserTextEvent);
  };
  
  class DebugLine : public Zilch::ReferenceType
  {
  public:
    Zilch::HandleOf<DebugLine> Float4Color(const Zilch::Real4& __0);
    
    Zilch::HandleOf<DebugLine> Width(float __0);
    
    Zilch::HandleOf<DebugLine> Duration(float __0);
    
    Zilch::HandleOf<DebugLine> OnTop(bool __0);
    
    Zilch::HandleOf<DebugLine> Filled(bool __0);
    
    Zilch::HandleOf<DebugLine> Border(bool __0);
    
    Zilch::HandleOf<DebugLine> BackShade(bool __0);
    
    Zilch::HandleOf<DebugLine> SpaceId(int __0);
    
    void Draw();
    
    Zilch::HandleOf<DebugLine> ViewAligned(bool __0);
    
    Zilch::HandleOf<DebugLine> Start(const Zilch::Real3& __0);
    
    Zilch::HandleOf<DebugLine> End(const Zilch::Real3& __0);
    
    Zilch::HandleOf<DebugLine> HeadSize(float __0);
    
    Zilch::HandleOf<DebugLine> DualHeads(bool __0);
    
    Zilch::HandleOf<DebugLine> BoxHeads(bool __0);
    
    unsigned char mValue[48];
    
  protected:
    DebugLine(Zilch::NoType none) : Zilch::ReferenceType(none) {}
    ZilchNoCopy(DebugLine);
  };
  
  class AnimationGraphEvent : public Event
  {
  public:
    Zilch::HandleOf<Animation> GetAnimation();
    
    Zilch::HandleOf<AnimationNode> GetNode();
    
    int GetPlayMode();
    
    void SetPlayMode(int value);
    
    unsigned char mValue[12];
    
  protected:
    AnimationGraphEvent(Zilch::NoType none) : Event(none) {}
    ZilchNoCopy(AnimationGraphEvent);
  };
  
  class EffectType : public Zilch::ValueType
  {
  public:
    static EffectType GetFlow();
    
    static EffectType GetWind();
    
    static EffectType GetInvalid();
    
    static EffectType GetThrust();
    
    static EffectType GetDrag();
    
    static EffectType GetGravity();
    
    static EffectType GetForce();
    
    static EffectType GetPointGravity();
    
    static EffectType GetVortex();
    
    static EffectType GetPointForce();
    
    static EffectType GetTorque();
    
    static EffectType GetCustom();
    
    static EffectType GetBuoyancy();
    
    int mValue;
    EffectType();
  };
  
  class TimeSystem : public Zilch::ReferenceType
  {
  public:
    unsigned char mValue[120];
    
  protected:
    TimeSystem(Zilch::NoType none) : Zilch::ReferenceType(none) {}
    ZilchNoCopy(TimeSystem);
  };
  
  class PointInterpolationStates : public Zilch::ValueType
  {
  public:
    static PointInterpolationStates GetQuadratic();
    
    static PointInterpolationStates GetLinear();
    
    int mValue;
    PointInterpolationStates();
  };
  
  class ConnectionEvent : public Event
  {
  public:
    Zilch::String GetHost();
    
    void SetHost(const Zilch::String& value);
    
    int GetAddress();
    
    void SetAddress(int value);
    
    int GetPort();
    
    void SetPort(int value);
    
    int GetIndex();
    
    void SetIndex(int value);
    
    bool GetIncoming();
    
    void SetIncoming(bool value);
    
    unsigned char mValue[20];
    
  protected:
    ConnectionEvent(Zilch::NoType none) : Event(none) {}
    ZilchNoCopy(ConnectionEvent);
  };
  
  class ReceivedDataEvent : public ConnectionEvent
  {
  public:
    Zilch::String GetBuffer();
    
    void SetBuffer(const Zilch::String& value);
    
    unsigned char mValue[20];
    
  protected:
    ReceivedDataEvent(Zilch::NoType none) : ConnectionEvent(none) {}
    ZilchNoCopy(ReceivedDataEvent);
  };
  
  class WheelReference : public Zilch::ReferenceType
  {
  public:
    Zilch::HandleOf<Cog> GetWheelObject();
    
    void SetWheelObject(Cog* value);
    
    unsigned char mValue[16];
    
  protected:
    WheelReference(Zilch::NoType none) : Zilch::ReferenceType(none) {}
    ZilchNoCopy(WheelReference);
  };
  
  class LockStepGamepad : public Zilch::ReferenceType
  {
  public:
    unsigned char mValue[28];
    
  protected:
    LockStepGamepad(Zilch::NoType none) : Zilch::ReferenceType(none) {}
    ZilchNoCopy(LockStepGamepad);
  };
  
  class FlattenTool : public HeightManipulationTool
  {
  public:
    float GetHeight();
    
    void SetHeight(float value);
    
    Zilch::Real3 GetSlopeNormal();
    
    void SetSlopeNormal(const Zilch::Real3& value);
    
    bool GetSampleOnMouseDown();
    
    void SetSampleOnMouseDown(bool value);
    
    bool GetSampleNormal();
    
    void SetSampleNormal(bool value);
    
    unsigned char mValue[24];
    
  protected:
    FlattenTool(Zilch::NoType none) : HeightManipulationTool(none) {}
    ZilchNoCopy(FlattenTool);
  };
  
  class EmissiveMapping : public MaterialBlock
  {
  public:
    float GetEmissiveScale();
    
    void SetEmissiveScale(float value);
    
    Zilch::HandleOf<Texture> GetEmissiveMap();
    
    void SetEmissiveMap(Texture* value);
    
    Zilch::Real2 GetEmissiveTiling();
    
    void SetEmissiveTiling(const Zilch::Real2& value);
    
    Zilch::Real2 GetEmissiveOffset();
    
    void SetEmissiveOffset(const Zilch::Real2& value);
    
    Zilch::Real2 GetEmissiveScroll();
    
    void SetEmissiveScroll(const Zilch::Real2& value);
    
    unsigned char mValue[32];
    
  protected:
    EmissiveMapping(Zilch::NoType none) : MaterialBlock(none) {}
    ZilchNoCopy(EmissiveMapping);
  };
  
  class ContinuousResult : public Zilch::ReferenceType
  {
  public:
    float GetTime();
    
    Zilch::HandleOf<Collider> GetOtherCollider();
    
    Zilch::HandleOf<Cog> GetOtherObject();
    
    float GetPenetration();
    
    Zilch::Real3 GetWorldPoint();
    
    Zilch::Real3 GetWorldNormalTowardsSelf();
    
    Zilch::Real3 GetWorldNormalTowardsOther();
    
    unsigned char mValue[36];
    
  protected:
    ContinuousResult(Zilch::NoType none) : Zilch::ReferenceType(none) {}
    ZilchNoCopy(ContinuousResult);
  };
  
  class RootWidget : public Composite
  {
  public:
    Zilch::HandleOf<OsWindow> GetOsWindow();
    
    unsigned char mValue[144];
    
  protected:
    RootWidget(Zilch::NoType none) : Composite(none) {}
    ZilchNoCopy(RootWidget);
  };
  
  class PositionJointBlock : public Zilch::ReferenceType
  {
  public:
    float GetSlop();
    
    void SetSlop(float value);
    
    float GetLinearBaumgarte();
    
    void SetLinearBaumgarte(float value);
    
    float GetAngularBaumgarte();
    
    void SetAngularBaumgarte(float value);
    
    float GetLinearErrorCorrection();
    
    void SetLinearErrorCorrection(float value);
    
    float GetAngularErrorCorrection();
    
    void SetAngularErrorCorrection(float value);
    
    int GetCorrectionType();
    
    void SetCorrectionType(int value);
    
    unsigned char mValue[32];
    
  protected:
    PositionJointBlock(Zilch::NoType none) : Zilch::ReferenceType(none) {}
    ZilchNoCopy(PositionJointBlock);
  };
  
  class Engine : public ZeroObject
  {
  public:
    void Terminate();
    
    Zilch::HandleOf<GameSession> CreateGameSession();
    
    void DebugBreak();
    
    int GetCurrentInputDevice();
    
    unsigned char mValue[108];
    
  protected:
    Engine(Zilch::NoType none) : ZeroObject(none) {}
    ZilchNoCopy(Engine);
  };
  
  class UpdateMode : public Zilch::ValueType
  {
  public:
    static UpdateMode GetTranslateRoot();
    
    static UpdateMode GetTranslateSelf();
    
    static UpdateMode GetNone();
    
    int mValue;
    UpdateMode();
  };
  
  class ScrollBar_ : public ZeroObject
  {
  public:
    Zilch::Real4 GetSliderColor();
    
    void SetSliderColor(const Zilch::Real4& value);
    
    Zilch::Real4 GetMouseOverSlider();
    
    void SetMouseOverSlider(const Zilch::Real4& value);
    
    float GetWidth();
    
    void SetWidth(float value);
    
    float GetSpacing();
    
    void SetSpacing(float value);
    
    unsigned char mValue[52];
    
  protected:
    ScrollBar_(Zilch::NoType none) : ZeroObject(none) {}
    ZilchNoCopy(ScrollBar_);
  };
  
  // A lock-step game started event.
  class LockStepGameStartEvent : public Event
  {
  public:
    int GetPeerCount();
    
    void SetPeerCount(int value);
    
    Zilch::HandleOf<PeerRange> GetPeers();
    
    unsigned char mValue[16];
    
  protected:
    LockStepGameStartEvent(Zilch::NoType none) : Event(none) {}
    ZilchNoCopy(LockStepGameStartEvent);
  };
  
  class PeerRange : public Zilch::ReferenceType
  {
  public:
    Zilch::HandleOf<PeerRange> GetAll();
    
    bool GetIsNotEmpty();
    
    Zilch::HandleOf<LockStepPeer> GetCurrent();
    
    void MoveNext();
    
    unsigned char mValue[12];
    
  protected:
    PeerRange(Zilch::NoType none) : Zilch::ReferenceType(none) {}
    ZilchNoCopy(PeerRange);
  };
  
  class InputDevice : public Zilch::ValueType
  {
  public:
    static InputDevice GetJoystick();
    
    static InputDevice GetKeyboard();
    
    static InputDevice GetMouse();
    
    static InputDevice GetGamepad();
    
    int mValue;
    InputDevice();
  };
  
  // Sound from an audio file.
  class Sound : public Resource
  {
  public:
    static Zilch::HandleOf<Sound> Find(const Zilch::String& name);
    
    unsigned char mValue[8];
    
  protected:
    Sound(Zilch::NoType none) : Resource(none) {}
    ZilchNoCopy(Sound);
  };
  
  class TrackView_ : public ZeroObject
  {
  public:
    Zilch::Real4 GetBackgroundColor();
    
    void SetBackgroundColor(const Zilch::Real4& value);
    
    Zilch::Real4 GetErrorToolTopBorder();
    
    void SetErrorToolTopBorder(const Zilch::Real4& value);
    
    Zilch::Real4 GetErrorBgColorPrimary();
    
    void SetErrorBgColorPrimary(const Zilch::Real4& value);
    
    Zilch::Real4 GetErrorBgColorSecondary();
    
    void SetErrorBgColorSecondary(const Zilch::Real4& value);
    
    Zilch::Real4 GetDisabledText();
    
    void SetDisabledText(const Zilch::Real4& value);
    
    Zilch::Real4 GetHintColor();
    
    void SetHintColor(const Zilch::Real4& value);
    
    unsigned char mValue[52];
    
  protected:
    TrackView_(Zilch::NoType none) : ZeroObject(none) {}
    ZilchNoCopy(TrackView_);
  };
  
  class AnimBlendMode : public Zilch::ValueType
  {
  public:
    static AnimBlendMode GetManual();
    
    static AnimBlendMode GetAuto();
    
    int mValue;
    AnimBlendMode();
  };
  
  class BinaryContent : public ContentComposition
  {
  public:
    Zilch::HandleOf<FontBuilder> GetFontBuilder();
    
    Zilch::HandleOf<GeneratedArchetype> GetGeneratedArchetype();
    
    Zilch::HandleOf<AnimationBuilder> GetAnimationBuilder();
    
    Zilch::HandleOf<SkeletonBuilder> GetSkeletonBuilder();
    
    Zilch::HandleOf<SoundBuilder> GetSoundBuilder();
    
    Zilch::HandleOf<ContentHistory> GetContentHistory();
    
    Zilch::HandleOf<SpriteSourceBuilder> GetSpriteSourceBuilder();
    
    Zilch::HandleOf<ContentCopyright> GetContentCopyright();
    
    Zilch::HandleOf<DataBuilder> GetDataBuilder();
    
    Zilch::HandleOf<BinaryBuilder> GetBinaryBuilder();
    
    Zilch::HandleOf<EffectBuilder> GetEffectBuilder();
    
    Zilch::HandleOf<ContentTags> GetContentTags();
    
    Zilch::HandleOf<ZilchScriptBuilder> GetZilchScriptBuilder();
    
    Zilch::HandleOf<TextureBuilder> GetTextureBuilder();
    
    Zilch::HandleOf<RichAnimationBuilder> GetRichAnimationBuilder();
    
    Zilch::HandleOf<FragmentBuilder> GetFragmentBuilder();
    
    Zilch::HandleOf<PhysicsMeshBuilder> GetPhysicsMeshBuilder();
    
    Zilch::HandleOf<NavMeshBuilder> GetNavMeshBuilder();
    
    Zilch::HandleOf<ContentNotes> GetContentNotes();
    
    Zilch::HandleOf<ZilchPluginBuilder> GetZilchPluginBuilder();
    
    Zilch::HandleOf<TextBuilder> GetTextBuilder();
    
    Zilch::HandleOf<HeightToNormalBuilder> GetHeightToNormalBuilder();
    
    Zilch::HandleOf<DirectImageBuilder> GetDirectImageBuilder();
    
    Zilch::HandleOf<ZilchFragmentBuilder> GetZilchFragmentBuilder();
    
    Zilch::HandleOf<GeometryImport> GetGeometryImport();
    
    Zilch::HandleOf<MeshBuilder> GetMeshBuilder();
    
    
  protected:
    BinaryContent(Zilch::NoType none) : ContentComposition(none) {}
    ZilchNoCopy(BinaryContent);
  };
  
  class CommandEvent : public ObjectEvent
  {
  public:
    Zilch::HandleOf<Space> GetSpace();
    
    unsigned char mValue[4];
    
  protected:
    CommandEvent(Zilch::NoType none) : ObjectEvent(none) {}
    ZilchNoCopy(CommandEvent);
  };
  
  class HeightTool : public Zilch::ValueType
  {
  public:
    static HeightTool GetCreateDestroy();
    
    static HeightTool GetSmoothSharpen();
    
    static HeightTool GetFlatten();
    
    static HeightTool GetWeightPainter();
    
    static HeightTool GetRaiseLower();
    
    int mValue;
    HeightTool();
  };
  
  class AnimationEditor_ : public ZeroObject
  {
  public:
    float GetControlsWidth();
    
    void SetControlsWidth(float value);
    
    float GetScrubberHeight();
    
    void SetScrubberHeight(float value);
    
    Zilch::Real4 GetInactiveKeyColor();
    
    void SetInactiveKeyColor(const Zilch::Real4& value);
    
    Zilch::Real4 GetActiveKeyColor();
    
    void SetActiveKeyColor(const Zilch::Real4& value);
    
    Zilch::Real4 GetNegativeXColor();
    
    void SetNegativeXColor(const Zilch::Real4& value);
    
    Zilch::Real4 GetNegativeXHighlight();
    
    void SetNegativeXHighlight(const Zilch::Real4& value);
    
    Zilch::Real4 GetErrorStateColor();
    
    void SetErrorStateColor(const Zilch::Real4& value);
    
    Zilch::Real4 GetErrorStateHighlightColor();
    
    void SetErrorStateHighlightColor(const Zilch::Real4& value);
    
    unsigned char mValue[52];
    
  protected:
    AnimationEditor_(Zilch::NoType none) : ZeroObject(none) {}
    ZilchNoCopy(AnimationEditor_);
  };
  
  class SoundEntry : public Zilch::ReferenceType
  {
  public:
    int GetWhichToUse();
    
    void SetWhichToUse(int value);
    
    Zilch::HandleOf<Sound> GetSound();
    
    void SetSound(Sound* value);
    
    Zilch::HandleOf<GeneratedSound> GetGeneratedSound();
    
    void SetGeneratedSound(GeneratedSound* value);
    
    float GetLoopStartTime();
    
    void SetLoopStartTime(float value);
    
    float GetLoopEndTime();
    
    void SetLoopEndTime(float value);
    
    float GetWeight();
    
    void SetWeight(float value);
    
    void Preview();
    
    void StopPreview();
    
    unsigned char mValue[24];
    
  protected:
    SoundEntry(Zilch::NoType none) : Zilch::ReferenceType(none) {}
    ZilchNoCopy(SoundEntry);
  };
  
  class GeneratedSound : public Resource
  {
  public:
    int GetWaveType();
    
    void SetWaveType(int value);
    
    float GetWaveFrequency();
    
    void SetWaveFrequency(float value);
    
    float GetLength();
    
    void SetLength(float value);
    
    static Zilch::HandleOf<GeneratedSound> Find(const Zilch::String& name);
    
    unsigned char mValue[16];
    
  protected:
    GeneratedSound(Zilch::NoType none) : Resource(none) {}
    ZilchNoCopy(GeneratedSound);
  };
  
  class WebResponseEvent : public Event
  {
  public:
    int GetResponseCode();
    
    void SetResponseCode(int value);
    
    Zilch::String GetData();
    
    void SetData(const Zilch::String& value);
    
    unsigned char mValue[24];
    
  protected:
    WebResponseEvent(Zilch::NoType none) : Event(none) {}
    ZilchNoCopy(WebResponseEvent);
  };
  
  // Network Channel Manages the replication of a set of properties on the network.
  class NetChannel : public Zilch::ReferenceType
  {
  public:
    Zilch::String GetChannelName();
    
    bool GetManualChangeFlag();
    
    void SetManualChangeFlag(bool value);
    
    bool GetEventOnOutgoingPropertyChange();
    
    void SetEventOnOutgoingPropertyChange(bool value);
    
    bool GetEventOnIncomingPropertyChange();
    
    void SetEventOnIncomingPropertyChange(bool value);
    
    AuthorityMode GetAuthorityMode();
    
    Authority GetAuthority();
    
    void SetAuthority(Authority value);
    
    float GetDetectionInterval();
    
    void SetDetectionInterval(float value);
    
    DetectionMode GetDetectionMode();
    
    void SetDetectionMode(DetectionMode value);
    
    bool GetReplicateOnOnline();
    
    bool GetReplicateOnChange();
    
    bool GetReplicateOnOffline();
    
    SerializationMode GetSerializationMode();
    
    ReliabilityMode GetReliabilityMode();
    
    TransferMode GetTransferMode();
    
    // Resets all configuration settings.
    void ResetConfig();
    
    // Returns true if the net channel has a net property with the specified property name, else false.
    bool HasNetProperty(Component* component, const Zilch::String& propertyName);
    
    // Returns the net property with the specified property name, else nullptr Note: Nullifies any net property handle previously obtained from this net channel.
    Zilch::HandleOf<NetProperty> GetNetProperty(Component* component, const Zilch::String& propertyName);
    
    unsigned char mValue[16];
    
  protected:
    NetChannel(Zilch::NoType none) : Zilch::ReferenceType(none) {}
    ZilchNoCopy(NetChannel);
  };
  
  class Authority : public Zilch::ValueType
  {
  public:
    static Authority GetClient();
    
    static Authority GetServer();
    
    int mValue;
    Authority();
  };
  
  class DetectionMode : public Zilch::ValueType
  {
  public:
    static DetectionMode GetManual();
    
    static DetectionMode GetAutomatic();
    
    static DetectionMode GetAssume();
    
    static DetectionMode GetManumatic();
    
    int mValue;
    DetectionMode();
  };
  
  class SerializationMode : public Zilch::ValueType
  {
  public:
    static SerializationMode GetFull();
    
    static SerializationMode GetSelective();
    
    int mValue;
    SerializationMode();
  };
  
  class ReliabilityMode : public Zilch::ValueType
  {
  public:
    static ReliabilityMode GetReliable();
    
    static ReliabilityMode GetUnreliable();
    
    int mValue;
    ReliabilityMode();
  };
  
  class TimeMode : public Zilch::ValueType
  {
  public:
    static TimeMode GetFixedFrametime();
    
    static TimeMode GetActualFrametime();
    
    int mValue;
    TimeMode();
  };
  
  class OrientationBases : public Zilch::ValueType
  {
  public:
    static OrientationBases GetForwardXUpZ();
    
    static OrientationBases GetForwardXUpY();
    
    static OrientationBases GetForwardYUpZ();
    
    static OrientationBases GetForwardZUpY();
    
    static OrientationBases GetCustom();
    
    static OrientationBases GetForwardNegativeZUpY();
    
    int mValue;
    OrientationBases();
  };
  
  class Clips : public Zilch::ReferenceType
  {
  public:
    unsigned char mValue[16];
    
  protected:
    Clips(Zilch::NoType none) : Zilch::ReferenceType(none) {}
    ZilchNoCopy(Clips);
  };
  
  // A"specialization" of the Base Constraint Holder that has contact specific helpers.
  class ContactHolder : public Zilch::ReferenceType
  {
  public:
    Zilch::HandleOf<Cog> GetObject();
    
    Zilch::HandleOf<Cog> GetOtherObject();
    
    bool GetIsGhost();
    
    int GetContactPointCount();
    
    Zilch::HandleOf<ProxyContactPointRange> GetContactPoints();
    
    bool GetIsNew();
    
    Zilch::HandleOf<ContactPoint> GetFirstPoint();
    
    unsigned char mValue[8];
    
  protected:
    ContactHolder(Zilch::NoType none) : Zilch::ReferenceType(none) {}
    ZilchNoCopy(ContactHolder);
  };
  
  class ProxyContactPointRange : public Zilch::ReferenceType
  {
  public:
    Zilch::HandleOf<ProxyContactPointRange> GetAll();
    
    bool GetIsNotEmpty();
    
    Zilch::HandleOf<ContactPoint> GetCurrent();
    
    void MoveNext();
    
    unsigned char mValue[20];
    
  protected:
    ProxyContactPointRange(Zilch::NoType none) : Zilch::ReferenceType(none) {}
    ZilchNoCopy(ProxyContactPointRange);
  };
  
  class TextAlign : public Zilch::ValueType
  {
  public:
    static TextAlign GetRight();
    
    static TextAlign GetLeft();
    
    static TextAlign GetCenter();
    
    int mValue;
    TextAlign();
  };
  
  // Dispatched before gracefully closing the net peer.
  class NetPeerClosed : public Event
  {
  public:
    
  protected:
    NetPeerClosed(Zilch::NoType none) : Event(none) {}
    ZilchNoCopy(NetPeerClosed);
  };
  
  // Joysticks is a collection of all joysticks available.
  class Joysticks : public Zilch::ReferenceType
  {
  public:
    int GetJoystickCount();
    
    Zilch::HandleOf<JoystickRange> GetJoysticks();
    
    unsigned char mValue[84];
    
  protected:
    Joysticks(Zilch::NoType none) : Zilch::ReferenceType(none) {}
    ZilchNoCopy(Joysticks);
  };
  
  class CollisionTable_ : public ZeroObject
  {
  public:
    float GetLabelRightPadding();
    
    void SetLabelRightPadding(float value);
    
    float GetLabelYPadding();
    
    void SetLabelYPadding(float value);
    
    unsigned char mValue[52];
    
  protected:
    CollisionTable_(Zilch::NoType none) : ZeroObject(none) {}
    ZilchNoCopy(CollisionTable_);
  };
  
  class AnimationSettings : public Zilch::ReferenceType
  {
  public:
    int GetEditFps();
    
    void SetEditFps(int value);
    
    int GetTimeDisplay();
    
    void SetTimeDisplay(int value);
    
    bool GetSnappingX();
    
    void SetSnappingX(bool value);
    
    bool GetSnappingY();
    
    void SetSnappingY(bool value);
    
    bool GetAutoKey();
    
    void SetAutoKey(bool value);
    
    bool GetAutoFocus();
    
    void SetAutoFocus(bool value);
    
    bool GetOnionSkinning();
    
    void SetOnionSkinning(bool value);
    
    float GetPlaybackSpeed();
    
    void SetPlaybackSpeed(float value);
    
    int GetPreviewMode();
    
    void SetPreviewMode(int value);
    
    unsigned char mValue[32];
    
  protected:
    AnimationSettings(Zilch::NoType none) : Zilch::ReferenceType(none) {}
    ZilchNoCopy(AnimationSettings);
  };
  
  class WhichSoundType : public Zilch::ValueType
  {
  public:
    static WhichSoundType GetFromFile();
    
    static WhichSoundType GetGenerated();
    
    int mValue;
    WhichSoundType();
  };
  
  class AnimationClip : public Zilch::ReferenceType
  {
  public:
    Zilch::String GetName();
    
    void SetName(const Zilch::String& value);
    
    int GetStartFrame();
    
    void SetStartFrame(int value);
    
    int GetEndFrame();
    
    void SetEndFrame(int value);
    
    int GetLoopingMode();
    
    void SetLoopingMode(int value);
    
    unsigned char mValue[32];
    
  protected:
    AnimationClip(Zilch::NoType none) : Zilch::ReferenceType(none) {}
    ZilchNoCopy(AnimationClip);
  };
  
  // A directed edge between a cog and an object link.
  class ObjectLinkEdge : public Zilch::ReferenceType
  {
  public:
    Zilch::HandleOf<Cog> GetSelfCog();
    
    Zilch::HandleOf<Cog> GetOtherCog();
    
    Zilch::HandleOf<ObjectLink> GetObjectLink();
    
    unsigned char mValue[32];
    
  protected:
    ObjectLinkEdge(Zilch::NoType none) : Zilch::ReferenceType(none) {}
    ZilchNoCopy(ObjectLinkEdge);
  };
  
  class ShaderGraph_ : public ZeroObject
  {
  public:
    Zilch::Real4 GetBackgroundColor();
    
    void SetBackgroundColor(const Zilch::Real4& value);
    
    float GetRowWidth();
    
    void SetRowWidth(float value);
    
    Zilch::Real4 GetRowColor();
    
    void SetRowColor(const Zilch::Real4& value);
    
    Zilch::Real4 GetRowOffColor();
    
    void SetRowOffColor(const Zilch::Real4& value);
    
    float GetSocketSize();
    
    void SetSocketSize(float value);
    
    Zilch::Real4 GetSocketTextColor();
    
    void SetSocketTextColor(const Zilch::Real4& value);
    
    Zilch::Real4 GetSocketHoverColor();
    
    void SetSocketHoverColor(const Zilch::Real4& value);
    
    Zilch::Real4 GetSocketBackgroundColor();
    
    void SetSocketBackgroundColor(const Zilch::Real4& value);
    
    float GetSocketCircleSize();
    
    void SetSocketCircleSize(float value);
    
    float GetSocketCircleLineWidth();
    
    void SetSocketCircleLineWidth(float value);
    
    unsigned char mValue[52];
    
  protected:
    ShaderGraph_(Zilch::NoType none) : ZeroObject(none) {}
    ZilchNoCopy(ShaderGraph_);
  };
  
  class ParticleListRange : public Zilch::ReferenceType
  {
  public:
    Zilch::HandleOf<ParticleListRange> GetAll();
    
    bool GetIsNotEmpty();
    
    Zilch::HandleOf<Particle> GetCurrent();
    
    void MoveNext();
    
    unsigned char mValue[8];
    
  protected:
    ParticleListRange(Zilch::NoType none) : Zilch::ReferenceType(none) {}
    ZilchNoCopy(ParticleListRange);
  };
  
  // Dispatched after successfully opening the net peer.
  class NetPeerOpened : public Event
  {
  public:
    
  protected:
    NetPeerOpened(Zilch::NoType none) : Event(none) {}
    ZilchNoCopy(NetPeerOpened);
  };
  
  class TileEditor2DSubToolType : public Zilch::ValueType
  {
  public:
    static TileEditor2DSubToolType GetDrawTool();
    
    static TileEditor2DSubToolType GetSelectionTool();
    
    int mValue;
    TileEditor2DSubToolType();
  };
  
  class Draggable : public Zilch::ReferenceType
  {
  public:
    unsigned char mValue[264];
    
  protected:
    Draggable(Zilch::NoType none) : Zilch::ReferenceType(none) {}
    ZilchNoCopy(Draggable);
  };
  
  class ControlPoint : public Draggable
  {
  public:
    unsigned char mValue[24];
    
  protected:
    ControlPoint(Zilch::NoType none) : Draggable(none) {}
    ZilchNoCopy(ControlPoint);
  };
  
  class SpriteData : public Zilch::ReferenceType
  {
  public:
    unsigned char mValue[64];
    
  protected:
    SpriteData(Zilch::NoType none) : Zilch::ReferenceType(none) {}
    ZilchNoCopy(SpriteData);
  };
  
  class SweepResult : public Zilch::ReferenceType
  {
  public:
    Zilch::Real3 GetFinalOffset();
    
    void SetFinalOffset(const Zilch::Real3& value);
    
    float GetFinalDistance();
    
    void SetFinalDistance(float value);
    
    Zilch::Real3 GetRemainingOffset();
    
    void SetRemainingOffset(const Zilch::Real3& value);
    
    float GetRemainingDistance();
    
    void SetRemainingDistance(float value);
    
    Zilch::Real3 GetRemainingProjectedOntoCollisionPlane();
    
    void SetRemainingProjectedOntoCollisionPlane(const Zilch::Real3& value);
    
    Zilch::Real3 GetRemainingProjectedOntoNormal();
    
    void SetRemainingProjectedOntoNormal(const Zilch::Real3& value);
    
    Zilch::HandleOf<Collider> GetCollidedWithCollider();
    
    void SetCollidedWithCollider(Collider* value);
    
    Zilch::Real3 GetWorldContactPoint();
    
    void SetWorldContactPoint(const Zilch::Real3& value);
    
    Zilch::Real3 GetWorldContactNormal();
    
    void SetWorldContactNormal(const Zilch::Real3& value);
    
    unsigned char mValue[84];
    
  protected:
    SweepResult(Zilch::NoType none) : Zilch::ReferenceType(none) {}
    ZilchNoCopy(SweepResult);
  };
  
  // Dispatched after sending a net user add response.
  class NetPeerSentUserAddResponse : public Event
  {
  public:
    int GetTheirNetPeerId();
    
    void SetTheirNetPeerId(int value);
    
    Zilch::HandleOf<IpAddress> GetTheirIpAddress();
    
    void SetTheirIpAddress(IpAddress* value);
    
    Zilch::HandleOf<EventBundle> GetTheirRequestBundle();
    
    void SetTheirRequestBundle(EventBundle* value);
    
    NetUserAddResponse GetOurAddResponse();
    
    void SetOurAddResponse(NetUserAddResponse value);
    
    Zilch::HandleOf<EventBundle> GetOurResponseBundle();
    
    void SetOurResponseBundle(EventBundle* value);
    
    int GetTheirNetUserId();
    
    void SetTheirNetUserId(int value);
    
    Zilch::HandleOf<Cog> GetTheirNetUser();
    
    void SetTheirNetUser(Cog* value);
    
    unsigned char mValue[244];
    
  protected:
    NetPeerSentUserAddResponse(Zilch::NoType none) : Event(none) {}
    ZilchNoCopy(NetPeerSentUserAddResponse);
  };
  
  class Tangent : public Draggable
  {
  public:
    unsigned char mValue[16];
    
  protected:
    Tangent(Zilch::NoType none) : Draggable(none) {}
    ZilchNoCopy(Tangent);
  };
  
  class StoredValueRangeCameraViewport : public Zilch::ReferenceType
  {
  public:
    Zilch::HandleOf<StoredValueRangeCameraViewport> GetAll();
    
    bool GetIsNotEmpty();
    
    Zilch::HandleOf<CameraViewport> GetCurrent();
    
    void MoveNext();
    
    unsigned char mValue[20];
    
  protected:
    StoredValueRangeCameraViewport(Zilch::NoType none) : Zilch::ReferenceType(none) {}
    ZilchNoCopy(StoredValueRangeCameraViewport);
  };
  
  class WidgetManager : public Zilch::ReferenceType
  {
  public:
    unsigned char mValue[112];
    
  protected:
    WidgetManager(Zilch::NoType none) : Zilch::ReferenceType(none) {}
    ZilchNoCopy(WidgetManager);
  };
  
  // Shader resource class is the interface to a GPU program.
  class Shader : public DocumentResource
  {
  public:
    static Zilch::HandleOf<Shader> Find(const Zilch::String& name);
    
    unsigned char mValue[88];
    
  protected:
    Shader(Zilch::NoType none) : DocumentResource(none) {}
    ZilchNoCopy(Shader);
  };
  
  class WeightPainterTool : public HeightMapSubTool
  {
  public:
    int GetIndex();
    
    void SetIndex(int value);
    
    float GetStrength();
    
    void SetStrength(float value);
    
    float GetRadius();
    
    void SetRadius(float value);
    
    float GetFeatherRadius();
    
    void SetFeatherRadius(float value);
    
    unsigned char mValue[20];
    
  protected:
    WeightPainterTool(Zilch::NoType none) : HeightMapSubTool(none) {}
    ZilchNoCopy(WeightPainterTool);
  };
  
  // Given values and probabilities, rolls a loaded die over these entries. Useful when wanting to have probabilities that one of n events will happen, such as what item to create on an object destruction. This table cannot be emptied because then there would be no value to return on a sample call.
  class WeightedTable : public Resource
  {
  public:
    int Size();
    
    // Randomly sample the table and return the value that was rolled. Takes two random floats from[0,1).
    Zilch::String Sample(float random1, float random2);
    
    // Randomly sample the table and return the index of the value that was rolled. Takes two random floats from[0,1).
    int SampleIndex(float random1, float random2);
    
    // Get the value in the table at the provided index.
    Zilch::String ValueAtIndex(int index);
    
    // Get the probability in the table at the provided index.
    float ProbabilityAtIndex(int index);
    
    static Zilch::HandleOf<WeightedTable> Find(const Zilch::String& name);
    
    unsigned char mValue[24];
    
  protected:
    WeightedTable(Zilch::NoType none) : Resource(none) {}
    ZilchNoCopy(WeightedTable);
  };
  
  class LoopingMode : public Zilch::ValueType
  {
  public:
    static LoopingMode GetDefault();
    
    static LoopingMode GetLooping();
    
    static LoopingMode GetOnce();
    
    int mValue;
    LoopingMode();
  };
  
  class Tags_ : public ZeroObject
  {
  public:
    Zilch::Real4 GetBackgroundColor();
    
    void SetBackgroundColor(const Zilch::Real4& value);
    
    Zilch::Real4 GetSearchIconBgColor();
    
    void SetSearchIconBgColor(const Zilch::Real4& value);
    
    Zilch::Real4 GetSearchIconColor();
    
    void SetSearchIconColor(const Zilch::Real4& value);
    
    Zilch::Real4 GetSearchIconColorRight();
    
    void SetSearchIconColorRight(const Zilch::Real4& value);
    
    unsigned char mValue[52];
    
  protected:
    Tags_(Zilch::NoType none) : ZeroObject(none) {}
    ZilchNoCopy(Tags_);
  };
  
  class TextureDiffuse : public MaterialBlock
  {
  public:
    Zilch::HandleOf<Texture> GetDiffuse();
    
    void SetDiffuse(Texture* value);
    
    Zilch::Real2 GetDiffuseTiling();
    
    void SetDiffuseTiling(const Zilch::Real2& value);
    
    Zilch::Real2 GetDiffuseOffset();
    
    void SetDiffuseOffset(const Zilch::Real2& value);
    
    Zilch::Real2 GetDiffuseScroll();
    
    void SetDiffuseScroll(const Zilch::Real2& value);
    
    unsigned char mValue[28];
    
  protected:
    TextureDiffuse(Zilch::NoType none) : MaterialBlock(none) {}
    ZilchNoCopy(TextureDiffuse);
  };
  
  class VisibilitySpyMode : public Zilch::ValueType
  {
  public:
    static VisibilitySpyMode GetRenderVisible();
    
    static VisibilitySpyMode GetRenderAll();
    
    static VisibilitySpyMode GetOff();
    
    int mValue;
    VisibilitySpyMode();
  };
  
  class CrossBlend : public AnimationNode
  {
  public:
    Zilch::HandleOf<AnimationNode> GetFrom();
    
    void SetFrom(AnimationNode* value);
    
    Zilch::HandleOf<AnimationNode> GetTo();
    
    void SetTo(AnimationNode* value);
    
    float GetTimeScaleFrom();
    
    void SetTimeScaleFrom(float value);
    
    float GetTimeScaleTo();
    
    void SetTimeScaleTo(float value);
    
    AnimBlendType GetType();
    
    void SetType(AnimBlendType value);
    
    AnimBlendMode GetMode();
    
    void SetMode(AnimBlendMode value);
    
    void SyncCadence();
    
    void SetNormalizedTimeScale(float __0, float __1, float __2);
    
    unsigned char mValue[24];
    
  protected:
    CrossBlend(Zilch::NoType none) : AnimationNode(none) {}
    ZilchNoCopy(CrossBlend);
  };
  
  class AnimBlendType : public Zilch::ValueType
  {
  public:
    static AnimBlendType GetNormalized();
    
    static AnimBlendType GetStandard();
    
    int mValue;
    AnimBlendType();
  };
  
  class DoubledSide : public MaterialBlock
  {
  public:
    
  protected:
    DoubledSide(Zilch::NoType none) : MaterialBlock(none) {}
    ZilchNoCopy(DoubledSide);
  };
  
  // Collision event for when a contact begins, ends, or is persisted. Contains the point that triggered the begin/end(IncidentPoint). If it is a persistent collision, the point is just point 0 from the manifold.
  class CollisionEvent : public BaseCollisionEvent
  {
  public:
    Zilch::HandleOf<ContactPoint> GetFirstPoint();
    
    unsigned char mValue[80];
    
  protected:
    CollisionEvent(Zilch::NoType none) : BaseCollisionEvent(none) {}
    ZilchNoCopy(CollisionEvent);
  };
  
  class ParticleSortMode : public Zilch::ValueType
  {
  public:
    static ParticleSortMode GetYoungest();
    
    static ParticleSortMode GetSorted();
    
    int mValue;
    ParticleSortMode();
  };
  
  class MetaSelection : public ZeroObject
  {
  public:
    int Count();
    
    bool Empty();
    
    void AddObject(ZeroObject* __0);
    
    void RemoveObject(ZeroObject* __0);
    
    void SetPrimary(ZeroObject* __0);
    
    void SelectOnly(ZeroObject* __0);
    
    Zilch::HandleOf<ZeroObject> GetPrimaryObject();
    
    void Clear(SendsEvents __0);
    
    unsigned char mValue[72];
    
  protected:
    MetaSelection(Zilch::NoType none) : ZeroObject(none) {}
    ZilchNoCopy(MetaSelection);
  };
  
  class SendsEvents : public Zilch::ValueType
  {
  public:
    static SendsEvents GetTrue();
    
    static SendsEvents GetFalse();
    
    int mValue;
    SendsEvents();
  };
  
  class CommandManager : public Zilch::ReferenceType
  {
  public:
    unsigned char mValue[148];
    
  protected:
    CommandManager(Zilch::NoType none) : Zilch::ReferenceType(none) {}
    ZilchNoCopy(CommandManager);
  };
  
  class MouseManipulation : public ZeroObject
  {
  public:
    Zilch::String GetName();
    
    void SetName(const Zilch::String& value);
    
    bool GetActive();
    
    void SetActive(bool value);
    
    Zilch::Real3 GetTranslation();
    
    void SetTranslation(const Zilch::Real3& value);
    
    Zilch::Real2 GetSize();
    
    void SetSize(const Zilch::Real2& value);
    
    Zilch::HandleOf<SizePolicies> GetSizePolicy();
    
    void SetSizePolicy(SizePolicies* value);
    
    Zilch::Real2 GetMinSize();
    
    Zilch::Real4 GetColor();
    
    void SetColor(const Zilch::Real4& value);
    
    bool GetClipping();
    
    void SetClipping(bool value);
    
    Zilch::HandleOf<RootWidget> GetRootWidget();
    
    Zilch::HandleOf<Composite> GetParent();
    
    Zilch::HandleOf<Rect> GetRectInParent();
    
    Zilch::HandleOf<Rect> GetLocalRect();
    
    Zilch::HandleOf<Rect> GetScreenRect();
    
    Zilch::Real3 GetScreenPosition();
    
    Zilch::HandleOf<Thickness> GetBorderThickness();
    
    bool GetNotInLayout();
    
    void SetNotInLayout(bool value);
    
    float GetRotation();
    
    void SetRotation(float value);
    
    DockMode GetDockMode();
    
    void SetDockMode(DockMode value);
    
    bool GetVisible();
    
    void SetVisible(bool value);
    
    int GetHorizontalAlignment();
    
    void SetHorizontalAlignment(int value);
    
    int GetVerticalAlignment();
    
    void SetVerticalAlignment(int value);
    
    void Destroy();
    
    void SetSizing(SizeAxis __0, SizePolicy __1, float __2);
    
    void SizeToContents();
    
    void SetTranslationAndSize(const Zilch::Real3& __0, const Zilch::Real2& __1);
    
    void DispatchBubble(const Zilch::String& __0, Event* __1);
    
    void TakeFocus();
    
    bool TryTakeFocus();
    
    void SoftTakeFocus();
    
    void HardTakeFocus();
    
    void SetTakeFocusMode(int __0);
    
    bool HasFocus();
    
    void LoseFocus();
    
    void UpdateTransform();
    
    Zilch::HandleOf<Widget> HitTest(const Zilch::Real2& __0, Widget* __1);
    
    void ChangeRoot(RootWidget* __0);
    
    bool IsAncestorOf(Widget* __0);
    
    void MoveToFront();
    
    void MoveToBack();
    
    Zilch::Real2 ToLocal(const Zilch::Real2& __0);
    
    Zilch::Real3 ToLocal(const Zilch::Real3& __0);
    
    Zilch::Real2 ToScreen(const Zilch::Real2& __0);
    
    bool Contains(const Zilch::Real2& __0);
    
    Zilch::Real2 Measure(LayoutArea* __0);
    
    void CaptureMouse();
    
    void ReleaseMouseCapture();
    
    bool IsMouseOver();
    
    void MarkAsNeedsUpdate(bool __0);
    
    void NeedsRedraw();
    
    void SetHideOnClose(bool __0);
    
    void SetInteractive(bool __0);
    
    unsigned char mValue[268];
    
  protected:
    MouseManipulation(Zilch::NoType none) : ZeroObject(none) {}
    ZilchNoCopy(MouseManipulation);
  };
  
  class SizePolicies : public Zilch::ReferenceType
  {
  public:
    SizePolicy GetXPolicy();
    
    void SetXPolicy(SizePolicy value);
    
    SizePolicy GetYPolicy();
    
    void SetYPolicy(SizePolicy value);
    
    unsigned char mValue[16];
    
  protected:
    SizePolicies(Zilch::NoType none) : Zilch::ReferenceType(none) {}
    ZilchNoCopy(SizePolicies);
  };
  
  class Rect : public Zilch::ReferenceType
  {
  public:
    float GetX();
    
    void SetX(float value);
    
    float GetY();
    
    void SetY(float value);
    
    float GetSizeX();
    
    void SetSizeX(float value);
    
    float GetSizeY();
    
    void SetSizeY(float value);
    
    void SetTranslation(const Zilch::Real2& __0);
    
    void SetSize(const Zilch::Real2& __0);
    
    void Expand(Rect* __0);
    
    bool Contains(const Zilch::Real2& __0);
    
    bool Overlap(Rect* __0);
    
    void RemoveThickness(Thickness* __0);
    
    Zilch::Real2 TopLeft();
    
    Zilch::Real2 TopRight();
    
    Zilch::Real2 BotLeft();
    
    Zilch::Real2 BotRight();
    
    Zilch::Real2 Center();
    
    float Left();
    
    float Right();
    
    float Top();
    
    float Bottom();
    
    unsigned char mValue[16];
    
  protected:
    Rect(Zilch::NoType none) : Zilch::ReferenceType(none) {}
    ZilchNoCopy(Rect);
  };
  
  class SizePolicy : public Zilch::ValueType
  {
  public:
    static SizePolicy GetAuto();
    
    static SizePolicy GetFlex();
    
    static SizePolicy GetFixed();
    
    int mValue;
    SizePolicy();
  };
  
  class Interaction_ : public ZeroObject
  {
  public:
    float GetMouseHoldTime();
    
    void SetMouseHoldTime(float value);
    
    float GetMouseHoverTime();
    
    void SetMouseHoverTime(float value);
    
    float GetDoubleClickTime();
    
    void SetDoubleClickTime(float value);
    
    float GetMouseDragDistance();
    
    void SetMouseDragDistance(float value);
    
    bool GetDebugMouseInteraction();
    
    void SetDebugMouseInteraction(bool value);
    
    bool GetDebugMouseEvents();
    
    void SetDebugMouseEvents(bool value);
    
    bool GetDebugTextArea();
    
    void SetDebugTextArea(bool value);
    
    unsigned char mValue[52];
    
  protected:
    Interaction_(Zilch::NoType none) : ZeroObject(none) {}
    ZilchNoCopy(Interaction_);
  };
  
  class TimeDisplay : public Zilch::ValueType
  {
  public:
    static TimeDisplay GetTimecodes();
    
    static TimeDisplay GetFrames();
    
    int mValue;
    TimeDisplay();
  };
  
  class PhysicsSolverConfig : public Resource
  {
  public:
    int GetSolverIterationCount();
    
    void SetSolverIterationCount(int value);
    
    int GetPositionIterationCount();
    
    void SetPositionIterationCount(int value);
    
    float GetVelocityRestitutionThreshold();
    
    void SetVelocityRestitutionThreshold(float value);
    
    bool GetWarmStart();
    
    void SetWarmStart(bool value);
    
    bool GetCacheContacts();
    
    void SetCacheContacts(bool value);
    
    int GetSolverType();
    
    void SetSolverType(int value);
    
    int GetPositionCorrectionType();
    
    void SetPositionCorrectionType(int value);
    
    int GetSubCorrectionType();
    
    void SetSubCorrectionType(int value);
    
    static Zilch::HandleOf<PhysicsSolverConfig> Find(const Zilch::String& name);
    
    Zilch::HandleOf<UniversalJointBlock> GetUniversalJointBlock();
    
    Zilch::HandleOf<PulleyJointBlock> GetPulleyJointBlock();
    
    Zilch::HandleOf<WheelJointBlock> GetWheelJointBlock();
    
    Zilch::HandleOf<PhyGunJointBlock> GetPhyGunJointBlock();
    
    Zilch::HandleOf<PositionJointBlock> GetPositionJointBlock();
    
    Zilch::HandleOf<RevoluteJoint2dBlock> GetRevoluteJoint2dBlock();
    
    Zilch::HandleOf<WeldJointBlock> GetWeldJointBlock();
    
    Zilch::HandleOf<RevoluteJointBlock> GetRevoluteJointBlock();
    
    Zilch::HandleOf<StickJointBlock> GetStickJointBlock();
    
    Zilch::HandleOf<WheelJoint2dBlock> GetWheelJoint2dBlock();
    
    Zilch::HandleOf<LinearAxisJointBlock> GetLinearAxisJointBlock();
    
    Zilch::HandleOf<RelativeVelocityJointBlock> GetRelativeVelocityJointBlock();
    
    Zilch::HandleOf<GearJointBlock> GetGearJointBlock();
    
    Zilch::HandleOf<PrismaticJoint2dBlock> GetPrismaticJoint2dBlock();
    
    Zilch::HandleOf<CustomJointBlock> GetCustomJointBlock();
    
    Zilch::HandleOf<UprightJointBlock> GetUprightJointBlock();
    
    Zilch::HandleOf<ManipulatorJointBlock> GetManipulatorJointBlock();
    
    Zilch::HandleOf<ContactBlock> GetContactBlock();
    
    Zilch::HandleOf<PrismaticJointBlock> GetPrismaticJointBlock();
    
    Zilch::HandleOf<FixedAngleJointBlock> GetFixedAngleJointBlock();
    
    unsigned char mValue[96];
    
  protected:
    PhysicsSolverConfig(Zilch::NoType none) : Resource(none) {}
    ZilchNoCopy(PhysicsSolverConfig);
  };
  
  class CastResultsRange : public Zilch::ReferenceType
  {
  public:
    bool Empty();
    
    Zilch::HandleOf<CastResult> Front();
    
    void PopFront();
    
    int Size();
    
    Zilch::HandleOf<CastResultsRange> GetAll();
    
    bool GetIsNotEmpty();
    
    Zilch::HandleOf<CastResult> GetCurrent();
    
    void MoveNext();
    
    unsigned char mValue[24];
    
  protected:
    CastResultsRange(Zilch::NoType none) : Zilch::ReferenceType(none) {}
    ZilchNoCopy(CastResultsRange);
  };
  
  class ContinuousResultRange : public Zilch::ReferenceType
  {
  public:
    Zilch::HandleOf<ContinuousResult> Front();
    
    bool Empty();
    
    Zilch::HandleOf<ContinuousResultRange> GetAll();
    
    bool GetIsNotEmpty();
    
    Zilch::HandleOf<ContinuousResult> GetCurrent();
    
    void MoveNext();
    
    unsigned char mValue[24];
    
  protected:
    ContinuousResultRange(Zilch::NoType none) : Zilch::ReferenceType(none) {}
    ZilchNoCopy(ContinuousResultRange);
  };
  
  // Dispatched after the net object is brought online.
  class NetObjectOnline : public Event
  {
  public:
    Zilch::HandleOf<GameSession> GetGameSession();
    
    void SetGameSession(GameSession* value);
    
    Zilch::HandleOf<Space> GetSpace();
    
    void SetSpace(Space* value);
    
    Zilch::HandleOf<Cog> GetObject();
    
    void SetObject(Cog* value);
    
    bool GetIsStartOfLifespan();
    
    void SetIsStartOfLifespan(bool value);
    
    unsigned char mValue[16];
    
  protected:
    NetObjectOnline(Zilch::NoType none) : Event(none) {}
    ZilchNoCopy(NetObjectOnline);
  };
  
  class Particle : public Zilch::ReferenceType
  {
  public:
    float GetTime();
    
    void SetTime(float value);
    
    float GetLifetime();
    
    void SetLifetime(float value);
    
    float GetSize();
    
    void SetSize(float value);
    
    float GetRotation();
    
    void SetRotation(float value);
    
    float GetRotationalVelocity();
    
    void SetRotationalVelocity(float value);
    
    Zilch::Real3 GetPosition();
    
    void SetPosition(const Zilch::Real3& value);
    
    Zilch::Real3 GetVelocity();
    
    void SetVelocity(const Zilch::Real3& value);
    
    Zilch::Real4 GetColor();
    
    void SetColor(const Zilch::Real4& value);
    
    float GetWanderAngle();
    
    void SetWanderAngle(float value);
    
    unsigned char mValue[76];
    
  protected:
    Particle(Zilch::NoType none) : Zilch::ReferenceType(none) {}
    ZilchNoCopy(Particle);
  };
  
  class ResourceCompression : public Zilch::ValueType
  {
  public:
    static ResourceCompression GetHigh();
    
    static ResourceCompression GetLow();
    
    static ResourceCompression GetMedium();
    
    static ResourceCompression GetNone();
    
    int mValue;
    ResourceCompression();
  };
  
  class JointCreator : public Zilch::ReferenceType
  {
  public:
    bool GetOverrideLength();
    
    void SetOverrideLength(bool value);
    
    bool GetUseCenter();
    
    void SetUseCenter(bool value);
    
    bool GetConnectToWorld();
    
    void SetConnectToWorld(bool value);
    
    bool GetAutoSnaps();
    
    void SetAutoSnaps(bool value);
    
    bool GetAddSprings();
    
    void SetAddSprings(bool value);
    
    bool GetAttachToCommonParent();
    
    void SetAttachToCommonParent(bool value);
    
    Zilch::HandleOf<Cog> AttachWorld(Cog* __0, Cog* __1, const Zilch::Real3& __2, const Zilch::String& __3);
    
    Zilch::HandleOf<JointLimit> AttachLimit(Cog* __0);
    
    Zilch::HandleOf<JointMotor> AttachMotor(Cog* __0);
    
    Zilch::HandleOf<JointSpring> AttachSpring(Cog* __0);
    
    unsigned char mValue[36];
    
  protected:
    JointCreator(Zilch::NoType none) : Zilch::ReferenceType(none) {}
    ZilchNoCopy(JointCreator);
  };
  
  class ZilchPluginSource : public Resource
  {
  public:
    void OpenIde();
    
    void OpenDirectory();
    
    void CopyPluginDependencies();
    
    void CompileDebug();
    
    void CompileRelease();
    
    void Clean();
    
    void InstallIdeTools();
    
    static Zilch::HandleOf<ZilchPluginSource> Find(const Zilch::String& name);
    
    unsigned char mValue[8];
    
  protected:
    ZilchPluginSource(Zilch::NoType none) : Resource(none) {}
    ZilchNoCopy(ZilchPluginSource);
  };
  
  class Phong : public MaterialBlock
  {
  public:
    float GetSpecularExponent();
    
    void SetSpecularExponent(float value);
    
    float GetSpecularScalar();
    
    void SetSpecularScalar(float value);
    
    unsigned char mValue[8];
    
  protected:
    Phong(Zilch::NoType none) : MaterialBlock(none) {}
    ZilchNoCopy(Phong);
  };
  
  class AudioContent : public ContentComposition
  {
  public:
    Zilch::HandleOf<FontBuilder> GetFontBuilder();
    
    Zilch::HandleOf<GeneratedArchetype> GetGeneratedArchetype();
    
    Zilch::HandleOf<AnimationBuilder> GetAnimationBuilder();
    
    Zilch::HandleOf<SkeletonBuilder> GetSkeletonBuilder();
    
    Zilch::HandleOf<SoundBuilder> GetSoundBuilder();
    
    Zilch::HandleOf<ContentHistory> GetContentHistory();
    
    Zilch::HandleOf<SpriteSourceBuilder> GetSpriteSourceBuilder();
    
    Zilch::HandleOf<ContentCopyright> GetContentCopyright();
    
    Zilch::HandleOf<DataBuilder> GetDataBuilder();
    
    Zilch::HandleOf<BinaryBuilder> GetBinaryBuilder();
    
    Zilch::HandleOf<EffectBuilder> GetEffectBuilder();
    
    Zilch::HandleOf<ContentTags> GetContentTags();
    
    Zilch::HandleOf<ZilchScriptBuilder> GetZilchScriptBuilder();
    
    Zilch::HandleOf<TextureBuilder> GetTextureBuilder();
    
    Zilch::HandleOf<RichAnimationBuilder> GetRichAnimationBuilder();
    
    Zilch::HandleOf<FragmentBuilder> GetFragmentBuilder();
    
    Zilch::HandleOf<PhysicsMeshBuilder> GetPhysicsMeshBuilder();
    
    Zilch::HandleOf<NavMeshBuilder> GetNavMeshBuilder();
    
    Zilch::HandleOf<ContentNotes> GetContentNotes();
    
    Zilch::HandleOf<ZilchPluginBuilder> GetZilchPluginBuilder();
    
    Zilch::HandleOf<TextBuilder> GetTextBuilder();
    
    Zilch::HandleOf<HeightToNormalBuilder> GetHeightToNormalBuilder();
    
    Zilch::HandleOf<DirectImageBuilder> GetDirectImageBuilder();
    
    Zilch::HandleOf<ZilchFragmentBuilder> GetZilchFragmentBuilder();
    
    Zilch::HandleOf<GeometryImport> GetGeometryImport();
    
    Zilch::HandleOf<MeshBuilder> GetMeshBuilder();
    
    
  protected:
    AudioContent(Zilch::NoType none) : ContentComposition(none) {}
    ZilchNoCopy(AudioContent);
  };
  
  class TransparentSort : public Zilch::ValueType
  {
  public:
    static TransparentSort GetZDepth();
    
    static TransparentSort GetViewDepth();
    
    int mValue;
    TransparentSort();
  };
  
  class DesyncDebugRequest : public SendableEvent
  {
  public:
    Zilch::HandleOf<LockStepPeer> GetPeer();
    
    void SetPeer(LockStepPeer* value);
    
    unsigned char mValue[8];
    
  protected:
    DesyncDebugRequest(Zilch::NoType none) : SendableEvent(none) {}
    ZilchNoCopy(DesyncDebugRequest);
  };
  
  // Skeleton resource stores the bind posed used for skinned animation.
  class Skeleton : public Resource
  {
  public:
    static Zilch::HandleOf<Skeleton> Find(const Zilch::String& name);
    
    unsigned char mValue[32];
    
  protected:
    Skeleton(Zilch::NoType none) : Resource(none) {}
    ZilchNoCopy(Skeleton);
  };
  
  class JointBuilder : public Zilch::ReferenceType
  {
  public:
    Zilch::HandleOf<JointCreator> CreateInstance();
    
    unsigned char mValue[4];
    
  protected:
    JointBuilder(Zilch::NoType none) : Zilch::ReferenceType(none) {}
    ZilchNoCopy(JointBuilder);
  };
  
  class SolverType : public Zilch::ValueType
  {
  public:
    static SolverType GetNormal();
    
    static SolverType GetGenericBasic();
    
    static SolverType GetBasic();
    
    static SolverType GetThreaded();
    
    int mValue;
    SolverType();
  };
  
  class LoadingWindow_ : public ZeroObject
  {
  public:
    Zilch::Real4 GetBackgroundColor();
    
    void SetBackgroundColor(const Zilch::Real4& value);
    
    Zilch::Real4 GetBorderColor();
    
    void SetBorderColor(const Zilch::Real4& value);
    
    Zilch::Real2 GetSize();
    
    void SetSize(const Zilch::Real2& value);
    
    Zilch::Real4 GetTextColor();
    
    void SetTextColor(const Zilch::Real4& value);
    
    unsigned char mValue[52];
    
  protected:
    LoadingWindow_(Zilch::NoType none) : ZeroObject(none) {}
    ZilchNoCopy(LoadingWindow_);
  };
  
  class TrackNode : public Zilch::ReferenceType
  {
  public:
    unsigned char mValue[164];
    
  protected:
    TrackNode(Zilch::NoType none) : Zilch::ReferenceType(none) {}
    ZilchNoCopy(TrackNode);
  };
  
  class Splitter : public Composite
  {
  public:
    SizeAxis GetAxis();
    
    void SetAxis(SizeAxis value);
    
    unsigned char mValue[56];
    
  protected:
    Splitter(Zilch::NoType none) : Composite(none) {}
    ZilchNoCopy(Splitter);
  };
  
  class WebBrowserUrlEvent : public WebBrowserEvent
  {
  public:
    Zilch::String GetUrl();
    
    void SetUrl(const Zilch::String& value);
    
    bool GetHandled();
    
    void SetHandled(bool value);
    
    unsigned char mValue[8];
    
  protected:
    WebBrowserUrlEvent(Zilch::NoType none) : WebBrowserEvent(none) {}
    ZilchNoCopy(WebBrowserUrlEvent);
  };
  
  class CustomJointBlock : public Zilch::ReferenceType
  {
  public:
    float GetSlop();
    
    void SetSlop(float value);
    
    float GetLinearBaumgarte();
    
    void SetLinearBaumgarte(float value);
    
    float GetAngularBaumgarte();
    
    void SetAngularBaumgarte(float value);
    
    float GetLinearErrorCorrection();
    
    void SetLinearErrorCorrection(float value);
    
    float GetAngularErrorCorrection();
    
    void SetAngularErrorCorrection(float value);
    
    int GetCorrectionType();
    
    void SetCorrectionType(int value);
    
    unsigned char mValue[32];
    
  protected:
    CustomJointBlock(Zilch::NoType none) : Zilch::ReferenceType(none) {}
    ZilchNoCopy(CustomJointBlock);
  };
  
  class ReplicationPhase : public Zilch::ValueType
  {
  public:
    static ReplicationPhase GetChange();
    
    static ReplicationPhase GetUninitialization();
    
    static ReplicationPhase GetInitialization();
    
    int mValue;
    ReplicationPhase();
  };
  
  class Test : public Zilch::ReferenceType
  {
  public:
    Zilch::String GetFragmentSource();
    
    Zilch::HandleOf<Texture> GetTestTexture();
    
    void SetTestTexture(Texture* value);
    
    float GetEdgeFalloffPower();
    
    void SetEdgeFalloffPower(float value);
    
    float GetEdgeFalloffScale();
    
    void SetEdgeFalloffScale(float value);
    
    Zilch::Real4 GetEdgeGlowColor();
    
    void SetEdgeGlowColor(const Zilch::Real4& value);
    
    unsigned char mValue[48];
    
  protected:
    Test(Zilch::NoType none) : Zilch::ReferenceType(none) {}
    ZilchNoCopy(Test);
  };
  
  class SampleData : public Zilch::ReferenceType
  {
  public:
    Zilch::Real3 GetWorldPoint();
    
    void SetWorldPoint(const Zilch::Real3& value);
    
    Zilch::Real3 GetWorldTangent();
    
    void SetWorldTangent(const Zilch::Real3& value);
    
    unsigned char mValue[24];
    
  protected:
    SampleData(Zilch::NoType none) : Zilch::ReferenceType(none) {}
    ZilchNoCopy(SampleData);
  };
  
  class EdgeDockLayout : public Layout
  {
  public:
    
  protected:
    EdgeDockLayout(Zilch::NoType none) : Layout(none) {}
    ZilchNoCopy(EdgeDockLayout);
  };
  
  class IconButton : public Composite
  {
  public:
    bool GetTabFocusStop();
    
    void SetTabFocusStop(bool value);
    
    int GetBorderColor();
    
    void SetBorderColor(int value);
    
    int GetFocusBorderColor();
    
    void SetFocusBorderColor(int value);
    
    int GetBackgroundColor();
    
    void SetBackgroundColor(int value);
    
    int GetBackgroundHoverColor();
    
    void SetBackgroundHoverColor(int value);
    
    int GetBackgroundClickedColor();
    
    void SetBackgroundClickedColor(int value);
    
    Zilch::HandleOf<Thickness> GetPadding();
    
    void SetPadding(Thickness* value);
    
    void SetToolTip(const Zilch::String& __0);
    
    void SetIcon(const Zilch::String& __0);
    
    void SetIconColor(const Zilch::Real4& __0);
    
    unsigned char mValue[88];
    
  protected:
    IconButton(Zilch::NoType none) : Composite(none) {}
    ZilchNoCopy(IconButton);
  };
  
  class ToggleIconButton : public IconButton
  {
  public:
    bool GetEnabled();
    
    void SetEnabled(bool value);
    
    void SetEnabledIcon(const Zilch::String& __0);
    
    void SetDisabledIcon(const Zilch::String& __0);
    
    unsigned char mValue[24];
    
  protected:
    ToggleIconButton(Zilch::NoType none) : IconButton(none) {}
    ZilchNoCopy(ToggleIconButton);
  };
  
  class ShadowMapping : public Zilch::ValueType
  {
  public:
    static ShadowMapping GetStandard();
    
    static ShadowMapping GetCascaded();
    
    int mValue;
    ShadowMapping();
  };
  
  class Window_ : public ZeroObject
  {
  public:
    Zilch::Real4 GetTitleBarColor();
    
    void SetTitleBarColor(const Zilch::Real4& value);
    
    Zilch::Real4 GetTabbedTitleBarColor();
    
    void SetTabbedTitleBarColor(const Zilch::Real4& value);
    
    Zilch::Real4 GetTitleBarXColor();
    
    void SetTitleBarXColor(const Zilch::Real4& value);
    
    Zilch::Real4 GetTitleBarXHighlight();
    
    void SetTitleBarXHighlight(const Zilch::Real4& value);
    
    Zilch::Real4 GetSelectedTabColor();
    
    void SetSelectedTabColor(const Zilch::Real4& value);
    
    Zilch::Real4 GetFocusedTabColor();
    
    void SetFocusedTabColor(const Zilch::Real4& value);
    
    Zilch::Real4 GetMouseOverTabColor();
    
    void SetMouseOverTabColor(const Zilch::Real4& value);
    
    Zilch::Real4 GetDeSelectedTabColor();
    
    void SetDeSelectedTabColor(const Zilch::Real4& value);
    
    Zilch::Real4 GetTabXColor();
    
    void SetTabXColor(const Zilch::Real4& value);
    
    Zilch::Real4 GetTabXHighlight();
    
    void SetTabXHighlight(const Zilch::Real4& value);
    
    Zilch::Real4 GetBackgroundColor();
    
    void SetBackgroundColor(const Zilch::Real4& value);
    
    Zilch::Real4 GetBorderColor();
    
    void SetBorderColor(const Zilch::Real4& value);
    
    float GetTitleBarHeight();
    
    void SetTitleBarHeight(float value);
    
    float GetCloseSize();
    
    void SetCloseSize(float value);
    
    Zilch::Real2 GetBorderSize();
    
    void SetBorderSize(const Zilch::Real2& value);
    
    unsigned char mValue[52];
    
  protected:
    Window_(Zilch::NoType none) : ZeroObject(none) {}
    ZilchNoCopy(Window_);
  };
  
  // Network Channel Configuration Configures the replication of a set of properties on the network.
  class NetChannelConfig : public Resource
  {
  public:
    bool GetEventOnOutgoingPropertyChange();
    
    void SetEventOnOutgoingPropertyChange(bool value);
    
    bool GetEventOnIncomingPropertyChange();
    
    void SetEventOnIncomingPropertyChange(bool value);
    
    AuthorityMode GetAuthorityMode();
    
    void SetAuthorityMode(AuthorityMode value);
    
    Authority GetAuthority();
    
    void SetAuthority(Authority value);
    
    float GetDetectionInterval();
    
    void SetDetectionInterval(float value);
    
    DetectionMode GetDetectionMode();
    
    void SetDetectionMode(DetectionMode value);
    
    bool GetReplicateOnOnline();
    
    void SetReplicateOnOnline(bool value);
    
    bool GetReplicateOnChange();
    
    void SetReplicateOnChange(bool value);
    
    bool GetReplicateOnOffline();
    
    void SetReplicateOnOffline(bool value);
    
    SerializationMode GetSerializationMode();
    
    void SetSerializationMode(SerializationMode value);
    
    ReliabilityMode GetReliabilityMode();
    
    void SetReliabilityMode(ReliabilityMode value);
    
    TransferMode GetTransferMode();
    
    void SetTransferMode(TransferMode value);
    
    static Zilch::HandleOf<NetChannelConfig> Find(const Zilch::String& name);
    
    unsigned char mValue[40];
    
  protected:
    NetChannelConfig(Zilch::NoType none) : Resource(none) {}
    ZilchNoCopy(NetChannelConfig);
  };
  
  class Notification_ : public ZeroObject
  {
  public:
    Zilch::Real4 GetBackgroundColor();
    
    void SetBackgroundColor(const Zilch::Real4& value);
    
    Zilch::Real4 GetBorderColor();
    
    void SetBorderColor(const Zilch::Real4& value);
    
    unsigned char mValue[52];
    
  protected:
    Notification_(Zilch::NoType none) : ZeroObject(none) {}
    ZilchNoCopy(Notification_);
  };
  
  class MainWindow_ : public ZeroObject
  {
  public:
    Zilch::Real4 GetTitleBarColor();
    
    void SetTitleBarColor(const Zilch::Real4& value);
    
    Zilch::Real4 GetBorderColor();
    
    void SetBorderColor(const Zilch::Real4& value);
    
    Zilch::Real2 GetBorderPadding();
    
    void SetBorderPadding(const Zilch::Real2& value);
    
    Zilch::Real4 GetButtonColor();
    
    void SetButtonColor(const Zilch::Real4& value);
    
    Zilch::Real4 GetButtonHover();
    
    void SetButtonHover(const Zilch::Real4& value);
    
    Zilch::Real4 GetButtonClick();
    
    void SetButtonClick(const Zilch::Real4& value);
    
    Zilch::Real4 GetCloseColor();
    
    void SetCloseColor(const Zilch::Real4& value);
    
    Zilch::Real4 GetCloseHover();
    
    void SetCloseHover(const Zilch::Real4& value);
    
    Zilch::Real4 GetCloseClick();
    
    void SetCloseClick(const Zilch::Real4& value);
    
    unsigned char mValue[52];
    
  protected:
    MainWindow_(Zilch::NoType none) : ZeroObject(none) {}
    ZilchNoCopy(MainWindow_);
  };
  
  class SizerSnapMode : public Zilch::ValueType
  {
  public:
    static SizerSnapMode GetRelative();
    
    static SizerSnapMode GetWorldAxes();
    
    static SizerSnapMode GetNone();
    
    int mValue;
    SizerSnapMode();
  };
  
  class ComboBox : public Composite
  {
  public:
    void SetInvalid();
    
    void OpenList();
    
    void CloseList();
    
    void SetText(const Zilch::String& __0);
    
    void SetScrollToSelected(bool __0);
    
    bool IsOpen();
    
    void SetSelectedItem(int __0, bool __1);
    
    int GetSelectedItem();
    
    unsigned char mValue[48];
    
  protected:
    ComboBox(Zilch::NoType none) : Composite(none) {}
    ZilchNoCopy(ComboBox);
  };
  
  class StringComboBox : public ComboBox
  {
  public:
    void AddItem(const Zilch::String& __0);
    
    void RemoveItem(const Zilch::String& __0);
    
    void RemoveItem(int __0);
    
    void InsertItem(int __0, const Zilch::String& __1);
    
    void ClearItems();
    
    int GetIndexOfItem(const Zilch::String& __0);
    
    Zilch::String GetItem(int __0);
    
    unsigned char mValue[8];
    
  protected:
    StringComboBox(Zilch::NoType none) : ComboBox(none) {}
    ZilchNoCopy(StringComboBox);
  };
  
  class Cursor : public Zilch::ValueType
  {
  public:
    static Cursor GetSizeNS();
    
    static Cursor GetSizeNWSE();
    
    static Cursor GetInvisible();
    
    static Cursor GetArrow();
    
    static Cursor GetSizeNESW();
    
    static Cursor GetSizeWE();
    
    static Cursor GetSizeAll();
    
    static Cursor GetWait();
    
    static Cursor GetTextBeam();
    
    static Cursor GetCross();
    
    static Cursor GetHand();
    
    int mValue;
    Cursor();
  };
  
  class ContentSystem : public Zilch::ReferenceType
  {
  public:
    unsigned char mValue[332];
    
  protected:
    ContentSystem(Zilch::NoType none) : Zilch::ReferenceType(none) {}
    ZilchNoCopy(ContentSystem);
  };
  
  class Quality : public Zilch::ValueType
  {
  public:
    static Quality GetUltraHighQuality();
    
    static Quality GetHighQuality();
    
    static Quality GetVeryHighQuality();
    
    static Quality GetLowQuality();
    
    static Quality GetMediumQuality();
    
    int mValue;
    Quality();
  };
  
  class Scrubber_ : public ZeroObject
  {
  public:
    Zilch::Real4 GetBackgroundColor();
    
    void SetBackgroundColor(const Zilch::Real4& value);
    
    Zilch::Real4 GetAutoKeyBackgroundColor();
    
    void SetAutoKeyBackgroundColor(const Zilch::Real4& value);
    
    Zilch::Real4 GetKeyFrame();
    
    void SetKeyFrame(const Zilch::Real4& value);
    
    Zilch::Real4 GetKeyFrameHover();
    
    void SetKeyFrameHover(const Zilch::Real4& value);
    
    Zilch::Real4 GetKeyFrameSelected();
    
    void SetKeyFrameSelected(const Zilch::Real4& value);
    
    Zilch::Real4 GetKeyFrameSelectedHover();
    
    void SetKeyFrameSelectedHover(const Zilch::Real4& value);
    
    Zilch::Real4 GetPlayHeadColor();
    
    void SetPlayHeadColor(const Zilch::Real4& value);
    
    Zilch::Real4 GetGhostPlayHeadColor();
    
    void SetGhostPlayHeadColor(const Zilch::Real4& value);
    
    unsigned char mValue[52];
    
  protected:
    Scrubber_(Zilch::NoType none) : ZeroObject(none) {}
    ZilchNoCopy(Scrubber_);
  };
  
  class ResourcePackage : public Zilch::ReferenceType
  {
  public:
    unsigned char mValue[44];
    
  protected:
    ResourcePackage(Zilch::NoType none) : Zilch::ReferenceType(none) {}
    ZilchNoCopy(ResourcePackage);
  };
  
  class GizmoEvent : public Event
  {
  public:
    Zilch::HandleOf<Cog> GetGizmo();
    
    Zilch::HandleOf<ViewportMouseEvent> GetViewportMouseEvent();
    
    unsigned char mValue[12];
    
  protected:
    GizmoEvent(Zilch::NoType none) : Event(none) {}
    ZilchNoCopy(GizmoEvent);
  };
  
  class MeshMode : public Zilch::ValueType
  {
  public:
    static MeshMode GetSingle();
    
    static MeshMode GetMulti();
    
    int mValue;
    MeshMode();
  };
  
  class ObjectView_ : public ZeroObject
  {
  public:
    Zilch::Real4 GetSearchIconColor();
    
    void SetSearchIconColor(const Zilch::Real4& value);
    
    unsigned char mValue[52];
    
  protected:
    ObjectView_(Zilch::NoType none) : ZeroObject(none) {}
    ZilchNoCopy(ObjectView_);
  };
  
  class BrushType : public Zilch::ValueType
  {
  public:
    static BrushType GetCircle();
    
    static BrushType GetSquare();
    
    static BrushType GetOctagon();
    
    static BrushType GetHexagon();
    
    static BrushType GetTriangle();
    
    int mValue;
    BrushType();
  };
  
  class Modern_ : public ZeroObject
  {
  public:
    Zilch::Real4 GetBackgroundColor();
    
    void SetBackgroundColor(const Zilch::Real4& value);
    
    Zilch::Real4 GetBorderColor();
    
    void SetBorderColor(const Zilch::Real4& value);
    
    Zilch::Real4 GetFocusBorderColor();
    
    void SetFocusBorderColor(const Zilch::Real4& value);
    
    Zilch::Real4 GetReadOnlyBackgroundColor();
    
    void SetReadOnlyBackgroundColor(const Zilch::Real4& value);
    
    Zilch::Real4 GetReadOnlyTextColor();
    
    void SetReadOnlyTextColor(const Zilch::Real4& value);
    
    Zilch::Real4 GetHintColor();
    
    void SetHintColor(const Zilch::Real4& value);
    
    unsigned char mValue[52];
    
  protected:
    Modern_(Zilch::NoType none) : ZeroObject(none) {}
    ZilchNoCopy(Modern_);
  };
  
  class DecalBlock : public MaterialBlock
  {
  public:
    bool GetDepthLimit();
    
    void SetDepthLimit(bool value);
    
    unsigned char mValue[4];
    
  protected:
    DecalBlock(Zilch::NoType none) : MaterialBlock(none) {}
    ZilchNoCopy(DecalBlock);
  };
  
  class SoundPlayMode : public Zilch::ValueType
  {
  public:
    static SoundPlayMode GetSingle();
    
    static SoundPlayMode GetLooping();
    
    int mValue;
    SoundPlayMode();
  };
  
  class AnimationTrackView : public Zilch::ReferenceType
  {
  public:
    unsigned char mValue[320];
    
  protected:
    AnimationTrackView(Zilch::NoType none) : Zilch::ReferenceType(none) {}
    ZilchNoCopy(AnimationTrackView);
  };
  
  class HotKeyEditor : public Zilch::ReferenceType
  {
  public:
    unsigned char mValue[400];
    
  protected:
    HotKeyEditor(Zilch::NoType none) : Zilch::ReferenceType(none) {}
    ZilchNoCopy(HotKeyEditor);
  };
  
  class EditorEvent : public Event
  {
  public:
    Zilch::HandleOf<Editor> GetEditor();
    
    void SetEditor(Editor* value);
    
    unsigned char mValue[4];
    
  protected:
    EditorEvent(Zilch::NoType none) : Event(none) {}
    ZilchNoCopy(EditorEvent);
  };
  
  class Editor : public Zilch::ReferenceType
  {
  public:
    Zilch::HandleOf<Actions> GetActions();
    
    Zilch::HandleOf<Space> GetEditSpace();
    
    Zilch::HandleOf<GameSession> GetEditGameSession();
    
    Zilch::HandleOf<Level> GetEditLevel();
    
    Zilch::HandleOf<Selection> GetActiveSelection();
    
    Zilch::HandleOf<OperationQueue> GetOperationQueue();
    
    Zilch::HandleOf<Project> GetProject();
    
    void ExecuteCommand(const Zilch::String& __0);
    
    void SelectPrimary(Cog* __0);
    
    Zilch::HandleOf<GameSession> PlaySingleGame();
    
    Zilch::HandleOf<GameSession> PlayNewGame();
    
    void PauseGame();
    
    void StopGame();
    
    void StepGame();
    
    void EditGameSpaces();
    
    void AddResource();
    
    void AddResourceType(const Zilch::String& __0);
    
    void ZoomOnGame(GameSession* __0);
    
    Zilch::HandleOf<Window> AddManagedWidget(Widget* __0, DockArea __1, bool __2);
    
    void SelectTool(const Zilch::String& __0);
    
    void SetMainPropertyViewObject(ZeroObject* __0);
    
    unsigned char mValue[840];
    
  protected:
    Editor(Zilch::NoType none) : Zilch::ReferenceType(none) {}
    ZilchNoCopy(Editor);
  };
  
  class GraphicsRaycastProvider : public RaycastProvider
  {
  public:
    bool GetMultiSelectGraphical();
    
    void SetMultiSelectGraphical(bool value);
    
    bool GetEditorIcons();
    
    void SetEditorIcons(bool value);
    
    bool GetMultiSelectIcons();
    
    void SetMultiSelectIcons(bool value);
    
    bool GetVisibleOnly();
    
    void SetVisibleOnly(bool value);
    
    unsigned char mValue[4];
    
  protected:
    GraphicsRaycastProvider(Zilch::NoType none) : RaycastProvider(none) {}
    ZilchNoCopy(GraphicsRaycastProvider);
  };
  
  // A synced gamepad status event.
  class LockStepGamepadStatusEvent : public LockStepGamepadEvent
  {
  public:
    bool GetActive();
    
    void SetActive(bool value);
    
    unsigned char mValue[4];
    
  protected:
    LockStepGamepadStatusEvent(Zilch::NoType none) : LockStepGamepadEvent(none) {}
    ZilchNoCopy(LockStepGamepadStatusEvent);
  };
  
  // Dispatched after fully loading and synchronizing a level in a net space.
  class NetLevelStarted : public Event
  {
  public:
    Zilch::HandleOf<GameSession> GetGameSession();
    
    void SetGameSession(GameSession* value);
    
    Zilch::HandleOf<Space> GetSpace();
    
    void SetSpace(Space* value);
    
    Zilch::String GetLevelName();
    
    void SetLevelName(const Zilch::String& value);
    
    unsigned char mValue[12];
    
  protected:
    NetLevelStarted(Zilch::NoType none) : Event(none) {}
    ZilchNoCopy(NetLevelStarted);
  };
  
  class ToolControl : public Zilch::ReferenceType
  {
  public:
    unsigned char mValue[376];
    
  protected:
    ToolControl(Zilch::NoType none) : Zilch::ReferenceType(none) {}
    ZilchNoCopy(ToolControl);
  };
  
  class WebBrowser_ : public ZeroObject
  {
  public:
    Zilch::Real4 GetButtonEnabledColor();
    
    void SetButtonEnabledColor(const Zilch::Real4& value);
    
    Zilch::Real4 GetButtonDisabledColor();
    
    void SetButtonDisabledColor(const Zilch::Real4& value);
    
    float GetButtonWidth();
    
    void SetButtonWidth(float value);
    
    float GetButtonSpacing();
    
    void SetButtonSpacing(float value);
    
    float GetElementSpacing();
    
    void SetElementSpacing(float value);
    
    float GetSpacing();
    
    void SetSpacing(float value);
    
    unsigned char mValue[52];
    
  protected:
    WebBrowser_(Zilch::NoType none) : ZeroObject(none) {}
    ZilchNoCopy(WebBrowser_);
  };
  
  class LogicGraph : public Resource
  {
  public:
    static Zilch::HandleOf<LogicGraph> Find(const Zilch::String& name);
    
    
  protected:
    LogicGraph(Zilch::NoType none) : Resource(none) {}
    ZilchNoCopy(LogicGraph);
  };
  
  class NormalMapping : public MaterialBlock
  {
  public:
    float GetBumpiness();
    
    void SetBumpiness(float value);
    
    Zilch::HandleOf<Texture> GetNormalMap();
    
    void SetNormalMap(Texture* value);
    
    Zilch::Real2 GetNormalTiling();
    
    void SetNormalTiling(const Zilch::Real2& value);
    
    Zilch::Real2 GetNormalOffset();
    
    void SetNormalOffset(const Zilch::Real2& value);
    
    Zilch::Real2 GetNormalScroll();
    
    void SetNormalScroll(const Zilch::Real2& value);
    
    unsigned char mValue[32];
    
  protected:
    NormalMapping(Zilch::NoType none) : MaterialBlock(none) {}
    ZilchNoCopy(NormalMapping);
  };
  
  // Defines the order in which a set of SpriteLayers should be drawn.
  class SpriteLayerOrder : public Resource
  {
  public:
    static Zilch::HandleOf<SpriteLayerOrder> Find(const Zilch::String& name);
    
    unsigned char mValue[40];
    
  protected:
    SpriteLayerOrder(Zilch::NoType none) : Resource(none) {}
    ZilchNoCopy(SpriteLayerOrder);
  };
  
  class FixedAngleJointBlock : public Zilch::ReferenceType
  {
  public:
    float GetSlop();
    
    void SetSlop(float value);
    
    float GetLinearBaumgarte();
    
    void SetLinearBaumgarte(float value);
    
    float GetAngularBaumgarte();
    
    void SetAngularBaumgarte(float value);
    
    float GetLinearErrorCorrection();
    
    void SetLinearErrorCorrection(float value);
    
    float GetAngularErrorCorrection();
    
    void SetAngularErrorCorrection(float value);
    
    int GetCorrectionType();
    
    void SetCorrectionType(int value);
    
    unsigned char mValue[32];
    
  protected:
    FixedAngleJointBlock(Zilch::NoType none) : Zilch::ReferenceType(none) {}
    ZilchNoCopy(FixedAngleJointBlock);
  };
  
  class ModulateModelColor : public MaterialBlock
  {
  public:
    
  protected:
    ModulateModelColor(Zilch::NoType none) : MaterialBlock(none) {}
    ZilchNoCopy(ModulateModelColor);
  };
  
  // Dispatched before a received net event is dispatched.
  class NetEventReceived : public Event
  {
  public:
    int GetTheirNetPeerId();
    
    void SetTheirNetPeerId(int value);
    
    Zilch::HandleOf<Event> GetNetEvent();
    
    void SetNetEvent(Event* value);
    
    Zilch::HandleOf<Cog> GetDestination();
    
    void SetDestination(Cog* value);
    
    bool GetReturnAllow();
    
    void SetReturnAllow(bool value);
    
    unsigned char mValue[16];
    
  protected:
    NetEventReceived(Zilch::NoType none) : Event(none) {}
    ZilchNoCopy(NetEventReceived);
  };
  
  class ConnectionData : public Zilch::ReferenceType
  {
  public:
    Zilch::String GetHost();
    
    void SetHost(const Zilch::String& value);
    
    int GetAddress();
    
    void SetAddress(int value);
    
    int GetPort();
    
    void SetPort(int value);
    
    int GetIndex();
    
    void SetIndex(int value);
    
    bool GetIncoming();
    
    void SetIncoming(bool value);
    
    unsigned char mValue[20];
    
  protected:
    ConnectionData(Zilch::NoType none) : Zilch::ReferenceType(none) {}
    ZilchNoCopy(ConnectionData);
  };
  
  class TreeRow : public Widget
  {
  public:
    void SetLayout(Layout* __0);
    
    Zilch::HandleOf<Layout> GetLayout();
    
    void SetMinSize(const Zilch::Real2& __0);
    
    void AttachChildWidget(Widget* __0, AttachType __1);
    
    unsigned char mValue[120];
    
  protected:
    TreeRow(Zilch::NoType none) : Widget(none) {}
    ZilchNoCopy(TreeRow);
  };
  
  class HierarchyRange : public Zilch::ReferenceType
  {
  public:
    Zilch::HandleOf<HierarchyRange> GetAll();
    
    bool GetIsNotEmpty();
    
    Zilch::HandleOf<Cog> GetCurrent();
    
    void MoveNext();
    
    unsigned char mValue[8];
    
  protected:
    HierarchyRange(Zilch::NoType none) : Zilch::ReferenceType(none) {}
    ZilchNoCopy(HierarchyRange);
  };
  
  class OperationQueue : public ZeroObject
  {
  public:
    void BeginBatch();
    
    void EndBatch();
    
    void SaveObjectState(Cog* __0);
    
    void ObjectCreated(Cog* __0);
    
    void DestroyObject(Cog* __0);
    
    unsigned char mValue[84];
    
  protected:
    OperationQueue(Zilch::NoType none) : ZeroObject(none) {}
    ZilchNoCopy(OperationQueue);
  };
  
  class WeldJointBlock : public Zilch::ReferenceType
  {
  public:
    float GetSlop();
    
    void SetSlop(float value);
    
    float GetLinearBaumgarte();
    
    void SetLinearBaumgarte(float value);
    
    float GetAngularBaumgarte();
    
    void SetAngularBaumgarte(float value);
    
    float GetLinearErrorCorrection();
    
    void SetLinearErrorCorrection(float value);
    
    float GetAngularErrorCorrection();
    
    void SetAngularErrorCorrection(float value);
    
    int GetCorrectionType();
    
    void SetCorrectionType(int value);
    
    unsigned char mValue[32];
    
  protected:
    WeldJointBlock(Zilch::NoType none) : Zilch::ReferenceType(none) {}
    ZilchNoCopy(WeldJointBlock);
  };
  
  class BaseScrollArea : public Composite
  {
  public:
    Zilch::Real2 GetScrolledPercentage();
    
    void SetScrolledPercentage(const Zilch::Real2& value);
    
    Zilch::Real2 GetScrolledOffset();
    
    void SetScrolledOffset(const Zilch::Real2& value);
    
    Zilch::Real2 GetClientOffset();
    
    Zilch::Real4 GetClientArea();
    
    Zilch::Real2 GetClientVisibleSize();
    
    Zilch::Real2 GetClientSize();
    
    void SetClientSize(const Zilch::Real2& value);
    
    void DisableScrollBar(int __0);
    
    bool IsScrollBarVisible(int __0);
    
    void ScrollAreaToView(const Zilch::Real2& __0, const Zilch::Real2& __1);
    
    void ScrollPercent(const Zilch::Real2& __0);
    
    void ScrollPixels(const Zilch::Real2& __0);
    
    unsigned char mValue[40];
    
  protected:
    BaseScrollArea(Zilch::NoType none) : Composite(none) {}
    ZilchNoCopy(BaseScrollArea);
  };
  
  class ScrollArea : public BaseScrollArea
  {
  public:
    Zilch::HandleOf<Composite> GetClientWidget();
    
    Zilch::HandleOf<Spacer> GetBackground();
    
    float GetScrollBarSize();
    
    unsigned char mValue[16];
    
  protected:
    ScrollArea(Zilch::NoType none) : BaseScrollArea(none) {}
    ZilchNoCopy(ScrollArea);
  };
  
  class Spacer : public Widget
  {
  public:
    unsigned char mValue[8];
    
  protected:
    Spacer(Zilch::NoType none) : Widget(none) {}
    ZilchNoCopy(Spacer);
  };
  
  class Menu_ : public ZeroObject
  {
  public:
    Zilch::Real4 GetBackgroundColor();
    
    void SetBackgroundColor(const Zilch::Real4& value);
    
    Zilch::Real4 GetBorderColor();
    
    void SetBorderColor(const Zilch::Real4& value);
    
    Zilch::Real2 GetBorderPadding();
    
    void SetBorderPadding(const Zilch::Real2& value);
    
    Zilch::Real4 GetItemTextColor();
    
    void SetItemTextColor(const Zilch::Real4& value);
    
    Zilch::Real4 GetItemBackgroundColor();
    
    void SetItemBackgroundColor(const Zilch::Real4& value);
    
    Zilch::Real4 GetItemBorderColor();
    
    void SetItemBorderColor(const Zilch::Real4& value);
    
    Zilch::Real4 GetItemSelectedTextColor();
    
    void SetItemSelectedTextColor(const Zilch::Real4& value);
    
    Zilch::Real4 GetItemSelectedBorderColor();
    
    void SetItemSelectedBorderColor(const Zilch::Real4& value);
    
    Zilch::Real4 GetItemSelectedBackgroundColor();
    
    void SetItemSelectedBackgroundColor(const Zilch::Real4& value);
    
    Zilch::Real4 GetItemDisabledTextColor();
    
    void SetItemDisabledTextColor(const Zilch::Real4& value);
    
    Zilch::Real4 GetMenuBarItemPadding();
    
    void SetMenuBarItemPadding(const Zilch::Real4& value);
    
    Zilch::Real4 GetGutterColor();
    
    void SetGutterColor(const Zilch::Real4& value);
    
    unsigned char mValue[52];
    
  protected:
    Menu_(Zilch::NoType none) : ZeroObject(none) {}
    ZilchNoCopy(Menu_);
  };
  
  class ConsoleUi : public Composite
  {
  public:
    Zilch::Real2 GetScrolledPercentage();
    
    void SetScrolledPercentage(const Zilch::Real2& value);
    
    Zilch::Real2 GetScrolledOffset();
    
    void SetScrolledOffset(const Zilch::Real2& value);
    
    Zilch::Real2 GetClientOffset();
    
    Zilch::Real4 GetClientArea();
    
    Zilch::Real2 GetClientVisibleSize();
    
    Zilch::Real2 GetClientSize();
    
    void SetClientSize(const Zilch::Real2& value);
    
    void DisableScrollBar(int __0);
    
    bool IsScrollBarVisible(int __0);
    
    void ScrollAreaToView(const Zilch::Real2& __0, const Zilch::Real2& __1);
    
    void ScrollPercent(const Zilch::Real2& __0);
    
    void ScrollPixels(const Zilch::Real2& __0);
    
    unsigned char mValue[168];
    
  protected:
    ConsoleUi(Zilch::NoType none) : Composite(none) {}
    ZilchNoCopy(ConsoleUi);
  };
  
  class WheelCollection : public Zilch::ReferenceType
  {
  public:
    unsigned char mValue[20];
    
  protected:
    WheelCollection(Zilch::NoType none) : Zilch::ReferenceType(none) {}
    ZilchNoCopy(WheelCollection);
  };
  
  class ManipulatorJointBlock : public Zilch::ReferenceType
  {
  public:
    float GetSlop();
    
    void SetSlop(float value);
    
    float GetLinearBaumgarte();
    
    void SetLinearBaumgarte(float value);
    
    float GetAngularBaumgarte();
    
    void SetAngularBaumgarte(float value);
    
    float GetLinearErrorCorrection();
    
    void SetLinearErrorCorrection(float value);
    
    float GetAngularErrorCorrection();
    
    void SetAngularErrorCorrection(float value);
    
    int GetCorrectionType();
    
    void SetCorrectionType(int value);
    
    unsigned char mValue[32];
    
  protected:
    ManipulatorJointBlock(Zilch::NoType none) : Zilch::ReferenceType(none) {}
    ZilchNoCopy(ManipulatorJointBlock);
  };
  
  class WheelJointBlock : public Zilch::ReferenceType
  {
  public:
    float GetSlop();
    
    void SetSlop(float value);
    
    float GetLinearBaumgarte();
    
    void SetLinearBaumgarte(float value);
    
    float GetAngularBaumgarte();
    
    void SetAngularBaumgarte(float value);
    
    float GetLinearErrorCorrection();
    
    void SetLinearErrorCorrection(float value);
    
    float GetAngularErrorCorrection();
    
    void SetAngularErrorCorrection(float value);
    
    int GetCorrectionType();
    
    void SetCorrectionType(int value);
    
    unsigned char mValue[32];
    
  protected:
    WheelJointBlock(Zilch::NoType none) : Zilch::ReferenceType(none) {}
    ZilchNoCopy(WheelJointBlock);
  };
  
  class RevoluteJoint2dBlock : public Zilch::ReferenceType
  {
  public:
    float GetSlop();
    
    void SetSlop(float value);
    
    float GetLinearBaumgarte();
    
    void SetLinearBaumgarte(float value);
    
    float GetAngularBaumgarte();
    
    void SetAngularBaumgarte(float value);
    
    float GetLinearErrorCorrection();
    
    void SetLinearErrorCorrection(float value);
    
    float GetAngularErrorCorrection();
    
    void SetAngularErrorCorrection(float value);
    
    int GetCorrectionType();
    
    void SetCorrectionType(int value);
    
    unsigned char mValue[32];
    
  protected:
    RevoluteJoint2dBlock(Zilch::NoType none) : Zilch::ReferenceType(none) {}
    ZilchNoCopy(RevoluteJoint2dBlock);
  };
  
  class ValidRows_ : public ZeroObject
  {
  public:
    Zilch::Real4 GetPrimaryColor();
    
    void SetPrimaryColor(const Zilch::Real4& value);
    
    Zilch::Real4 GetSecondaryColor();
    
    void SetSecondaryColor(const Zilch::Real4& value);
    
    Zilch::Real4 GetMouseOverColor();
    
    void SetMouseOverColor(const Zilch::Real4& value);
    
    Zilch::Real4 GetSelectedColor();
    
    void SetSelectedColor(const Zilch::Real4& value);
    
    Zilch::Real4 GetToolTipColor();
    
    void SetToolTipColor(const Zilch::Real4& value);
    
    unsigned char mValue[52];
    
  protected:
    ValidRows_(Zilch::NoType none) : ZeroObject(none) {}
    ZilchNoCopy(ValidRows_);
  };
  
  class TextureSelect : public Zilch::ValueType
  {
  public:
    static TextureSelect GetTexture1();
    
    static TextureSelect GetTexture2();
    
    static TextureSelect GetTexture3();
    
    static TextureSelect GetTexture0();
    
    int mValue;
    TextureSelect();
  };
  
  class ModernTextButton_ : public ZeroObject
  {
  public:
    Zilch::Real4 GetTextColor();
    
    void SetTextColor(const Zilch::Real4& value);
    
    Zilch::Real4 GetTextHoverColor();
    
    void SetTextHoverColor(const Zilch::Real4& value);
    
    Zilch::Real4 GetTextClickedColor();
    
    void SetTextClickedColor(const Zilch::Real4& value);
    
    unsigned char mValue[52];
    
  protected:
    ModernTextButton_(Zilch::NoType none) : ZeroObject(none) {}
    ZilchNoCopy(ModernTextButton_);
  };
  
  // Dispatched after fully joining or hosting a network game.
  class NetGameStarted : public Event
  {
  public:
    Zilch::HandleOf<GameSession> GetGameSession();
    
    void SetGameSession(GameSession* value);
    
    unsigned char mValue[4];
    
  protected:
    NetGameStarted(Zilch::NoType none) : Event(none) {}
    ZilchNoCopy(NetGameStarted);
  };
  
  class CastFilterEvent : public Event
  {
  public:
    Zilch::HandleOf<Cog> GetObject();
    
    CastFilterState GetFilterState();
    
    void SetFilterState(CastFilterState value);
    
    unsigned char mValue[8];
    
  protected:
    CastFilterEvent(Zilch::NoType none) : Event(none) {}
    ZilchNoCopy(CastFilterEvent);
  };
  
  class PropertyView : public Composite
  {
  public:
    void SetObject(ZeroObject* __0);
    
    void Refresh();
    
    void Invalidate();
    
    void ActivateAutoUpdate();
    
    unsigned char mValue[128];
    
  protected:
    PropertyView(Zilch::NoType none) : Composite(none) {}
    ZilchNoCopy(PropertyView);
  };
  
  class ObjectColorMode : public Zilch::ValueType
  {
  public:
    static ObjectColorMode GetPhysicsModes();
    
    static ObjectColorMode GetModelColor();
    
    static ObjectColorMode GetAbsNormals();
    
    static ObjectColorMode GetInverseNormals();
    
    static ObjectColorMode GetNormals();
    
    int mValue;
    ObjectColorMode();
  };
  
  // A level is resource that stores a set of objects that can be loaded into a space. Level is different from most resource types in that it does not really store the level data on the object but always loads the data from the file system.
  class Level : public Resource
  {
  public:
    static Zilch::HandleOf<Level> Find(const Zilch::String& name);
    
    unsigned char mValue[8];
    
  protected:
    Level(Zilch::NoType none) : Resource(none) {}
    ZilchNoCopy(Level);
  };
  
  class DoNotBlockGodRays : public MaterialBlock
  {
  public:
    
  protected:
    DoNotBlockGodRays(Zilch::NoType none) : MaterialBlock(none) {}
    ZilchNoCopy(DoNotBlockGodRays);
  };
  
  class MainWindow : public RootWidget
  {
  public:
    unsigned char mValue[72];
    
  protected:
    MainWindow(Zilch::NoType none) : RootWidget(none) {}
    ZilchNoCopy(MainWindow);
  };
  
  class ConvexMeshEditor_ : public ZeroObject
  {
  public:
    Zilch::Real4 GetControlPointColor();
    
    void SetControlPointColor(const Zilch::Real4& value);
    
    Zilch::Real4 GetControlPointHighlightColor();
    
    void SetControlPointHighlightColor(const Zilch::Real4& value);
    
    Zilch::Real4 GetControlPointSelectionColor();
    
    void SetControlPointSelectionColor(const Zilch::Real4& value);
    
    Zilch::Real4 GetOuterContourColor();
    
    void SetOuterContourColor(const Zilch::Real4& value);
    
    Zilch::Real4 GetOuterContourHighlightColor();
    
    void SetOuterContourHighlightColor(const Zilch::Real4& value);
    
    Zilch::Real4 GetOuterContourInvalidColor();
    
    void SetOuterContourInvalidColor(const Zilch::Real4& value);
    
    float GetOuterContourWidth();
    
    void SetOuterContourWidth(float value);
    
    Zilch::Real4 GetConvexMeshColor();
    
    void SetConvexMeshColor(const Zilch::Real4& value);
    
    Zilch::Real4 GetConvexMeshEdgeColor();
    
    void SetConvexMeshEdgeColor(const Zilch::Real4& value);
    
    float GetConvexMeshWidth();
    
    void SetConvexMeshWidth(float value);
    
    float GetControlPointSize();
    
    void SetControlPointSize(float value);
    
    float GetControlPointSnappingSize();
    
    void SetControlPointSnappingSize(float value);
    
    bool GetDebuggingMode();
    
    void SetDebuggingMode(bool value);
    
    unsigned char mValue[52];
    
  protected:
    ConvexMeshEditor_(Zilch::NoType none) : ZeroObject(none) {}
    ZilchNoCopy(ConvexMeshEditor_);
  };
  
  class SoundSystem : public Zilch::ReferenceType
  {
  public:
    unsigned char mValue[88];
    
  protected:
    SoundSystem(Zilch::NoType none) : Zilch::ReferenceType(none) {}
    ZilchNoCopy(SoundSystem);
  };
  
  class NetUserRange : public Zilch::ReferenceType
  {
  public:
    bool Empty();
    
    Zilch::HandleOf<CogId> Front();
    
    void PopFront();
    
    int Size();
    
    Zilch::HandleOf<NetUserRange> GetAll();
    
    bool GetIsNotEmpty();
    
    Zilch::HandleOf<Cog> GetCurrent();
    
    void MoveNext();
    
    unsigned char mValue[8];
    
  protected:
    NetUserRange(Zilch::NoType none) : Zilch::ReferenceType(none) {}
    ZilchNoCopy(NetUserRange);
  };
  
  class LinkStatus : public Zilch::ValueType
  {
  public:
    static LinkStatus GetConnected();
    
    static LinkStatus GetUnspecified();
    
    static LinkStatus GetDisconnected();
    
    static LinkStatus GetAttemptingConnection();
    
    int mValue;
    LinkStatus();
  };
  
  class Downloads_ : public ZeroObject
  {
  public:
    Zilch::Real4 GetIconColor();
    
    void SetIconColor(const Zilch::Real4& value);
    
    Zilch::Real4 GetProgressPrimaryColor();
    
    void SetProgressPrimaryColor(const Zilch::Real4& value);
    
    Zilch::Real4 GetProgressBackgroundColor();
    
    void SetProgressBackgroundColor(const Zilch::Real4& value);
    
    unsigned char mValue[52];
    
  protected:
    Downloads_(Zilch::NoType none) : ZeroObject(none) {}
    ZilchNoCopy(Downloads_);
  };
  
  class LimitMode : public Zilch::ValueType
  {
  public:
    static LimitMode GetLimited();
    
    static LimitMode GetUnlimited();
    
    int mValue;
    LimitMode();
  };
  
  class ColorScheme : public Zilch::ReferenceType
  {
  public:
    Zilch::String GetActiveScheme();
    
    void SetActiveScheme(const Zilch::String& value);
    
    int GetDefault();
    
    void SetDefault(int value);
    
    int GetBackground();
    
    void SetBackground(int value);
    
    int GetSelection();
    
    void SetSelection(int value);
    
    int GetLineSelection();
    
    void SetLineSelection(int value);
    
    int GetComment();
    
    void SetComment(int value);
    
    int GetStringLiteral();
    
    void SetStringLiteral(int value);
    
    int GetNumber();
    
    void SetNumber(int value);
    
    int GetKeyword();
    
    void SetKeyword(int value);
    
    int GetOperator();
    
    void SetOperator(int value);
    
    int GetClassName();
    
    void SetClassName(int value);
    
    int GetFunctionName();
    
    void SetFunctionName(int value);
    
    int GetSpecialWords();
    
    void SetSpecialWords(int value);
    
    int GetError();
    
    void SetError(int value);
    
    int GetWhitespace();
    
    void SetWhitespace(int value);
    
    int GetGutter();
    
    void SetGutter(int value);
    
    int GetGutterText();
    
    void SetGutterText(int value);
    
    int GetLink();
    
    void SetLink(int value);
    
    Zilch::String GetSaveName();
    
    void SetSaveName(const Zilch::String& value);
    
    void Save();
    
    unsigned char mValue[144];
    
  protected:
    ColorScheme(Zilch::NoType none) : Zilch::ReferenceType(none) {}
    ZilchNoCopy(ColorScheme);
  };
  
  // Dispatched while adding C++ component net properties to a NetObject.
  class RegisterCppNetProperties : public Event
  {
  public:
    
  protected:
    RegisterCppNetProperties(Zilch::NoType none) : Event(none) {}
    ZilchNoCopy(RegisterCppNetProperties);
  };
  
  // Dispatched before the net object is taken offline.
  class NetObjectOffline : public Event
  {
  public:
    Zilch::HandleOf<GameSession> GetGameSession();
    
    void SetGameSession(GameSession* value);
    
    Zilch::HandleOf<Space> GetSpace();
    
    void SetSpace(Space* value);
    
    Zilch::HandleOf<Cog> GetObject();
    
    void SetObject(Cog* value);
    
    bool GetIsEndOfLifespan();
    
    void SetIsEndOfLifespan(bool value);
    
    unsigned char mValue[16];
    
  protected:
    NetObjectOffline(Zilch::NoType none) : Event(none) {}
    ZilchNoCopy(NetObjectOffline);
  };
  
  class Button_ : public ZeroObject
  {
  public:
    Zilch::Real4 GetDefaultColor();
    
    void SetDefaultColor(const Zilch::Real4& value);
    
    Zilch::Real4 GetHoverColor();
    
    void SetHoverColor(const Zilch::Real4& value);
    
    Zilch::Real4 GetClickedColor();
    
    void SetClickedColor(const Zilch::Real4& value);
    
    Zilch::Real4 GetBorderColor();
    
    void SetBorderColor(const Zilch::Real4& value);
    
    Zilch::Real4 GetFocusBorderColor();
    
    void SetFocusBorderColor(const Zilch::Real4& value);
    
    unsigned char mValue[52];
    
  protected:
    Button_(Zilch::NoType none) : ZeroObject(none) {}
    ZilchNoCopy(Button_);
  };
  
  class KeyboardTextEvent : public Event
  {
  public:
    int GetCharacter();
    
    void SetCharacter(int value);
    
    unsigned char mValue[8];
    
  protected:
    KeyboardTextEvent(Zilch::NoType none) : Event(none) {}
    ZilchNoCopy(KeyboardTextEvent);
  };
  
  class Revision : public Zilch::ReferenceType
  {
  public:
    Zilch::String GetChangeSet();
    
    void SetChangeSet(const Zilch::String& value);
    
    Zilch::String GetUser();
    
    void SetUser(const Zilch::String& value);
    
    Zilch::String GetDate();
    
    void SetDate(const Zilch::String& value);
    
    Zilch::String GetSummary();
    
    void SetSummary(const Zilch::String& value);
    
    unsigned char mValue[24];
    
  protected:
    Revision(Zilch::NoType none) : Zilch::ReferenceType(none) {}
    ZilchNoCopy(Revision);
  };
  
  class ViewportScaling : public Zilch::ValueType
  {
  public:
    static ViewportScaling GetLetterbox();
    
    static ViewportScaling GetLargestMultiple();
    
    static ViewportScaling GetExact();
    
    static ViewportScaling GetFill();
    
    int mValue;
    ViewportScaling();
  };
  
  // HeightMapSource stores data needed for height maps. Data is stored on PatchData which are indexed by x,y. Each PatchData stores layers that represent different data. The primary layer is height and paint values but additional layers can be added to store data like foliage or custom game data.
  class HeightMapSource : public Resource
  {
  public:
    static Zilch::HandleOf<HeightMapSource> Find(const Zilch::String& name);
    
    unsigned char mValue[32];
    
  protected:
    HeightMapSource(Zilch::NoType none) : Resource(none) {}
    ZilchNoCopy(HeightMapSource);
  };
  
  class ObjectLinkPointChangedEvent : public Event
  {
  public:
    Zilch::Real3 GetOldLocalPoint();
    
    void SetOldLocalPoint(const Zilch::Real3& value);
    
    Zilch::Real3 GetNewLocalPoint();
    
    void SetNewLocalPoint(const Zilch::Real3& value);
    
    int GetEdgeId();
    
    void SetEdgeId(int value);
    
    unsigned char mValue[28];
    
  protected:
    ObjectLinkPointChangedEvent(Zilch::NoType none) : Event(none) {}
    ZilchNoCopy(ObjectLinkPointChangedEvent);
  };
  
  class InvalidRows_ : public ZeroObject
  {
  public:
    Zilch::Real4 GetPrimaryColor();
    
    void SetPrimaryColor(const Zilch::Real4& value);
    
    Zilch::Real4 GetSecondaryColor();
    
    void SetSecondaryColor(const Zilch::Real4& value);
    
    Zilch::Real4 GetMouseOverColor();
    
    void SetMouseOverColor(const Zilch::Real4& value);
    
    Zilch::Real4 GetSelectedColor();
    
    void SetSelectedColor(const Zilch::Real4& value);
    
    Zilch::Real4 GetToolTipColor();
    
    void SetToolTipColor(const Zilch::Real4& value);
    
    unsigned char mValue[52];
    
  protected:
    InvalidRows_(Zilch::NoType none) : ZeroObject(none) {}
    ZilchNoCopy(InvalidRows_);
  };
  
  class GridLayout : public Layout
  {
  public:
    float GetCellSize();
    
    void SetCellSize(float value);
    
    unsigned char mValue[28];
    
  protected:
    GridLayout(Zilch::NoType none) : Layout(none) {}
    ZilchNoCopy(GridLayout);
  };
  
  // Zilch script file Resource.
  class ZilchFragment : public DocumentResource
  {
  public:
    static Zilch::HandleOf<ZilchFragment> Find(const Zilch::String& name);
    
    unsigned char mValue[32];
    
  protected:
    ZilchFragment(Zilch::NoType none) : DocumentResource(none) {}
    ZilchNoCopy(ZilchFragment);
  };
  
  class FogType : public Zilch::ValueType
  {
  public:
    static FogType GetLinear();
    
    static FogType GetExp2();
    
    int mValue;
    FogType();
  };
  
  class CurveEditor_ : public ZeroObject
  {
  public:
    float GetControlPointSize();
    
    void SetControlPointSize(float value);
    
    float GetTangentSize();
    
    void SetTangentSize(float value);
    
    float GetTangentLineSize();
    
    void SetTangentLineSize(float value);
    
    float GetSelectionScale();
    
    void SetSelectionScale(float value);
    
    Zilch::Real4 GetSelectedColor();
    
    void SetSelectedColor(const Zilch::Real4& value);
    
    unsigned char mValue[52];
    
  protected:
    CurveEditor_(Zilch::NoType none) : ZeroObject(none) {}
    ZilchNoCopy(CurveEditor_);
  };
  
  class WebBrowserModifiers : public Zilch::ValueType
  {
  public:
    static WebBrowserModifiers GetAlt();
    
    static WebBrowserModifiers GetLeftMouse();
    
    static WebBrowserModifiers GetIsKeyPad();
    
    static WebBrowserModifiers GetNumLock();
    
    static WebBrowserModifiers GetIsRight();
    
    static WebBrowserModifiers GetCapsLock();
    
    static WebBrowserModifiers GetRightMouse();
    
    static WebBrowserModifiers GetControl();
    
    static WebBrowserModifiers GetShift();
    
    static WebBrowserModifiers GetMiddleMouse();
    
    static WebBrowserModifiers GetCommand();
    
    static WebBrowserModifiers GetIsLeft();
    
    int mValue;
    WebBrowserModifiers();
  };
  
  // Dispatched after the net user acquires network ownership of a net object.
  class NetUserAcquiredObjectOwnership : public Event
  {
  public:
    Zilch::HandleOf<Cog> GetAcquiredObject();
    
    void SetAcquiredObject(Cog* value);
    
    Zilch::HandleOf<Cog> GetPreviousNetUserOwner();
    
    void SetPreviousNetUserOwner(Cog* value);
    
    unsigned char mValue[8];
    
  protected:
    NetUserAcquiredObjectOwnership(Zilch::NoType none) : Event(none) {}
    ZilchNoCopy(NetUserAcquiredObjectOwnership);
  };
  
  class Shell : public Zilch::ReferenceType
  {
  public:
    Zilch::String GetClipboardText();
    
    void SetClipboardText(const Zilch::String& value);
    
    int GetWindowCount();
    
    void StartPlayback(const Zilch::String& __0);
    
    void StopPlayback();
    
    void StartRecording(const Zilch::String& __0);
    
    void StopRecording();
    
    bool IsClipboardText();
    
    void DumpMemoryDebuggerStats();
    
    Zilch::HandleOf<OsWindow> GetWindow(int __0);
    
    unsigned char mValue[36];
    
  protected:
    Shell(Zilch::NoType none) : Zilch::ReferenceType(none) {}
    ZilchNoCopy(Shell);
  };
  
  class ParticleEvent : public Event
  {
  public:
    Zilch::HandleOf<ParticleListRange> GetNewParticles();
    
    int GetNewParticleCount();
    
    unsigned char mValue[12];
    
  protected:
    ParticleEvent(Zilch::NoType none) : Event(none) {}
    ZilchNoCopy(ParticleEvent);
  };
  
  class FocusEvent : public Event
  {
  public:
    unsigned char mValue[8];
    
  protected:
    FocusEvent(Zilch::NoType none) : Event(none) {}
    ZilchNoCopy(FocusEvent);
  };
  
  class ContactBlock : public Zilch::ReferenceType
  {
  public:
    float GetSlop();
    
    void SetSlop(float value);
    
    float GetLinearBaumgarte();
    
    void SetLinearBaumgarte(float value);
    
    float GetAngularBaumgarte();
    
    void SetAngularBaumgarte(float value);
    
    float GetLinearErrorCorrection();
    
    void SetLinearErrorCorrection(float value);
    
    float GetAngularErrorCorrection();
    
    void SetAngularErrorCorrection(float value);
    
    int GetCorrectionType();
    
    void SetCorrectionType(int value);
    
    unsigned char mValue[32];
    
  protected:
    ContactBlock(Zilch::NoType none) : Zilch::ReferenceType(none) {}
    ZilchNoCopy(ContactBlock);
  };
  
  class WebBrowserPopupCreateEvent : public WebBrowserEvent
  {
  public:
    Zilch::String GetName();
    
    void SetName(const Zilch::String& value);
    
    Zilch::String GetUrl();
    
    void SetUrl(const Zilch::String& value);
    
    unsigned char mValue[8];
    
  protected:
    WebBrowserPopupCreateEvent(Zilch::NoType none) : WebBrowserEvent(none) {}
    ZilchNoCopy(WebBrowserPopupCreateEvent);
  };
  
  class SmoothSharpenTool : public HeightManipulationTool
  {
  public:
    float GetStrength();
    
    void SetStrength(float value);
    
    int GetUniformSamples();
    
    void SetUniformSamples(int value);
    
    int GetRandomSamples();
    
    void SetRandomSamples(int value);
    
    int GetRandomSampleDistance();
    
    void SetRandomSampleDistance(int value);
    
    bool GetAutoDetermineSamples();
    
    void SetAutoDetermineSamples(bool value);
    
    unsigned char mValue[24];
    
  protected:
    SmoothSharpenTool(Zilch::NoType none) : HeightManipulationTool(none) {}
    ZilchNoCopy(SmoothSharpenTool);
  };
  
  class PhysicsRaycastProvider : public RaycastProvider
  {
  public:
    bool GetDynamicColliders();
    
    void SetDynamicColliders(bool value);
    
    bool GetSelectGhosts();
    
    void SetSelectGhosts(bool value);
    
    bool GetStaticColliders();
    
    void SetStaticColliders(bool value);
    
    bool GetMultiSelectStatic();
    
    void SetMultiSelectStatic(bool value);
    
    bool GetMultiSelectKinematic();
    
    void SetMultiSelectKinematic(bool value);
    
    unsigned char mValue[8];
    
  protected:
    PhysicsRaycastProvider(Zilch::NoType none) : RaycastProvider(none) {}
    ZilchNoCopy(PhysicsRaycastProvider);
  };
  
  // Used by any height map event.
  class HeightMapEvent : public Event
  {
  public:
    unsigned char mValue[12];
    
  protected:
    HeightMapEvent(Zilch::NoType none) : Event(none) {}
    ZilchNoCopy(HeightMapEvent);
  };
  
  class GraphicsReport : public Zilch::ReferenceType
  {
  public:
    int GetDrawCalls();
    
    void SetDrawCalls(int value);
    
    int GetVisibleObjects();
    
    void SetVisibleObjects(int value);
    
    int GetMaterialStateChanges();
    
    void SetMaterialStateChanges(int value);
    
    int GetPolycount();
    
    void SetPolycount(int value);
    
    int GetLights();
    
    void SetLights(int value);
    
    int GetLightStateChanges();
    
    void SetLightStateChanges(int value);
    
    int GetLightDrawCalls();
    
    void SetLightDrawCalls(int value);
    
    unsigned char mValue[36];
    
  protected:
    GraphicsReport(Zilch::NoType none) : Zilch::ReferenceType(none) {}
    ZilchNoCopy(GraphicsReport);
  };
  
  class Reflective : public MaterialBlock
  {
  public:
    float GetReflectivity();
    
    void SetReflectivity(float value);
    
    Zilch::HandleOf<Texture> GetEnvironment();
    
    void SetEnvironment(Texture* value);
    
    Zilch::Real2 GetReflectiveScroll();
    
    void SetReflectiveScroll(const Zilch::Real2& value);
    
    unsigned char mValue[16];
    
  protected:
    Reflective(Zilch::NoType none) : MaterialBlock(none) {}
    ZilchNoCopy(Reflective);
  };
  
  class MaterialEntry : public Zilch::ReferenceType
  {
  public:
    Zilch::HandleOf<Material> GetMaterial();
    
    void SetMaterial(Material* value);
    
    unsigned char mValue[4];
    
  protected:
    MaterialEntry(Zilch::NoType none) : Zilch::ReferenceType(none) {}
    ZilchNoCopy(MaterialEntry);
  };
  
  class SpriteGeometryMode : public Zilch::ValueType
  {
  public:
    static SpriteGeometryMode GetZPlane();
    
    static SpriteGeometryMode GetViewPlane();
    
    int mValue;
    SpriteGeometryMode();
  };
  
  class NodeSearchMethod : public Zilch::ValueType
  {
  public:
    static NodeSearchMethod GetRayCast();
    
    static NodeSearchMethod GetClosestNode();
    
    int mValue;
    NodeSearchMethod();
  };
  
  class DesyncDebugResponse : public SendableEvent
  {
  public:
    Zilch::HandleOf<LockStepPeer> GetPeer();
    
    void SetPeer(LockStepPeer* value);
    
    unsigned char mValue[28];
    
  protected:
    DesyncDebugResponse(Zilch::NoType none) : SendableEvent(none) {}
    ZilchNoCopy(DesyncDebugResponse);
  };
  
  class MeshEmitMode : public Zilch::ValueType
  {
  public:
    static MeshEmitMode GetPoints();
    
    static MeshEmitMode GetFaces();
    
    static MeshEmitMode GetEdges();
    
    int mValue;
    MeshEmitMode();
  };
  
  class FixPowerOf2 : public Zilch::ValueType
  {
  public:
    static FixPowerOf2 GetAuto();
    
    static FixPowerOf2 GetNext();
    
    static FixPowerOf2 GetPrevious();
    
    static FixPowerOf2 GetNearest();
    
    int mValue;
    FixPowerOf2();
  };
  
  class ResourceEditors_ : public ZeroObject
  {
  public:
    unsigned char mValue[52];
    
  protected:
    ResourceEditors_(Zilch::NoType none) : ZeroObject(none) {}
    ZilchNoCopy(ResourceEditors_);
  };
  
  class SoundTags : public Zilch::ReferenceType
  {
  public:
    unsigned char mValue[16];
    
  protected:
    SoundTags(Zilch::NoType none) : Zilch::ReferenceType(none) {}
    ZilchNoCopy(SoundTags);
  };
  
  // An event that informs us which input device is being used by the user.
  class InputDeviceEvent : public Event
  {
  public:
    int GetDevice();
    
    void SetDevice(int value);
    
    int GetLastDevice();
    
    void SetLastDevice(int value);
    
    unsigned char mValue[8];
    
  protected:
    InputDeviceEvent(Zilch::NoType none) : Event(none) {}
    ZilchNoCopy(InputDeviceEvent);
  };
  
  class GizmoUpdateEvent : public GizmoEvent
  {
  public:
    Zilch::Real3 GetMouseWorldMovement();
    
    void SetMouseWorldMovement(const Zilch::Real3& value);
    
    Zilch::Real3 GetInitialGrabPoint();
    
    void SetInitialGrabPoint(const Zilch::Real3& value);
    
    unsigned char mValue[24];
    
  protected:
    GizmoUpdateEvent(Zilch::NoType none) : GizmoEvent(none) {}
    ZilchNoCopy(GizmoUpdateEvent);
  };
  
  class SizerGizmoEvent : public GizmoUpdateEvent
  {
  public:
    Zilch::Real3 GetStartExtents();
    
    void SetStartExtents(const Zilch::Real3& value);
    
    Zilch::Real3 GetNewExtents();
    
    void SetNewExtents(const Zilch::Real3& value);
    
    Zilch::Real3 GetStartPosition();
    
    void SetStartPosition(const Zilch::Real3& value);
    
    Zilch::Real3 GetNewPosition();
    
    void SetNewPosition(const Zilch::Real3& value);
    
    unsigned char mValue[60];
    
  protected:
    SizerGizmoEvent(Zilch::NoType none) : GizmoUpdateEvent(none) {}
    ZilchNoCopy(SizerGizmoEvent);
  };
  
  class PhysicsMeshType : public Zilch::ValueType
  {
  public:
    static PhysicsMeshType GetGenericMesh();
    
    static PhysicsMeshType GetConvexMesh();
    
    int mValue;
    PhysicsMeshType();
  };
  
  // A Text resource is a generic resource for simple text data for game logic.
  class TextBlock : public DocumentResource
  {
  public:
    Zilch::String GetText();
    
    void SetText(const Zilch::String& value);
    
    static Zilch::HandleOf<TextBlock> Find(const Zilch::String& name);
    
    unsigned char mValue[8];
    
  protected:
    TextBlock(Zilch::NoType none) : DocumentResource(none) {}
    ZilchNoCopy(TextBlock);
  };
  
  class AnimControls_ : public ZeroObject
  {
  public:
    Zilch::Real4 GetBackgroundColor();
    
    void SetBackgroundColor(const Zilch::Real4& value);
    
    unsigned char mValue[52];
    
  protected:
    AnimControls_(Zilch::NoType none) : ZeroObject(none) {}
    ZilchNoCopy(AnimControls_);
  };
  
  class GeometryContent : public ContentComposition
  {
  public:
    Zilch::HandleOf<FontBuilder> GetFontBuilder();
    
    Zilch::HandleOf<GeneratedArchetype> GetGeneratedArchetype();
    
    Zilch::HandleOf<AnimationBuilder> GetAnimationBuilder();
    
    Zilch::HandleOf<SkeletonBuilder> GetSkeletonBuilder();
    
    Zilch::HandleOf<SoundBuilder> GetSoundBuilder();
    
    Zilch::HandleOf<ContentHistory> GetContentHistory();
    
    Zilch::HandleOf<SpriteSourceBuilder> GetSpriteSourceBuilder();
    
    Zilch::HandleOf<ContentCopyright> GetContentCopyright();
    
    Zilch::HandleOf<DataBuilder> GetDataBuilder();
    
    Zilch::HandleOf<BinaryBuilder> GetBinaryBuilder();
    
    Zilch::HandleOf<EffectBuilder> GetEffectBuilder();
    
    Zilch::HandleOf<ContentTags> GetContentTags();
    
    Zilch::HandleOf<ZilchScriptBuilder> GetZilchScriptBuilder();
    
    Zilch::HandleOf<TextureBuilder> GetTextureBuilder();
    
    Zilch::HandleOf<RichAnimationBuilder> GetRichAnimationBuilder();
    
    Zilch::HandleOf<FragmentBuilder> GetFragmentBuilder();
    
    Zilch::HandleOf<PhysicsMeshBuilder> GetPhysicsMeshBuilder();
    
    Zilch::HandleOf<NavMeshBuilder> GetNavMeshBuilder();
    
    Zilch::HandleOf<ContentNotes> GetContentNotes();
    
    Zilch::HandleOf<ZilchPluginBuilder> GetZilchPluginBuilder();
    
    Zilch::HandleOf<TextBuilder> GetTextBuilder();
    
    Zilch::HandleOf<HeightToNormalBuilder> GetHeightToNormalBuilder();
    
    Zilch::HandleOf<DirectImageBuilder> GetDirectImageBuilder();
    
    Zilch::HandleOf<ZilchFragmentBuilder> GetZilchFragmentBuilder();
    
    Zilch::HandleOf<GeometryImport> GetGeometryImport();
    
    Zilch::HandleOf<MeshBuilder> GetMeshBuilder();
    
    
  protected:
    GeometryContent(Zilch::NoType none) : ContentComposition(none) {}
    ZilchNoCopy(GeometryContent);
  };
  
  class DarknessFrag : public Zilch::ReferenceType
  {
  public:
    Zilch::String GetFragmentSource();
    
    Zilch::HandleOf<Texture> GetMyTexture();
    
    void SetMyTexture(Texture* value);
    
    Zilch::HandleOf<Texture> GetOtherTexture();
    
    void SetOtherTexture(Texture* value);
    
    unsigned char mValue[48];
    
  protected:
    DarknessFrag(Zilch::NoType none) : Zilch::ReferenceType(none) {}
    ZilchNoCopy(DarknessFrag);
  };
  
  class Tool : public Zilch::ReferenceType
  {
  public:
    void BeginDrag(Viewport* __0);
    
    unsigned char mValue[44];
    
  protected:
    Tool(Zilch::NoType none) : Zilch::ReferenceType(none) {}
    ZilchNoCopy(Tool);
  };
  
  // Dispatched after sending a connect response If denied, their net peer ID is released and link is destroyed immediately after this.
  class NetPeerSentConnectResponse : public Event
  {
  public:
    int GetTheirNetPeerId();
    
    void SetTheirNetPeerId(int value);
    
    Zilch::HandleOf<IpAddress> GetTheirIpAddress();
    
    void SetTheirIpAddress(IpAddress* value);
    
    Zilch::HandleOf<EventBundle> GetTheirRequestBundle();
    
    void SetTheirRequestBundle(EventBundle* value);
    
    int GetTheirPendingUserAddRequestCount();
    
    void SetTheirPendingUserAddRequestCount(int value);
    
    Zilch::HandleOf<IpAddress> GetOurIpAddress();
    
    void SetOurIpAddress(IpAddress* value);
    
    ConnectResponse GetOurConnectResponse();
    
    void SetOurConnectResponse(ConnectResponse value);
    
    Zilch::HandleOf<EventBundle> GetOurResponseBundle();
    
    void SetOurResponseBundle(EventBundle* value);
    
    unsigned char mValue[372];
    
  protected:
    NetPeerSentConnectResponse(Zilch::NoType none) : Event(none) {}
    ZilchNoCopy(NetPeerSentConnectResponse);
  };
  
  class TreeView : public Widget
  {
  public:
    void SetLayout(Layout* __0);
    
    Zilch::HandleOf<Layout> GetLayout();
    
    void SetMinSize(const Zilch::Real2& __0);
    
    void AttachChildWidget(Widget* __0, AttachType __1);
    
    unsigned char mValue[184];
    
  protected:
    TreeView(Zilch::NoType none) : Widget(none) {}
    ZilchNoCopy(TreeView);
  };
  
  class Materials : public Zilch::ReferenceType
  {
  public:
    unsigned char mValue[16];
    
  protected:
    Materials(Zilch::NoType none) : Zilch::ReferenceType(none) {}
    ZilchNoCopy(Materials);
  };
  
  // Zilch script file Resource.
  class ZilchScript : public DocumentResource
  {
  public:
    static Zilch::HandleOf<ZilchScript> Find(const Zilch::String& name);
    
    unsigned char mValue[8];
    
  protected:
    ZilchScript(Zilch::NoType none) : DocumentResource(none) {}
    ZilchNoCopy(ZilchScript);
  };
  
  class Window : public Composite
  {
  public:
    Zilch::Real2 GetClientSize();
    
    void SetTitle(const Zilch::String& __0);
    
    void ChangeStyle(int __0);
    
    void AttachAsTab(Widget* __0, bool __1);
    
    void SetHighlightBorder(bool __0, const Zilch::Real4& __1);
    
    void SetMinimized(bool __0);
    
    void HideClose();
    
    bool CanClose();
    
    void ToggleMinimized();
    
    unsigned char mValue[104];
    
  protected:
    Window(Zilch::NoType none) : Composite(none) {}
    ZilchNoCopy(Window);
  };
  
  class CustomJointEvent : public Event
  {
  public:
    Zilch::HandleOf<CustomJoint> GetOwner();
    
    void SetOwner(CustomJoint* value);
    
    float GetDt();
    
    void SetDt(float value);
    
    unsigned char mValue[8];
    
  protected:
    CustomJointEvent(Zilch::NoType none) : Event(none) {}
    ZilchNoCopy(CustomJointEvent);
  };
  
  class PreProcessing : public Zilch::ValueType
  {
  public:
    static PreProcessing GetColliderCount();
    
    static PreProcessing GetConstraintCount();
    
    static PreProcessing GetNone();
    
    int mValue;
    PreProcessing();
  };
  
  class AnimGraph_ : public ZeroObject
  {
  public:
    Zilch::Real4 GetBackgroundColor();
    
    void SetBackgroundColor(const Zilch::Real4& value);
    
    Zilch::Real4 GetGridLineColor();
    
    void SetGridLineColor(const Zilch::Real4& value);
    
    Zilch::Real4 GetGridHalfLineColor();
    
    void SetGridHalfLineColor(const Zilch::Real4& value);
    
    unsigned char mValue[52];
    
  protected:
    AnimGraph_(Zilch::NoType none) : ZeroObject(none) {}
    ZilchNoCopy(AnimGraph_);
  };
  
  class Toolbar_ : public ZeroObject
  {
  public:
    Zilch::Real4 GetBackgroundColor();
    
    void SetBackgroundColor(const Zilch::Real4& value);
    
    Zilch::Real4 GetDividerColor();
    
    void SetDividerColor(const Zilch::Real4& value);
    
    unsigned char mValue[52];
    
  protected:
    Toolbar_(Zilch::NoType none) : ZeroObject(none) {}
    ZilchNoCopy(Toolbar_);
  };
  
  class ScreenSpaceReflectionMap : public MaterialBlock
  {
  public:
    Zilch::HandleOf<Texture> GetReflectMap();
    
    void SetReflectMap(Texture* value);
    
    float GetReflectFinalScalar();
    
    void SetReflectFinalScalar(float value);
    
    float GetReflectScalar();
    
    void SetReflectScalar(float value);
    
    float GetReflectEnvironmentScalar();
    
    void SetReflectEnvironmentScalar(float value);
    
    unsigned char mValue[16];
    
  protected:
    ScreenSpaceReflectionMap(Zilch::NoType none) : MaterialBlock(none) {}
    ZilchNoCopy(ScreenSpaceReflectionMap);
  };
  
  class ArrowHeadType : public Zilch::ValueType
  {
  public:
    static ArrowHeadType GetArrow();
    
    static ArrowHeadType GetCube();
    
    int mValue;
    ArrowHeadType();
  };
  
  class PulleyJointBlock : public Zilch::ReferenceType
  {
  public:
    float GetSlop();
    
    void SetSlop(float value);
    
    float GetLinearBaumgarte();
    
    void SetLinearBaumgarte(float value);
    
    float GetAngularBaumgarte();
    
    void SetAngularBaumgarte(float value);
    
    float GetLinearErrorCorrection();
    
    void SetLinearErrorCorrection(float value);
    
    float GetAngularErrorCorrection();
    
    void SetAngularErrorCorrection(float value);
    
    int GetCorrectionType();
    
    void SetCorrectionType(int value);
    
    unsigned char mValue[32];
    
  protected:
    PulleyJointBlock(Zilch::NoType none) : Zilch::ReferenceType(none) {}
    ZilchNoCopy(PulleyJointBlock);
  };
  
  class TextEditor : public Composite
  {
  public:
    Zilch::Real2 GetScrolledPercentage();
    
    void SetScrolledPercentage(const Zilch::Real2& value);
    
    Zilch::Real2 GetScrolledOffset();
    
    void SetScrolledOffset(const Zilch::Real2& value);
    
    Zilch::Real2 GetClientOffset();
    
    Zilch::Real4 GetClientArea();
    
    Zilch::Real2 GetClientVisibleSize();
    
    Zilch::Real2 GetClientSize();
    
    void SetClientSize(const Zilch::Real2& value);
    
    void DisableScrollBar(int __0);
    
    bool IsScrollBarVisible(int __0);
    
    void ScrollAreaToView(const Zilch::Real2& __0, const Zilch::Real2& __1);
    
    void ScrollPercent(const Zilch::Real2& __0);
    
    void ScrollPixels(const Zilch::Real2& __0);
    
    unsigned char mValue[120];
    
  protected:
    TextEditor(Zilch::NoType none) : Composite(none) {}
    ZilchNoCopy(TextEditor);
  };
  
  class ToolUiEvent : public Event
  {
  public:
    bool GetNeedsPropertyGrid();
    
    void SetNeedsPropertyGrid(bool value);
    
    Zilch::HandleOf<Composite> GetParent();
    
    Zilch::HandleOf<Cog> GetSelectTool();
    
    unsigned char mValue[16];
    
  protected:
    ToolUiEvent(Zilch::NoType none) : Event(none) {}
    ZilchNoCopy(ToolUiEvent);
  };
  
  class TouchEvent : public Event
  {
  public:
    int GetId();
    
    void SetId(int value);
    
    Zilch::Real2 GetPosition();
    
    void SetPosition(const Zilch::Real2& value);
    
    Zilch::Real2 GetDelta();
    
    void SetDelta(const Zilch::Real2& value);
    
    Zilch::Real2 GetSize();
    
    void SetSize(const Zilch::Real2& value);
    
    float GetRotation();
    
    void SetRotation(float value);
    
    unsigned char mValue[32];
    
  protected:
    TouchEvent(Zilch::NoType none) : Event(none) {}
    ZilchNoCopy(TouchEvent);
  };
  
  class ScriptReloadMethod : public Zilch::ValueType
  {
  public:
    static ScriptReloadMethod GetReInitializeObjects();
    
    static ScriptReloadMethod GetPatchObjects();
    
    int mValue;
    ScriptReloadMethod();
  };
  
  class WebBrowser : public ZeroObject
  {
  public:
    Zilch::Integer2 GetSize();
    
    void SetSize(const Zilch::Integer2& value);
    
    Zilch::HandleOf<Texture> GetTexture();
    
    void SetTexture(Texture* value);
    
    Zilch::String GetStatus();
    
    void SetStatus(const Zilch::String& value);
    
    Zilch::String GetTitle();
    
    void SetTitle(const Zilch::String& value);
    
    Zilch::Real2 GetScrollSpeed();
    
    void SetScrollSpeed(const Zilch::Real2& value);
    
    Zilch::String GetUrl();
    
    void SetUrl(const Zilch::String& value);
    
    bool GetCanGoForward();
    
    bool GetCanGoBackward();
    
    bool GetIsLoading();
    
    bool GetFocus();
    
    void SetFocus(bool value);
    
    bool GetVisible();
    
    void SetVisible(bool value);
    
    void GoForward();
    
    void GoBackward();
    
    void Reload();
    
    void Reload(bool __0);
    
    void ExecuteScript(const Zilch::String& __0);
    
    void ExecuteScriptFromLocation(const Zilch::String& __0, const Zilch::String& __1, int __2);
    
    void SimulateKey(int __0, bool __1, WebBrowserModifiers __2);
    
    void SimulateTextTyped(int __0, WebBrowserModifiers __1);
    
    void SimulateMouseMove(const Zilch::Integer2& __0, WebBrowserModifiers __1);
    
    void SimulateMouseClick(const Zilch::Integer2& __0, MouseButtons __1, bool __2, WebBrowserModifiers __3);
    
    void SimulateMouseDoubleClick(const Zilch::Integer2& __0, MouseButtons __1, WebBrowserModifiers __2);
    
    void SimulateMouseScroll(const Zilch::Integer2& __0, const Zilch::Real2& __1, WebBrowserModifiers __2);
    
    unsigned char mValue[108];
    
  protected:
    WebBrowser(Zilch::NoType none) : ZeroObject(none) {}
    ZilchNoCopy(WebBrowser);
  };
  
  class PerformanceMode : public Zilch::ValueType
  {
  public:
    static PerformanceMode GetHighPerformance();
    
    static PerformanceMode GetLowPerformance();
    
    int mValue;
    PerformanceMode();
  };
  
  class WebBrowserConsoleEvent : public WebBrowserEvent
  {
  public:
    Zilch::String GetMessage();
    
    void SetMessage(const Zilch::String& value);
    
    Zilch::String GetSource();
    
    void SetSource(const Zilch::String& value);
    
    int GetLine();
    
    void SetLine(int value);
    
    unsigned char mValue[16];
    
  protected:
    WebBrowserConsoleEvent(Zilch::NoType none) : WebBrowserEvent(none) {}
    ZilchNoCopy(WebBrowserConsoleEvent);
  };
  
  class WebBrowserCursorEvent : public WebBrowserEvent
  {
  public:
    Cursor GetCursor();
    
    void SetCursor(Cursor value);
    
    unsigned char mValue[4];
    
  protected:
    WebBrowserCursorEvent(Zilch::NoType none) : WebBrowserEvent(none) {}
    ZilchNoCopy(WebBrowserCursorEvent);
  };
  
  // An event sent when an object link changes one of its link edges.
  class ObjectLinkEvent : public Event
  {
  public:
    Zilch::HandleOf<Cog> GetNewCog();
    
    void SetNewCog(Cog* value);
    
    Zilch::HandleOf<Cog> GetOldCog();
    
    void SetOldCog(Cog* value);
    
    int GetEdgeId();
    
    void SetEdgeId(int value);
    
    unsigned char mValue[12];
    
  protected:
    ObjectLinkEvent(Zilch::NoType none) : Event(none) {}
    ZilchNoCopy(ObjectLinkEvent);
  };
  
  class Label : public Composite
  {
  public:
    Zilch::String GetText();
    
    void SetText(const Zilch::String& value);
    
    Zilch::HandleOf<Thickness> GetPadding();
    
    void SetPadding(Thickness* value);
    
    void SetTextClipping(bool __0);
    
    unsigned char mValue[24];
    
  protected:
    Label(Zilch::NoType none) : Composite(none) {}
    ZilchNoCopy(Label);
  };
  
  class JointToolTypes2D : public Zilch::ValueType
  {
  public:
    static JointToolTypes2D GetWeldJoint();
    
    static JointToolTypes2D GetGearJoint();
    
    static JointToolTypes2D GetRevoluteJoint2d();
    
    static JointToolTypes2D GetPrismaticJoint2d();
    
    static JointToolTypes2D GetPositionJoint();
    
    static JointToolTypes2D GetStickJoint();
    
    static JointToolTypes2D GetWheelJoint2d();
    
    static JointToolTypes2D GetFixedAngleJoint();
    
    int mValue;
    JointToolTypes2D();
  };
  
  class LauncherAutoRunMode : public Zilch::ValueType
  {
  public:
    static LauncherAutoRunMode GetInstallAndRun();
    
    static LauncherAutoRunMode GetIfInstalled();
    
    static LauncherAutoRunMode GetNone();
    
    int mValue;
    LauncherAutoRunMode();
  };
  
  class GizmoGrabMode : public Zilch::ValueType
  {
  public:
    static GizmoGrabMode GetHold();
    
    static GizmoGrabMode GetToggle();
    
    int mValue;
    GizmoGrabMode();
  };
  
  // Base Definition Collection.
  class DefinitionSet : public Resource
  {
  public:
    static Zilch::HandleOf<DefinitionSet> Find(const Zilch::String& name);
    
    unsigned char mValue[32];
    
  protected:
    DefinitionSet(Zilch::NoType none) : Resource(none) {}
    ZilchNoCopy(DefinitionSet);
  };
  
  class Uploader_ : public ZeroObject
  {
  public:
    Zilch::Real4 GetMissingColor();
    
    void SetMissingColor(const Zilch::Real4& value);
    
    unsigned char mValue[52];
    
  protected:
    Uploader_(Zilch::NoType none) : ZeroObject(none) {}
    ZilchNoCopy(Uploader_);
  };
  
  class PoseNode : public AnimationNode
  {
  public:
    unsigned char mValue[16];
    
  protected:
    PoseNode(Zilch::NoType none) : AnimationNode(none) {}
    ZilchNoCopy(PoseNode);
  };
  
  class Placement : public Zilch::ValueType
  {
  public:
    static Placement GetOnTop();
    
    static Placement GetCameraLocation();
    
    static Placement GetLookAtPlane();
    
    static Placement GetPlaneXY();
    
    static Placement GetLookAtPoint();
    
    static Placement GetViewAtDepth();
    
    int mValue;
    Placement();
  };
  
  class CastResultsrange : public Zilch::ReferenceType
  {
  public:
    Zilch::HandleOf<CastResultsrange> GetAll();
    
    bool GetIsNotEmpty();
    
    Zilch::HandleOf<CastResult> GetCurrent();
    
    void MoveNext();
    
    unsigned char mValue[8];
    
  protected:
    CastResultsrange(Zilch::NoType none) : Zilch::ReferenceType(none) {}
    ZilchNoCopy(CastResultsrange);
  };
  
  class CogPathEvent : public Event
  {
  public:
    Zilch::HandleOf<CogPath> GetCogPath();
    
    void SetCogPath(CogPath* value);
    
    unsigned char mValue[8];
    
  protected:
    CogPathEvent(Zilch::NoType none) : Event(none) {}
    ZilchNoCopy(CogPathEvent);
  };
  
  class ParallaxOcclusionMapping : public MaterialBlock
  {
  public:
    float GetParallaxScale();
    
    void SetParallaxScale(float value);
    
    Zilch::HandleOf<Texture> GetParallaxMap();
    
    void SetParallaxMap(Texture* value);
    
    int GetMinimumSamples();
    
    void SetMinimumSamples(int value);
    
    int GetMaximumSamples();
    
    void SetMaximumSamples(int value);
    
    bool GetSilhouette();
    
    void SetSilhouette(bool value);
    
    bool GetAmbientOcclusion();
    
    void SetAmbientOcclusion(bool value);
    
    unsigned char mValue[20];
    
  protected:
    ParallaxOcclusionMapping(Zilch::NoType none) : MaterialBlock(none) {}
    ZilchNoCopy(ParallaxOcclusionMapping);
  };
  
  // An efficient way to make per instance modifications to meshes(eg. bending level geometry)
  class MeshBenderTool : public Tool
  {
  public:
    unsigned char mValue[52];
    
  protected:
    MeshBenderTool(Zilch::NoType none) : Tool(none) {}
    ZilchNoCopy(MeshBenderTool);
  };
  
  class Refractivity : public MaterialBlock
  {
  public:
    
  protected:
    Refractivity(Zilch::NoType none) : MaterialBlock(none) {}
    ZilchNoCopy(Refractivity);
  };
  
  class ZilchPluginLibrary : public Resource
  {
  public:
    static Zilch::HandleOf<ZilchPluginLibrary> Find(const Zilch::String& name);
    
    unsigned char mValue[8];
    
  protected:
    ZilchPluginLibrary(Zilch::NoType none) : Resource(none) {}
    ZilchNoCopy(ZilchPluginLibrary);
  };
  
  class ColorDiffuse : public MaterialBlock
  {
  public:
    Zilch::Real4 GetDiffuseColor();
    
    void SetDiffuseColor(const Zilch::Real4& value);
    
    unsigned char mValue[16];
    
  protected:
    ColorDiffuse(Zilch::NoType none) : MaterialBlock(none) {}
    ZilchNoCopy(ColorDiffuse);
  };
  
  class PreviewWidgetFactory : public Zilch::ReferenceType
  {
  public:
    unsigned char mValue[28];
    
  protected:
    PreviewWidgetFactory(Zilch::NoType none) : Zilch::ReferenceType(none) {}
    ZilchNoCopy(PreviewWidgetFactory);
  };
  
  class VoxelFace : public Zilch::ValueType
  {
  public:
    static VoxelFace GetPositiveZ();
    
    static VoxelFace GetNegativeX();
    
    static VoxelFace GetNegativeZ();
    
    static VoxelFace GetPositiveX();
    
    static VoxelFace GetPositiveY();
    
    static VoxelFace GetNegativeY();
    
    int mValue;
    VoxelFace();
  };
  
  class SampleCurve_ : public ZeroObject
  {
  public:
    Zilch::Real4 GetPrimaryLineColor();
    
    void SetPrimaryLineColor(const Zilch::Real4& value);
    
    float GetPrimaryLineWidth();
    
    void SetPrimaryLineWidth(float value);
    
    Zilch::Real4 GetSecondaryLineColor();
    
    void SetSecondaryLineColor(const Zilch::Real4& value);
    
    float GetSecondaryLineWidth();
    
    void SetSecondaryLineWidth(float value);
    
    unsigned char mValue[52];
    
  protected:
    SampleCurve_(Zilch::NoType none) : ZeroObject(none) {}
    ZilchNoCopy(SampleCurve_);
  };
  
  class DebugTriangle : public Zilch::ReferenceType
  {
  public:
    Zilch::HandleOf<DebugTriangle> Float4Color(const Zilch::Real4& __0);
    
    Zilch::HandleOf<DebugTriangle> Width(float __0);
    
    Zilch::HandleOf<DebugTriangle> Duration(float __0);
    
    Zilch::HandleOf<DebugTriangle> OnTop(bool __0);
    
    Zilch::HandleOf<DebugTriangle> Filled(bool __0);
    
    Zilch::HandleOf<DebugTriangle> Border(bool __0);
    
    Zilch::HandleOf<DebugTriangle> BackShade(bool __0);
    
    Zilch::HandleOf<DebugTriangle> SpaceId(int __0);
    
    void Draw();
    
    Zilch::HandleOf<DebugTriangle> ViewAligned(bool __0);
    
    Zilch::HandleOf<DebugTriangle> Position0(const Zilch::Real3& __0);
    
    Zilch::HandleOf<DebugTriangle> Position1(const Zilch::Real3& __0);
    
    Zilch::HandleOf<DebugTriangle> Position2(const Zilch::Real3& __0);
    
    unsigned char mValue[72];
    
  protected:
    DebugTriangle(Zilch::NoType none) : Zilch::ReferenceType(none) {}
    ZilchNoCopy(DebugTriangle);
  };
  
  class ScriptEditor_ : public ZeroObject
  {
  public:
    Zilch::Real4 GetAutoCompleteConfident();
    
    void SetAutoCompleteConfident(const Zilch::Real4& value);
    
    Zilch::Real4 GetAutoCompleteNonConfident();
    
    void SetAutoCompleteNonConfident(const Zilch::Real4& value);
    
    Zilch::Real2 GetCallTipTextSize();
    
    void SetCallTipTextSize(const Zilch::Real2& value);
    
    Zilch::Real2 GetAutoCompleteSize();
    
    void SetAutoCompleteSize(const Zilch::Real2& value);
    
    Zilch::Real2 GetAutoCompleteTextSize();
    
    void SetAutoCompleteTextSize(const Zilch::Real2& value);
    
    unsigned char mValue[52];
    
  protected:
    ScriptEditor_(Zilch::NoType none) : ZeroObject(none) {}
    ZilchNoCopy(ScriptEditor_);
  };
  
  class EditorPackageLoader : public Zilch::ReferenceType
  {
  public:
    unsigned char mValue[52];
    
  protected:
    EditorPackageLoader(Zilch::NoType none) : Zilch::ReferenceType(none) {}
    ZilchNoCopy(EditorPackageLoader);
  };
  
  class ResourceSet : public Zilch::ReferenceType
  {
  public:
    unsigned char mValue[32];
    
  protected:
    ResourceSet(Zilch::NoType none) : Zilch::ReferenceType(none) {}
    ZilchNoCopy(ResourceSet);
  };
  
  class SelectorButton_ : public ZeroObject
  {
  public:
    Zilch::Real4 GetDefaultColor();
    
    void SetDefaultColor(const Zilch::Real4& value);
    
    Zilch::Real4 GetDefaultHighlightColor();
    
    void SetDefaultHighlightColor(const Zilch::Real4& value);
    
    Zilch::Real4 GetDefaultClickedColor();
    
    void SetDefaultClickedColor(const Zilch::Real4& value);
    
    Zilch::Real4 GetSelectedColor();
    
    void SetSelectedColor(const Zilch::Real4& value);
    
    Zilch::Real4 GetSelectedHighlightColor();
    
    void SetSelectedHighlightColor(const Zilch::Real4& value);
    
    Zilch::Real4 GetSelectedClickedColor();
    
    void SetSelectedClickedColor(const Zilch::Real4& value);
    
    Zilch::Real4 GetDefaultTextColor();
    
    void SetDefaultTextColor(const Zilch::Real4& value);
    
    Zilch::Real4 GetSelectedTextColor();
    
    void SetSelectedTextColor(const Zilch::Real4& value);
    
    unsigned char mValue[52];
    
  protected:
    SelectorButton_(Zilch::NoType none) : ZeroObject(none) {}
    ZilchNoCopy(SelectorButton_);
  };
  
  class RatioLayout : public Layout
  {
  public:
    unsigned char mValue[4];
    
  protected:
    RatioLayout(Zilch::NoType none) : Layout(none) {}
    ZilchNoCopy(RatioLayout);
  };
  
  class FragmentSource : public DocumentResource
  {
  public:
    static Zilch::HandleOf<FragmentSource> Find(const Zilch::String& name);
    
    unsigned char mValue[32];
    
  protected:
    FragmentSource(Zilch::NoType none) : DocumentResource(none) {}
    ZilchNoCopy(FragmentSource);
  };
  
  class ImageContent : public ContentComposition
  {
  public:
    Zilch::HandleOf<FontBuilder> GetFontBuilder();
    
    Zilch::HandleOf<GeneratedArchetype> GetGeneratedArchetype();
    
    Zilch::HandleOf<AnimationBuilder> GetAnimationBuilder();
    
    Zilch::HandleOf<SkeletonBuilder> GetSkeletonBuilder();
    
    Zilch::HandleOf<SoundBuilder> GetSoundBuilder();
    
    Zilch::HandleOf<ContentHistory> GetContentHistory();
    
    Zilch::HandleOf<SpriteSourceBuilder> GetSpriteSourceBuilder();
    
    Zilch::HandleOf<ContentCopyright> GetContentCopyright();
    
    Zilch::HandleOf<DataBuilder> GetDataBuilder();
    
    Zilch::HandleOf<BinaryBuilder> GetBinaryBuilder();
    
    Zilch::HandleOf<EffectBuilder> GetEffectBuilder();
    
    Zilch::HandleOf<ContentTags> GetContentTags();
    
    Zilch::HandleOf<ZilchScriptBuilder> GetZilchScriptBuilder();
    
    Zilch::HandleOf<TextureBuilder> GetTextureBuilder();
    
    Zilch::HandleOf<RichAnimationBuilder> GetRichAnimationBuilder();
    
    Zilch::HandleOf<FragmentBuilder> GetFragmentBuilder();
    
    Zilch::HandleOf<PhysicsMeshBuilder> GetPhysicsMeshBuilder();
    
    Zilch::HandleOf<NavMeshBuilder> GetNavMeshBuilder();
    
    Zilch::HandleOf<ContentNotes> GetContentNotes();
    
    Zilch::HandleOf<ZilchPluginBuilder> GetZilchPluginBuilder();
    
    Zilch::HandleOf<TextBuilder> GetTextBuilder();
    
    Zilch::HandleOf<HeightToNormalBuilder> GetHeightToNormalBuilder();
    
    Zilch::HandleOf<DirectImageBuilder> GetDirectImageBuilder();
    
    Zilch::HandleOf<ZilchFragmentBuilder> GetZilchFragmentBuilder();
    
    Zilch::HandleOf<GeometryImport> GetGeometryImport();
    
    Zilch::HandleOf<MeshBuilder> GetMeshBuilder();
    
    
  protected:
    ImageContent(Zilch::NoType none) : ContentComposition(none) {}
    ZilchNoCopy(ImageContent);
  };
  
  // Network Property Configuration Configures a network property.
  class NetPropertyConfig : public Zilch::ReferenceType
  {
  public:
    Zilch::String GetComponent();
    
    Zilch::String GetProperty();
    
    Zilch::HandleOf<NetChannelConfig> GetNetChannel();
    
    void SetNetChannel(NetChannelConfig* value);
    
    unsigned char mValue[12];
    
  protected:
    NetPropertyConfig(Zilch::NoType none) : Zilch::ReferenceType(none) {}
    ZilchNoCopy(NetPropertyConfig);
  };
  
  class RichAnimation : public Zilch::ReferenceType
  {
  public:
    float GetSampleTolerance();
    
    void SetSampleTolerance(float value);
    
    unsigned char mValue[104];
    
  protected:
    RichAnimation(Zilch::NoType none) : Zilch::ReferenceType(none) {}
    ZilchNoCopy(RichAnimation);
  };
  
  class SystemSpace : public Zilch::ValueType
  {
  public:
    static SystemSpace GetCameraSpace();
    
    static SystemSpace GetWorldSpace();
    
    static SystemSpace GetLocalSpace();
    
    int mValue;
    SystemSpace();
  };
  
  class PathFinderSettings : public Zilch::ReferenceType
  {
  public:
    int GetHeuristic();
    
    void SetHeuristic(int value);
    
    float GetHeuristicWeight();
    
    void SetHeuristicWeight(float value);
    
    int GetRubberbanding();
    
    void SetRubberbanding(int value);
    
    bool GetRemoveCoLinearPoints();
    
    void SetRemoveCoLinearPoints(bool value);
    
    int GetCurveType();
    
    void SetCurveType(int value);
    
    int GetPathResolution();
    
    void SetPathResolution(int value);
    
    unsigned char mValue[24];
    
  protected:
    PathFinderSettings(Zilch::NoType none) : Zilch::ReferenceType(none) {}
    ZilchNoCopy(PathFinderSettings);
  };
  
  // Dispatched after receiving a net user add response.
  class NetPeerReceivedUserAddResponse : public Event
  {
  public:
    int GetTheirNetPeerId();
    
    void SetTheirNetPeerId(int value);
    
    Zilch::HandleOf<IpAddress> GetTheirIpAddress();
    
    void SetTheirIpAddress(IpAddress* value);
    
    Zilch::HandleOf<EventBundle> GetOurRequestBundle();
    
    void SetOurRequestBundle(EventBundle* value);
    
    NetUserAddResponse GetTheirAddResponse();
    
    void SetTheirAddResponse(NetUserAddResponse value);
    
    Zilch::HandleOf<EventBundle> GetTheirResponseBundle();
    
    void SetTheirResponseBundle(EventBundle* value);
    
    int GetOurNetUserId();
    
    void SetOurNetUserId(int value);
    
    unsigned char mValue[240];
    
  protected:
    NetPeerReceivedUserAddResponse(Zilch::NoType none) : Event(none) {}
    ZilchNoCopy(NetPeerReceivedUserAddResponse);
  };
  
  class BackgroundTasks : public Zilch::ReferenceType
  {
  public:
    unsigned char mValue[52];
    
  protected:
    BackgroundTasks(Zilch::NoType none) : Zilch::ReferenceType(none) {}
    ZilchNoCopy(BackgroundTasks);
  };
  
  class ActionSystem : public Zilch::ReferenceType
  {
  public:
    unsigned char mValue[44];
    
  protected:
    ActionSystem(Zilch::NoType none) : Zilch::ReferenceType(none) {}
    ZilchNoCopy(ActionSystem);
  };
  
  class GridAxis : public Zilch::ValueType
  {
  public:
    static GridAxis GetXAxis();
    
    static GridAxis GetYAxis();
    
    static GridAxis GetZAxis();
    
    int mValue;
    GridAxis();
  };
  
  class StartGameEvent : public SendableEvent
  {
  public:
    
  protected:
    StartGameEvent(Zilch::NoType none) : SendableEvent(none) {}
    ZilchNoCopy(StartGameEvent);
  };
  
  class ToolTip_ : public ZeroObject
  {
  public:
    Zilch::Real4 GetBackgroundColor();
    
    void SetBackgroundColor(const Zilch::Real4& value);
    
    Zilch::Real4 GetBorderColor();
    
    void SetBorderColor(const Zilch::Real4& value);
    
    float GetToolTipWrapWidth();
    
    void SetToolTipWrapWidth(float value);
    
    unsigned char mValue[52];
    
  protected:
    ToolTip_(Zilch::NoType none) : ZeroObject(none) {}
    ZilchNoCopy(ToolTip_);
  };
  
  class CastResults : public Zilch::ReferenceType
  {
  public:
    Zilch::HandleOf<CastResultsrange> All();
    
    bool Empty();
    
    void Clear();
    
    unsigned char mValue[28];
    
  protected:
    CastResults(Zilch::NoType none) : Zilch::ReferenceType(none) {}
    ZilchNoCopy(CastResults);
  };
  
  class SynthWaveType : public Zilch::ValueType
  {
  public:
    static SynthWaveType GetSquareWave();
    
    static SynthWaveType GetSineWave();
    
    static SynthWaveType GetNoise();
    
    static SynthWaveType GetSawWave();
    
    static SynthWaveType GetTriangleWave();
    
    int mValue;
    SynthWaveType();
  };
  
  class RenderView : public ZeroObject
  {
  public:
    Zilch::String GetName();
    
    void SetName(const Zilch::String& value);
    
    bool GetActive();
    
    void SetActive(bool value);
    
    Zilch::Real3 GetTranslation();
    
    void SetTranslation(const Zilch::Real3& value);
    
    Zilch::Real2 GetSize();
    
    void SetSize(const Zilch::Real2& value);
    
    Zilch::HandleOf<SizePolicies> GetSizePolicy();
    
    void SetSizePolicy(SizePolicies* value);
    
    Zilch::Real2 GetMinSize();
    
    Zilch::Real4 GetColor();
    
    void SetColor(const Zilch::Real4& value);
    
    bool GetClipping();
    
    void SetClipping(bool value);
    
    Zilch::HandleOf<RootWidget> GetRootWidget();
    
    Zilch::HandleOf<Composite> GetParent();
    
    Zilch::HandleOf<Rect> GetRectInParent();
    
    Zilch::HandleOf<Rect> GetLocalRect();
    
    Zilch::HandleOf<Rect> GetScreenRect();
    
    Zilch::Real3 GetScreenPosition();
    
    Zilch::HandleOf<Thickness> GetBorderThickness();
    
    bool GetNotInLayout();
    
    void SetNotInLayout(bool value);
    
    float GetRotation();
    
    void SetRotation(float value);
    
    DockMode GetDockMode();
    
    void SetDockMode(DockMode value);
    
    bool GetVisible();
    
    void SetVisible(bool value);
    
    int GetHorizontalAlignment();
    
    void SetHorizontalAlignment(int value);
    
    int GetVerticalAlignment();
    
    void SetVerticalAlignment(int value);
    
    void Destroy();
    
    void SetSizing(SizeAxis __0, SizePolicy __1, float __2);
    
    void SizeToContents();
    
    void SetTranslationAndSize(const Zilch::Real3& __0, const Zilch::Real2& __1);
    
    void DispatchBubble(const Zilch::String& __0, Event* __1);
    
    void TakeFocus();
    
    bool TryTakeFocus();
    
    void SoftTakeFocus();
    
    void HardTakeFocus();
    
    void SetTakeFocusMode(int __0);
    
    bool HasFocus();
    
    void LoseFocus();
    
    void UpdateTransform();
    
    Zilch::HandleOf<Widget> HitTest(const Zilch::Real2& __0, Widget* __1);
    
    void ChangeRoot(RootWidget* __0);
    
    bool IsAncestorOf(Widget* __0);
    
    void MoveToFront();
    
    void MoveToBack();
    
    Zilch::Real2 ToLocal(const Zilch::Real2& __0);
    
    Zilch::Real3 ToLocal(const Zilch::Real3& __0);
    
    Zilch::Real2 ToScreen(const Zilch::Real2& __0);
    
    bool Contains(const Zilch::Real2& __0);
    
    Zilch::Real2 Measure(LayoutArea* __0);
    
    void CaptureMouse();
    
    void ReleaseMouseCapture();
    
    bool IsMouseOver();
    
    void MarkAsNeedsUpdate(bool __0);
    
    void NeedsRedraw();
    
    void SetHideOnClose(bool __0);
    
    void SetInteractive(bool __0);
    
    unsigned char mValue[340];
    
  protected:
    RenderView(Zilch::NoType none) : ZeroObject(none) {}
    ZilchNoCopy(RenderView);
  };
  
  // Dispatched after receiving a net user add request.
  class NetPeerReceivedUserAddRequest : public Event
  {
  public:
    int GetTheirNetPeerId();
    
    void SetTheirNetPeerId(int value);
    
    Zilch::HandleOf<IpAddress> GetTheirIpAddress();
    
    void SetTheirIpAddress(IpAddress* value);
    
    Zilch::HandleOf<EventBundle> GetTheirRequestBundle();
    
    void SetTheirRequestBundle(EventBundle* value);
    
    bool GetReturnOurAddResponse();
    
    void SetReturnOurAddResponse(bool value);
    
    Zilch::HandleOf<EventBundle> GetReturnOurResponseBundle();
    
    void SetReturnOurResponseBundle(EventBundle* value);
    
    Zilch::HandleOf<Cog> GetReturnTheirNetUser();
    
    void SetReturnTheirNetUser(Cog* value);
    
    int GetTheirNetUserId();
    
    void SetTheirNetUserId(int value);
    
    unsigned char mValue[244];
    
  protected:
    NetPeerReceivedUserAddRequest(Zilch::NoType none) : Event(none) {}
    ZilchNoCopy(NetPeerReceivedUserAddRequest);
  };
  
  class PropertyView_ : public ZeroObject
  {
  public:
    float GetPropertySize();
    
    void SetPropertySize(float value);
    
    float GetPropertySpacing();
    
    void SetPropertySpacing(float value);
    
    float GetIndentSize();
    
    void SetIndentSize(float value);
    
    unsigned char mValue[52];
    
  protected:
    PropertyView_(Zilch::NoType none) : ZeroObject(none) {}
    ZilchNoCopy(PropertyView_);
  };
  
  class IconButton_ : public ZeroObject
  {
  public:
    Zilch::Real4 GetDefaultColor();
    
    void SetDefaultColor(const Zilch::Real4& value);
    
    Zilch::Real4 GetHoverColor();
    
    void SetHoverColor(const Zilch::Real4& value);
    
    Zilch::Real4 GetClickedColor();
    
    void SetClickedColor(const Zilch::Real4& value);
    
    Zilch::Real2 GetPadding();
    
    void SetPadding(const Zilch::Real2& value);
    
    Zilch::Real4 GetActiveColor();
    
    void SetActiveColor(const Zilch::Real4& value);
    
    Zilch::Real4 GetActiveHoverColor();
    
    void SetActiveHoverColor(const Zilch::Real4& value);
    
    unsigned char mValue[52];
    
  protected:
    IconButton_(Zilch::NoType none) : ZeroObject(none) {}
    ZilchNoCopy(IconButton_);
  };
  
  class LightType : public Zilch::ValueType
  {
  public:
    static LightType GetSpot();
    
    static LightType GetPoint();
    
    static LightType GetBox();
    
    static LightType GetDirectional();
    
    int mValue;
    LightType();
  };
  
  class ChainNode : public AnimationNode
  {
  public:
    Zilch::HandleOf<AnimationNode> GetFrom();
    
    void SetFrom(AnimationNode* value);
    
    Zilch::HandleOf<AnimationNode> GetTo();
    
    void SetTo(AnimationNode* value);
    
    unsigned char mValue[8];
    
  protected:
    ChainNode(Zilch::NoType none) : AnimationNode(none) {}
    ZilchNoCopy(ChainNode);
  };
  
  class TextContent : public ContentComposition
  {
  public:
    Zilch::HandleOf<FontBuilder> GetFontBuilder();
    
    Zilch::HandleOf<GeneratedArchetype> GetGeneratedArchetype();
    
    Zilch::HandleOf<AnimationBuilder> GetAnimationBuilder();
    
    Zilch::HandleOf<SkeletonBuilder> GetSkeletonBuilder();
    
    Zilch::HandleOf<SoundBuilder> GetSoundBuilder();
    
    Zilch::HandleOf<ContentHistory> GetContentHistory();
    
    Zilch::HandleOf<SpriteSourceBuilder> GetSpriteSourceBuilder();
    
    Zilch::HandleOf<ContentCopyright> GetContentCopyright();
    
    Zilch::HandleOf<DataBuilder> GetDataBuilder();
    
    Zilch::HandleOf<BinaryBuilder> GetBinaryBuilder();
    
    Zilch::HandleOf<EffectBuilder> GetEffectBuilder();
    
    Zilch::HandleOf<ContentTags> GetContentTags();
    
    Zilch::HandleOf<ZilchScriptBuilder> GetZilchScriptBuilder();
    
    Zilch::HandleOf<TextureBuilder> GetTextureBuilder();
    
    Zilch::HandleOf<RichAnimationBuilder> GetRichAnimationBuilder();
    
    Zilch::HandleOf<FragmentBuilder> GetFragmentBuilder();
    
    Zilch::HandleOf<PhysicsMeshBuilder> GetPhysicsMeshBuilder();
    
    Zilch::HandleOf<NavMeshBuilder> GetNavMeshBuilder();
    
    Zilch::HandleOf<ContentNotes> GetContentNotes();
    
    Zilch::HandleOf<ZilchPluginBuilder> GetZilchPluginBuilder();
    
    Zilch::HandleOf<TextBuilder> GetTextBuilder();
    
    Zilch::HandleOf<HeightToNormalBuilder> GetHeightToNormalBuilder();
    
    Zilch::HandleOf<DirectImageBuilder> GetDirectImageBuilder();
    
    Zilch::HandleOf<ZilchFragmentBuilder> GetZilchFragmentBuilder();
    
    Zilch::HandleOf<GeometryImport> GetGeometryImport();
    
    Zilch::HandleOf<MeshBuilder> GetMeshBuilder();
    
    
  protected:
    TextContent(Zilch::NoType none) : ContentComposition(none) {}
    ZilchNoCopy(TextContent);
  };
  
  class ProjectDialog_ : public ZeroObject
  {
  public:
    Zilch::Real4 GetTabAreaColor();
    
    void SetTabAreaColor(const Zilch::Real4& value);
    
    Zilch::Real4 GetProjectAreaColor();
    
    void SetProjectAreaColor(const Zilch::Real4& value);
    
    Zilch::Real4 GetMouseOverTabColor();
    
    void SetMouseOverTabColor(const Zilch::Real4& value);
    
    Zilch::Real4 GetBorderColor();
    
    void SetBorderColor(const Zilch::Real4& value);
    
    unsigned char mValue[52];
    
  protected:
    ProjectDialog_(Zilch::NoType none) : ZeroObject(none) {}
    ZilchNoCopy(ProjectDialog_);
  };
  
  class Selection : public MetaSelection
  {
  public:
    Zilch::HandleOf<CogId> GetPrimaryCog();
    
    void SetPrimaryCog(CogId* value);
    
    bool IsPresent(Cog* __0);
    
    void AddObject(Cog* __0);
    
    void RemoveObject(Cog* __0);
    
    Zilch::HandleOf<SelectionSelectionRange> AllObjects();
    
    void SelectOnly(Cog* __0);
    
    void SelectionChanged();
    
    void FinalSelectionChanged();
    
    
  protected:
    Selection(Zilch::NoType none) : MetaSelection(none) {}
    ZilchNoCopy(Selection);
  };
  
  // A frame update event that is expected to be synced.
  class LockStepUpdateEvent : public UpdateEvent
  {
  public:
    int GetCurrentFrame();
    
    void SetCurrentFrame(int value);
    
    unsigned char mValue[4];
    
  protected:
    LockStepUpdateEvent(Zilch::NoType none) : UpdateEvent(none) {}
    ZilchNoCopy(LockStepUpdateEvent);
  };
  
  class TabWidth : public Zilch::ValueType
  {
  public:
    static TabWidth GetFourSpaces();
    
    static TabWidth GetTwoSpaces();
    
    int mValue;
    TabWidth();
  };
  
  class OsMouseEventData : public Zilch::ReferenceType
  {
  public:
    Zilch::String GetEventId();
    
    void SetEventId(const Zilch::String& value);
    
    unsigned char mValue[16];
    
  protected:
    OsMouseEventData(Zilch::NoType none) : Zilch::ReferenceType(none) {}
    ZilchNoCopy(OsMouseEventData);
  };
  
  class TargetSpace : public Zilch::ValueType
  {
  public:
    static TargetSpace GetWorldSpace();
    
    static TargetSpace GetLocalSpace();
    
    int mValue;
    TargetSpace();
  };
  
  class ProgressBar_ : public ZeroObject
  {
  public:
    Zilch::Real4 GetBackgroundColor();
    
    void SetBackgroundColor(const Zilch::Real4& value);
    
    Zilch::Real4 GetProgressBarColor();
    
    void SetProgressBarColor(const Zilch::Real4& value);
    
    float GetPadding();
    
    void SetPadding(float value);
    
    unsigned char mValue[52];
    
  protected:
    ProgressBar_(Zilch::NoType none) : ZeroObject(none) {}
    ZilchNoCopy(ProgressBar_);
  };
  
  class Revisions : public Zilch::ReferenceType
  {
  public:
    unsigned char mValue[16];
    
  protected:
    Revisions(Zilch::NoType none) : Zilch::ReferenceType(none) {}
    ZilchNoCopy(Revisions);
  };
  
  // Dispatched after an outgoing/incoming net channel property change is detected during a particular replication phase.
  class NetChannelPropertyChange : public Event
  {
  public:
    ReplicationPhase GetReplicationPhase();
    
    void SetReplicationPhase(ReplicationPhase value);
    
    TransmissionDirection GetDirection();
    
    void SetDirection(TransmissionDirection value);
    
    Zilch::HandleOf<Cog> GetObject();
    
    void SetObject(Cog* value);
    
    Zilch::String GetChannelName();
    
    void SetChannelName(const Zilch::String& value);
    
    Zilch::String GetComponentName();
    
    void SetComponentName(const Zilch::String& value);
    
    Zilch::String GetPropertyName();
    
    void SetPropertyName(const Zilch::String& value);
    
    unsigned char mValue[24];
    
  protected:
    NetChannelPropertyChange(Zilch::NoType none) : Event(none) {}
    ZilchNoCopy(NetChannelPropertyChange);
  };
  
  class ToolBox_ : public ZeroObject
  {
  public:
    Zilch::Real4 GetBackgroundColor();
    
    void SetBackgroundColor(const Zilch::Real4& value);
    
    Zilch::Real4 GetItemColor();
    
    void SetItemColor(const Zilch::Real4& value);
    
    Zilch::Real4 GetItemHighlight();
    
    void SetItemHighlight(const Zilch::Real4& value);
    
    float GetItemHeight();
    
    void SetItemHeight(float value);
    
    unsigned char mValue[52];
    
  protected:
    ToolBox_(Zilch::NoType none) : ZeroObject(none) {}
    ZilchNoCopy(ToolBox_);
  };
  
  class CogCommand : public Zilch::ReferenceType
  {
  public:
    unsigned char mValue[128];
    
  protected:
    CogCommand(Zilch::NoType none) : Zilch::ReferenceType(none) {}
    ZilchNoCopy(CogCommand);
  };
  
  class Tweakables : public ZeroObject
  {
  public:
    unsigned char mValue[52];
    
  protected:
    Tweakables(Zilch::NoType none) : ZeroObject(none) {}
    ZilchNoCopy(Tweakables);
  };
  
  class RgbUsage : public Zilch::ValueType
  {
  public:
    static RgbUsage GetNormal();
    
    static RgbUsage GetColor();
    
    static RgbUsage GetMask();
    
    int mValue;
    RgbUsage();
  };
  
  class ContentStore_ : public ZeroObject
  {
  public:
    Zilch::Real4 GetContentHighlightColor();
    
    void SetContentHighlightColor(const Zilch::Real4& value);
    
    Zilch::Real4 GetContentSelectColor();
    
    void SetContentSelectColor(const Zilch::Real4& value);
    
    float GetContentPadding();
    
    void SetContentPadding(float value);
    
    float GetContentCellSize();
    
    void SetContentCellSize(float value);
    
    Zilch::String GetStorePath();
    
    void SetStorePath(const Zilch::String& value);
    
    unsigned char mValue[52];
    
  protected:
    ContentStore_(Zilch::NoType none) : ZeroObject(none) {}
    ZilchNoCopy(ContentStore_);
  };
  
  class TextureWrapping : public Zilch::ValueType
  {
  public:
    static TextureWrapping GetClamp();
    
    static TextureWrapping GetMirror();
    
    static TextureWrapping GetBorder();
    
    static TextureWrapping GetRepeat();
    
    int mValue;
    TextureWrapping();
  };
  
  class MipGeneration : public Zilch::ValueType
  {
  public:
    static MipGeneration GetAll();
    
    static MipGeneration GetLoad();
    
    static MipGeneration GetNone();
    
    int mValue;
    MipGeneration();
  };
  
  class CurveType : public Zilch::ValueType
  {
  public:
    static CurveType GetBSpline();
    
    static CurveType GetCatmulRom();
    
    static CurveType GetLinear();
    
    int mValue;
    CurveType();
  };
  
  class Zero : public Zilch::ReferenceType
  {
  public:
    static void Connect(ZeroObject* __0, const Zilch::String& __1, const Zilch::Delegate& __2);
    
    static void Disconnect(ZeroObject* __0, const Zilch::String& __1, ZeroObject* __2);
    
    static void DisconnectAll(Cog* __0, Component* __1);
    
    static Zilch::HandleOf<ScriptStack> GetScriptStack();
    
    static Zilch::HandleOf<BackgroundTasks> GetBackgroundTasks();
    
    static Zilch::HandleOf<ActionSystem> GetActionSystem();
    
    static Zilch::HandleOf<CoreGraphics> GetCoreGraphics();
    
    static Zilch::HandleOf<ValueEditorFactory> GetValueEditorFactory();
    
    static Zilch::HandleOf<PreviewWidgetFactory> GetPreviewWidgetFactory();
    
    static Zilch::HandleOf<JointBuilder> GetJointBuilder();
    
    static Zilch::HandleOf<SoundSystem> GetSoundSystem();
    
    static Zilch::HandleOf<GraphicsReport> GetGraphicsReport();
    
    static Zilch::HandleOf<ObjectStore> GetObjectStore();
    
    static Zilch::HandleOf<EditorPackageLoader> GetEditorPackageLoader();
    
    static Zilch::HandleOf<Editor> GetEditor();
    
    static Zilch::HandleOf<ColorScheme> GetColorScheme();
    
    static Zilch::HandleOf<Mouse> GetMouse();
    
    static Zilch::HandleOf<Shell> GetShell();
    
    static Zilch::HandleOf<MultiTouch> GetMultiTouch();
    
    static Zilch::HandleOf<CommandManager> GetCommandManager();
    
    static Zilch::HandleOf<Keyboard> GetKeyboard();
    
    static Zilch::HandleOf<Joysticks> GetJoysticks();
    
    static Zilch::HandleOf<WidgetManager> GetWidgetManager();
    
    static Zilch::HandleOf<Engine> GetEngine();
    
    static Zilch::HandleOf<StressTest> GetStressTest();
    
    static Zilch::HandleOf<TimeSystem> GetTimeSystem();
    
    static Zilch::HandleOf<DocumentationLibrary> GetDocumentationLibrary();
    
    static Zilch::HandleOf<Gamepads> GetGamepads();
    
    static Zilch::HandleOf<ResourceSystem> GetResourceSystem();
    
    static Zilch::HandleOf<PhysicsEngine> GetPhysicsEngine();
    
    static Zilch::HandleOf<Environment> GetEnvironment();
    
    static Zilch::HandleOf<PropertyEditors> GetPropertyEditors();
    
    static Zilch::HandleOf<UiAutomator> GetUiAutomator();
    
    
  protected:
    Zero(Zilch::NoType none) : Zilch::ReferenceType(none) {}
    ZilchNoCopy(Zero);
  };
}

namespace Zilch
{
  ZilchDeclareExternalBaseType(ZeroEngine::ZeroObject, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalDerivedType(ZeroEngine::Component, ZeroEngine::ZeroObject, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalDerivedType(ZeroEngine::ProjectDescription, ZeroEngine::Component, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalDerivedType(ZeroEngine::AnimGraphPreview_, ZeroEngine::ZeroObject, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalBaseType(ZeroEngine::Action, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalBaseType(ZeroEngine::PropertyReal, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalDerivedType(ZeroEngine::ActionSet, ZeroEngine::Action, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalBaseType(ZeroEngine::Ease, Zilch::TypeCopyMode::ValueType, ZeroNoImportExport);
  ZilchDeclareExternalBaseType(ZeroEngine::PropertyReal2, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalBaseType(ZeroEngine::PropertyReal3, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalBaseType(ZeroEngine::PropertyReal4, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalBaseType(ZeroEngine::PropertyQuaternion, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalBaseType(ZeroEngine::PropertyInteger, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalBaseType(ZeroEngine::PropertyBoolean, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalBaseType(ZeroEngine::PropertyString, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalDerivedType(ZeroEngine::Resource, ZeroEngine::ZeroObject, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalDerivedType(ZeroEngine::SampleCurve, ZeroEngine::Resource, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalDerivedType(ZeroEngine::Modal_, ZeroEngine::ZeroObject, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalBaseType(ZeroEngine::CollisionFilter, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalBaseType(ZeroEngine::FilterCollisionFlags, Zilch::TypeCopyMode::ValueType, ZeroNoImportExport);
  ZilchDeclareExternalBaseType(ZeroEngine::CollisionEndBlock, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalBaseType(ZeroEngine::CollisionPersistedBlock, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalBaseType(ZeroEngine::CollisionStartBlock, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalBaseType(ZeroEngine::PreSolveBlock, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalDerivedType(ZeroEngine::TextureRegion, ZeroEngine::Resource, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalDerivedType(ZeroEngine::SpriteSource, ZeroEngine::TextureRegion, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalBaseType(ZeroEngine::JointRange, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalBaseType(ZeroEngine::JointHolder, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalDerivedType(ZeroEngine::Mesh, ZeroEngine::Resource, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalBaseType(ZeroEngine::VertexSemantic, Zilch::TypeCopyMode::ValueType, ZeroNoImportExport);
  ZilchDeclareExternalBaseType(ZeroEngine::RelativeVelocityJointBlock, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalBaseType(ZeroEngine::PathType, Zilch::TypeCopyMode::ValueType, ZeroNoImportExport);
  ZilchDeclareExternalDerivedType(ZeroEngine::WebBrowserManager, ZeroEngine::ZeroObject, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalDerivedType(ZeroEngine::PhysicsEffect, ZeroEngine::Component, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalDerivedType(ZeroEngine::FlowEffect, ZeroEngine::PhysicsEffect, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalDerivedType(ZeroEngine::Components_, ZeroEngine::ZeroObject, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalBaseType(ZeroEngine::ParticleRenderMode, Zilch::TypeCopyMode::ValueType, ZeroNoImportExport);
  ZilchDeclareExternalBaseType(ZeroEngine::FlickedStick, Zilch::TypeCopyMode::ValueType, ZeroNoImportExport);
  ZilchDeclareExternalDerivedType(ZeroEngine::Collider, ZeroEngine::Component, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalDerivedType(ZeroEngine::ConvexMeshCollider, ZeroEngine::Collider, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalDerivedType(ZeroEngine::ConvexMesh, ZeroEngine::Resource, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalDerivedType(ZeroEngine::MultiConvexMesh, ZeroEngine::Resource, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalBaseType(ZeroEngine::Sounds, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalBaseType(ZeroEngine::StressTest, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalDerivedType(ZeroEngine::Graphical, ZeroEngine::Component, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalDerivedType(ZeroEngine::BaseSprite, ZeroEngine::Graphical, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalDerivedType(ZeroEngine::SpriteLayer, ZeroEngine::Resource, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalBaseType(ZeroEngine::AnimationNode, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalDerivedType(ZeroEngine::DirectBlend, ZeroEngine::AnimationNode, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalDerivedType(ZeroEngine::LevelPath, ZeroEngine::Component, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalDerivedType(ZeroEngine::Path, ZeroEngine::Resource, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalDerivedType(ZeroEngine::NetUserCreator, ZeroEngine::Component, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalDerivedType(ZeroEngine::Archetype, ZeroEngine::Resource, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalBaseType(ZeroEngine::GearJointBlock, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalDerivedType(ZeroEngine::BasicDirectionEffect, ZeroEngine::PhysicsEffect, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalDerivedType(ZeroEngine::ForceEffect, ZeroEngine::BasicDirectionEffect, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalDerivedType(ZeroEngine::AmbientLight, ZeroEngine::Component, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalBaseType(ZeroEngine::Layout, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalBaseType(ZeroEngine::Thickness, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalDerivedType(ZeroEngine::Widget, ZeroEngine::ZeroObject, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalDerivedType(ZeroEngine::Composite, ZeroEngine::Widget, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalBaseType(ZeroEngine::LayoutArea, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalBaseType(ZeroEngine::ThreadedWebRequest, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalDerivedType(ZeroEngine::Font, ZeroEngine::Resource, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalBaseType(ZeroEngine::BlockingWebRequest, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalDerivedType(ZeroEngine::Joint, ZeroEngine::Component, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalDerivedType(ZeroEngine::StickJoint, ZeroEngine::Joint, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalBaseType(ZeroEngine::ObjectView, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalBaseType(ZeroEngine::Event, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalDerivedType(ZeroEngine::CustomPhysicsEffectEvent, ZeroEngine::Event, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalDerivedType(ZeroEngine::CustomPhysicsEffect, ZeroEngine::PhysicsEffect, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalDerivedType(ZeroEngine::Motion, ZeroEngine::Component, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalDerivedType(ZeroEngine::RigidBody, ZeroEngine::Motion, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalBaseType(ZeroEngine::PointEndCondition, Zilch::TypeCopyMode::ValueType, ZeroNoImportExport);
  ZilchDeclareExternalBaseType(ZeroEngine::ValueEditorFactory, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalDerivedType(ZeroEngine::Controls_, ZeroEngine::ZeroObject, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalBaseType(ZeroEngine::StickJointBlock, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalBaseType(ZeroEngine::GizmoSnapMode, Zilch::TypeCopyMode::ValueType, ZeroNoImportExport);
  ZilchDeclareExternalBaseType(ZeroEngine::SpriteFill, Zilch::TypeCopyMode::ValueType, ZeroNoImportExport);
  ZilchDeclareExternalDerivedType(ZeroEngine::GridDraw, ZeroEngine::Component, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalDerivedType(ZeroEngine::DynamicModel, ZeroEngine::Graphical, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalDerivedType(ZeroEngine::Material, ZeroEngine::Resource, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalBaseType(ZeroEngine::UprightJointBlock, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalBaseType(ZeroEngine::HierarchyListrange, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalDerivedType(ZeroEngine::Cog, ZeroEngine::ZeroObject, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalDerivedType(ZeroEngine::SendableEvent, ZeroEngine::Event, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalDerivedType(ZeroEngine::LockStepEvent, ZeroEngine::SendableEvent, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalDerivedType(ZeroEngine::LockStepKeyEvent, ZeroEngine::LockStepEvent, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalBaseType(ZeroEngine::IpAddress, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalBaseType(ZeroEngine::InternetProtocol, Zilch::TypeCopyMode::ValueType, ZeroNoImportExport);
  ZilchDeclareExternalDerivedType(ZeroEngine::JointEvent, ZeroEngine::Event, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalDerivedType(ZeroEngine::LockStepGamepadEvent, ZeroEngine::LockStepEvent, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalDerivedType(ZeroEngine::LockStepGamepadButtonEvent, ZeroEngine::LockStepGamepadEvent, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalDerivedType(ZeroEngine::DocumentResource, ZeroEngine::Resource, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalBaseType(ZeroEngine::CapsuleScalingMode, Zilch::TypeCopyMode::ValueType, ZeroNoImportExport);
  ZilchDeclareExternalDerivedType(ZeroEngine::UprightJoint, ZeroEngine::Joint, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalDerivedType(ZeroEngine::SimpleSocket, ZeroEngine::Component, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalDerivedType(ZeroEngine::TcpSocket, ZeroEngine::ZeroObject, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalDerivedType(ZeroEngine::SimpleGizmoBase, ZeroEngine::Component, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalDerivedType(ZeroEngine::ArrowGizmo, ZeroEngine::SimpleGizmoBase, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalBaseType(ZeroEngine::GizmoPivot, Zilch::TypeCopyMode::ValueType, ZeroNoImportExport);
  ZilchDeclareExternalDerivedType(ZeroEngine::NetPeerReceivedConnectRequest, ZeroEngine::Event, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalDerivedType(ZeroEngine::EventBundle, ZeroEngine::ZeroObject, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalBaseType(ZeroEngine::MaterialBlendMode, Zilch::TypeCopyMode::ValueType, ZeroNoImportExport);
  ZilchDeclareExternalDerivedType(ZeroEngine::Gamepads, ZeroEngine::ZeroObject, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalDerivedType(ZeroEngine::Gamepad, ZeroEngine::ZeroObject, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalDerivedType(ZeroEngine::ManipulatorJoint, ZeroEngine::Joint, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalDerivedType(ZeroEngine::TorqueEffect, ZeroEngine::PhysicsEffect, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalDerivedType(ZeroEngine::SyncDebugFrameEvent, ZeroEngine::SendableEvent, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalDerivedType(ZeroEngine::LockStepPeer, ZeroEngine::ZeroObject, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalBaseType(ZeroEngine::VerticalAlignment, Zilch::TypeCopyMode::ValueType, ZeroNoImportExport);
  ZilchDeclareExternalDerivedType(ZeroEngine::PointMassAnchorConnection, ZeroEngine::Component, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalBaseType(ZeroEngine::ConstraintPositionCorrection, Zilch::TypeCopyMode::ValueType, ZeroNoImportExport);
  ZilchDeclareExternalDerivedType(ZeroEngine::TaskButton_, ZeroEngine::ZeroObject, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalBaseType(ZeroEngine::GodRayLightType, Zilch::TypeCopyMode::ValueType, ZeroNoImportExport);
  ZilchDeclareExternalBaseType(ZeroEngine::NetRole, Zilch::TypeCopyMode::ValueType, ZeroNoImportExport);
  ZilchDeclareExternalBaseType(ZeroEngine::DebugBox, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalDerivedType(ZeroEngine::SkinnedModel, ZeroEngine::Graphical, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalDerivedType(ZeroEngine::UserConfig, ZeroEngine::Component, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalDerivedType(ZeroEngine::BuoyancyEffect, ZeroEngine::PhysicsEffect, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalBaseType(ZeroEngine::WheelJoint2dBlock, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalBaseType(ZeroEngine::AnimationBuilder, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalBaseType(ZeroEngine::HeightMapSubTool, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalDerivedType(ZeroEngine::CreateDestroyTool, ZeroEngine::HeightMapSubTool, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalBaseType(ZeroEngine::Keys, Zilch::TypeCopyMode::ValueType, ZeroNoImportExport);
  ZilchDeclareExternalDerivedType(ZeroEngine::IgnoreSpaceEffects, ZeroEngine::Component, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalDerivedType(ZeroEngine::BasicAnimation, ZeroEngine::AnimationNode, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalDerivedType(ZeroEngine::Animation, ZeroEngine::Resource, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalBaseType(ZeroEngine::AnimPlayMode, Zilch::TypeCopyMode::ValueType, ZeroNoImportExport);
  ZilchDeclareExternalDerivedType(ZeroEngine::LockStepMouseEvent, ZeroEngine::LockStepEvent, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalDerivedType(ZeroEngine::LockStepMouseButtonEvent, ZeroEngine::LockStepMouseEvent, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalDerivedType(ZeroEngine::TreeView_, ZeroEngine::ZeroObject, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalBaseType(ZeroEngine::PositionCorrection, Zilch::TypeCopyMode::ValueType, ZeroNoImportExport);
  ZilchDeclareExternalDerivedType(ZeroEngine::PlayersJoinedEvent, ZeroEngine::SendableEvent, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalDerivedType(ZeroEngine::Chrome, ZeroEngine::ZeroObject, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalDerivedType(ZeroEngine::TransformGizmo, ZeroEngine::Component, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalDerivedType(ZeroEngine::ManipulatorTool, ZeroEngine::TransformGizmo, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalDerivedType(ZeroEngine::ViewportMenu_, ZeroEngine::ZeroObject, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalBaseType(ZeroEngine::SystemChildMode, Zilch::TypeCopyMode::ValueType, ZeroNoImportExport);
  ZilchDeclareExternalDerivedType(ZeroEngine::SpriteText, ZeroEngine::BaseSprite, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalBaseType(ZeroEngine::GraphicsQuality, Zilch::TypeCopyMode::ValueType, ZeroNoImportExport);
  ZilchDeclareExternalBaseType(ZeroEngine::HierarchyNameRange, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalBaseType(ZeroEngine::WidgetListRange, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalBaseType(ZeroEngine::Location, Zilch::TypeCopyMode::ValueType, ZeroNoImportExport);
  ZilchDeclareExternalDerivedType(ZeroEngine::PhysicsCarWheel, ZeroEngine::Component, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalDerivedType(ZeroEngine::PhysicsCar, ZeroEngine::Component, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalBaseType(ZeroEngine::LinearAxisJointBlock, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalDerivedType(ZeroEngine::HeightManipulationTool, ZeroEngine::HeightMapSubTool, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalDerivedType(ZeroEngine::RaiseLowerTool, ZeroEngine::HeightManipulationTool, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalDerivedType(ZeroEngine::NetPeerReceivedConnectResponse, ZeroEngine::Event, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalBaseType(ZeroEngine::ConnectResponse, Zilch::TypeCopyMode::ValueType, ZeroNoImportExport);
  ZilchDeclareExternalDerivedType(ZeroEngine::ZilchComponent, ZeroEngine::Component, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalBaseType(ZeroEngine::SplineAnimatorMode, Zilch::TypeCopyMode::ValueType, ZeroNoImportExport);
  ZilchDeclareExternalDerivedType(ZeroEngine::StackLayout, ZeroEngine::Layout, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalBaseType(ZeroEngine::LayoutDirection, Zilch::TypeCopyMode::ValueType, ZeroNoImportExport);
  ZilchDeclareExternalBaseType(ZeroEngine::Sphere, Zilch::TypeCopyMode::ValueType, ZeroNoImportExport);
  ZilchDeclareExternalDerivedType(ZeroEngine::GraphicalEvent, ZeroEngine::Event, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalDerivedType(ZeroEngine::MaterialBlock, ZeroEngine::ZeroObject, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalDerivedType(ZeroEngine::Lambert, ZeroEngine::MaterialBlock, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalBaseType(ZeroEngine::IntegrationMethods, Zilch::TypeCopyMode::ValueType, ZeroNoImportExport);
  ZilchDeclareExternalDerivedType(ZeroEngine::ParticleAnimator, ZeroEngine::Component, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalDerivedType(ZeroEngine::ParticleCollisionPlane, ZeroEngine::ParticleAnimator, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalDerivedType(ZeroEngine::TextEvent, ZeroEngine::Event, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalBaseType(ZeroEngine::BaseCastFilter, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalDerivedType(ZeroEngine::CastFilter, ZeroEngine::BaseCastFilter, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalDerivedType(ZeroEngine::CollisionGroup, ZeroEngine::Resource, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalBaseType(ZeroEngine::AttachType, Zilch::TypeCopyMode::ValueType, ZeroNoImportExport);
  ZilchDeclareExternalDerivedType(ZeroEngine::ParticleTorusRoller, ZeroEngine::ParticleAnimator, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalDerivedType(ZeroEngine::GameEvent, ZeroEngine::Event, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalDerivedType(ZeroEngine::GameSession, ZeroEngine::Cog, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalDerivedType(ZeroEngine::JointLimit, ZeroEngine::Component, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalBaseType(ZeroEngine::BeamGeometryMode, Zilch::TypeCopyMode::ValueType, ZeroNoImportExport);
  ZilchDeclareExternalDerivedType(ZeroEngine::RevoluteJoint2d, ZeroEngine::Joint, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalBaseType(ZeroEngine::GizmoGrab, Zilch::TypeCopyMode::ValueType, ZeroNoImportExport);
  ZilchDeclareExternalBaseType(ZeroEngine::BlendMode, Zilch::TypeCopyMode::ValueType, ZeroNoImportExport);
  ZilchDeclareExternalBaseType(ZeroEngine::ContentHistory, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalBaseType(ZeroEngine::HotKeyBinding, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalDerivedType(ZeroEngine::Reactive, ZeroEngine::Component, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalDerivedType(ZeroEngine::PhysicsMaterial, ZeroEngine::Resource, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalDerivedType(ZeroEngine::WeldJoint, ZeroEngine::Joint, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalBaseType(ZeroEngine::JointToolTypes3D, Zilch::TypeCopyMode::ValueType, ZeroNoImportExport);
  ZilchDeclareExternalDerivedType(ZeroEngine::NodeGraph_, ZeroEngine::ZeroObject, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalDerivedType(ZeroEngine::MassOverride, ZeroEngine::Component, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalDerivedType(ZeroEngine::CogInitializerEvent, ZeroEngine::Event, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalDerivedType(ZeroEngine::CogInitializer, ZeroEngine::ZeroObject, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalDerivedType(ZeroEngine::DynamicMeshSaver, ZeroEngine::Component, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalDerivedType(ZeroEngine::MetaDropEvent, ZeroEngine::Event, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalDerivedType(ZeroEngine::MouseEvent, ZeroEngine::Event, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalDerivedType(ZeroEngine::ViewportMouseEvent, ZeroEngine::MouseEvent, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalDerivedType(ZeroEngine::NetLinkDisconnected, ZeroEngine::Event, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalBaseType(ZeroEngine::DisconnectReason, Zilch::TypeCopyMode::ValueType, ZeroNoImportExport);
  ZilchDeclareExternalBaseType(ZeroEngine::TransmissionDirection, Zilch::TypeCopyMode::ValueType, ZeroNoImportExport);
  ZilchDeclareExternalDerivedType(ZeroEngine::Text, ZeroEngine::Widget, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalDerivedType(ZeroEngine::ParticleSystem, ZeroEngine::Graphical, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalDerivedType(ZeroEngine::AttachSystem, ZeroEngine::ParticleSystem, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalBaseType(ZeroEngine::TextureCompression, Zilch::TypeCopyMode::ValueType, ZeroNoImportExport);
  ZilchDeclareExternalDerivedType(ZeroEngine::MaterialEditorOnly, ZeroEngine::MaterialBlock, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalDerivedType(ZeroEngine::ListControls_, ZeroEngine::ZeroObject, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalBaseType(ZeroEngine::UiAutomator, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalBaseType(ZeroEngine::OsMouseEvent, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalDerivedType(ZeroEngine::TextBox_, ZeroEngine::ZeroObject, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalDerivedType(ZeroEngine::ShaderView, ZeroEngine::Widget, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalDerivedType(ZeroEngine::TextureView, ZeroEngine::ShaderView, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalDerivedType(ZeroEngine::Texture, ZeroEngine::TextureRegion, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalBaseType(ZeroEngine::SpriteSourceBuilder, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalBaseType(ZeroEngine::RevoluteJointBlock, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalBaseType(ZeroEngine::CustomConstraintInfo, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalDerivedType(ZeroEngine::CustomJoint, ZeroEngine::Joint, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalDerivedType(ZeroEngine::CapsuleCollider, ZeroEngine::Collider, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalBaseType(ZeroEngine::AxisDirection, Zilch::TypeCopyMode::ValueType, ZeroNoImportExport);
  ZilchDeclareExternalDerivedType(ZeroEngine::AnimationSet, ZeroEngine::Resource, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalDerivedType(ZeroEngine::SoundSpace, ZeroEngine::Component, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalBaseType(ZeroEngine::SoundInstance, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalDerivedType(ZeroEngine::SoundCue, ZeroEngine::Resource, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalBaseType(ZeroEngine::SpaceMapvalueRange, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalDerivedType(ZeroEngine::Space, ZeroEngine::Cog, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalBaseType(ZeroEngine::CastResult, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalDerivedType(ZeroEngine::LauncherConfig, ZeroEngine::Component, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalDerivedType(ZeroEngine::TransformProxyObject, ZeroEngine::Component, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalBaseType(ZeroEngine::PrismaticJointBlock, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalDerivedType(ZeroEngine::WebBrowserSetup, ZeroEngine::ZeroObject, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalDerivedType(ZeroEngine::Viewport_, ZeroEngine::ZeroObject, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalDerivedType(ZeroEngine::MeshCollider, ZeroEngine::Collider, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalDerivedType(ZeroEngine::PhysicsMesh, ZeroEngine::Resource, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalDerivedType(ZeroEngine::MultiConvexMeshCollider, ZeroEngine::Collider, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalDerivedType(ZeroEngine::RelativeVelocityJoint, ZeroEngine::Joint, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalDerivedType(ZeroEngine::ReflectiveMapping, ZeroEngine::MaterialBlock, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalDerivedType(ZeroEngine::TilePaletteSource, ZeroEngine::Resource, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalDerivedType(ZeroEngine::FillLayout, ZeroEngine::Layout, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalDerivedType(ZeroEngine::SelectTool, ZeroEngine::Component, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalDerivedType(ZeroEngine::Viewport, ZeroEngine::Composite, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalBaseType(ZeroEngine::GizmoBasis, Zilch::TypeCopyMode::ValueType, ZeroNoImportExport);
  ZilchDeclareExternalBaseType(ZeroEngine::PropertyEditors, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalDerivedType(ZeroEngine::ParticleWander, ZeroEngine::ParticleAnimator, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalDerivedType(ZeroEngine::RayTracedProvider, ZeroEngine::Component, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalDerivedType(ZeroEngine::HierarchyEvent, ZeroEngine::Event, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalBaseType(ZeroEngine::ContentCopyright, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalBaseType(ZeroEngine::EventConnection, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalDerivedType(ZeroEngine::CollisionTable, ZeroEngine::Resource, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalDerivedType(ZeroEngine::OsWindow, ZeroEngine::ZeroObject, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalDerivedType(ZeroEngine::WindowsOsWindow, ZeroEngine::OsWindow, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalBaseType(ZeroEngine::ConstraintConfigBlock, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalBaseType(ZeroEngine::JoystickRange, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalBaseType(ZeroEngine::Joystick, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalDerivedType(ZeroEngine::NetUserOwnerChanged, ZeroEngine::Event, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalBaseType(ZeroEngine::DebugCircle, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalDerivedType(ZeroEngine::ShaderGraph, ZeroEngine::Resource, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalDerivedType(ZeroEngine::SearchView_, ZeroEngine::ZeroObject, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalDerivedType(ZeroEngine::NetPeerSentUserAddRequest, ZeroEngine::Event, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalDerivedType(ZeroEngine::JointMotor, ZeroEngine::Component, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalDerivedType(ZeroEngine::JointSpring, ZeroEngine::Component, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalBaseType(ZeroEngine::EffectBuilder, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalDerivedType(ZeroEngine::SoundTag, ZeroEngine::Resource, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalBaseType(ZeroEngine::PhyGunJointBlock, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalDerivedType(ZeroEngine::PathRequestEvent, ZeroEngine::Event, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalDerivedType(ZeroEngine::TextButton, ZeroEngine::Composite, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalBaseType(ZeroEngine::PhysicsMeshBuilder, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalDerivedType(ZeroEngine::Default_, ZeroEngine::ZeroObject, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalBaseType(ZeroEngine::NetUserAddResponse, Zilch::TypeCopyMode::ValueType, ZeroNoImportExport);
  ZilchDeclareExternalDerivedType(ZeroEngine::ObjectEvent, ZeroEngine::Event, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalDerivedType(ZeroEngine::NetPeerSentConnectRequest, ZeroEngine::Event, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalBaseType(ZeroEngine::NetProperties, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalDerivedType(ZeroEngine::Baked, ZeroEngine::MaterialBlock, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalBaseType(ZeroEngine::MouseButtons, Zilch::TypeCopyMode::ValueType, ZeroNoImportExport);
  ZilchDeclareExternalBaseType(ZeroEngine::Mouse, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalDerivedType(ZeroEngine::ParticleEmitter, ZeroEngine::Component, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalDerivedType(ZeroEngine::ParticleEmitterShared, ZeroEngine::ParticleEmitter, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalBaseType(ZeroEngine::ContactRange, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalBaseType(ZeroEngine::GeometryMaterialBlock, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalDerivedType(ZeroEngine::PhysicsMaterialBlock, ZeroEngine::GeometryMaterialBlock, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalBaseType(ZeroEngine::TextureFilter, Zilch::TypeCopyMode::ValueType, ZeroNoImportExport);
  ZilchDeclareExternalDerivedType(ZeroEngine::ActiveFrameEvent, ZeroEngine::SendableEvent, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalBaseType(ZeroEngine::RubberBanding, Zilch::TypeCopyMode::ValueType, ZeroNoImportExport);
  ZilchDeclareExternalBaseType(ZeroEngine::CameraTransparentSort, Zilch::TypeCopyMode::ValueType, ZeroNoImportExport);
  ZilchDeclareExternalBaseType(ZeroEngine::ContentItem, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalBaseType(ZeroEngine::FeelerMode, Zilch::TypeCopyMode::ValueType, ZeroNoImportExport);
  ZilchDeclareExternalDerivedType(ZeroEngine::Atlas, ZeroEngine::Resource, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalDerivedType(ZeroEngine::NavMesh, ZeroEngine::Component, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalDerivedType(ZeroEngine::NavMeshSource, ZeroEngine::Resource, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalDerivedType(ZeroEngine::AutoOrientToVelocity, ZeroEngine::Component, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalDerivedType(ZeroEngine::ParticleGradientAnimator, ZeroEngine::ParticleAnimator, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalDerivedType(ZeroEngine::ColorGradient, ZeroEngine::Resource, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalBaseType(ZeroEngine::LinkState, Zilch::TypeCopyMode::ValueType, ZeroNoImportExport);
  ZilchDeclareExternalBaseType(ZeroEngine::TcpSocketBind, Zilch::TypeCopyMode::ValueType, ZeroNoImportExport);
  ZilchDeclareExternalDerivedType(ZeroEngine::JoystickEvent, ZeroEngine::Event, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalDerivedType(ZeroEngine::GeometryMaterial, ZeroEngine::Resource, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalBaseType(ZeroEngine::Mutator, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalDerivedType(ZeroEngine::Beveler, ZeroEngine::Mutator, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalDerivedType(ZeroEngine::Bevel, ZeroEngine::Beveler, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalDerivedType(ZeroEngine::GraphicsMaterialBlock, ZeroEngine::GeometryMaterialBlock, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalDerivedType(ZeroEngine::HotKeyDataSet, ZeroEngine::Resource, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalBaseType(ZeroEngine::DockArea, Zilch::TypeCopyMode::ValueType, ZeroNoImportExport);
  ZilchDeclareExternalDerivedType(ZeroEngine::ContentComposition, ZeroEngine::ContentItem, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalDerivedType(ZeroEngine::DataContent, ZeroEngine::ContentComposition, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalBaseType(ZeroEngine::FontBuilder, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalBaseType(ZeroEngine::GeneratedArchetype, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalBaseType(ZeroEngine::SkeletonBuilder, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalBaseType(ZeroEngine::SoundBuilder, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalBaseType(ZeroEngine::DataBuilder, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalBaseType(ZeroEngine::BinaryBuilder, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalBaseType(ZeroEngine::ContentTags, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalBaseType(ZeroEngine::ZilchScriptBuilder, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalBaseType(ZeroEngine::TextureBuilder, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalBaseType(ZeroEngine::RichAnimationBuilder, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalBaseType(ZeroEngine::FragmentBuilder, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalBaseType(ZeroEngine::NavMeshBuilder, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalBaseType(ZeroEngine::ContentNotes, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalBaseType(ZeroEngine::ZilchPluginBuilder, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalBaseType(ZeroEngine::TextBuilder, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalBaseType(ZeroEngine::HeightToNormalBuilder, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalBaseType(ZeroEngine::DirectImageBuilder, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalBaseType(ZeroEngine::ZilchFragmentBuilder, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalBaseType(ZeroEngine::GeometryImport, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalBaseType(ZeroEngine::MeshBuilder, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalDerivedType(ZeroEngine::DragEffect, ZeroEngine::PhysicsEffect, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalBaseType(ZeroEngine::DebugLineCross, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalDerivedType(ZeroEngine::PreviewWidgets_, ZeroEngine::ZeroObject, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalBaseType(ZeroEngine::TextureUvMode, Zilch::TypeCopyMode::ValueType, ZeroNoImportExport);
  ZilchDeclareExternalBaseType(ZeroEngine::DocumentationLibrary, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalDerivedType(ZeroEngine::Renderer, ZeroEngine::Component, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalDerivedType(ZeroEngine::ForwardRenderer, ZeroEngine::Renderer, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalDerivedType(ZeroEngine::LockStepMouseScrollEvent, ZeroEngine::LockStepMouseEvent, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalDerivedType(ZeroEngine::SpecularFromAlpha, ZeroEngine::MaterialBlock, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalDerivedType(ZeroEngine::ParticleSystemCommonData, ZeroEngine::ParticleSystem, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalDerivedType(ZeroEngine::SpriteParticleSystem, ZeroEngine::ParticleSystemCommonData, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalBaseType(ZeroEngine::RaycastProvider, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalDerivedType(ZeroEngine::BackgroundTasks_, ZeroEngine::ZeroObject, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalBaseType(ZeroEngine::VortexInterpolationStates, Zilch::TypeCopyMode::ValueType, ZeroNoImportExport);
  ZilchDeclareExternalDerivedType(ZeroEngine::CogTransformGizmo, ZeroEngine::Component, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalDerivedType(ZeroEngine::CogScaleGizmo, ZeroEngine::CogTransformGizmo, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalDerivedType(ZeroEngine::JointConfigOverride, ZeroEngine::Component, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalBaseType(ZeroEngine::Facing, Zilch::TypeCopyMode::ValueType, ZeroNoImportExport);
  ZilchDeclareExternalDerivedType(ZeroEngine::ReactiveViewport, ZeroEngine::Viewport, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalBaseType(ZeroEngine::AntiAliasingType, Zilch::TypeCopyMode::ValueType, ZeroNoImportExport);
  ZilchDeclareExternalDerivedType(ZeroEngine::FixedAngleJoint, ZeroEngine::Joint, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalDerivedType(ZeroEngine::BoxCollider, ZeroEngine::Collider, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalBaseType(ZeroEngine::Buttons, Zilch::TypeCopyMode::ValueType, ZeroNoImportExport);
  ZilchDeclareExternalDerivedType(ZeroEngine::TextBoxButton_, ZeroEngine::ZeroObject, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalDerivedType(ZeroEngine::ModalStrip_, ZeroEngine::ZeroObject, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalDerivedType(ZeroEngine::Transparency, ZeroEngine::MaterialBlock, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalBaseType(ZeroEngine::CameraViewportListrange, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalDerivedType(ZeroEngine::CameraViewport, ZeroEngine::Component, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalDerivedType(ZeroEngine::TileMapSource, ZeroEngine::Resource, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalBaseType(ZeroEngine::GizmoDragMode, Zilch::TypeCopyMode::ValueType, ZeroNoImportExport);
  ZilchDeclareExternalDerivedType(ZeroEngine::DeveloperConfig, ZeroEngine::Component, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalBaseType(ZeroEngine::SelectionSelectionRange, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalBaseType(ZeroEngine::CastFilterState, Zilch::TypeCopyMode::ValueType, ZeroNoImportExport);
  ZilchDeclareExternalDerivedType(ZeroEngine::SquareGizmo, ZeroEngine::SimpleGizmoBase, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalDerivedType(ZeroEngine::MovementBase, ZeroEngine::Component, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalDerivedType(ZeroEngine::Wandering, ZeroEngine::MovementBase, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalDerivedType(ZeroEngine::Component_, ZeroEngine::ZeroObject, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalBaseType(ZeroEngine::Heuristic, Zilch::TypeCopyMode::ValueType, ZeroNoImportExport);
  ZilchDeclareExternalDerivedType(ZeroEngine::CylinderCollider, ZeroEngine::Collider, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalDerivedType(ZeroEngine::ScreenDropGenerator, ZeroEngine::Component, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalDerivedType(ZeroEngine::BaseCollisionEvent, ZeroEngine::Event, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalDerivedType(ZeroEngine::PreSolveEvent, ZeroEngine::BaseCollisionEvent, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalDerivedType(ZeroEngine::AlphaTest, ZeroEngine::MaterialBlock, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalBaseType(ZeroEngine::LightFrag, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalDerivedType(ZeroEngine::TileView_, ZeroEngine::ZeroObject, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalDerivedType(ZeroEngine::Editors_, ZeroEngine::ZeroObject, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalBaseType(ZeroEngine::IslandType, Zilch::TypeCopyMode::ValueType, ZeroNoImportExport);
  ZilchDeclareExternalDerivedType(ZeroEngine::RenderToTexture, ZeroEngine::Component, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalBaseType(ZeroEngine::SoundTagEntry, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalBaseType(ZeroEngine::ParticleGeometry, Zilch::TypeCopyMode::ValueType, ZeroNoImportExport);
  ZilchDeclareExternalDerivedType(ZeroEngine::ZilchEvent, ZeroEngine::Event, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalDerivedType(ZeroEngine::MultiSprite, ZeroEngine::BaseSprite, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalDerivedType(ZeroEngine::NetEventSent, ZeroEngine::Event, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalBaseType(ZeroEngine::SolverSubType, Zilch::TypeCopyMode::ValueType, ZeroNoImportExport);
  ZilchDeclareExternalDerivedType(ZeroEngine::ZilchState, ZeroEngine::Component, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalBaseType(ZeroEngine::ImageFilter, Zilch::TypeCopyMode::ValueType, ZeroNoImportExport);
  ZilchDeclareExternalBaseType(ZeroEngine::OutputTextureFormat, Zilch::TypeCopyMode::ValueType, ZeroNoImportExport);
  ZilchDeclareExternalBaseType(ZeroEngine::ContactPoint, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalDerivedType(ZeroEngine::MeshBender, ZeroEngine::Component, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalDerivedType(ZeroEngine::RuntimeSpline, ZeroEngine::Component, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalBaseType(ZeroEngine::ControlMode, Zilch::TypeCopyMode::ValueType, ZeroNoImportExport);
  ZilchDeclareExternalDerivedType(ZeroEngine::ParticleAttractor, ZeroEngine::ParticleAnimator, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalDerivedType(ZeroEngine::Skeleton_, ZeroEngine::ZeroObject, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalBaseType(ZeroEngine::ResourceSystem, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalDerivedType(ZeroEngine::SphereCollider, ZeroEngine::Collider, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalDerivedType(ZeroEngine::EditorUi_, ZeroEngine::ZeroObject, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalDerivedType(ZeroEngine::CogPath, ZeroEngine::ZeroObject, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalBaseType(ZeroEngine::CogPathPreference, Zilch::TypeCopyMode::ValueType, ZeroNoImportExport);
  ZilchDeclareExternalDerivedType(ZeroEngine::Hierarchy, ZeroEngine::Component, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalDerivedType(ZeroEngine::CheckBox_, ZeroEngine::ZeroObject, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalDerivedType(ZeroEngine::EditorViewport, ZeroEngine::ReactiveViewport, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalBaseType(ZeroEngine::OwnerShip, Zilch::TypeCopyMode::ValueType, ZeroNoImportExport);
  ZilchDeclareExternalBaseType(ZeroEngine::AlphaUsage, Zilch::TypeCopyMode::ValueType, ZeroNoImportExport);
  ZilchDeclareExternalDerivedType(ZeroEngine::CreationTool, ZeroEngine::Component, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalDerivedType(ZeroEngine::PointMassSystem, ZeroEngine::Component, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalDerivedType(ZeroEngine::ClothSystem, ZeroEngine::PointMassSystem, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalDerivedType(ZeroEngine::ContentImporter_, ZeroEngine::ZeroObject, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalDerivedType(ZeroEngine::SplineParticleAnimator, ZeroEngine::ParticleAnimator, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalBaseType(ZeroEngine::Ray, Zilch::TypeCopyMode::ValueType, ZeroNoImportExport);
  ZilchDeclareExternalDerivedType(ZeroEngine::Orientation, ZeroEngine::Component, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalBaseType(ZeroEngine::BitStream, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalBaseType(ZeroEngine::HorizontalAlignment, Zilch::TypeCopyMode::ValueType, ZeroNoImportExport);
  ZilchDeclareExternalDerivedType(ZeroEngine::LogicGraph_, ZeroEngine::ZeroObject, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalDerivedType(ZeroEngine::Net_, ZeroEngine::ZeroObject, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalDerivedType(ZeroEngine::MeshParticleEmitter, ZeroEngine::ParticleEmitterShared, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalDerivedType(ZeroEngine::Keyboard, ZeroEngine::ZeroObject, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalDerivedType(ZeroEngine::WebBrowserEvent, ZeroEngine::Event, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalDerivedType(ZeroEngine::WebBrowserPointQueryEvent, ZeroEngine::WebBrowserEvent, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalDerivedType(ZeroEngine::WebRequester, ZeroEngine::Component, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalBaseType(ZeroEngine::DebugObb, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalBaseType(ZeroEngine::ProjectionMode, Zilch::TypeCopyMode::ValueType, ZeroNoImportExport);
  ZilchDeclareExternalDerivedType(ZeroEngine::LightingBlock, ZeroEngine::ZeroObject, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalDerivedType(ZeroEngine::GameViewport, ZeroEngine::ReactiveViewport, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalBaseType(ZeroEngine::PrismaticJoint2dBlock, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalDerivedType(ZeroEngine::LockStepGamepadUpdateEvent, ZeroEngine::LockStepGamepadEvent, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalBaseType(ZeroEngine::PhysicsEngine, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalDerivedType(ZeroEngine::Slider_, ZeroEngine::ZeroObject, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalBaseType(ZeroEngine::ScriptStack, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalBaseType(ZeroEngine::SizeAxis, Zilch::TypeCopyMode::ValueType, ZeroNoImportExport);
  ZilchDeclareExternalDerivedType(ZeroEngine::NetUserLostObjectOwnership, ZeroEngine::Event, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalBaseType(ZeroEngine::ParticleAnimation, Zilch::TypeCopyMode::ValueType, ZeroNoImportExport);
  ZilchDeclareExternalDerivedType(ZeroEngine::TileMap, ZeroEngine::Component, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalBaseType(ZeroEngine::DockMode, Zilch::TypeCopyMode::ValueType, ZeroNoImportExport);
  ZilchDeclareExternalBaseType(ZeroEngine::ShadowSoftening, Zilch::TypeCopyMode::ValueType, ZeroNoImportExport);
  ZilchDeclareExternalDerivedType(ZeroEngine::ActionGroup, ZeroEngine::ActionSet, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalDerivedType(ZeroEngine::ScreenSpaceReflections, ZeroEngine::MaterialBlock, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalBaseType(ZeroEngine::ObjectStore, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalBaseType(ZeroEngine::StoreResult, Zilch::TypeCopyMode::ValueType, ZeroNoImportExport);
  ZilchDeclareExternalDerivedType(ZeroEngine::ResourceTable, ZeroEngine::Resource, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalDerivedType(ZeroEngine::ResourceEvent, ZeroEngine::Event, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalBaseType(ZeroEngine::TransferMode, Zilch::TypeCopyMode::ValueType, ZeroNoImportExport);
  ZilchDeclareExternalBaseType(ZeroEngine::Aabb, Zilch::TypeCopyMode::ValueType, ZeroNoImportExport);
  ZilchDeclareExternalDerivedType(ZeroEngine::ObjectLinkAnchor, ZeroEngine::Component, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalBaseType(ZeroEngine::ObjectLinkRange, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalDerivedType(ZeroEngine::KeyboardEvent, ZeroEngine::Event, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalBaseType(ZeroEngine::KeyState, Zilch::TypeCopyMode::ValueType, ZeroNoImportExport);
  ZilchDeclareExternalBaseType(ZeroEngine::NetProperty, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalDerivedType(ZeroEngine::VortexEffect, ZeroEngine::PhysicsEffect, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalBaseType(ZeroEngine::VortexEndCondition, Zilch::TypeCopyMode::ValueType, ZeroNoImportExport);
  ZilchDeclareExternalBaseType(ZeroEngine::EventRange, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalDerivedType(ZeroEngine::UpdateEvent, ZeroEngine::Event, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalBaseType(ZeroEngine::PhysicsCarCarWheelRange, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalDerivedType(ZeroEngine::SelectiveNode, ZeroEngine::AnimationNode, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalDerivedType(ZeroEngine::AreaEvent, ZeroEngine::Event, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalBaseType(ZeroEngine::RigidBodyDynamicState, Zilch::TypeCopyMode::ValueType, ZeroNoImportExport);
  ZilchDeclareExternalBaseType(ZeroEngine::Mode2DStates, Zilch::TypeCopyMode::ValueType, ZeroNoImportExport);
  ZilchDeclareExternalDerivedType(ZeroEngine::WebBrowserDownloadEvent, ZeroEngine::WebBrowserEvent, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalDerivedType(ZeroEngine::DockLayout, ZeroEngine::Layout, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalBaseType(ZeroEngine::DebugSphere, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalDerivedType(ZeroEngine::GamepadEvent, ZeroEngine::Event, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalDerivedType(ZeroEngine::Popup_, ZeroEngine::ZeroObject, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalDerivedType(ZeroEngine::Actions, ZeroEngine::ActionSet, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalDerivedType(ZeroEngine::ObjectConnectingTool, ZeroEngine::Component, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalDerivedType(ZeroEngine::BaseJointTool, ZeroEngine::ObjectConnectingTool, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalDerivedType(ZeroEngine::JointTool2D, ZeroEngine::BaseJointTool, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalDerivedType(ZeroEngine::SharedContent, ZeroEngine::Component, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalDerivedType(ZeroEngine::Transform, ZeroEngine::Component, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalDerivedType(ZeroEngine::ActionSpace, ZeroEngine::Component, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalDerivedType(ZeroEngine::NetObject, ZeroEngine::Component, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalDerivedType(ZeroEngine::NetSpace, ZeroEngine::NetObject, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalDerivedType(ZeroEngine::PhysicsSpace, ZeroEngine::Component, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalDerivedType(ZeroEngine::GravityEffect, ZeroEngine::BasicDirectionEffect, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalDerivedType(ZeroEngine::Projector, ZeroEngine::Component, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalDerivedType(ZeroEngine::CogRotateGizmo, ZeroEngine::CogTransformGizmo, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalDerivedType(ZeroEngine::HeightMapTool, ZeroEngine::Component, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalDerivedType(ZeroEngine::LockStepMouse, ZeroEngine::Component, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalDerivedType(ZeroEngine::LinearAxisJoint, ZeroEngine::Joint, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalDerivedType(ZeroEngine::EditorSettings, ZeroEngine::Component, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalDerivedType(ZeroEngine::RecentProjects, ZeroEngine::Component, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalDerivedType(ZeroEngine::RingGizmo, ZeroEngine::SimpleGizmoBase, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalDerivedType(ZeroEngine::Sprite, ZeroEngine::BaseSprite, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalDerivedType(ZeroEngine::GeometryPointManipulator, ZeroEngine::Component, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalDerivedType(ZeroEngine::PhyGunJoint, ZeroEngine::Joint, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalDerivedType(ZeroEngine::DynamicMotor, ZeroEngine::Component, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalDerivedType(ZeroEngine::MotionBlur, ZeroEngine::Component, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalDerivedType(ZeroEngine::HeightMapCollider, ZeroEngine::Collider, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalDerivedType(ZeroEngine::DefaultViewportSetup, ZeroEngine::Component, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalDerivedType(ZeroEngine::LockStepSyncChecker, ZeroEngine::Component, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalDerivedType(ZeroEngine::AnimationGraph, ZeroEngine::Component, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalDerivedType(ZeroEngine::EditorBone, ZeroEngine::Component, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalDerivedType(ZeroEngine::LockStepSpace, ZeroEngine::Component, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalDerivedType(ZeroEngine::TimeConfig, ZeroEngine::Component, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalDerivedType(ZeroEngine::EditorCameraController, ZeroEngine::Component, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalDerivedType(ZeroEngine::SizerGizmo, ZeroEngine::Component, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalDerivedType(ZeroEngine::JointDebugDrawConfig, ZeroEngine::Component, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalDerivedType(ZeroEngine::UniversalJoint, ZeroEngine::Joint, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalDerivedType(ZeroEngine::NavGrid, ZeroEngine::Component, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalDerivedType(ZeroEngine::LockStepKeyboard, ZeroEngine::Component, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalDerivedType(ZeroEngine::PrismaticJoint, ZeroEngine::Joint, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalDerivedType(ZeroEngine::RandomContext, ZeroEngine::Component, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalDerivedType(ZeroEngine::DynamicMeshCollider, ZeroEngine::Collider, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalDerivedType(ZeroEngine::EditorConfig, ZeroEngine::Component, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalDerivedType(ZeroEngine::BoxParticleEmitter, ZeroEngine::ParticleEmitterShared, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalDerivedType(ZeroEngine::PrismaticJoint2d, ZeroEngine::Joint, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalDerivedType(ZeroEngine::WindEffect, ZeroEngine::PhysicsEffect, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalDerivedType(ZeroEngine::Ribbon, ZeroEngine::Component, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalDerivedType(ZeroEngine::LevelGeometry, ZeroEngine::Component, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalDerivedType(ZeroEngine::NetUser, ZeroEngine::NetObject, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalDerivedType(ZeroEngine::WheelJoint, ZeroEngine::Joint, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalDerivedType(ZeroEngine::Fog, ZeroEngine::Component, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalDerivedType(ZeroEngine::MainConfig, ZeroEngine::Component, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalDerivedType(ZeroEngine::DefaultGameSetup, ZeroEngine::Component, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalDerivedType(ZeroEngine::LockStepGame, ZeroEngine::Component, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalDerivedType(ZeroEngine::Gizmo, ZeroEngine::Component, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalDerivedType(ZeroEngine::ThrustEffect, ZeroEngine::PhysicsEffect, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalDerivedType(ZeroEngine::ObjectLink, ZeroEngine::Component, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalDerivedType(ZeroEngine::VoxelChunk, ZeroEngine::Component, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalDerivedType(ZeroEngine::SoundListener, ZeroEngine::Component, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalDerivedType(ZeroEngine::SoundEmitter, ZeroEngine::Component, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalDerivedType(ZeroEngine::ScreenDrops, ZeroEngine::Component, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalDerivedType(ZeroEngine::RevoluteJoint, ZeroEngine::Joint, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalDerivedType(ZeroEngine::Shadow, ZeroEngine::Component, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalDerivedType(ZeroEngine::ProxyControlPoint, ZeroEngine::Component, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalDerivedType(ZeroEngine::ParticleColorAnimator, ZeroEngine::ParticleAnimator, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalDerivedType(ZeroEngine::DynamicMeshGenerator, ZeroEngine::Component, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalDerivedType(ZeroEngine::GeometryMesh3D, ZeroEngine::Component, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalDerivedType(ZeroEngine::DynamicMesh, ZeroEngine::Component, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalDerivedType(ZeroEngine::BasicPointEffect, ZeroEngine::PhysicsEffect, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalDerivedType(ZeroEngine::PointForceEffect, ZeroEngine::BasicPointEffect, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalDerivedType(ZeroEngine::ParentingTool, ZeroEngine::ObjectConnectingTool, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalDerivedType(ZeroEngine::Light, ZeroEngine::Graphical, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalDerivedType(ZeroEngine::VoxelChunkMaterials, ZeroEngine::Component, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalDerivedType(ZeroEngine::HeightMapModel, ZeroEngine::Graphical, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalDerivedType(ZeroEngine::SpriteTextBlock, ZeroEngine::Component, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalDerivedType(ZeroEngine::CogSizerGizmo, ZeroEngine::CogTransformGizmo, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalDerivedType(ZeroEngine::SpriteBeam, ZeroEngine::BaseSprite, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalDerivedType(ZeroEngine::GodRayLight, ZeroEngine::Component, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalDerivedType(ZeroEngine::Attractive, ZeroEngine::Component, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalDerivedType(ZeroEngine::EditorIcon, ZeroEngine::Component, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalDerivedType(ZeroEngine::GraphicsSpace, ZeroEngine::Component, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalDerivedType(ZeroEngine::GeometryMesh, ZeroEngine::Component, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalDerivedType(ZeroEngine::ScreenWarpRing, ZeroEngine::Component, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalDerivedType(ZeroEngine::Model, ZeroEngine::Graphical, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalDerivedType(ZeroEngine::RayTraceProperties, ZeroEngine::Component, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalDerivedType(ZeroEngine::SphericalParticleEmitter, ZeroEngine::ParticleEmitterShared, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalDerivedType(ZeroEngine::DefaultCamera, ZeroEngine::Component, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalDerivedType(ZeroEngine::MainWindowConfig, ZeroEngine::Component, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalDerivedType(ZeroEngine::RopeCreator, ZeroEngine::Component, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalDerivedType(ZeroEngine::LineParticleEmitter, ZeroEngine::ParticleEmitter, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalDerivedType(ZeroEngine::Area, ZeroEngine::Component, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalDerivedType(ZeroEngine::ReactiveSpace, ZeroEngine::Component, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalDerivedType(ZeroEngine::LinearParticleAnimator, ZeroEngine::ParticleAnimator, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalDerivedType(ZeroEngine::DynamicController, ZeroEngine::Component, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalDerivedType(ZeroEngine::RayTracedPhysicsProvider, ZeroEngine::RayTracedProvider, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalDerivedType(ZeroEngine::Camera, ZeroEngine::Component, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalDerivedType(ZeroEngine::TranslateTool, ZeroEngine::TransformGizmo, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalDerivedType(ZeroEngine::ParticleTwister, ZeroEngine::ParticleAnimator, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalDerivedType(ZeroEngine::GizmoDrag, ZeroEngine::Component, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalDerivedType(ZeroEngine::SimpleSound, ZeroEngine::Component, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalDerivedType(ZeroEngine::MouseCapture, ZeroEngine::Component, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalDerivedType(ZeroEngine::TranslateGizmo, ZeroEngine::Component, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalDerivedType(ZeroEngine::GeometryPainter2D, ZeroEngine::Component, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalDerivedType(ZeroEngine::TileEditor2D, ZeroEngine::Component, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalDerivedType(ZeroEngine::WheelJoint2d, ZeroEngine::Joint, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalDerivedType(ZeroEngine::RayTracedGraphicsProvider, ZeroEngine::RayTracedProvider, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalDerivedType(ZeroEngine::EditorRenderer, ZeroEngine::ForwardRenderer, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalDerivedType(ZeroEngine::Ssao, ZeroEngine::Component, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalDerivedType(ZeroEngine::CameraViewports, ZeroEngine::Component, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalDerivedType(ZeroEngine::JointTool3D, ZeroEngine::BaseJointTool, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalDerivedType(ZeroEngine::PositionJoint, ZeroEngine::Joint, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalDerivedType(ZeroEngine::Attractor, ZeroEngine::MovementBase, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalDerivedType(ZeroEngine::GizmoSpace, ZeroEngine::Component, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalDerivedType(ZeroEngine::NetPeer, ZeroEngine::NetObject, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalDerivedType(ZeroEngine::PulleyJoint, ZeroEngine::Joint, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalDerivedType(ZeroEngine::ModelVisualizer, ZeroEngine::Component, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalDerivedType(ZeroEngine::DeferredRenderer, ZeroEngine::Renderer, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalDerivedType(ZeroEngine::Feelers, ZeroEngine::MovementBase, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalDerivedType(ZeroEngine::Project, ZeroEngine::Component, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalDerivedType(ZeroEngine::HeightMap, ZeroEngine::Component, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalDerivedType(ZeroEngine::ObjectSystem, ZeroEngine::ParticleSystemCommonData, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalDerivedType(ZeroEngine::LightningParticleEmitter, ZeroEngine::ParticleEmitter, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalDerivedType(ZeroEngine::RotateTool, ZeroEngine::TransformGizmo, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalDerivedType(ZeroEngine::PointMassAnchor, ZeroEngine::Component, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalDerivedType(ZeroEngine::ScaleTool, ZeroEngine::TransformGizmo, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalDerivedType(ZeroEngine::ParticleCollisionHeightmap, ZeroEngine::ParticleAnimator, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalDerivedType(ZeroEngine::RotationProxy, ZeroEngine::TransformProxyObject, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalDerivedType(ZeroEngine::ZilchPluginConfig, ZeroEngine::Component, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalDerivedType(ZeroEngine::Blocking, ZeroEngine::Component, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalDerivedType(ZeroEngine::CustomCollisionEventTracker, ZeroEngine::Component, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalDerivedType(ZeroEngine::SplineParticleEmitter, ZeroEngine::ParticleEmitterShared, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalDerivedType(ZeroEngine::TimeSpace, ZeroEngine::Component, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalDerivedType(ZeroEngine::LockStepSyncIgnore, ZeroEngine::Component, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalDerivedType(ZeroEngine::ContentConfig, ZeroEngine::Component, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalDerivedType(ZeroEngine::FixedAspectRatio, ZeroEngine::Component, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalDerivedType(ZeroEngine::PointGravityEffect, ZeroEngine::BasicPointEffect, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalDerivedType(ZeroEngine::TextEditorConfig, ZeroEngine::Component, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalDerivedType(ZeroEngine::SimpleAnimation, ZeroEngine::Component, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalDerivedType(ZeroEngine::SceneEffect, ZeroEngine::Component, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalDerivedType(ZeroEngine::SkyBox, ZeroEngine::SceneEffect, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalDerivedType(ZeroEngine::LockStepGamepads, ZeroEngine::Component, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalDerivedType(ZeroEngine::EllipsoidCollider, ZeroEngine::Collider, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalDerivedType(ZeroEngine::CogTranslateGizmo, ZeroEngine::CogTransformGizmo, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalDerivedType(ZeroEngine::Region, ZeroEngine::Component, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalDerivedType(ZeroEngine::GraphicsConfig, ZeroEngine::Component, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalDerivedType(ZeroEngine::GearJoint, ZeroEngine::Joint, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalBaseType(ZeroEngine::AuthorityMode, Zilch::TypeCopyMode::ValueType, ZeroNoImportExport);
  ZilchDeclareExternalDerivedType(ZeroEngine::RingGizmoEvent, ZeroEngine::Event, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalDerivedType(ZeroEngine::CollisionGroupEvent, ZeroEngine::BaseCollisionEvent, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalBaseType(ZeroEngine::CogNameRange, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalDerivedType(ZeroEngine::ZilchObject, ZeroEngine::ZeroObject, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalBaseType(ZeroEngine::CogHashSetRange, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalBaseType(ZeroEngine::CogId, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalDerivedType(ZeroEngine::FontContent, ZeroEngine::ContentComposition, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalBaseType(ZeroEngine::RolloffCurveType, Zilch::TypeCopyMode::ValueType, ZeroNoImportExport);
  ZilchDeclareExternalBaseType(ZeroEngine::Environment, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalDerivedType(ZeroEngine::WeightedTextures, ZeroEngine::MaterialBlock, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalBaseType(ZeroEngine::SoundData, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalBaseType(ZeroEngine::UniversalJointBlock, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalBaseType(ZeroEngine::ContactTangentTypes, Zilch::TypeCopyMode::ValueType, ZeroNoImportExport);
  ZilchDeclareExternalBaseType(ZeroEngine::Spacerange, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalBaseType(ZeroEngine::CoreGraphics, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalBaseType(ZeroEngine::DebugText, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalBaseType(ZeroEngine::Centering, Zilch::TypeCopyMode::ValueType, ZeroNoImportExport);
  ZilchDeclareExternalDerivedType(ZeroEngine::SpecularMapping, ZeroEngine::MaterialBlock, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalBaseType(ZeroEngine::MultiMaterialBlock, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalDerivedType(ZeroEngine::NetLinkConnected, ZeroEngine::Event, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalDerivedType(ZeroEngine::ActionSequence, ZeroEngine::ActionSet, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalDerivedType(ZeroEngine::MultiTouch, ZeroEngine::ZeroObject, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalDerivedType(ZeroEngine::WebBrowserTextEvent, ZeroEngine::WebBrowserEvent, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalBaseType(ZeroEngine::DebugLine, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalDerivedType(ZeroEngine::AnimationGraphEvent, ZeroEngine::Event, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalBaseType(ZeroEngine::EffectType, Zilch::TypeCopyMode::ValueType, ZeroNoImportExport);
  ZilchDeclareExternalBaseType(ZeroEngine::TimeSystem, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalBaseType(ZeroEngine::PointInterpolationStates, Zilch::TypeCopyMode::ValueType, ZeroNoImportExport);
  ZilchDeclareExternalDerivedType(ZeroEngine::ConnectionEvent, ZeroEngine::Event, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalDerivedType(ZeroEngine::ReceivedDataEvent, ZeroEngine::ConnectionEvent, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalBaseType(ZeroEngine::WheelReference, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalBaseType(ZeroEngine::LockStepGamepad, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalDerivedType(ZeroEngine::FlattenTool, ZeroEngine::HeightManipulationTool, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalDerivedType(ZeroEngine::EmissiveMapping, ZeroEngine::MaterialBlock, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalBaseType(ZeroEngine::ContinuousResult, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalDerivedType(ZeroEngine::RootWidget, ZeroEngine::Composite, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalBaseType(ZeroEngine::PositionJointBlock, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalDerivedType(ZeroEngine::Engine, ZeroEngine::ZeroObject, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalBaseType(ZeroEngine::UpdateMode, Zilch::TypeCopyMode::ValueType, ZeroNoImportExport);
  ZilchDeclareExternalDerivedType(ZeroEngine::ScrollBar_, ZeroEngine::ZeroObject, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalDerivedType(ZeroEngine::LockStepGameStartEvent, ZeroEngine::Event, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalBaseType(ZeroEngine::PeerRange, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalBaseType(ZeroEngine::InputDevice, Zilch::TypeCopyMode::ValueType, ZeroNoImportExport);
  ZilchDeclareExternalDerivedType(ZeroEngine::Sound, ZeroEngine::Resource, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalDerivedType(ZeroEngine::TrackView_, ZeroEngine::ZeroObject, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalBaseType(ZeroEngine::AnimBlendMode, Zilch::TypeCopyMode::ValueType, ZeroNoImportExport);
  ZilchDeclareExternalDerivedType(ZeroEngine::BinaryContent, ZeroEngine::ContentComposition, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalDerivedType(ZeroEngine::CommandEvent, ZeroEngine::ObjectEvent, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalBaseType(ZeroEngine::HeightTool, Zilch::TypeCopyMode::ValueType, ZeroNoImportExport);
  ZilchDeclareExternalDerivedType(ZeroEngine::AnimationEditor_, ZeroEngine::ZeroObject, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalBaseType(ZeroEngine::SoundEntry, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalDerivedType(ZeroEngine::GeneratedSound, ZeroEngine::Resource, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalDerivedType(ZeroEngine::WebResponseEvent, ZeroEngine::Event, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalBaseType(ZeroEngine::NetChannel, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalBaseType(ZeroEngine::Authority, Zilch::TypeCopyMode::ValueType, ZeroNoImportExport);
  ZilchDeclareExternalBaseType(ZeroEngine::DetectionMode, Zilch::TypeCopyMode::ValueType, ZeroNoImportExport);
  ZilchDeclareExternalBaseType(ZeroEngine::SerializationMode, Zilch::TypeCopyMode::ValueType, ZeroNoImportExport);
  ZilchDeclareExternalBaseType(ZeroEngine::ReliabilityMode, Zilch::TypeCopyMode::ValueType, ZeroNoImportExport);
  ZilchDeclareExternalBaseType(ZeroEngine::TimeMode, Zilch::TypeCopyMode::ValueType, ZeroNoImportExport);
  ZilchDeclareExternalBaseType(ZeroEngine::OrientationBases, Zilch::TypeCopyMode::ValueType, ZeroNoImportExport);
  ZilchDeclareExternalBaseType(ZeroEngine::Clips, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalBaseType(ZeroEngine::ContactHolder, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalBaseType(ZeroEngine::ProxyContactPointRange, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalBaseType(ZeroEngine::TextAlign, Zilch::TypeCopyMode::ValueType, ZeroNoImportExport);
  ZilchDeclareExternalDerivedType(ZeroEngine::NetPeerClosed, ZeroEngine::Event, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalBaseType(ZeroEngine::Joysticks, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalDerivedType(ZeroEngine::CollisionTable_, ZeroEngine::ZeroObject, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalBaseType(ZeroEngine::AnimationSettings, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalBaseType(ZeroEngine::WhichSoundType, Zilch::TypeCopyMode::ValueType, ZeroNoImportExport);
  ZilchDeclareExternalBaseType(ZeroEngine::AnimationClip, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalBaseType(ZeroEngine::ObjectLinkEdge, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalDerivedType(ZeroEngine::ShaderGraph_, ZeroEngine::ZeroObject, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalBaseType(ZeroEngine::ParticleListRange, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalDerivedType(ZeroEngine::NetPeerOpened, ZeroEngine::Event, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalBaseType(ZeroEngine::TileEditor2DSubToolType, Zilch::TypeCopyMode::ValueType, ZeroNoImportExport);
  ZilchDeclareExternalBaseType(ZeroEngine::Draggable, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalDerivedType(ZeroEngine::ControlPoint, ZeroEngine::Draggable, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalBaseType(ZeroEngine::SpriteData, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalBaseType(ZeroEngine::SweepResult, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalDerivedType(ZeroEngine::NetPeerSentUserAddResponse, ZeroEngine::Event, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalDerivedType(ZeroEngine::Tangent, ZeroEngine::Draggable, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalBaseType(ZeroEngine::StoredValueRangeCameraViewport, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalBaseType(ZeroEngine::WidgetManager, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalDerivedType(ZeroEngine::Shader, ZeroEngine::DocumentResource, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalDerivedType(ZeroEngine::WeightPainterTool, ZeroEngine::HeightMapSubTool, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalDerivedType(ZeroEngine::WeightedTable, ZeroEngine::Resource, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalBaseType(ZeroEngine::LoopingMode, Zilch::TypeCopyMode::ValueType, ZeroNoImportExport);
  ZilchDeclareExternalDerivedType(ZeroEngine::Tags_, ZeroEngine::ZeroObject, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalDerivedType(ZeroEngine::TextureDiffuse, ZeroEngine::MaterialBlock, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalBaseType(ZeroEngine::VisibilitySpyMode, Zilch::TypeCopyMode::ValueType, ZeroNoImportExport);
  ZilchDeclareExternalDerivedType(ZeroEngine::CrossBlend, ZeroEngine::AnimationNode, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalBaseType(ZeroEngine::AnimBlendType, Zilch::TypeCopyMode::ValueType, ZeroNoImportExport);
  ZilchDeclareExternalDerivedType(ZeroEngine::DoubledSide, ZeroEngine::MaterialBlock, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalDerivedType(ZeroEngine::CollisionEvent, ZeroEngine::BaseCollisionEvent, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalBaseType(ZeroEngine::ParticleSortMode, Zilch::TypeCopyMode::ValueType, ZeroNoImportExport);
  ZilchDeclareExternalDerivedType(ZeroEngine::MetaSelection, ZeroEngine::ZeroObject, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalBaseType(ZeroEngine::SendsEvents, Zilch::TypeCopyMode::ValueType, ZeroNoImportExport);
  ZilchDeclareExternalBaseType(ZeroEngine::CommandManager, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalDerivedType(ZeroEngine::MouseManipulation, ZeroEngine::ZeroObject, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalBaseType(ZeroEngine::SizePolicies, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalBaseType(ZeroEngine::Rect, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalBaseType(ZeroEngine::SizePolicy, Zilch::TypeCopyMode::ValueType, ZeroNoImportExport);
  ZilchDeclareExternalDerivedType(ZeroEngine::Interaction_, ZeroEngine::ZeroObject, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalBaseType(ZeroEngine::TimeDisplay, Zilch::TypeCopyMode::ValueType, ZeroNoImportExport);
  ZilchDeclareExternalDerivedType(ZeroEngine::PhysicsSolverConfig, ZeroEngine::Resource, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalBaseType(ZeroEngine::CastResultsRange, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalBaseType(ZeroEngine::ContinuousResultRange, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalDerivedType(ZeroEngine::NetObjectOnline, ZeroEngine::Event, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalBaseType(ZeroEngine::Particle, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalBaseType(ZeroEngine::ResourceCompression, Zilch::TypeCopyMode::ValueType, ZeroNoImportExport);
  ZilchDeclareExternalBaseType(ZeroEngine::JointCreator, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalDerivedType(ZeroEngine::ZilchPluginSource, ZeroEngine::Resource, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalDerivedType(ZeroEngine::Phong, ZeroEngine::MaterialBlock, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalDerivedType(ZeroEngine::AudioContent, ZeroEngine::ContentComposition, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalBaseType(ZeroEngine::TransparentSort, Zilch::TypeCopyMode::ValueType, ZeroNoImportExport);
  ZilchDeclareExternalDerivedType(ZeroEngine::DesyncDebugRequest, ZeroEngine::SendableEvent, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalDerivedType(ZeroEngine::Skeleton, ZeroEngine::Resource, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalBaseType(ZeroEngine::JointBuilder, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalBaseType(ZeroEngine::SolverType, Zilch::TypeCopyMode::ValueType, ZeroNoImportExport);
  ZilchDeclareExternalDerivedType(ZeroEngine::LoadingWindow_, ZeroEngine::ZeroObject, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalBaseType(ZeroEngine::TrackNode, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalDerivedType(ZeroEngine::Splitter, ZeroEngine::Composite, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalDerivedType(ZeroEngine::WebBrowserUrlEvent, ZeroEngine::WebBrowserEvent, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalBaseType(ZeroEngine::CustomJointBlock, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalBaseType(ZeroEngine::ReplicationPhase, Zilch::TypeCopyMode::ValueType, ZeroNoImportExport);
  ZilchDeclareExternalBaseType(ZeroEngine::Test, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalBaseType(ZeroEngine::SampleData, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalDerivedType(ZeroEngine::EdgeDockLayout, ZeroEngine::Layout, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalDerivedType(ZeroEngine::IconButton, ZeroEngine::Composite, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalDerivedType(ZeroEngine::ToggleIconButton, ZeroEngine::IconButton, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalBaseType(ZeroEngine::ShadowMapping, Zilch::TypeCopyMode::ValueType, ZeroNoImportExport);
  ZilchDeclareExternalDerivedType(ZeroEngine::Window_, ZeroEngine::ZeroObject, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalDerivedType(ZeroEngine::NetChannelConfig, ZeroEngine::Resource, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalDerivedType(ZeroEngine::Notification_, ZeroEngine::ZeroObject, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalDerivedType(ZeroEngine::MainWindow_, ZeroEngine::ZeroObject, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalBaseType(ZeroEngine::SizerSnapMode, Zilch::TypeCopyMode::ValueType, ZeroNoImportExport);
  ZilchDeclareExternalDerivedType(ZeroEngine::ComboBox, ZeroEngine::Composite, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalDerivedType(ZeroEngine::StringComboBox, ZeroEngine::ComboBox, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalBaseType(ZeroEngine::Cursor, Zilch::TypeCopyMode::ValueType, ZeroNoImportExport);
  ZilchDeclareExternalBaseType(ZeroEngine::ContentSystem, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalBaseType(ZeroEngine::Quality, Zilch::TypeCopyMode::ValueType, ZeroNoImportExport);
  ZilchDeclareExternalDerivedType(ZeroEngine::Scrubber_, ZeroEngine::ZeroObject, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalBaseType(ZeroEngine::ResourcePackage, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalDerivedType(ZeroEngine::GizmoEvent, ZeroEngine::Event, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalBaseType(ZeroEngine::MeshMode, Zilch::TypeCopyMode::ValueType, ZeroNoImportExport);
  ZilchDeclareExternalDerivedType(ZeroEngine::ObjectView_, ZeroEngine::ZeroObject, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalBaseType(ZeroEngine::BrushType, Zilch::TypeCopyMode::ValueType, ZeroNoImportExport);
  ZilchDeclareExternalDerivedType(ZeroEngine::Modern_, ZeroEngine::ZeroObject, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalDerivedType(ZeroEngine::DecalBlock, ZeroEngine::MaterialBlock, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalBaseType(ZeroEngine::SoundPlayMode, Zilch::TypeCopyMode::ValueType, ZeroNoImportExport);
  ZilchDeclareExternalBaseType(ZeroEngine::AnimationTrackView, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalBaseType(ZeroEngine::HotKeyEditor, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalDerivedType(ZeroEngine::EditorEvent, ZeroEngine::Event, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalBaseType(ZeroEngine::Editor, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalDerivedType(ZeroEngine::GraphicsRaycastProvider, ZeroEngine::RaycastProvider, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalDerivedType(ZeroEngine::LockStepGamepadStatusEvent, ZeroEngine::LockStepGamepadEvent, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalDerivedType(ZeroEngine::NetLevelStarted, ZeroEngine::Event, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalBaseType(ZeroEngine::ToolControl, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalDerivedType(ZeroEngine::WebBrowser_, ZeroEngine::ZeroObject, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalDerivedType(ZeroEngine::LogicGraph, ZeroEngine::Resource, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalDerivedType(ZeroEngine::NormalMapping, ZeroEngine::MaterialBlock, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalDerivedType(ZeroEngine::SpriteLayerOrder, ZeroEngine::Resource, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalBaseType(ZeroEngine::FixedAngleJointBlock, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalDerivedType(ZeroEngine::ModulateModelColor, ZeroEngine::MaterialBlock, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalDerivedType(ZeroEngine::NetEventReceived, ZeroEngine::Event, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalBaseType(ZeroEngine::ConnectionData, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalDerivedType(ZeroEngine::TreeRow, ZeroEngine::Widget, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalBaseType(ZeroEngine::HierarchyRange, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalDerivedType(ZeroEngine::OperationQueue, ZeroEngine::ZeroObject, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalBaseType(ZeroEngine::WeldJointBlock, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalDerivedType(ZeroEngine::BaseScrollArea, ZeroEngine::Composite, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalDerivedType(ZeroEngine::ScrollArea, ZeroEngine::BaseScrollArea, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalDerivedType(ZeroEngine::Spacer, ZeroEngine::Widget, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalDerivedType(ZeroEngine::Menu_, ZeroEngine::ZeroObject, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalDerivedType(ZeroEngine::ConsoleUi, ZeroEngine::Composite, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalBaseType(ZeroEngine::WheelCollection, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalBaseType(ZeroEngine::ManipulatorJointBlock, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalBaseType(ZeroEngine::WheelJointBlock, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalBaseType(ZeroEngine::RevoluteJoint2dBlock, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalDerivedType(ZeroEngine::ValidRows_, ZeroEngine::ZeroObject, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalBaseType(ZeroEngine::TextureSelect, Zilch::TypeCopyMode::ValueType, ZeroNoImportExport);
  ZilchDeclareExternalDerivedType(ZeroEngine::ModernTextButton_, ZeroEngine::ZeroObject, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalDerivedType(ZeroEngine::NetGameStarted, ZeroEngine::Event, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalDerivedType(ZeroEngine::CastFilterEvent, ZeroEngine::Event, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalDerivedType(ZeroEngine::PropertyView, ZeroEngine::Composite, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalBaseType(ZeroEngine::ObjectColorMode, Zilch::TypeCopyMode::ValueType, ZeroNoImportExport);
  ZilchDeclareExternalDerivedType(ZeroEngine::Level, ZeroEngine::Resource, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalDerivedType(ZeroEngine::DoNotBlockGodRays, ZeroEngine::MaterialBlock, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalDerivedType(ZeroEngine::MainWindow, ZeroEngine::RootWidget, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalDerivedType(ZeroEngine::ConvexMeshEditor_, ZeroEngine::ZeroObject, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalBaseType(ZeroEngine::SoundSystem, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalBaseType(ZeroEngine::NetUserRange, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalBaseType(ZeroEngine::LinkStatus, Zilch::TypeCopyMode::ValueType, ZeroNoImportExport);
  ZilchDeclareExternalDerivedType(ZeroEngine::Downloads_, ZeroEngine::ZeroObject, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalBaseType(ZeroEngine::LimitMode, Zilch::TypeCopyMode::ValueType, ZeroNoImportExport);
  ZilchDeclareExternalBaseType(ZeroEngine::ColorScheme, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalDerivedType(ZeroEngine::RegisterCppNetProperties, ZeroEngine::Event, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalDerivedType(ZeroEngine::NetObjectOffline, ZeroEngine::Event, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalDerivedType(ZeroEngine::Button_, ZeroEngine::ZeroObject, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalDerivedType(ZeroEngine::KeyboardTextEvent, ZeroEngine::Event, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalBaseType(ZeroEngine::Revision, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalBaseType(ZeroEngine::ViewportScaling, Zilch::TypeCopyMode::ValueType, ZeroNoImportExport);
  ZilchDeclareExternalDerivedType(ZeroEngine::HeightMapSource, ZeroEngine::Resource, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalDerivedType(ZeroEngine::ObjectLinkPointChangedEvent, ZeroEngine::Event, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalDerivedType(ZeroEngine::InvalidRows_, ZeroEngine::ZeroObject, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalDerivedType(ZeroEngine::GridLayout, ZeroEngine::Layout, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalDerivedType(ZeroEngine::ZilchFragment, ZeroEngine::DocumentResource, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalBaseType(ZeroEngine::FogType, Zilch::TypeCopyMode::ValueType, ZeroNoImportExport);
  ZilchDeclareExternalDerivedType(ZeroEngine::CurveEditor_, ZeroEngine::ZeroObject, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalBaseType(ZeroEngine::WebBrowserModifiers, Zilch::TypeCopyMode::ValueType, ZeroNoImportExport);
  ZilchDeclareExternalDerivedType(ZeroEngine::NetUserAcquiredObjectOwnership, ZeroEngine::Event, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalBaseType(ZeroEngine::Shell, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalDerivedType(ZeroEngine::ParticleEvent, ZeroEngine::Event, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalDerivedType(ZeroEngine::FocusEvent, ZeroEngine::Event, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalBaseType(ZeroEngine::ContactBlock, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalDerivedType(ZeroEngine::WebBrowserPopupCreateEvent, ZeroEngine::WebBrowserEvent, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalDerivedType(ZeroEngine::SmoothSharpenTool, ZeroEngine::HeightManipulationTool, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalDerivedType(ZeroEngine::PhysicsRaycastProvider, ZeroEngine::RaycastProvider, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalDerivedType(ZeroEngine::HeightMapEvent, ZeroEngine::Event, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalBaseType(ZeroEngine::GraphicsReport, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalDerivedType(ZeroEngine::Reflective, ZeroEngine::MaterialBlock, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalBaseType(ZeroEngine::MaterialEntry, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalBaseType(ZeroEngine::SpriteGeometryMode, Zilch::TypeCopyMode::ValueType, ZeroNoImportExport);
  ZilchDeclareExternalBaseType(ZeroEngine::NodeSearchMethod, Zilch::TypeCopyMode::ValueType, ZeroNoImportExport);
  ZilchDeclareExternalDerivedType(ZeroEngine::DesyncDebugResponse, ZeroEngine::SendableEvent, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalBaseType(ZeroEngine::MeshEmitMode, Zilch::TypeCopyMode::ValueType, ZeroNoImportExport);
  ZilchDeclareExternalBaseType(ZeroEngine::FixPowerOf2, Zilch::TypeCopyMode::ValueType, ZeroNoImportExport);
  ZilchDeclareExternalDerivedType(ZeroEngine::ResourceEditors_, ZeroEngine::ZeroObject, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalBaseType(ZeroEngine::SoundTags, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalDerivedType(ZeroEngine::InputDeviceEvent, ZeroEngine::Event, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalDerivedType(ZeroEngine::GizmoUpdateEvent, ZeroEngine::GizmoEvent, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalDerivedType(ZeroEngine::SizerGizmoEvent, ZeroEngine::GizmoUpdateEvent, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalBaseType(ZeroEngine::PhysicsMeshType, Zilch::TypeCopyMode::ValueType, ZeroNoImportExport);
  ZilchDeclareExternalDerivedType(ZeroEngine::TextBlock, ZeroEngine::DocumentResource, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalDerivedType(ZeroEngine::AnimControls_, ZeroEngine::ZeroObject, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalDerivedType(ZeroEngine::GeometryContent, ZeroEngine::ContentComposition, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalBaseType(ZeroEngine::DarknessFrag, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalBaseType(ZeroEngine::Tool, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalDerivedType(ZeroEngine::NetPeerSentConnectResponse, ZeroEngine::Event, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalDerivedType(ZeroEngine::TreeView, ZeroEngine::Widget, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalBaseType(ZeroEngine::Materials, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalDerivedType(ZeroEngine::ZilchScript, ZeroEngine::DocumentResource, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalDerivedType(ZeroEngine::Window, ZeroEngine::Composite, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalDerivedType(ZeroEngine::CustomJointEvent, ZeroEngine::Event, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalBaseType(ZeroEngine::PreProcessing, Zilch::TypeCopyMode::ValueType, ZeroNoImportExport);
  ZilchDeclareExternalDerivedType(ZeroEngine::AnimGraph_, ZeroEngine::ZeroObject, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalDerivedType(ZeroEngine::Toolbar_, ZeroEngine::ZeroObject, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalDerivedType(ZeroEngine::ScreenSpaceReflectionMap, ZeroEngine::MaterialBlock, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalBaseType(ZeroEngine::ArrowHeadType, Zilch::TypeCopyMode::ValueType, ZeroNoImportExport);
  ZilchDeclareExternalBaseType(ZeroEngine::PulleyJointBlock, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalDerivedType(ZeroEngine::TextEditor, ZeroEngine::Composite, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalDerivedType(ZeroEngine::ToolUiEvent, ZeroEngine::Event, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalDerivedType(ZeroEngine::TouchEvent, ZeroEngine::Event, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalBaseType(ZeroEngine::ScriptReloadMethod, Zilch::TypeCopyMode::ValueType, ZeroNoImportExport);
  ZilchDeclareExternalDerivedType(ZeroEngine::WebBrowser, ZeroEngine::ZeroObject, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalBaseType(ZeroEngine::PerformanceMode, Zilch::TypeCopyMode::ValueType, ZeroNoImportExport);
  ZilchDeclareExternalDerivedType(ZeroEngine::WebBrowserConsoleEvent, ZeroEngine::WebBrowserEvent, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalDerivedType(ZeroEngine::WebBrowserCursorEvent, ZeroEngine::WebBrowserEvent, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalDerivedType(ZeroEngine::ObjectLinkEvent, ZeroEngine::Event, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalDerivedType(ZeroEngine::Label, ZeroEngine::Composite, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalBaseType(ZeroEngine::JointToolTypes2D, Zilch::TypeCopyMode::ValueType, ZeroNoImportExport);
  ZilchDeclareExternalBaseType(ZeroEngine::LauncherAutoRunMode, Zilch::TypeCopyMode::ValueType, ZeroNoImportExport);
  ZilchDeclareExternalBaseType(ZeroEngine::GizmoGrabMode, Zilch::TypeCopyMode::ValueType, ZeroNoImportExport);
  ZilchDeclareExternalDerivedType(ZeroEngine::DefinitionSet, ZeroEngine::Resource, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalDerivedType(ZeroEngine::Uploader_, ZeroEngine::ZeroObject, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalDerivedType(ZeroEngine::PoseNode, ZeroEngine::AnimationNode, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalBaseType(ZeroEngine::Placement, Zilch::TypeCopyMode::ValueType, ZeroNoImportExport);
  ZilchDeclareExternalBaseType(ZeroEngine::CastResultsrange, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalDerivedType(ZeroEngine::CogPathEvent, ZeroEngine::Event, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalDerivedType(ZeroEngine::ParallaxOcclusionMapping, ZeroEngine::MaterialBlock, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalDerivedType(ZeroEngine::MeshBenderTool, ZeroEngine::Tool, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalDerivedType(ZeroEngine::Refractivity, ZeroEngine::MaterialBlock, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalDerivedType(ZeroEngine::ZilchPluginLibrary, ZeroEngine::Resource, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalDerivedType(ZeroEngine::ColorDiffuse, ZeroEngine::MaterialBlock, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalBaseType(ZeroEngine::PreviewWidgetFactory, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalBaseType(ZeroEngine::VoxelFace, Zilch::TypeCopyMode::ValueType, ZeroNoImportExport);
  ZilchDeclareExternalDerivedType(ZeroEngine::SampleCurve_, ZeroEngine::ZeroObject, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalBaseType(ZeroEngine::DebugTriangle, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalDerivedType(ZeroEngine::ScriptEditor_, ZeroEngine::ZeroObject, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalBaseType(ZeroEngine::EditorPackageLoader, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalBaseType(ZeroEngine::ResourceSet, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalDerivedType(ZeroEngine::SelectorButton_, ZeroEngine::ZeroObject, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalDerivedType(ZeroEngine::RatioLayout, ZeroEngine::Layout, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalDerivedType(ZeroEngine::FragmentSource, ZeroEngine::DocumentResource, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalDerivedType(ZeroEngine::ImageContent, ZeroEngine::ContentComposition, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalBaseType(ZeroEngine::NetPropertyConfig, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalBaseType(ZeroEngine::RichAnimation, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalBaseType(ZeroEngine::SystemSpace, Zilch::TypeCopyMode::ValueType, ZeroNoImportExport);
  ZilchDeclareExternalBaseType(ZeroEngine::PathFinderSettings, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalDerivedType(ZeroEngine::NetPeerReceivedUserAddResponse, ZeroEngine::Event, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalBaseType(ZeroEngine::BackgroundTasks, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalBaseType(ZeroEngine::ActionSystem, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalBaseType(ZeroEngine::GridAxis, Zilch::TypeCopyMode::ValueType, ZeroNoImportExport);
  ZilchDeclareExternalDerivedType(ZeroEngine::StartGameEvent, ZeroEngine::SendableEvent, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalDerivedType(ZeroEngine::ToolTip_, ZeroEngine::ZeroObject, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalBaseType(ZeroEngine::CastResults, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalBaseType(ZeroEngine::SynthWaveType, Zilch::TypeCopyMode::ValueType, ZeroNoImportExport);
  ZilchDeclareExternalDerivedType(ZeroEngine::RenderView, ZeroEngine::ZeroObject, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalDerivedType(ZeroEngine::NetPeerReceivedUserAddRequest, ZeroEngine::Event, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalDerivedType(ZeroEngine::PropertyView_, ZeroEngine::ZeroObject, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalDerivedType(ZeroEngine::IconButton_, ZeroEngine::ZeroObject, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalBaseType(ZeroEngine::LightType, Zilch::TypeCopyMode::ValueType, ZeroNoImportExport);
  ZilchDeclareExternalDerivedType(ZeroEngine::ChainNode, ZeroEngine::AnimationNode, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalDerivedType(ZeroEngine::TextContent, ZeroEngine::ContentComposition, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalDerivedType(ZeroEngine::ProjectDialog_, ZeroEngine::ZeroObject, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalDerivedType(ZeroEngine::Selection, ZeroEngine::MetaSelection, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalDerivedType(ZeroEngine::LockStepUpdateEvent, ZeroEngine::UpdateEvent, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalBaseType(ZeroEngine::TabWidth, Zilch::TypeCopyMode::ValueType, ZeroNoImportExport);
  ZilchDeclareExternalBaseType(ZeroEngine::OsMouseEventData, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalBaseType(ZeroEngine::TargetSpace, Zilch::TypeCopyMode::ValueType, ZeroNoImportExport);
  ZilchDeclareExternalDerivedType(ZeroEngine::ProgressBar_, ZeroEngine::ZeroObject, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalBaseType(ZeroEngine::Revisions, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalDerivedType(ZeroEngine::NetChannelPropertyChange, ZeroEngine::Event, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalDerivedType(ZeroEngine::ToolBox_, ZeroEngine::ZeroObject, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalBaseType(ZeroEngine::CogCommand, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalDerivedType(ZeroEngine::Tweakables, ZeroEngine::ZeroObject, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalBaseType(ZeroEngine::RgbUsage, Zilch::TypeCopyMode::ValueType, ZeroNoImportExport);
  ZilchDeclareExternalDerivedType(ZeroEngine::ContentStore_, ZeroEngine::ZeroObject, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
  ZilchDeclareExternalBaseType(ZeroEngine::TextureWrapping, Zilch::TypeCopyMode::ValueType, ZeroNoImportExport);
  ZilchDeclareExternalBaseType(ZeroEngine::MipGeneration, Zilch::TypeCopyMode::ValueType, ZeroNoImportExport);
  ZilchDeclareExternalBaseType(ZeroEngine::CurveType, Zilch::TypeCopyMode::ValueType, ZeroNoImportExport);
  ZilchDeclareExternalBaseType(ZeroEngine::Zero, Zilch::TypeCopyMode::ReferenceType, ZeroNoImportExport);
}

bool HookUpZeroEngine(Zilch::BuildEvent* event);

#endif

namespace ZeroEngine                                                       
{                                                                          
  template <typename ClassType>                                            
  void Connect                                                             
  (                                                                        
    ZeroEngine::ZeroObject* sender,                                        
    const Zilch::String& eventName,                                        
    const Zilch::String& functionName,                                     
    ClassType* receiver                                                    
  )                                                                        
  {                                                                        
    Zilch::BoundType* type = ZilchTypeId(ClassType);                       
    Zilch::FunctionArray* instanceFunctions =                              
      type->InstanceFunctions.FindPointer(functionName);                   
    ReturnIf(instanceFunctions == nullptr || instanceFunctions->Empty(),,  
      "In %s making an event connection to %s we could "                 
      "not find a function by the name of %s",                           
      type->Name.c_str(), eventName.c_str(), functionName.c_str());        
                                                                           
    Zilch::Delegate delegate;                                              
    delegate.ThisHandle = Zilch::Handle(type, (byte*)receiver);            
    delegate.BoundFunction = (*instanceFunctions)[0];                      
    ZeroEngine::Zero::Connect(sender, eventName, delegate);                
  }                                                                        
}                                                                          
#define ZeroConnectThisTo(Sender, EventName, FunctionName)               \
  ::ZeroEngine::Connect(Sender, EventName, FunctionName, this);            
namespace ZeroEngine
{
  extern const Zilch::String ArchetypeOverrideAttribute;
  extern const Zilch::String DependencyAttribute;
  extern const Zilch::String CommandAttribute;
  extern const Zilch::String NetPeerIdAttribute;
  extern const Zilch::String ToolAttribute;
  extern const Zilch::String VirtualAttribute;
  extern const Zilch::String NetPropertyAttribute;
  extern const Zilch::String OverrideAttribute;
  extern const Zilch::String RunInEditorAttribute;
  extern const Zilch::String EditableAttribute;
  extern const Zilch::String PropertyAttribute;
  extern const Zilch::String StaticAttribute;
  extern const Zilch::String HiddenAttribute;
  extern const Zilch::String ComponentInterfaceAttribute;
  extern const Zilch::String SerializedAttribute;
  extern const Zilch::String GizmoAttribute;
}

