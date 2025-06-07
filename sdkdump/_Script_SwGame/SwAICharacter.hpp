#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_RsGameTechRT\RsAICharacter.hpp"
namespace _Script_Engine {
struct HitResult;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_SwGame {
struct SwProjectile;
}
namespace _Script_RsGameTechRT {
struct RsCharacter;
}
namespace _Script_Engine {
struct AnimSequenceBase;
}
namespace _Script_RsGameTechRT {
struct RsCharacterAnimationData;
}
namespace _Script_SwGame {
struct SwReactionState;
}
namespace _Script_SwGame {
struct SwDefenseParameters;
}
namespace _Script_SwGame {
struct SwDefenseState;
}
namespace _Script_SwGame {
struct SwAttackState;
}
namespace _Script_RsGameTechRT {
struct RsSyncDefinition;
}
namespace _Script_SwGame {
#pragma pack(push, 1)
struct SwAICharacter : public _Script_RsGameTechRT::RsAICharacter {
    private: char pad_29b0[0x20]; public:
    void* get_AttackRowName();
    static _Script_CoreUObject::Class* static_class();
    void OnShotProjectileReflected(_Script_SwGame::SwProjectile* Projectile, _Script_RsGameTechRT::RsCharacter* ReflectionInstigator);
    void K2_ReactionParried(_Script_Engine::HitResult& HitSweep, void* AttackType, _Script_Engine::AnimSequenceBase* ParryReactionOverride);
    void* GetCurrentAttackRow();
    void AIReaction(_Script_RsGameTechRT::RsCharacterAnimationData& AnimData, _Script_SwGame::SwReactionState* DescriptionTemplate);
    void AIDefendFromDefenseParameters(_Script_SwGame::SwDefenseParameters& DefenseParameters);
    void AIDefendForDefenseType(_Script_RsGameTechRT::RsCharacter* Attacker, void* DefenseType);
    void AIDefend(_Script_RsGameTechRT::RsCharacterAnimationData& AnimData, _Script_SwGame::SwDefenseState* DescriptionTemplate, void* CombatDefenseType);
    void AIAttackSync(_Script_SwGame::SwAttackState* DescriptionTemplate, _Script_RsGameTechRT::RsSyncDefinition* SyncDef, bool bSwapMasterSlave);
    void AIAttack(_Script_RsGameTechRT::RsCharacterAnimationData& AnimData, _Script_SwGame::SwAttackState* DescriptionTemplate);
}; // Size: 0x29d0
#pragma pack(pop)
}
