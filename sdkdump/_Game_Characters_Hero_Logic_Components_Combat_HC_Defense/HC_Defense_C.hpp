#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_RsGameTechRT\RsDamageParams.hpp"
#include "..\_Script_RsGameTechRT\RsHeroComponent.hpp"
#include "..\_Script_RsGameTechRT\RsHitEvent.hpp"
namespace _Game_Characters_Hero_Logic_BP_Hero {
struct BP_Hero_C;
}
namespace _Script_RsGameTechRT {
struct RsCharacter;
}
namespace _Script_Engine {
struct ParticleSystemComponent;
}
namespace _Script_SwGame {
struct SwProjectile;
}
namespace _Script_Engine {
struct Actor;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
struct AnimMontage;
}
namespace _Script_Engine {
struct DamageType;
}
namespace _Script_Engine {
struct AnimSequence;
}
namespace _Script_Engine {
struct Controller;
}
namespace _Game_Characters_Hero_Logic_Components_Combat_HC_Defense {
#pragma pack(push, 1)
struct HC_Defense_C : public _Script_RsGameTechRT::RsHeroComponent {
    private: char pad_180[0xe0]; public:
    void* get_UberGraphFrame();
    _Game_Characters_Hero_Logic_BP_Hero::BP_Hero_C*& get_BP_Hero();
    _Script_Engine::ParticleSystemComponent*& get_P_Lightsaber_MultiRelfect_REF();
    void* get_HeroParrySuccess();
    _Script_RsGameTechRT::RsCharacter*& get_blockBreakAttacker();
    _Script_Engine::Actor*& get_RandomlySelectedNarrativeSpeaker();
    void* get_HeroReflectProjectile();
    void* get_HeroDeflectProjectile();
    void* get_HeroEnterBlock();
    void* get_HeroExitBlock();
    void* get_DefenseType();
    void* get_BlockDepleteLevel();
    void* get_HeroBlockBroken();
    _Script_RsGameTechRT::RsCharacter*& get_blockReactionAttacker();
    bool get_LeftReflect();
    void set_LeftReflect(bool value);
    _Script_RsGameTechRT::RsCharacter*& get_parrySuccessAI();
    int32_t& get_ReflectCount();
    void* get_HeroParryAttackWindowStart();
    void* get_HeroParryAttackWindowEnd();
    void* get_HeroBlockSuccess();
    static _Script_CoreUObject::Class* static_class();
    void SpendParryBlockMeter(_Script_RsGameTechRT::RsCharacter* Attacker, _Script_RsGameTechRT::RsHitEvent Hit_Event);
    void DetermineParryForceRegain();
    bool DetermineHeavyBlockReaction();
    bool CanPlayBlockExitAnim();
    _Script_Engine::AnimMontage* DetermineReflectAnimation(_Script_Engine::Actor* Projectile, void*& Description);
    void DetermineBlockEnter(_Script_RsGameTechRT::RsCharacter* Attacker, _Script_Engine::AnimSequence*& BlockEnter);
    void DetermineBlockReaction(_Script_RsGameTechRT::RsDamageParams Hit, _Script_RsGameTechRT::RsCharacter* Attacker, _Script_Engine::AnimSequence*& BlockReaction);
    void ProjectileReflection(_Script_SwGame::SwProjectile* Projectile, bool& HeroDefended, bool& Reflected);
    void ReceiveBeginPlay();
    void Block_Pressed();
    void ParrySuccess(_Script_RsGameTechRT::RsCharacter* AI, _Script_RsGameTechRT::RsDamageParams Hit, void* DefenseType);
    void EnterBlock(bool SkipParryWindow, float BlendTime);
    void ReflectProjectile(_Script_SwGame::SwProjectile* BaseProjectile);
    void ParryForcePush();
    void BlockBreak(_Script_RsGameTechRT::RsCharacter* Attacker, _Script_RsGameTechRT::RsHitEvent DefendedAttack);
    void BlockAttack(_Script_RsGameTechRT::RsCharacter* AI, _Script_RsGameTechRT::RsDamageParams Hit);
    void Block_Released();
    void DeflectProjectile(_Script_SwGame::SwProjectile* BaseProjectile);
    void SetUpBlock();
    void ClearOutBlock();
    void CheckReturnToBlock(bool Override);
    void ParryForcePull();
    void On_Combat_State_Changed(_Script_RsGameTechRT::RsCharacter* Character, void* PreviousCombatState, void* NewCombatState);
    void EnterBlock_Saber(bool Skip_Parry_Window, float Blend_Time);
    void EnterBlock_Staff(bool SkipParryWindow, float BlendTime);
    void Exit_Block();
    void On_Start_Block(_Script_RsGameTechRT::RsCharacter* Attacker);
    void HeroTookAnyDamage(_Script_Engine::Actor* DamagedActor, float Damage, _Script_Engine::DamageType* DamageType, _Script_Engine::Controller* InstigatedBy, _Script_Engine::Actor* DamageCauser);
    void ExecuteUbergraph_HC_Defense(int32_t EntryPoint);
    void HeroBlockSuccess__DelegateSignature();
    void HeroParryAttackWindowEnd__DelegateSignature();
    void HeroParryAttackWindowStart__DelegateSignature();
    void HeroBlockBroken__DelegateSignature();
    void HeroExitBlock__DelegateSignature();
    void HeroEnterBlock__DelegateSignature();
    void HeroDeflectProjectile__DelegateSignature();
    void HeroReflectProjectile__DelegateSignature();
    void HeroParrySuccess__DelegateSignature(_Script_RsGameTechRT::RsCharacter* Parried_Character);
}; // Size: 0x260
#pragma pack(pop)
}
