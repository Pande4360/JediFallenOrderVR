#include "..\FUObjectArray.hpp"
#include "..\_Game_Characters_Hero_Logic_BP_Hero\BP_Hero_C.hpp"
#include "HC_Sheathe_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\AnimMontage.hpp"
#include "..\_Script_Engine\AnimationAsset.hpp"
#include "..\_Script_RsGameTechRT\RsAIGameStateManager.hpp"
#include "..\_Script_RsGameTechRT\RsBitfield_HeroLoadoutFlags.hpp"
#include "..\_Script_RsGameTechRT\RsHeroComponent.hpp"
void _Game_Characters_Hero_Logic_Components_Combat_HC_Sheathe::HC_Sheathe_C::Post_Victory(_Script_Engine::AnimMontage* Montage, bool bInterrupted) {
    return;
}
bool _Game_Characters_Hero_Logic_Components_Combat_HC_Sheathe::HC_Sheathe_C::get_Immobilize() {
    return (*(uint8_t*)((uintptr_t)this + 0x1d0 + 0)) & 1 != 0;
}
bool _Game_Characters_Hero_Logic_Components_Combat_HC_Sheathe::HC_Sheathe_C::get_Unsheathed() {
    return (*(uint8_t*)((uintptr_t)this + 0x1b0 + 0)) & 1 != 0;
}
void* _Game_Characters_Hero_Logic_Components_Combat_HC_Sheathe::HC_Sheathe_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x180);
}
void _Game_Characters_Hero_Logic_Components_Combat_HC_Sheathe::HC_Sheathe_C::CheckScriptedSheatheInterrupted() {
    return;
}
_Game_Characters_Hero_Logic_BP_Hero::BP_Hero_C*& _Game_Characters_Hero_Logic_Components_Combat_HC_Sheathe::HC_Sheathe_C::get_BP_Hero() {
    return *(_Game_Characters_Hero_Logic_BP_Hero::BP_Hero_C**)((uintptr_t)this + 0x188);
}
void _Game_Characters_Hero_Logic_Components_Combat_HC_Sheathe::HC_Sheathe_C::set_Unsheathed(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x1b0 + 0);
    *(uint8_t*)((uintptr_t)this + 0x1b0 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Game_Characters_Hero_Logic_Components_Combat_HC_Sheathe::HC_Sheathe_C::Flourish() {
    return;
}
float& _Game_Characters_Hero_Logic_Components_Combat_HC_Sheathe::HC_Sheathe_C::get_Timeout() {
    return *(float*)((uintptr_t)this + 0x190);
}
float& _Game_Characters_Hero_Logic_Components_Combat_HC_Sheathe::HC_Sheathe_C::get_timerLength() {
    return *(float*)((uintptr_t)this + 0x194);
}
void* _Game_Characters_Hero_Logic_Components_Combat_HC_Sheathe::HC_Sheathe_C::get_Lightsaber() {
    return (void*)((uintptr_t)this + 0x198);
}
void _Game_Characters_Hero_Logic_Components_Combat_HC_Sheathe::HC_Sheathe_C::RequestSheathe(bool ImmobilizeUntilDone) {
    return;
}
void* _Game_Characters_Hero_Logic_Components_Combat_HC_Sheathe::HC_Sheathe_C::get_AttachSocketName() {
    return (void*)((uintptr_t)this + 0x1a8);
}
_Script_Engine::AnimMontage*& _Game_Characters_Hero_Logic_Components_Combat_HC_Sheathe::HC_Sheathe_C::get_Sheathe_Animation() {
    return *(_Script_Engine::AnimMontage**)((uintptr_t)this + 0x1b8);
}
void* _Game_Characters_Hero_Logic_Components_Combat_HC_Sheathe::HC_Sheathe_C::get_OnSheathingDone() {
    return (void*)((uintptr_t)this + 0x1c0);
}
void _Game_Characters_Hero_Logic_Components_Combat_HC_Sheathe::HC_Sheathe_C::set_Immobilize(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x1d0 + 0);
    *(uint8_t*)((uintptr_t)this + 0x1d0 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Game_Characters_Hero_Logic_Components_Combat_HC_Sheathe::HC_Sheathe_C::get_CombinedHilt() {
    return (*(uint8_t*)((uintptr_t)this + 0x1d1 + 0)) & 1 != 0;
}
void _Game_Characters_Hero_Logic_Components_Combat_HC_Sheathe::HC_Sheathe_C::set_CombinedHilt(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x1d1 + 0);
    *(uint8_t*)((uintptr_t)this + 0x1d1 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Game_Characters_Hero_Logic_Components_Combat_HC_Sheathe::HC_Sheathe_C::get_OnUnsheathingDone() {
    return (void*)((uintptr_t)this + 0x1d8);
}
void* _Game_Characters_Hero_Logic_Components_Combat_HC_Sheathe::HC_Sheathe_C::get_AutoSheatheTags() {
    return (void*)((uintptr_t)this + 0x1e8);
}
void _Game_Characters_Hero_Logic_Components_Combat_HC_Sheathe::HC_Sheathe_C::ReceiveBeginPlay() {
    return;
}
_Script_CoreUObject::Class* _Game_Characters_Hero_Logic_Components_Combat_HC_Sheathe::HC_Sheathe_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"BlueprintGeneratedClass /Game/Characters/Hero/Logic/Components/Combat/HC_Sheathe.HC_Sheathe_C");
    return result;
}
void _Game_Characters_Hero_Logic_Components_Combat_HC_Sheathe::HC_Sheathe_C::ChooseVictoryAnim(_Script_Engine::AnimMontage*& Animation) {
    return;
}
bool _Game_Characters_Hero_Logic_Components_Combat_HC_Sheathe::HC_Sheathe_C::DidLoadoutUnlock(_Script_RsGameTechRT::RsBitfield_HeroLoadoutFlags& OldFlags, _Script_RsGameTechRT::RsBitfield_HeroLoadoutFlags& NewFlags, void* Flag) {
    return;
}
void _Game_Characters_Hero_Logic_Components_Combat_HC_Sheathe::HC_Sheathe_C::ChooseSheatheAnim(_Script_Engine::AnimationAsset*& UnsheatheAnim) {
    return;
}
void _Game_Characters_Hero_Logic_Components_Combat_HC_Sheathe::HC_Sheathe_C::IsSheathed(bool& Sheathed) {
    return;
}
void _Game_Characters_Hero_Logic_Components_Combat_HC_Sheathe::HC_Sheathe_C::OnSheathingDone__DelegateSignature() {
    return;
}
void _Game_Characters_Hero_Logic_Components_Combat_HC_Sheathe::HC_Sheathe_C::ChooseUnsheatheAnim(_Script_Engine::AnimationAsset*& UnsheatheAnim) {
    return;
}
void _Game_Characters_Hero_Logic_Components_Combat_HC_Sheathe::HC_Sheathe_C::ExecuteUbergraph_HC_Sheathe(int32_t EntryPoint) {
    return;
}
void _Game_Characters_Hero_Logic_Components_Combat_HC_Sheathe::HC_Sheathe_C::PlayUnSheatheAnim() {
    return;
}
void _Game_Characters_Hero_Logic_Components_Combat_HC_Sheathe::HC_Sheathe_C::SheatheSaber(bool Timeout) {
    return;
}
void _Game_Characters_Hero_Logic_Components_Combat_HC_Sheathe::HC_Sheathe_C::LightsaberAttach(bool hip, bool Force) {
    return;
}
void _Game_Characters_Hero_Logic_Components_Combat_HC_Sheathe::HC_Sheathe_C::InstantSheathe(bool Unsheathe, bool ignoreFlashlight, bool saveFlashlightState) {
    return;
}
void _Game_Characters_Hero_Logic_Components_Combat_HC_Sheathe::HC_Sheathe_C::ReceiveTick(float DeltaSeconds) {
    return;
}
void _Game_Characters_Hero_Logic_Components_Combat_HC_Sheathe::HC_Sheathe_C::Action_SheatheLightsaber() {
    return;
}
void _Game_Characters_Hero_Logic_Components_Combat_HC_Sheathe::HC_Sheathe_C::Sheathing_Interrupted() {
    return;
}
void _Game_Characters_Hero_Logic_Components_Combat_HC_Sheathe::HC_Sheathe_C::AnimNotify_SheathingDone(bool Unsheathe) {
    return;
}
void _Game_Characters_Hero_Logic_Components_Combat_HC_Sheathe::HC_Sheathe_C::UnsheatheSwitch(void* New_Type) {
    return;
}
void _Game_Characters_Hero_Logic_Components_Combat_HC_Sheathe::HC_Sheathe_C::Player_Victory(_Script_RsGameTechRT::RsAIGameStateManager* GameStateManager) {
    return;
}
void _Game_Characters_Hero_Logic_Components_Combat_HC_Sheathe::HC_Sheathe_C::OnThrowReturned() {
    return;
}
void _Game_Characters_Hero_Logic_Components_Combat_HC_Sheathe::HC_Sheathe_C::OnUnsheathingDone__DelegateSignature() {
    return;
}
