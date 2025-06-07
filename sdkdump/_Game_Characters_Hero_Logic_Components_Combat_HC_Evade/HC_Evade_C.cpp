#include "..\FUObjectArray.hpp"
#include "..\_Game_Characters_Hero_Logic_BP_Hero\BP_Hero_C.hpp"
#include "HC_Evade_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\AnimMontage.hpp"
#include "..\_Script_RsGameTechRT\RsCharacter.hpp"
#include "..\_Script_RsGameTechRT\RsHeroComponent.hpp"
bool _Game_Characters_Hero_Logic_Components_Combat_HC_Evade::HC_Evade_C::get_evading() {
    return (*(uint8_t*)((uintptr_t)this + 0x1d8 + 0)) & 1 != 0;
}
void _Game_Characters_Hero_Logic_Components_Combat_HC_Evade::HC_Evade_C::evadeB__DelegateSignature() {
    return;
}
void* _Game_Characters_Hero_Logic_Components_Combat_HC_Evade::HC_Evade_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x180);
}
void* _Game_Characters_Hero_Logic_Components_Combat_HC_Evade::HC_Evade_C::get_evadeL() {
    return (void*)((uintptr_t)this + 0x1b8);
}
_Game_Characters_Hero_Logic_BP_Hero::BP_Hero_C*& _Game_Characters_Hero_Logic_Components_Combat_HC_Evade::HC_Evade_C::get_BP_Hero() {
    return *(_Game_Characters_Hero_Logic_BP_Hero::BP_Hero_C**)((uintptr_t)this + 0x188);
}
float& _Game_Characters_Hero_Logic_Components_Combat_HC_Evade::HC_Evade_C::get_evadeFBMin() {
    return *(float*)((uintptr_t)this + 0x190);
}
void* _Game_Characters_Hero_Logic_Components_Combat_HC_Evade::HC_Evade_C::get_evadeR() {
    return (void*)((uintptr_t)this + 0x1c8);
}
void* _Game_Characters_Hero_Logic_Components_Combat_HC_Evade::HC_Evade_C::get_evadeF() {
    return (void*)((uintptr_t)this + 0x198);
}
void* _Game_Characters_Hero_Logic_Components_Combat_HC_Evade::HC_Evade_C::get_evadeB() {
    return (void*)((uintptr_t)this + 0x1a8);
}
void _Game_Characters_Hero_Logic_Components_Combat_HC_Evade::HC_Evade_C::set_evading(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x1d8 + 0);
    *(uint8_t*)((uintptr_t)this + 0x1d8 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Game_Characters_Hero_Logic_Components_Combat_HC_Evade::HC_Evade_C::get_evadeAttackDir() {
    return (void*)((uintptr_t)this + 0x1d9);
}
float& _Game_Characters_Hero_Logic_Components_Combat_HC_Evade::HC_Evade_C::get_evadeAttackTime() {
    return *(float*)((uintptr_t)this + 0x1dc);
}
void* _Game_Characters_Hero_Logic_Components_Combat_HC_Evade::HC_Evade_C::get_HeroEvaded() {
    return (void*)((uintptr_t)this + 0x1e0);
}
void* _Game_Characters_Hero_Logic_Components_Combat_HC_Evade::HC_Evade_C::get_HeroRolled() {
    return (void*)((uintptr_t)this + 0x1f0);
}
_Script_RsGameTechRT::RsCharacter*& _Game_Characters_Hero_Logic_Components_Combat_HC_Evade::HC_Evade_C::get_PerfectEvadedAttacker() {
    return *(_Script_RsGameTechRT::RsCharacter**)((uintptr_t)this + 0x200);
}
_Script_CoreUObject::Class* _Game_Characters_Hero_Logic_Components_Combat_HC_Evade::HC_Evade_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"BlueprintGeneratedClass /Game/Characters/Hero/Logic/Components/Combat/HC_Evade.HC_Evade_C");
    return result;
}
void _Game_Characters_Hero_Logic_Components_Combat_HC_Evade::HC_Evade_C::ShowStaminaBar() {
    return;
}
bool _Game_Characters_Hero_Logic_Components_Combat_HC_Evade::HC_Evade_C::DetermineEvadeType() {
    return;
}
void _Game_Characters_Hero_Logic_Components_Combat_HC_Evade::HC_Evade_C::DetermineEvadeBlendDirection(float& X, float& Y) {
    return;
}
void _Game_Characters_Hero_Logic_Components_Combat_HC_Evade::HC_Evade_C::ReceiveBeginPlay() {
    return;
}
void _Game_Characters_Hero_Logic_Components_Combat_HC_Evade::HC_Evade_C::Evade_Input() {
    return;
}
void _Game_Characters_Hero_Logic_Components_Combat_HC_Evade::HC_Evade_C::QuickRecover() {
    return;
}
void _Game_Characters_Hero_Logic_Components_Combat_HC_Evade::HC_Evade_C::Evade() {
    return;
}
void _Game_Characters_Hero_Logic_Components_Combat_HC_Evade::HC_Evade_C::BruteSlide() {
    return;
}
void _Game_Characters_Hero_Logic_Components_Combat_HC_Evade::HC_Evade_C::Montage_End(_Script_Engine::AnimMontage* Montage, bool bInterrupted) {
    return;
}
void _Game_Characters_Hero_Logic_Components_Combat_HC_Evade::HC_Evade_C::zTarget_Evade() {
    return;
}
void _Game_Characters_Hero_Logic_Components_Combat_HC_Evade::HC_Evade_C::OnStartEvade(_Script_RsGameTechRT::RsCharacter* Attacker) {
    return;
}
void _Game_Characters_Hero_Logic_Components_Combat_HC_Evade::HC_Evade_C::Backwards_Roll() {
    return;
}
void _Game_Characters_Hero_Logic_Components_Combat_HC_Evade::HC_Evade_C::Forward_Roll() {
    return;
}
void _Game_Characters_Hero_Logic_Components_Combat_HC_Evade::HC_Evade_C::DashEvade(float BlendSpace_X) {
    return;
}
void _Game_Characters_Hero_Logic_Components_Combat_HC_Evade::HC_Evade_C::PerfectDodge() {
    return;
}
void _Game_Characters_Hero_Logic_Components_Combat_HC_Evade::HC_Evade_C::Put_Out_Flames() {
    return;
}
void _Game_Characters_Hero_Logic_Components_Combat_HC_Evade::HC_Evade_C::NeutralEvade() {
    return;
}
void _Game_Characters_Hero_Logic_Components_Combat_HC_Evade::HC_Evade_C::Perfect_Evade_Ended(_Script_Engine::AnimMontage* Montage, bool bInterrupted) {
    return;
}
void _Game_Characters_Hero_Logic_Components_Combat_HC_Evade::HC_Evade_C::ExecuteUbergraph_HC_Evade(int32_t EntryPoint) {
    return;
}
void _Game_Characters_Hero_Logic_Components_Combat_HC_Evade::HC_Evade_C::HeroRolled__DelegateSignature() {
    return;
}
void _Game_Characters_Hero_Logic_Components_Combat_HC_Evade::HC_Evade_C::HeroEvaded__DelegateSignature() {
    return;
}
void _Game_Characters_Hero_Logic_Components_Combat_HC_Evade::HC_Evade_C::evadeR__DelegateSignature() {
    return;
}
void _Game_Characters_Hero_Logic_Components_Combat_HC_Evade::HC_Evade_C::evadeL__DelegateSignature() {
    return;
}
void _Game_Characters_Hero_Logic_Components_Combat_HC_Evade::HC_Evade_C::evadeF__DelegateSignature() {
    return;
}
