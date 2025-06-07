#include "..\FUObjectArray.hpp"
#include "..\_Game_Characters_Hero_Logic_BP_Hero\BP_Hero_C.hpp"
#include "HC_ForcePowers_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_RsGameTechRT\RsHeroComponent.hpp"
#include "..\_Script_SwGame\RsAbilityUserComponent.hpp"
void* _Game_Characters_Hero_Logic_Components_ForceAbilities_HC_ForcePowers::HC_ForcePowers_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x180);
}
void* _Game_Characters_Hero_Logic_Components_ForceAbilities_HC_ForcePowers::HC_ForcePowers_C::get_ForceFailed() {
    return (void*)((uintptr_t)this + 0x1a0);
}
void _Game_Characters_Hero_Logic_Components_ForceAbilities_HC_ForcePowers::HC_ForcePowers_C::set_ForceTKActive(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x198 + 0);
    *(uint8_t*)((uintptr_t)this + 0x198 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_SwGame::RsAbilityUserComponent*& _Game_Characters_Hero_Logic_Components_ForceAbilities_HC_ForcePowers::HC_ForcePowers_C::get_RsAbilityUser_REF() {
    return *(_Script_SwGame::RsAbilityUserComponent**)((uintptr_t)this + 0x190);
}
_Game_Characters_Hero_Logic_BP_Hero::BP_Hero_C*& _Game_Characters_Hero_Logic_Components_ForceAbilities_HC_ForcePowers::HC_ForcePowers_C::get_BP_Hero_REF() {
    return *(_Game_Characters_Hero_Logic_BP_Hero::BP_Hero_C**)((uintptr_t)this + 0x188);
}
bool _Game_Characters_Hero_Logic_Components_ForceAbilities_HC_ForcePowers::HC_ForcePowers_C::get_ForceTKActive() {
    return (*(uint8_t*)((uintptr_t)this + 0x198 + 0)) & 1 != 0;
}
void* _Game_Characters_Hero_Logic_Components_ForceAbilities_HC_ForcePowers::HC_ForcePowers_C::get_HeroForcePushStarted() {
    return (void*)((uintptr_t)this + 0x1b0);
}
void _Game_Characters_Hero_Logic_Components_ForceAbilities_HC_ForcePowers::HC_ForcePowers_C::HeroForcePushStarted__DelegateSignature() {
    return;
}
void* _Game_Characters_Hero_Logic_Components_ForceAbilities_HC_ForcePowers::HC_ForcePowers_C::get_HeroForceSlowStarted() {
    return (void*)((uintptr_t)this + 0x1c0);
}
void* _Game_Characters_Hero_Logic_Components_ForceAbilities_HC_ForcePowers::HC_ForcePowers_C::get_HeroForcePullStarted() {
    return (void*)((uintptr_t)this + 0x1d0);
}
_Script_CoreUObject::Class* _Game_Characters_Hero_Logic_Components_ForceAbilities_HC_ForcePowers::HC_ForcePowers_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"BlueprintGeneratedClass /Game/Characters/Hero/Logic/Components/ForceAbilities/HC_ForcePowers.HC_ForcePowers_C");
    return result;
}
void _Game_Characters_Hero_Logic_Components_ForceAbilities_HC_ForcePowers::HC_ForcePowers_C::ReceiveBeginPlay() {
    return;
}
void _Game_Characters_Hero_Logic_Components_ForceAbilities_HC_ForcePowers::HC_ForcePowers_C::Activate_Force_Push() {
    return;
}
void _Game_Characters_Hero_Logic_Components_ForceAbilities_HC_ForcePowers::HC_ForcePowers_C::Activate_Force_Pull() {
    return;
}
void _Game_Characters_Hero_Logic_Components_ForceAbilities_HC_ForcePowers::HC_ForcePowers_C::Activate_Force_Telekinesis() {
    return;
}
void _Game_Characters_Hero_Logic_Components_ForceAbilities_HC_ForcePowers::HC_ForcePowers_C::Activate_Force_Slow() {
    return;
}
void _Game_Characters_Hero_Logic_Components_ForceAbilities_HC_ForcePowers::HC_ForcePowers_C::Deactivate_Force_Push() {
    return;
}
void _Game_Characters_Hero_Logic_Components_ForceAbilities_HC_ForcePowers::HC_ForcePowers_C::Deactivate_Force_Pull() {
    return;
}
void _Game_Characters_Hero_Logic_Components_ForceAbilities_HC_ForcePowers::HC_ForcePowers_C::Deactivate_Force_Slow() {
    return;
}
void _Game_Characters_Hero_Logic_Components_ForceAbilities_HC_ForcePowers::HC_ForcePowers_C::Force_Empty_During_Slow(void* ResponsibleForceName, float TimeUntilForceRegen) {
    return;
}
void _Game_Characters_Hero_Logic_Components_ForceAbilities_HC_ForcePowers::HC_ForcePowers_C::ForcePullDrop_AutoAttack() {
    return;
}
void _Game_Characters_Hero_Logic_Components_ForceAbilities_HC_ForcePowers::HC_ForcePowers_C::ExecuteUbergraph_HC_ForcePowers(int32_t EntryPoint) {
    return;
}
void _Game_Characters_Hero_Logic_Components_ForceAbilities_HC_ForcePowers::HC_ForcePowers_C::HeroForcePullStarted__DelegateSignature() {
    return;
}
void _Game_Characters_Hero_Logic_Components_ForceAbilities_HC_ForcePowers::HC_ForcePowers_C::HeroForceSlowStarted__DelegateSignature() {
    return;
}
void _Game_Characters_Hero_Logic_Components_ForceAbilities_HC_ForcePowers::HC_ForcePowers_C::ForceFailed__DelegateSignature() {
    return;
}
