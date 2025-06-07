#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_RsGameTechRT\RsCombatState.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_RsGameTechRT {
struct RsDamageParams;
}
namespace _Script_Engine {
struct HitResult;
}
namespace _Script_Engine {
struct AnimationAsset;
}
namespace _Script_RsGameTechRT {
struct RsCharacter;
}
namespace _Script_RsGameTechRT {
struct RsCharacterAnimationData;
}
namespace _Script_Engine {
struct Actor;
}
namespace _Script_Engine {
struct AnimMontage;
}
namespace _Script_SwGame {
#pragma pack(push, 1)
struct SwAttackState : public _Script_RsGameTechRT::RsCombatState {
    private: char pad_118[0x140]; public:
    bool get_bHasTickImplemetation();
    void set_bHasTickImplemetation(bool value);
    bool get_bHasShouldChainAttackImplementation();
    void set_bHasShouldChainAttackImplementation(bool value);
    void* get_RegisteredDamageCausers();
    static _Script_CoreUObject::Class* static_class();
    void TickAttack(_Script_RsGameTechRT::RsCharacter* TheAttacker, float DeltaTime);
    bool ShouldChainAttackAnimation(_Script_RsGameTechRT::RsCharacter* TheAttacker, _Script_RsGameTechRT::RsCharacterAnimationData& NextAnimation, void*& AbilityType);
    void RegisterDamageCauser(_Script_Engine::Actor* NewDamageCauser);
    void OnEndAttack(_Script_RsGameTechRT::RsCharacter* TheAttacker);
    void OnDealtAnyDamage(_Script_RsGameTechRT::RsCharacter* TheAttacker, float Damage, _Script_RsGameTechRT::RsDamageParams& DamageInfo, _Script_Engine::Actor* DamagedActor, _Script_Engine::Actor* DamageCauser);
    void OnConnectedButDealtNoDamage(_Script_RsGameTechRT::RsCharacter* TheAttacker, _Script_RsGameTechRT::RsDamageParams& DamageInfo, _Script_Engine::Actor* OtherActor);
    void OnBeginAttack(_Script_RsGameTechRT::RsCharacter* TheAttacker);
    void OnAttackDefended(_Script_RsGameTechRT::RsCharacter* TheAttacker, _Script_RsGameTechRT::RsCharacter* TheDefender, void* DefenseType, _Script_Engine::HitResult& HitSweep);
    void OnAttackCompleted(_Script_RsGameTechRT::RsCharacter* TheAttacker);
    void OnAttackAborted(_Script_RsGameTechRT::RsCharacter* TheAttacker);
    void ChainForceAbilityPreTrigger(void* ForceAbilityType, void* UpgradeLevel, _Script_Engine::AnimationAsset* OverrideAnimation);
    void ChainForceAbility(void* ForceAbilityType, _Script_Engine::AnimationAsset* AnimationOverride);
    _Script_Engine::AnimMontage* ChainAnimationOrAbility(_Script_RsGameTechRT::RsCharacterAnimationData& InAnimData, void*& AbilityType);
}; // Size: 0x258
#pragma pack(pop)
}
