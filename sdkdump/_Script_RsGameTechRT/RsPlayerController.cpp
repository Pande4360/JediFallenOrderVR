#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "..\_Script_CoreUObject\Quat.hpp"
#include "..\_Script_Engine\Actor.hpp"
#include "..\_Script_Engine\PlayerController.hpp"
#include "RsPlayerCharacterDefinition.hpp"
#include "RsPlayerController.hpp"
#include "RsUiRoot.hpp"
void* _Script_RsGameTechRT::RsPlayerController::get_TargetControllerSpace() {
    return (void*)((uintptr_t)this + 0x3570);
}
_Script_CoreUObject::Object*& _Script_RsGameTechRT::RsPlayerController::get_m_controllerMappingOwner() {
    return *(_Script_CoreUObject::Object**)((uintptr_t)this + 0x3540);
}
void _Script_RsGameTechRT::RsPlayerController::set_bUseMovementInputForCamera(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x3560 + 0);
    *(uint8_t*)((uintptr_t)this + 0x3560 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
float& _Script_RsGameTechRT::RsPlayerController::get_ControllerAnalogDeadzone() {
    return *(float*)((uintptr_t)this + 0x35f0);
}
void* _Script_RsGameTechRT::RsPlayerController::get_BuddyDroidActor() {
    return (void*)((uintptr_t)this + 0x3548);
}
_Script_RsGameTechRT::RsPlayerCharacterDefinition*& _Script_RsGameTechRT::RsPlayerController::get_PlayerCharacterDefinition() {
    return *(_Script_RsGameTechRT::RsPlayerCharacterDefinition**)((uintptr_t)this + 0x3550);
}
float& _Script_RsGameTechRT::RsPlayerController::get_CameraLockMinimumPadIntensity() {
    return *(float*)((uintptr_t)this + 0x3558);
}
float& _Script_RsGameTechRT::RsPlayerController::get_CameraLockBlendOutTime() {
    return *(float*)((uintptr_t)this + 0x355c);
}
float& _Script_RsGameTechRT::RsPlayerController::get_ControllerSpaceAxisFactorX() {
    return *(float*)((uintptr_t)this + 0x3584);
}
bool _Script_RsGameTechRT::RsPlayerController::get_bUseMovementInputForCamera() {
    return (*(uint8_t*)((uintptr_t)this + 0x3560 + 0)) & 1 != 0;
}
void* _Script_RsGameTechRT::RsPlayerController::get_ControllerSpaceMode() {
    return (void*)((uintptr_t)this + 0x3580);
}
void* _Script_RsGameTechRT::RsPlayerController::get_ControllerSpaceAxisMapX() {
    return (void*)((uintptr_t)this + 0x3581);
}
void* _Script_RsGameTechRT::RsPlayerController::get_ControllerSpaceAxisMapY() {
    return (void*)((uintptr_t)this + 0x3582);
}
float& _Script_RsGameTechRT::RsPlayerController::get_ControllerSpaceAxisFactorY() {
    return *(float*)((uintptr_t)this + 0x3588);
}
void* _Script_RsGameTechRT::RsPlayerController::get_ControllerDirection() {
    return (void*)((uintptr_t)this + 0x3590);
}
void* _Script_RsGameTechRT::RsPlayerController::get_ControllerDirectionLocal() {
    return (void*)((uintptr_t)this + 0x35a0);
}
void* _Script_RsGameTechRT::RsPlayerController::get_UndampedControllerDirection() {
    return (void*)((uintptr_t)this + 0x35b0);
}
void* _Script_RsGameTechRT::RsPlayerController::get_UndampedControllerDirectionLocal() {
    return (void*)((uintptr_t)this + 0x35c0);
}
void* _Script_RsGameTechRT::RsPlayerController::get_SnappedControllerDirection() {
    return (void*)((uintptr_t)this + 0x35d0);
}
void* _Script_RsGameTechRT::RsPlayerController::get_SnappedControllerDirectionLocal() {
    return (void*)((uintptr_t)this + 0x35e0);
}
bool _Script_RsGameTechRT::RsPlayerController::get_ConsumeLeftAnalog() {
    return (*(uint8_t*)((uintptr_t)this + 0x35f4 + 0)) & 1 != 0;
}
void _Script_RsGameTechRT::RsPlayerController::set_ConsumeLeftAnalog(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x35f4 + 0);
    *(uint8_t*)((uintptr_t)this + 0x35f4 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_CoreUObject::Class* _Script_RsGameTechRT::RsPlayerController::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/RsGameTechRT.RsPlayerController");
    return result;
}
void _Script_RsGameTechRT::RsPlayerController::UnlockCameraForInput() {
    return;
}
void _Script_RsGameTechRT::RsPlayerController::SetUserControlSpaceMapping(_Script_CoreUObject::Object* mappingOwner, _Script_CoreUObject::Quat& newControllerSpace, void* axisMapX, void* axisMapY, float axisFactorX, float axisFactorY, int32_t snappingDivisions) {
    return;
}
void _Script_RsGameTechRT::RsPlayerController::SetControlSpaceMode(void* newControllerSpaceMode) {
    return;
}
void _Script_RsGameTechRT::RsPlayerController::ResetControlSpaceMapping(_Script_CoreUObject::Object* mappingOwner) {
    return;
}
void _Script_RsGameTechRT::RsPlayerController::OnPauseChanged(bool bIsPaused) {
    return;
}
void _Script_RsGameTechRT::RsPlayerController::LockCameraForInput(float MinimumPadIntensityForMaintainingCameraLock, float BlendOutTime) {
    return;
}
_Script_Engine::Actor* _Script_RsGameTechRT::RsPlayerController::GetPlayerStart() {
    return;
}
_Script_RsGameTechRT::RsUiRoot* _Script_RsGameTechRT::RsPlayerController::GetHudRoot() {
    return;
}
