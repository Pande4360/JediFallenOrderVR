#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_SwGame\SwAttackState.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_RsGameTechRT {
struct RsDamageParams;
}
namespace _Script_RsGameTechRT {
struct RsCharacter;
}
namespace _Script_Engine {
struct Actor;
}
namespace _Game_Characters_Crab00_Logic_Descriptions_Crab_RollAttackDescription {
#pragma pack(push, 1)
struct Crab_RollAttackDescription_C : public _Script_SwGame::SwAttackState {
    private: char pad_258[0x8]; public:
    void* get_UberGraphFrame();
    static _Script_CoreUObject::Class* static_class();
    void OnConnectedButDealtNoDamage0(_Script_RsGameTechRT::RsCharacter* TheAttacker, _Script_RsGameTechRT::RsDamageParams& DamageInfo, _Script_Engine::Actor* OtherActor);
    void TickAttack0(_Script_RsGameTechRT::RsCharacter* TheAttacker, float DeltaTime);
    void OnDealtAnyDamage0(_Script_RsGameTechRT::RsCharacter* TheAttacker, float Damage, _Script_RsGameTechRT::RsDamageParams& DamageInfo, _Script_Engine::Actor* DamagedActor, _Script_Engine::Actor* DamageCauser);
    void ExecuteUbergraph_Crab_RollAttackDescription(int32_t EntryPoint);
}; // Size: 0x260
#pragma pack(pop)
}
