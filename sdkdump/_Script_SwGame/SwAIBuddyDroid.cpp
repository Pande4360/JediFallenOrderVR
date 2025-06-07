#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Vector.hpp"
#include "..\_Script_Engine\PrimitiveComponent.hpp"
#include "..\_Script_RsGameTechRT\RsPhysicalAnimationProfile.hpp"
#include "SwAIBuddyDroid.hpp"
#include "SwAICharacter.hpp"
void* _Script_SwGame::SwAIBuddyDroid::GetZiplineMoveDirection() {
    return;
}
_Script_RsGameTechRT::RsPhysicalAnimationProfile*& _Script_SwGame::SwAIBuddyDroid::get_PhysicalAnimationProfileIdleDefault() {
    return *(_Script_RsGameTechRT::RsPhysicalAnimationProfile**)((uintptr_t)this + 0x29f0);
}
void* _Script_SwGame::SwAIBuddyDroid::get_AttachSocketNames() {
    return (void*)((uintptr_t)this + 0x29c8);
}
_Script_CoreUObject::Class* _Script_SwGame::SwAIBuddyDroid::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/SwGame.SwAIBuddyDroid");
    return result;
}
float& _Script_SwGame::SwAIBuddyDroid::get_AttachLerpTotalTime() {
    return *(float*)((uintptr_t)this + 0x29d8);
}
void _Script_SwGame::SwAIBuddyDroid::SkipAttachingOnCinematicEnd() {
    return;
}
void* _Script_SwGame::SwAIBuddyDroid::get_DetachTargetLocationOffset() {
    return (void*)((uintptr_t)this + 0x29e0);
}
void* _Script_SwGame::SwAIBuddyDroid::GetCurrentAttachPoint() {
    return;
}
float& _Script_SwGame::SwAIBuddyDroid::get_DetachLerpTotalTime() {
    return *(float*)((uintptr_t)this + 0x29dc);
}
float& _Script_SwGame::SwAIBuddyDroid::get_LowProfileSocketWeight() {
    return *(float*)((uintptr_t)this + 0x29ec);
}
void _Script_SwGame::SwAIBuddyDroid::CheckOverlappingWithHero() {
    return;
}
void _Script_SwGame::SwAIBuddyDroid::UnlockAttachPoint() {
    return;
}
bool _Script_SwGame::SwAIBuddyDroid::TryLockAttachPoint() {
    return;
}
void _Script_SwGame::SwAIBuddyDroid::ExitZipline() {
    return;
}
void _Script_SwGame::SwAIBuddyDroid::TryDetachFromHero() {
    return;
}
void _Script_SwGame::SwAIBuddyDroid::TryAttachToHero(bool bImmediateAttach, bool bPerformAttachFromWall) {
    return;
}
bool _Script_SwGame::SwAIBuddyDroid::ShouldPlayAttachAnimation() {
    return;
}
bool _Script_SwGame::SwAIBuddyDroid::ShouldJumpToPOIWhenDetaching() {
    return;
}
void _Script_SwGame::SwAIBuddyDroid::SetZiplineMoveDirection(void* InMoveDirection) {
    return;
}
void _Script_SwGame::SwAIBuddyDroid::SetPreferredMoveMode(void* MoveMode) {
    return;
}
void _Script_SwGame::SwAIBuddyDroid::SetOverlapPrimitive(_Script_Engine::PrimitiveComponent* InOverlapPrimitive) {
    return;
}
bool _Script_SwGame::SwAIBuddyDroid::SetCurrentAttachPoint(void* AttachPoint) {
    return;
}
void _Script_SwGame::SwAIBuddyDroid::SetBuddyState(void* State) {
    return;
}
void _Script_SwGame::SwAIBuddyDroid::OnLightTurnedOn() {
    return;
}
void _Script_SwGame::SwAIBuddyDroid::OnLightTurnedOff() {
    return;
}
void _Script_SwGame::SwAIBuddyDroid::OnDetachedFromHero() {
    return;
}
void _Script_SwGame::SwAIBuddyDroid::OnBeginAttachToHero() {
    return;
}
void _Script_SwGame::SwAIBuddyDroid::OnAttachedToHero() {
    return;
}
bool _Script_SwGame::SwAIBuddyDroid::IsPendingAttachAfterCinematic() {
    return;
}
bool _Script_SwGame::SwAIBuddyDroid::IsHeroInFlashlightZone() {
    return;
}
void* _Script_SwGame::SwAIBuddyDroid::GetPreferredMoveMode() {
    return;
}
void* _Script_SwGame::SwAIBuddyDroid::GetClosestAttachPoint(_Script_CoreUObject::Vector& Location, float& OutDistance) {
    return;
}
void* _Script_SwGame::SwAIBuddyDroid::GetBuddyState() {
    return;
}
void _Script_SwGame::SwAIBuddyDroid::EnterZipline() {
    return;
}
void _Script_SwGame::SwAIBuddyDroid::Dismount() {
    return;
}
void _Script_SwGame::SwAIBuddyDroid::AttachToHeroPoint() {
    return;
}
void _Script_SwGame::SwAIBuddyDroid::AttachToHero(bool bSetNewAttachPoint, void* NewAttachPoint) {
    return;
}
