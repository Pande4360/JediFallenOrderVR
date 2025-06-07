#include "..\FUObjectArray.hpp"
#include "State_ForcePush_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\Actor.hpp"
#include "..\_Script_RsGameTechRT\RsCharacter.hpp"
#include "..\_Script_RsGameTechRT\RsDamageParams.hpp"
#include "..\_Script_SwGame\RsAbilityState.hpp"
void* _Game_Characters__Shared_Abilities_States_State_ForcePUsh::State_ForcePush_C::OnDefenseSuccess0(_Script_RsGameTechRT::RsCharacter* TheDefender, _Script_RsGameTechRT::RsDamageParams& DamageInfo, _Script_RsGameTechRT::RsCharacter* AttackingCharacter, _Script_Engine::Actor* DamageCauser) {
    return;
}
void* _Game_Characters__Shared_Abilities_States_State_ForcePUsh::State_ForcePush_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x268);
}
void _Game_Characters__Shared_Abilities_States_State_ForcePUsh::State_ForcePush_C::CombatNotify_BranchPush() {
    return;
}
_Script_RsGameTechRT::RsCharacter*& _Game_Characters__Shared_Abilities_States_State_ForcePUsh::State_ForcePush_C::get_Owner() {
    return *(_Script_RsGameTechRT::RsCharacter**)((uintptr_t)this + 0x270);
}
void _Game_Characters__Shared_Abilities_States_State_ForcePUsh::State_ForcePush_C::set_PushButtonHeld(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x278 + 0);
    *(uint8_t*)((uintptr_t)this + 0x278 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Game_Characters__Shared_Abilities_States_State_ForcePUsh::State_ForcePush_C::get_PushButtonHeld() {
    return (*(uint8_t*)((uintptr_t)this + 0x278 + 0)) & 1 != 0;
}
_Script_CoreUObject::Class* _Game_Characters__Shared_Abilities_States_State_ForcePUsh::State_ForcePush_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"BlueprintGeneratedClass /Game/Characters/_Shared/Abilities/States/State_ForcePUsh.State_ForcePush_C");
    return result;
}
void _Game_Characters__Shared_Abilities_States_State_ForcePUsh::State_ForcePush_C::CombatNotify_BranchPush_2to3() {
    return;
}
void _Game_Characters__Shared_Abilities_States_State_ForcePUsh::State_ForcePush_C::OnBeginAttack(_Script_RsGameTechRT::RsCharacter* TheAttacker) {
    return;
}
void _Game_Characters__Shared_Abilities_States_State_ForcePUsh::State_ForcePush_C::OnEndAttack(_Script_RsGameTechRT::RsCharacter* TheAttacker) {
    return;
}
void _Game_Characters__Shared_Abilities_States_State_ForcePUsh::State_ForcePush_C::CombatNotify_SaberBranch(void* Identifier) {
    return;
}
void _Game_Characters__Shared_Abilities_States_State_ForcePUsh::State_ForcePush_C::CombatNotify_SaberBranch_2to3(void* Identifier) {
    return;
}
void _Game_Characters__Shared_Abilities_States_State_ForcePUsh::State_ForcePush_C::TickAttack(_Script_RsGameTechRT::RsCharacter* TheAttacker, float DeltaTime) {
    return;
}
void _Game_Characters__Shared_Abilities_States_State_ForcePUsh::State_ForcePush_C::ExecuteUbergraph_State_ForcePush(int32_t EntryPoint) {
    return;
}
