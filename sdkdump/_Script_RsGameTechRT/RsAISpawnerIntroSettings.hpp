#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_Engine {
struct AnimationAsset;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_RsGameTechRT {
struct RsAIPOI;
}
namespace _Script_RsGameTechRT {
#pragma pack(push, 1)
struct RsAISpawnerIntroSettings {
    private: char pad_0[0x18]; public:
    _Script_Engine::AnimationAsset*& get_SpawnAnimation();
    void* get_ScriptingModeWhenDone();
    bool get_bLoop();
    void set_bLoop(bool value);
    bool get_bRandomizeStartTime();
    void set_bRandomizeStartTime(bool value);
    bool get_bShouldPlayAlertReaction();
    void set_bShouldPlayAlertReaction(bool value);
    bool get_bCancelOnAwarenessStateChange();
    void set_bCancelOnAwarenessStateChange(bool value);
    bool get_bSpawnAggro();
    void set_bSpawnAggro(bool value);
    bool get_bSpawnAggroToPlayer();
    void set_bSpawnAggroToPlayer(bool value);
    bool get_bSpawnFacingPlayer();
    void set_bSpawnFacingPlayer(bool value);
    bool get_bSpawnNoPhysicsNoCollision();
    void set_bSpawnNoPhysicsNoCollision(bool value);
    bool get_bSpawnWithPhysicsNoCollision();
    void set_bSpawnWithPhysicsNoCollision(bool value);
    bool get_bApplyRefAlignment();
    void set_bApplyRefAlignment(bool value);
    bool get_bHideBeforePlayingSpawnAnimation();
    void set_bHideBeforePlayingSpawnAnimation(bool value);
    bool get_bIgnoreSpawnAnimation();
    void set_bIgnoreSpawnAnimation(bool value);
    _Script_RsGameTechRT::RsAIPOI*& get_SpawnToUsePOI();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x18
#pragma pack(pop)
}
