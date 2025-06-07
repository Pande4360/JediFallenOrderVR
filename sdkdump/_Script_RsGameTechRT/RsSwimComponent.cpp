#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "RsCharacter.hpp"
#include "RsCharacterNavigationComponent.hpp"
#include "RsNavVolume.hpp"
#include "RsSwimComponent.hpp"
#include "RsSwimSettingsDefinition.hpp"
void _Script_RsGameTechRT::RsSwimComponent::StartDivingButtonHeld() {
    return;
}
void _Script_RsGameTechRT::RsSwimComponent::DiveDownwardButtonPushed() {
    return;
}
void* _Script_RsGameTechRT::RsSwimComponent::get_OnSwimStateChangedEvent() {
    return (void*)((uintptr_t)this + 0x190);
}
void _Script_RsGameTechRT::RsSwimComponent::StartDivingButtonPushed() {
    return;
}
float _Script_RsGameTechRT::RsSwimComponent::GetWaterVolumeSurfaceZ() {
    return;
}
_Script_RsGameTechRT::RsSwimSettingsDefinition*& _Script_RsGameTechRT::RsSwimComponent::get_SwimDefinition() {
    return *(_Script_RsGameTechRT::RsSwimSettingsDefinition**)((uintptr_t)this + 0x1a0);
}
void _Script_RsGameTechRT::RsSwimComponent::SwitchDirectlyToDivingInNextVolume() {
    return;
}
_Script_CoreUObject::Class* _Script_RsGameTechRT::RsSwimComponent::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/RsGameTechRT.RsSwimComponent");
    return result;
}
void _Script_RsGameTechRT::RsSwimComponent::OverrideDownwardAndUpwardSpeed(float newDownwardSpeed, float newUpwardSpeed) {
    return;
}
void _Script_RsGameTechRT::RsSwimComponent::StartPlayingUnderwaterBoostAnimation() {
    return;
}
void _Script_RsGameTechRT::RsSwimComponent::StartDivingButtonReleased() {
    return;
}
void _Script_RsGameTechRT::RsSwimComponent::StartDiving() {
    return;
}
bool _Script_RsGameTechRT::RsSwimComponent::ShouldExitSwimmingInVolume() {
    return;
}
bool _Script_RsGameTechRT::RsSwimComponent::SetDesiredState(void* DesiredState) {
    return;
}
void _Script_RsGameTechRT::RsSwimComponent::RemoveOverrideForDownwardAndUpwardSpeed() {
    return;
}
void _Script_RsGameTechRT::RsSwimComponent::OnSwimStateChanged(void* previousSwimState, void* newSwimState) {
    return;
}
void _Script_RsGameTechRT::RsSwimComponent::OnNavStateExited(void* NewState, void* PrevState) {
    return;
}
void _Script_RsGameTechRT::RsSwimComponent::OnIsInWaterStateChanged(_Script_RsGameTechRT::RsCharacter* RsCharacter, _Script_RsGameTechRT::RsNavVolume* Volume, bool bIsInWater, bool bWasInWater) {
    return;
}
bool _Script_RsGameTechRT::RsSwimComponent::IsUnderwaterBoostAllowed() {
    return;
}
void* _Script_RsGameTechRT::RsSwimComponent::GetCurrentState() {
    return;
}
bool _Script_RsGameTechRT::RsSwimComponent::GetAnticipateSwimAfterCinematic() {
    return;
}
void _Script_RsGameTechRT::RsSwimComponent::DiveUpwardButtonReleased() {
    return;
}
void _Script_RsGameTechRT::RsSwimComponent::DiveUpwardButtonPushed() {
    return;
}
void _Script_RsGameTechRT::RsSwimComponent::DiveDownwardButtonReleased() {
    return;
}
void _Script_RsGameTechRT::RsSwimComponent::AnticipateSwimAfterCinematic() {
    return;
}
