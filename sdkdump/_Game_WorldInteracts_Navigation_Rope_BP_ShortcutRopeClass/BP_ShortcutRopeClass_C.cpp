#include "..\FUObjectArray.hpp"
#include "..\_Game_WorldInteracts_Navigation_Rope_BP_BaseRope\BP_BaseRope_C.hpp"
#include "BP_ShortcutRopeClass_C.hpp"
#include "..\_Script_AkAudio\AkBankLoadComponent.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Vector.hpp"
#include "..\_Script_RsGameTechRT\RsRopeAttachmentComponent.hpp"
#include "..\_Script_RsGameTechRT\RsRopeComponent.hpp"
#include "..\_Script_SwGame\SwRopeAttachmentComponent.hpp"
float& _Game_WorldInteracts_Navigation_Rope_BP_ShortcutRopeClass::BP_ShortcutRopeClass_C::get_ZipDelay() {
    return *(float*)((uintptr_t)this + 0x474);
}
float& _Game_WorldInteracts_Navigation_Rope_BP_ShortcutRopeClass::BP_ShortcutRopeClass_C::get_ZipDownLength() {
    return *(float*)((uintptr_t)this + 0x46c);
}
void* _Game_WorldInteracts_Navigation_Rope_BP_ShortcutRopeClass::BP_ShortcutRopeClass_C::get_UberGraphFrame0() {
    return (void*)((uintptr_t)this + 0x458);
}
_Script_AkAudio::AkBankLoadComponent*& _Game_WorldInteracts_Navigation_Rope_BP_ShortcutRopeClass::BP_ShortcutRopeClass_C::get_AkBankLoad() {
    return *(_Script_AkAudio::AkBankLoadComponent**)((uintptr_t)this + 0x460);
}
float& _Game_WorldInteracts_Navigation_Rope_BP_ShortcutRopeClass::BP_ShortcutRopeClass_C::get_ZipUpLength() {
    return *(float*)((uintptr_t)this + 0x468);
}
void _Game_WorldInteracts_Navigation_Rope_BP_ShortcutRopeClass::BP_ShortcutRopeClass_C::ShouldDetach(bool& ShouldDetach) {
    return;
}
float& _Game_WorldInteracts_Navigation_Rope_BP_ShortcutRopeClass::BP_ShortcutRopeClass_C::get_ZipSpeed() {
    return *(float*)((uintptr_t)this + 0x470);
}
void* _Game_WorldInteracts_Navigation_Rope_BP_ShortcutRopeClass::BP_ShortcutRopeClass_C::get_TopDetachDestinationA() {
    return (void*)((uintptr_t)this + 0x478);
}
void* _Game_WorldInteracts_Navigation_Rope_BP_ShortcutRopeClass::BP_ShortcutRopeClass_C::get_TopDetachDestinationB() {
    return (void*)((uintptr_t)this + 0x484);
}
float& _Game_WorldInteracts_Navigation_Rope_BP_ShortcutRopeClass::BP_ShortcutRopeClass_C::get_DetachHorizontalSpeed() {
    return *(float*)((uintptr_t)this + 0x490);
}
bool _Game_WorldInteracts_Navigation_Rope_BP_ShortcutRopeClass::BP_ShortcutRopeClass_C::get_AirSteerDuringDetach() {
    return (*(uint8_t*)((uintptr_t)this + 0x494 + 0)) & 1 != 0;
}
void _Game_WorldInteracts_Navigation_Rope_BP_ShortcutRopeClass::BP_ShortcutRopeClass_C::set_AirSteerDuringDetach(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x494 + 0);
    *(uint8_t*)((uintptr_t)this + 0x494 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
float& _Game_WorldInteracts_Navigation_Rope_BP_ShortcutRopeClass::BP_ShortcutRopeClass_C::get_targetLength() {
    return *(float*)((uintptr_t)this + 0x498);
}
bool _Game_WorldInteracts_Navigation_Rope_BP_ShortcutRopeClass::BP_ShortcutRopeClass_C::get_ReachedTarget() {
    return (*(uint8_t*)((uintptr_t)this + 0x49c + 0)) & 1 != 0;
}
void _Game_WorldInteracts_Navigation_Rope_BP_ShortcutRopeClass::BP_ShortcutRopeClass_C::set_ReachedTarget(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x49c + 0);
    *(uint8_t*)((uintptr_t)this + 0x49c + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Game_WorldInteracts_Navigation_Rope_BP_ShortcutRopeClass::BP_ShortcutRopeClass_C::get_StartedZip() {
    return (*(uint8_t*)((uintptr_t)this + 0x49d + 0)) & 1 != 0;
}
void _Game_WorldInteracts_Navigation_Rope_BP_ShortcutRopeClass::BP_ShortcutRopeClass_C::set_StartedZip(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x49d + 0);
    *(uint8_t*)((uintptr_t)this + 0x49d + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
float& _Game_WorldInteracts_Navigation_Rope_BP_ShortcutRopeClass::BP_ShortcutRopeClass_C::get_ZipDelayTimer() {
    return *(float*)((uintptr_t)this + 0x4a0);
}
void _Game_WorldInteracts_Navigation_Rope_BP_ShortcutRopeClass::BP_ShortcutRopeClass_C::Update(float Dt) {
    return;
}
float& _Game_WorldInteracts_Navigation_Rope_BP_ShortcutRopeClass::BP_ShortcutRopeClass_C::get_AttractionForce() {
    return *(float*)((uintptr_t)this + 0x4a4);
}
float& _Game_WorldInteracts_Navigation_Rope_BP_ShortcutRopeClass::BP_ShortcutRopeClass_C::get_TurnSpeed() {
    return *(float*)((uintptr_t)this + 0x4a8);
}
bool _Game_WorldInteracts_Navigation_Rope_BP_ShortcutRopeClass::BP_ShortcutRopeClass_C::get_GoingUp() {
    return (*(uint8_t*)((uintptr_t)this + 0x4ac + 0)) & 1 != 0;
}
void _Game_WorldInteracts_Navigation_Rope_BP_ShortcutRopeClass::BP_ShortcutRopeClass_C::set_GoingUp(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x4ac + 0);
    *(uint8_t*)((uintptr_t)this + 0x4ac + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_CoreUObject::Class* _Game_WorldInteracts_Navigation_Rope_BP_ShortcutRopeClass::BP_ShortcutRopeClass_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"BlueprintGeneratedClass /Game/WorldInteracts/Navigation/Rope/BP_ShortcutRopeClass.BP_ShortcutRopeClass_C");
    return result;
}
void _Game_WorldInteracts_Navigation_Rope_BP_ShortcutRopeClass::BP_ShortcutRopeClass_C::TurnTowardsDestination() {
    return;
}
void _Game_WorldInteracts_Navigation_Rope_BP_ShortcutRopeClass::BP_ShortcutRopeClass_C::GetDetachDestination(_Script_CoreUObject::Vector& HeroOrigin, _Script_CoreUObject::Vector& Destination) {
    return;
}
void _Game_WorldInteracts_Navigation_Rope_BP_ShortcutRopeClass::BP_ShortcutRopeClass_C::DetachToLocation(float HorizontalSpeed, float& AirTime) {
    return;
}
void _Game_WorldInteracts_Navigation_Rope_BP_ShortcutRopeClass::BP_ShortcutRopeClass_C::GetDistanceAndDirection(_Script_CoreUObject::Vector from, _Script_CoreUObject::Vector to, float& Distance, _Script_CoreUObject::Vector& Direction) {
    return;
}
void _Game_WorldInteracts_Navigation_Rope_BP_ShortcutRopeClass::BP_ShortcutRopeClass_C::HasReachedTarget_(bool& HasReachedTarget_) {
    return;
}
void _Game_WorldInteracts_Navigation_Rope_BP_ShortcutRopeClass::BP_ShortcutRopeClass_C::GetAbsoluteZipDownLength(float& ZipDownLength) {
    return;
}
void _Game_WorldInteracts_Navigation_Rope_BP_ShortcutRopeClass::BP_ShortcutRopeClass_C::GetAbsoluteZipUpLength(float& ZipUpLength) {
    return;
}
void _Game_WorldInteracts_Navigation_Rope_BP_ShortcutRopeClass::BP_ShortcutRopeClass_C::IsZippingUp_(bool& IsZippingUp_) {
    return;
}
void _Game_WorldInteracts_Navigation_Rope_BP_ShortcutRopeClass::BP_ShortcutRopeClass_C::UserConstructionScript0() {
    return;
}
void _Game_WorldInteracts_Navigation_Rope_BP_ShortcutRopeClass::BP_ShortcutRopeClass_C::BndEvt__RopeComponent_K2Node_ComponentBoundEvent_0_OnRopeAttached__DelegateSignature0(_Script_RsGameTechRT::RsRopeComponent* Rope, _Script_RsGameTechRT::RsRopeAttachmentComponent* RopeAttachment) {
    return;
}
void _Game_WorldInteracts_Navigation_Rope_BP_ShortcutRopeClass::BP_ShortcutRopeClass_C::ReceiveTick0(float DeltaSeconds) {
    return;
}
void _Game_WorldInteracts_Navigation_Rope_BP_ShortcutRopeClass::BP_ShortcutRopeClass_C::OnStateChanged(_Script_SwGame::SwRopeAttachmentComponent* RopeAttachment, void* OldState, void* NewState) {
    return;
}
void _Game_WorldInteracts_Navigation_Rope_BP_ShortcutRopeClass::BP_ShortcutRopeClass_C::BndEvt__RopeComponent_K2Node_ComponentBoundEvent_0_OnRopeDetached__DelegateSignature(_Script_RsGameTechRT::RsRopeComponent* Rope, _Script_RsGameTechRT::RsRopeAttachmentComponent* RopeAttachment) {
    return;
}
void _Game_WorldInteracts_Navigation_Rope_BP_ShortcutRopeClass::BP_ShortcutRopeClass_C::DetachToDestination() {
    return;
}
void _Game_WorldInteracts_Navigation_Rope_BP_ShortcutRopeClass::BP_ShortcutRopeClass_C::ExecuteUbergraph_BP_ShortcutRopeClass(int32_t EntryPoint) {
    return;
}
