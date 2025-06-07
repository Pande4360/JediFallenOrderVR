#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\Object.hpp"
namespace _Script_Engine {
struct World;
}
namespace _Script_Engine {
struct Model;
}
namespace _Script_Engine {
struct MapBuildDataRegistry;
}
namespace _Script_Engine {
struct LevelActorContainer;
}
namespace _Script_Engine {
struct LevelScriptActor;
}
namespace _Script_Engine {
struct NavigationObjectBase;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
struct WorldSettings;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct Level : public _Script_CoreUObject::Object {
    private: char pad_28[0x268]; public:
    _Script_Engine::World*& get_OwningWorld();
    _Script_Engine::Model*& get_Model();
    void* get_ModelComponents();
    _Script_Engine::LevelActorContainer*& get_ActorCluster();
    int32_t& get_NumTextureStreamingUnbuiltComponents();
    int32_t& get_NumTextureStreamingDirtyResources();
    _Script_Engine::LevelScriptActor*& get_LevelScriptActor();
    _Script_Engine::NavigationObjectBase*& get_NavListStart();
    _Script_Engine::NavigationObjectBase*& get_NavListEnd();
    void* get_NavDataChunks();
    float& get_LightmapTotalSize();
    float& get_ShadowmapTotalSize();
    void* get_StaticNavigableGeometry();
    void* get_StreamingTextureGuids();
    bool get_bIsLightingScenario();
    void set_bIsLightingScenario(bool value);
    void* get_LevelBuildDataId();
    _Script_Engine::MapBuildDataRegistry*& get_MapBuildData();
    void* get_LightBuildLevelOffset();
    bool get_bTextureStreamingRotationChanged();
    void set_bTextureStreamingRotationChanged(bool value);
    bool get_bStaticComponentsRegisteredInStreamingManager();
    void set_bStaticComponentsRegisteredInStreamingManager(bool value);
    bool get_bIsVisible();
    void set_bIsVisible(bool value);
    _Script_Engine::WorldSettings*& get_WorldSettings();
    void* get_AssetUserData();
    void* get_DestroyedReplicatedStaticActors();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x290
#pragma pack(pop)
}
