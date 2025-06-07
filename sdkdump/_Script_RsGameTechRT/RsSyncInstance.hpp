#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\Object.hpp"
namespace _Script_Engine {
struct AnimationAsset;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
struct Actor;
}
namespace _Script_Engine {
struct DamageType;
}
namespace _Script_Engine {
struct AnimMontage;
}
namespace _Script_Engine {
struct Controller;
}
namespace _Script_RsGameTechRT {
#pragma pack(push, 1)
struct RsSyncInstance : public _Script_CoreUObject::Object {
    private: char pad_28[0x1c8]; public:
    void* get_Actor();
    _Script_Engine::AnimationAsset*& get_Animation();
    bool get_bEndSyncOnMontageBlendingOut();
    void set_bEndSyncOnMontageBlendingOut(bool value);
    bool get_bAlwaysTickPoseAndRefreshBones();
    void set_bAlwaysTickPoseAndRefreshBones(bool value);
    bool get_bLoop();
    void set_bLoop(bool value);
    bool get_bStopAnimationOnSyncEnd();
    void set_bStopAnimationOnSyncEnd(bool value);
    bool get_bUseHeroOnGroundFallback();
    void set_bUseHeroOnGroundFallback(bool value);
    float& get_BlendInTime();
    float& get_BlendOutTime();
    void* get_DeathAnimationData();
    bool get_bNavIgnoreZ();
    void set_bNavIgnoreZ(bool value);
    void* get_OnSyncStoppedDelegate();
    void* get_OnSyncEnding();
    void* get_OnTakeSyncDamage();
    void* get_OnSyncAnimStarted();
    static _Script_CoreUObject::Class* static_class();
    void StopSync();
    void SetBreakOnTakeDamage(void* BreakType);
    void OnTakeAnyDamageSetDeathAnimation(_Script_Engine::Actor* DamagedActor, float Damage, _Script_Engine::DamageType* DamageType, _Script_Engine::Controller* InstigatedBy, _Script_Engine::Actor* DamageCauser);
    void OnTakeAnyDamageInstance(_Script_Engine::Actor* DamagedActor, float Damage, _Script_Engine::DamageType* DamageType, _Script_Engine::Controller* InstigatedBy, _Script_Engine::Actor* DamageCauser);
    void OnTakeAnyDamageAll(_Script_Engine::Actor* DamagedActor, float Damage, _Script_Engine::DamageType* DamageType, _Script_Engine::Controller* InstigatedBy, _Script_Engine::Actor* DamageCauser);
    void OnMontageEndedInstance(_Script_Engine::AnimMontage* Montage, bool bInterrupted);
    void OnMontageEndedAll(_Script_Engine::AnimMontage* Montage, bool bInterrupted);
    bool IsSyncStopped();
}; // Size: 0x1f0
#pragma pack(pop)
}
