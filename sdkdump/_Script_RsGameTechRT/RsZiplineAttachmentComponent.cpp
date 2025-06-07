#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "RsCharacter.hpp"
#include "RsCharacterNavigationComponent.hpp"
#include "RsHeroStateModifierDefinition.hpp"
#include "RsZiplineAttachmentComponent.hpp"
#include "RsZiplineAttachmentSettings.hpp"
#include "RsZiplineManager.hpp"
void _Script_RsGameTechRT::RsZiplineAttachmentComponent::ShowGripInputUI() {
    return;
}
void _Script_RsGameTechRT::RsZiplineAttachmentComponent::OnCharacterInterrupted(_Script_RsGameTechRT::RsCharacter* Character) {
    return;
}
_Script_RsGameTechRT::RsZiplineAttachmentSettings*& _Script_RsGameTechRT::RsZiplineAttachmentComponent::get_m_settings() {
    return *(_Script_RsGameTechRT::RsZiplineAttachmentSettings**)((uintptr_t)this + 0x188);
}
void _Script_RsGameTechRT::RsZiplineAttachmentComponent::SetDesiredMovementDirection(void* MovementDirection) {
    return;
}
_Script_RsGameTechRT::RsZiplineManager*& _Script_RsGameTechRT::RsZiplineAttachmentComponent::get_m_ziplineManager() {
    return *(_Script_RsGameTechRT::RsZiplineManager**)((uintptr_t)this + 0x198);
}
_Script_CoreUObject::Class* _Script_RsGameTechRT::RsZiplineAttachmentComponent::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/RsGameTechRT.RsZiplineAttachmentComponent");
    return result;
}
void _Script_RsGameTechRT::RsZiplineAttachmentComponent::ZiplineJumpInputPressed() {
    return;
}
bool _Script_RsGameTechRT::RsZiplineAttachmentComponent::ShouldUseGrip() {
    return;
}
void _Script_RsGameTechRT::RsZiplineAttachmentComponent::ZiplineEntryComplete() {
    return;
}
void _Script_RsGameTechRT::RsZiplineAttachmentComponent::OnZiplineDisableModifierRemoved(_Script_RsGameTechRT::RsHeroStateModifierDefinition* HeroStateModifier) {
    return;
}
void _Script_RsGameTechRT::RsZiplineAttachmentComponent::ReleaseZipline() {
    return;
}
void _Script_RsGameTechRT::RsZiplineAttachmentComponent::OnZiplineJumpModifierRemoved(_Script_RsGameTechRT::RsHeroStateModifierDefinition* HeroStateModifier) {
    return;
}
bool _Script_RsGameTechRT::RsZiplineAttachmentComponent::OnPlayerJumpToZiplineInputPressed() {
    return;
}
void _Script_RsGameTechRT::RsZiplineAttachmentComponent::OnNavStateChanged(void* NewState, void* PrevState) {
    return;
}
void _Script_RsGameTechRT::RsZiplineAttachmentComponent::OnMovementDirectionChanged(void* MovementDirection) {
    return;
}
void _Script_RsGameTechRT::RsZiplineAttachmentComponent::OnExitZipline() {
    return;
}
float _Script_RsGameTechRT::RsZiplineAttachmentComponent::GetZiplineCurrentSpeed() {
    return;
}
void _Script_RsGameTechRT::RsZiplineAttachmentComponent::OnEnterZipline() {
    return;
}
bool _Script_RsGameTechRT::RsZiplineAttachmentComponent::IsInState(void* State) {
    return;
}
bool _Script_RsGameTechRT::RsZiplineAttachmentComponent::IsAttached() {
    return;
}
void _Script_RsGameTechRT::RsZiplineAttachmentComponent::HideGripInputUI() {
    return;
}
bool _Script_RsGameTechRT::RsZiplineAttachmentComponent::GripIsConfirm() {
    return;
}
float _Script_RsGameTechRT::RsZiplineAttachmentComponent::GetZiplineMaxSpeed() {
    return;
}
void* _Script_RsGameTechRT::RsZiplineAttachmentComponent::GetCurrentState() {
    return;
}
float _Script_RsGameTechRT::RsZiplineAttachmentComponent::GetCurrentProgressionAlongZipline() {
    return;
}
void* _Script_RsGameTechRT::RsZiplineAttachmentComponent::GetCurrentMovementDirection() {
    return;
}
void* _Script_RsGameTechRT::RsZiplineAttachmentComponent::GetCurrentAnimState() {
    return;
}
void _Script_RsGameTechRT::RsZiplineAttachmentComponent::DoZiplineJump() {
    return;
}
bool _Script_RsGameTechRT::RsZiplineAttachmentComponent::CanZipline() {
    return;
}
void _Script_RsGameTechRT::RsZiplineAttachmentComponent::BP_ZiplineAttachedTick(float Dt) {
    return;
}
