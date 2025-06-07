#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_RsGameTechRT\RsHeroComponent.hpp"
#include "..\_Script_RsGameTechRT\RsReactionParameters.hpp"
namespace _Game_Characters_Hero_Logic_BP_Hero {
struct BP_Hero_C;
}
namespace _Script_RsGameTechRT {
struct RsCharacter;
}
namespace _Script_Engine {
struct ParticleSystemComponent;
}
namespace _Script_Engine {
struct Actor;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
struct DamageType;
}
namespace _Script_Engine {
struct Controller;
}
namespace _Game_Characters_Hero_Logic_Components_Combat_HC_Base_Reactions {
#pragma pack(push, 1)
struct HC_Base_Reactions_C : public _Script_RsGameTechRT::RsHeroComponent {
    private: char pad_180[0x30]; public:
    void* get_UberGraphFrame();
    _Game_Characters_Hero_Logic_BP_Hero::BP_Hero_C*& get_BP_Hero_REF();
    _Script_RsGameTechRT::RsCharacter*& get_Attacker();
    bool get_IsBlockBreak();
    void set_IsBlockBreak(bool value);
    _Script_Engine::ParticleSystemComponent*& get_lightsaberHiltGround();
    _Script_Engine::Actor*& get_dmgCauser_REF();
    static _Script_CoreUObject::Class* static_class();
    void NarrativeHealthCheck();
    void PlayShockEffect(_Script_Engine::Actor* DamageCauser);
    void HandleOnTakeDamage(_Script_Engine::Actor* DamagedActor, float Damage, _Script_Engine::DamageType* DamageType, _Script_Engine::Controller* InstigatedBy, _Script_Engine::Actor* DamageCauser);
    void GetReactionParametersFromDamageType(_Script_Engine::DamageType* DamageType, _Script_Engine::Actor* DamageCauser, _Script_RsGameTechRT::RsReactionParameters& ReactionParams);
    void OnTakeDamage(_Script_Engine::Actor* DamagedActor, float Damage, _Script_Engine::DamageType* DamageType, _Script_Engine::Controller* InstigatedBy, _Script_Engine::Actor* DamageCauser);
    void Base_Reaction_Properties();
    void ReceiveBeginPlay();
    void OnReaction(_Script_RsGameTechRT::RsReactionParameters& ReactionParameters);
    void PostReaction(_Script_RsGameTechRT::RsReactionParameters& ReactionParameters, bool bInterrupted);
    void Handle_Flinch_Reaction(_Script_RsGameTechRT::RsReactionParameters Reaction);
    void ExecuteUbergraph_HC_Base_Reactions(int32_t EntryPoint);
}; // Size: 0x1b0
#pragma pack(pop)
}
