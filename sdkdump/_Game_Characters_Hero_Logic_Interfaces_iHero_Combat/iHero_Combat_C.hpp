#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\Interface.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
struct Actor;
}
namespace _Script_SwGame {
struct SwProjectile;
}
namespace _Script_Engine {
struct AnimMontage;
}
namespace _Script_SwGame {
struct CombatAttackTableRow;
}
namespace _Script_Engine {
struct DataTable;
}
namespace _Script_RsGameTechRT {
struct RsCharacter;
}
namespace _Game_Characters_Hero_Logic_Interfaces_iHero_Combat {
#pragma pack(push, 1)
struct iHero_Combat_C : public _Script_CoreUObject::Interface {
    static _Script_CoreUObject::Class* static_class();
    void KilledBountyHunter(_Script_Engine::Actor* KilledCharacter);
    void ClearZTarget();
    void Music_Set_World_State(void* WorldStateMusic);
    void PlayHealingMontageOutro();
    void RefillForceMeter();
    void SetCurrentCombatMontage(_Script_Engine::AnimMontage* Montage);
    void GetCurrentCombatMontage(_Script_Engine::AnimMontage*& CombatMontage);
    void GetCurrentCombatSequence(_Script_SwGame::CombatAttackTableRow& CombatSequence);
    void SetCurrentCombatSequence(void* SequenceName, _Script_Engine::DataTable* SequenceTable);
    void ExecuteCombatSequence(_Script_RsGameTechRT::RsCharacter* Actor, void* SequenceName, _Script_Engine::DataTable* SequenceTable);
    void clearSwordTrace();
    void getSwordTrace(_Script_Engine::Actor*& Target);
    void ProjectileReflection(_Script_SwGame::SwProjectile* BaseProjectile, bool& HeroDefended, bool& Reflected);
    void ParryStart(_Script_Engine::Actor* AI);
}; // Size: 0x28
#pragma pack(pop)
}
