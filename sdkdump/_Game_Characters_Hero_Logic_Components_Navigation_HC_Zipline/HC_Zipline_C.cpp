#include "..\FUObjectArray.hpp"
#include "HC_Zipline_C.hpp"
#include "..\_Script_AkAudio\AkAudioEvent.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_RsGameTechRT\RsZiplineAttachmentComponent.hpp"
void* _Game_Characters_Hero_Logic_Components_Navigation_HC_Zipline::HC_Zipline_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x290);
}
void* _Game_Characters_Hero_Logic_Components_Navigation_HC_Zipline::HC_Zipline_C::get_Sound_Zipline_Speed() {
    return (void*)((uintptr_t)this + 0x298);
}
_Script_AkAudio::AkAudioEvent*& _Game_Characters_Hero_Logic_Components_Navigation_HC_Zipline::HC_Zipline_C::get_Sound_Zipline_Activate() {
    return *(_Script_AkAudio::AkAudioEvent**)((uintptr_t)this + 0x2a0);
}
void* _Game_Characters_Hero_Logic_Components_Navigation_HC_Zipline::HC_Zipline_C::get_LVL_HeroOffZipline() {
    return (void*)((uintptr_t)this + 0x2d0);
}
_Script_AkAudio::AkAudioEvent*& _Game_Characters_Hero_Logic_Components_Navigation_HC_Zipline::HC_Zipline_C::get_Sound_Zipline_Deactivate() {
    return *(_Script_AkAudio::AkAudioEvent**)((uintptr_t)this + 0x2a8);
}
void* _Game_Characters_Hero_Logic_Components_Navigation_HC_Zipline::HC_Zipline_C::get_Sound_Zipline_Progression() {
    return (void*)((uintptr_t)this + 0x2b0);
}
void* _Game_Characters_Hero_Logic_Components_Navigation_HC_Zipline::HC_Zipline_C::get_FeedbackName() {
    return (void*)((uintptr_t)this + 0x2b8);
}
void* _Game_Characters_Hero_Logic_Components_Navigation_HC_Zipline::HC_Zipline_C::get_LVL_HeroOnZipline() {
    return (void*)((uintptr_t)this + 0x2c0);
}
bool _Game_Characters_Hero_Logic_Components_Navigation_HC_Zipline::HC_Zipline_C::get_LVL_AllowDropOff() {
    return (*(uint8_t*)((uintptr_t)this + 0x2e0 + 0)) & 1 != 0;
}
void _Game_Characters_Hero_Logic_Components_Navigation_HC_Zipline::HC_Zipline_C::set_LVL_AllowDropOff(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x2e0 + 0);
    *(uint8_t*)((uintptr_t)this + 0x2e0 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_CoreUObject::Class* _Game_Characters_Hero_Logic_Components_Navigation_HC_Zipline::HC_Zipline_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"BlueprintGeneratedClass /Game/Characters/Hero/Logic/Components/Navigation/HC_Zipline.HC_Zipline_C");
    return result;
}
void _Game_Characters_Hero_Logic_Components_Navigation_HC_Zipline::HC_Zipline_C::JumpToZiplineInput(void* Action_Name, bool& Attached_To_Zipline) {
    return;
}
void _Game_Characters_Hero_Logic_Components_Navigation_HC_Zipline::HC_Zipline_C::CanReleaseFromCancelButton(void* Action_Name, bool& Can_Release) {
    return;
}
void _Game_Characters_Hero_Logic_Components_Navigation_HC_Zipline::HC_Zipline_C::ZiplineJump() {
    return;
}
void _Game_Characters_Hero_Logic_Components_Navigation_HC_Zipline::HC_Zipline_C::LVL_HeroOffZipline__DelegateSignature() {
    return;
}
void _Game_Characters_Hero_Logic_Components_Navigation_HC_Zipline::HC_Zipline_C::StopAscendZipline() {
    return;
}
void _Game_Characters_Hero_Logic_Components_Navigation_HC_Zipline::HC_Zipline_C::ShowGripInputUI0() {
    return;
}
void _Game_Characters_Hero_Logic_Components_Navigation_HC_Zipline::HC_Zipline_C::HideGripInputUI0() {
    return;
}
void _Game_Characters_Hero_Logic_Components_Navigation_HC_Zipline::HC_Zipline_C::OnEnterZipline0() {
    return;
}
void _Game_Characters_Hero_Logic_Components_Navigation_HC_Zipline::HC_Zipline_C::OnExitZipline0() {
    return;
}
void _Game_Characters_Hero_Logic_Components_Navigation_HC_Zipline::HC_Zipline_C::OnMovementDirectionChanged0(void* MovementDirection) {
    return;
}
void _Game_Characters_Hero_Logic_Components_Navigation_HC_Zipline::HC_Zipline_C::Anim_ZiplineJumpTriggered() {
    return;
}
void _Game_Characters_Hero_Logic_Components_Navigation_HC_Zipline::HC_Zipline_C::BP_ZiplineAttachedTick0(float Dt) {
    return;
}
void _Game_Characters_Hero_Logic_Components_Navigation_HC_Zipline::HC_Zipline_C::StartAscendZipline() {
    return;
}
void _Game_Characters_Hero_Logic_Components_Navigation_HC_Zipline::HC_Zipline_C::Anim_OnZiplineEntryComplete() {
    return;
}
void _Game_Characters_Hero_Logic_Components_Navigation_HC_Zipline::HC_Zipline_C::Release() {
    return;
}
void _Game_Characters_Hero_Logic_Components_Navigation_HC_Zipline::HC_Zipline_C::ExecuteUbergraph_HC_Zipline(int32_t EntryPoint) {
    return;
}
void _Game_Characters_Hero_Logic_Components_Navigation_HC_Zipline::HC_Zipline_C::LVL_HeroOnZipline__DelegateSignature() {
    return;
}
