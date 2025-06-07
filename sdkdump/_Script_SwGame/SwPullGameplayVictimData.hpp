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
namespace _Script_SwGame {
#pragma pack(push, 1)
struct SwPullGameplayVictimData {
    private: char pad_0[0xc0]; public:
    bool get_bShouldForcePullYankPutInCombatState();
    void set_bShouldForcePullYankPutInCombatState(bool value);
    bool get_bIsAnimAdditive();
    void set_bIsAnimAdditive(bool value);
    void* get_ForcePullYank();
    _Script_Engine::AnimationAsset*& get_ForcePullEnter();
    _Script_Engine::AnimationAsset*& get_ForcePullCatch();
    _Script_Engine::AnimationAsset*& get_ForcePullDrop();
    void* get_ForcePullUserSocket();
    void* get_ForcePullTargetReleaseSocket();
    void* get_ForcePullSocket();
    void* get_ForcePullOffset();
    bool get_bShouldSkipJiggle();
    void set_bShouldSkipJiggle(bool value);
    float& get_JiggleScaleOverride();
    bool get_bIsAnimationDriven();
    void set_bIsAnimationDriven(bool value);
    float& get_AnimationDrivenRotationTime();
    bool get_bIsUserPlanted();
    void set_bIsUserPlanted(bool value);
    bool get_bShouldCharacterTractorBeam();
    void set_bShouldCharacterTractorBeam(bool value);
    float& get_PullMaxDurationOverride();
    float& get_PullBaseSpeedOverride();
    bool get_bShouldMoveDuringForcePull();
    void set_bShouldMoveDuringForcePull(bool value);
    float& get_DistanceToStartCatch();
    float& get_YankSpeedOverride();
    bool get_bShouldRotateWhenImmune();
    void set_bShouldRotateWhenImmune(bool value);
    bool get_bShouldApplyPhysicalAnimation();
    void set_bShouldApplyPhysicalAnimation(bool value);
    float& get_CharacterYankDistance();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0xc0
#pragma pack(pop)
}
