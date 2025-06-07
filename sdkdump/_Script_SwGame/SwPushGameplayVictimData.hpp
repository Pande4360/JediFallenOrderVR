#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_Engine {
struct AnimationAsset;
}
namespace _Script_Engine {
struct CurveFloat;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
struct AnimMontage;
}
namespace _Script_SwGame {
#pragma pack(push, 1)
struct SwPushGameplayVictimData {
    private: char pad_0[0x190]; public:
    _Script_Engine::AnimationAsset*& get_ForcePushFailureAnimation();
    bool get_bShouldForcePushStagger();
    void set_bShouldForcePushStagger(bool value);
    bool get_bShouldForcePushStaggerPutInCombatState();
    void set_bShouldForcePushStaggerPutInCombatState(bool value);
    bool get_bShouldForcePushHaveBackStagger();
    void set_bShouldForcePushHaveBackStagger(bool value);
    bool get_bShouldForcePushGlancingPutInCombatState();
    void set_bShouldForcePushGlancingPutInCombatState(bool value);
    void* get_ForcePushStagger();
    void* get_ForcePushBackStagger();
    _Script_Engine::AnimMontage*& get_ForcePushDirectHitEnterAndLoopAnimation();
    _Script_Engine::AnimMontage*& get_ForcePushDirectHitLandAnimation();
    void* get_ForcePushGlancing();
    _Script_Engine::AnimMontage*& get_ForcePushGlancingAnimation();
    _Script_Engine::CurveFloat*& get_DampingCurve();
    bool get_bCanModifyAngularDampening();
    void set_bCanModifyAngularDampening(bool value);
    bool get_bShouldAddToVelocity();
    void set_bShouldAddToVelocity(bool value);
    float& get_VelocityOverTimeDuration();
    _Script_Engine::CurveFloat*& get_VelocityOverTimeCurve();
    float& get_ForcePushSpeed();
    bool get_bShouldSimulatePhysics();
    void set_bShouldSimulatePhysics(bool value);
    bool get_bShouldDisableGravity();
    void set_bShouldDisableGravity(bool value);
    float& get_ForcePushDistance();
    float& get_ForcePushTimeToDestination();
    bool get_bShouldRotateWhenImmune();
    void set_bShouldRotateWhenImmune(bool value);
    bool get_bCanStopPush();
    void set_bCanStopPush(bool value);
    bool get_bShouldGlancingHitsBeDirectHits();
    void set_bShouldGlancingHitsBeDirectHits(bool value);
    bool get_bShouldDirectionHaveVariance();
    void set_bShouldDirectionHaveVariance(bool value);
    float& get_DirectDamage();
    float& get_GlancingDamage();
    bool get_bShouldHaveMaxPushTime();
    void set_bShouldHaveMaxPushTime(bool value);
    float& get_MaxPushTime();
    float& get_MaxPushTimeBlendout();
    bool get_bShouldOverrideSingleTargetPush();
    void set_bShouldOverrideSingleTargetPush(bool value);
    bool get_bCanPushOnTopOf();
    void set_bCanPushOnTopOf(bool value);
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x190
#pragma pack(pop)
}
