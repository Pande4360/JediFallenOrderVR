#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Rotator.hpp"
#include "..\_Script_CoreUObject\Vector.hpp"
#include "..\_Script_CoreUObject\Vector2D.hpp"
#include "..\_Script_Engine\Character.hpp"
#include "RsActorMotion.hpp"
#include "rsActor.hpp"
void* _Script_RsTechRT::rsActor::get_TopologyBumper() {
    return (void*)((uintptr_t)this + 0xdc0);
}
void* _Script_RsTechRT::rsActor::get_OnSyncInitDelegate() {
    return (void*)((uintptr_t)this + 0x788);
}
_Script_RsTechRT::RsActorMotion*& _Script_RsTechRT::rsActor::get_MotionModel() {
    return *(_Script_RsTechRT::RsActorMotion**)((uintptr_t)this + 0x7e0);
}
void* _Script_RsTechRT::rsActor::get_Topology() {
    return (void*)((uintptr_t)this + 0x7f0);
}
_Script_CoreUObject::Class* _Script_RsTechRT::rsActor::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/RsTechRT.rsActor");
    return result;
}
void _Script_RsTechRT::rsActor::SetInputDirectionMagnitude(float magnitude) {
    return;
}
void _Script_RsTechRT::rsActor::TeleportDirect(_Script_CoreUObject::Vector& DestLocation, _Script_CoreUObject::Rotator& DestRotation, bool bStandingDestination, bool bMaintainVelocity, bool bMaintainAnimation) {
    return;
}
void _Script_RsTechRT::rsActor::SetInputDirectionLocal(_Script_CoreUObject::Vector2D localDir) {
    return;
}
void _Script_RsTechRT::rsActor::SetInputDirection(_Script_CoreUObject::Vector worldDir) {
    return;
}
void _Script_RsTechRT::rsActor::SetDefaultSkeletalAnimTickOption(void* TickOption) {
    return;
}
void _Script_RsTechRT::rsActor::SetBase(void* base) {
    return;
}
void _Script_RsTechRT::rsActor::SetAimDirection(_Script_CoreUObject::Vector worldDir, float intent) {
    return;
}
void _Script_RsTechRT::rsActor::LerpTo(_Script_CoreUObject::Vector& Destination, float TimeToTarget) {
    return;
}
bool _Script_RsTechRT::rsActor::IsTopologyModeSet() {
    return;
}
bool _Script_RsTechRT::rsActor::IsOnGround() {
    return;
}
bool _Script_RsTechRT::rsActor::IsInSyncedAnimation() {
    return;
}
int32_t _Script_RsTechRT::rsActor::GetSyncGroup() {
    return;
}
float _Script_RsTechRT::rsActor::GetInputDirectionMagnitude() {
    return;
}
_Script_CoreUObject::Vector _Script_RsTechRT::rsActor::GetInputDirection() {
    return;
}
bool _Script_RsTechRT::rsActor::GetClampToGeometry() {
    return;
}
_Script_CoreUObject::Vector _Script_RsTechRT::rsActor::GetAimDirection() {
    return;
}
