#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "Info.hpp"
namespace _Script_Engine {
struct NavigationSystemConfig;
}
namespace _Script_Engine {
struct SoundMix;
}
namespace _Script_Engine {
struct BookMark;
}
namespace _Script_Engine {
struct PlayerState;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct WorldSettings : public Info {
    private: char pad_360[0x230]; public:
    bool get_bEnableWorldBoundsChecks();
    void set_bEnableWorldBoundsChecks(bool value);
    bool get_bEnableNavigationSystem();
    void set_bEnableNavigationSystem(bool value);
    bool get_bEnableAISystem();
    void set_bEnableAISystem(bool value);
    bool get_bWorldGravitySet();
    void set_bWorldGravitySet(bool value);
    bool get_bGlobalGravitySet();
    void set_bGlobalGravitySet(bool value);
    _Script_Engine::NavigationSystemConfig*& get_NavigationSystemConfig();
    _Script_Engine::NavigationSystemConfig*& get_NavigationSystemConfigOverride();
    float& get_KillZ();
    void* get_KillZDamageType();
    float& get_WorldGravityZ();
    float& get_GlobalGravityZ();
    void* get_DefaultPhysicsVolumeClass();
    void* get_PhysicsCollisionHandlerClass();
    void* get_DefaultGameMode();
    void* get_GameNetworkManagerClass();
    int32_t& get_PackedLightAndShadowMapTextureSize();
    bool get_bMinimizeBSPSections();
    void set_bMinimizeBSPSections(bool value);
    void* get_DefaultColorScale();
    float& get_DefaultMaxDistanceFieldOcclusionDistance();
    float& get_GlobalDistanceFieldViewDistance();
    float& get_DynamicIndirectShadowsSelfShadowingIntensity();
    bool get_bPrecomputeVisibility();
    void set_bPrecomputeVisibility(bool value);
    bool get_bPlaceCellsOnlyAlongCameraTracks();
    void set_bPlaceCellsOnlyAlongCameraTracks(bool value);
    int32_t& get_VisibilityCellSize();
    void* get_VisibilityAggressiveness();
    bool get_bForceNoPrecomputedLighting();
    void set_bForceNoPrecomputedLighting(bool value);
    void* get_LightmassSettings();
    void* get_DefaultReverbSettings();
    void* get_DefaultAmbientZoneSettings();
    _Script_Engine::SoundMix*& get_DefaultBaseSoundMix();
    void* get_WorldMapName();
    float& get_WorldToMeters();
    float& get_MonoCullingDistance();
    _Script_Engine::BookMark*& get_BookMarks();
    float& get_TimeDilation();
    float& get_MatineeTimeDilation();
    float& get_DemoPlayTimeDilation();
    float& get_DevTimeDilation();
    float& get_MinGlobalTimeDilation();
    float& get_MaxGlobalTimeDilation();
    float& get_MinUndilatedFrameTime();
    float& get_MaxUndilatedFrameTime();
    _Script_Engine::PlayerState*& get_Pauser();
    bool get_bHighPriorityLoading();
    void set_bHighPriorityLoading(bool value);
    bool get_bHighPriorityLoadingLocal();
    void set_bHighPriorityLoadingLocal(bool value);
    bool get_bIsSuspended();
    void set_bIsSuspended(bool value);
    bool get_bPausedFromSuspension();
    void set_bPausedFromSuspension(bool value);
    void* get_ReplicationViewers();
    bool get_bOverrideDefaultBroadphaseSettings();
    void set_bOverrideDefaultBroadphaseSettings(bool value);
    void* get_BroadphaseSettings();
    void* get_AssetUserData();
    int32_t& get_MaxNumberOfBookmarks();
    void* get_DefaultBookmarkClass();
    void* get_BookmarkArray();
    void* get_LastBookmarkClass();
    static _Script_CoreUObject::Class* static_class();
    void OnRep_WorldGravityZ();
}; // Size: 0x590
#pragma pack(pop)
}
