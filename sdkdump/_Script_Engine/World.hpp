#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\Object.hpp"
namespace _Script_Engine {
struct Level;
}
namespace _Script_Engine {
struct NetDriver;
}
namespace _Script_Engine {
struct ParticleEventManager;
}
namespace _Script_Engine {
struct GameNetworkManager;
}
namespace _Script_Engine {
struct LineBatchComponent;
}
namespace _Script_Engine {
struct RsStreamingDefinition;
}
namespace _Script_Engine {
struct PhysicsCollisionHandler;
}
namespace _Script_Engine {
struct RsStreamingManager;
}
namespace _Script_Engine {
struct PhysicsVolume;
}
namespace _Script_Engine {
struct NavigationSystemBase;
}
namespace _Script_Engine {
struct GameModeBase;
}
namespace _Script_Engine {
struct GameStateBase;
}
namespace _Script_Engine {
struct AISystemBase;
}
namespace _Script_Engine {
struct AvoidanceManager;
}
namespace _Script_Engine {
struct RsCharacterMarksManager;
}
namespace _Script_Engine {
struct RsDynamicDeformationController;
}
namespace _Script_Engine {
struct RsLightTriggerManager;
}
namespace _Script_Engine {
struct RsWorldWidgetPool;
}
namespace _Script_Engine {
struct GameInstance;
}
namespace _Script_Engine {
struct Canvas;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct World : public _Script_CoreUObject::Object {
    private: char pad_28[0x8a0]; public:
    _Script_Engine::Level*& get_PersistentLevel();
    _Script_Engine::NetDriver*& get_NetDriver();
    _Script_Engine::LineBatchComponent*& get_LineBatcher();
    _Script_Engine::LineBatchComponent*& get_PersistentLineBatcher();
    _Script_Engine::LineBatchComponent*& get_ForegroundLineBatcher();
    _Script_Engine::GameNetworkManager*& get_NetworkManager();
    _Script_Engine::PhysicsCollisionHandler*& get_PhysicsCollisionHandler();
    void* get_ExtraReferencedObjects();
    void* get_PerModuleDataObjects();
    _Script_Engine::RsStreamingManager*& get_StreamingManager();
    _Script_Engine::RsStreamingDefinition*& get_StreamingDefinition();
    void* get_DeferredBeginPlayActors();
    _Script_Engine::ParticleEventManager*& get_MyParticleEventManager();
    _Script_Engine::PhysicsVolume*& get_DefaultPhysicsVolume();
    _Script_Engine::NavigationSystemBase*& get_NavigationSystem();
    _Script_Engine::GameModeBase*& get_AuthorityGameMode();
    _Script_Engine::GameStateBase*& get_GameState();
    _Script_Engine::AISystemBase*& get_AISystem();
    _Script_Engine::AvoidanceManager*& get_AvoidanceManager();
    _Script_Engine::RsCharacterMarksManager*& get_CharacterMarksManager();
    _Script_Engine::RsDynamicDeformationController*& get_DynamicDeformationController();
    _Script_Engine::RsLightTriggerManager*& get_LightTriggerManager();
    _Script_Engine::RsWorldWidgetPool*& get_WorldWidgetPool();
    void* get_Levels();
    void* get_LevelCollections();
    _Script_Engine::Level*& get_CurrentLevel();
    _Script_Engine::GameInstance*& get_OwningGameInstance();
    void* get_ParameterCollectionInstances();
    _Script_Engine::Canvas*& get_CanvasForRenderingToTarget();
    _Script_Engine::Canvas*& get_CanvasForDrawMaterialToRenderTarget();
    bool get_bAreConstraintsDirty();
    void set_bAreConstraintsDirty(bool value);
    void* get_PSCPool();
    static _Script_CoreUObject::Class* static_class();
    void HandleTimelineScrubbed();
}; // Size: 0x8c8
#pragma pack(pop)
}
