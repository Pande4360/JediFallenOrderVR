#include "..\FUObjectArray.hpp"
#include "HC_CameraPOI_C.hpp"
#include "..\_Game_GlobalData_Structs_Struct_CameraPOIVar\Struct_CameraPOIVar.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\Actor.hpp"
#include "..\_Script_Engine\ActorComponent.hpp"
#include "..\_Script_SwGame\R4PlayerController.hpp"
void _Game_Characters_Hero_Logic_Components_General_HC_CameraPOI::HC_CameraPOI_C::ExecuteUbergraph_HC_CameraPOI(int32_t EntryPoint) {
    return;
}
void _Game_Characters_Hero_Logic_Components_General_HC_CameraPOI::HC_CameraPOI_C::set_CameraResetting(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x179 + 0);
    *(uint8_t*)((uintptr_t)this + 0x179 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Game_Characters_Hero_Logic_Components_General_HC_CameraPOI::HC_CameraPOI_C::get_CameraResetting() {
    return (*(uint8_t*)((uintptr_t)this + 0x179 + 0)) & 1 != 0;
}
void _Game_Characters_Hero_Logic_Components_General_HC_CameraPOI::HC_CameraPOI_C::OnCameraPOIBegin__DelegateSignature() {
    return;
}
void* _Game_Characters_Hero_Logic_Components_General_HC_CameraPOI::HC_CameraPOI_C::get_LeftStickVector() {
    return (void*)((uintptr_t)this + 0x1b0);
}
bool _Game_Characters_Hero_Logic_Components_General_HC_CameraPOI::HC_CameraPOI_C::get_POIRunning() {
    return (*(uint8_t*)((uintptr_t)this + 0x178 + 0)) & 1 != 0;
}
_Script_CoreUObject::Class* _Game_Characters_Hero_Logic_Components_General_HC_CameraPOI::HC_CameraPOI_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"BlueprintGeneratedClass /Game/Characters/Hero/Logic/Components/General/HC_CameraPOI.HC_CameraPOI_C");
    return result;
}
void* _Game_Characters_Hero_Logic_Components_General_HC_CameraPOI::HC_CameraPOI_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x170);
}
void _Game_Characters_Hero_Logic_Components_General_HC_CameraPOI::HC_CameraPOI_C::POITypeToName(void* POIType, void*& POIName) {
    return;
}
void _Game_Characters_Hero_Logic_Components_General_HC_CameraPOI::HC_CameraPOI_C::set_POIRunning(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x178 + 0);
    *(uint8_t*)((uintptr_t)this + 0x178 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Game_Characters_Hero_Logic_Components_General_HC_CameraPOI::HC_CameraPOI_C::InitializePOIValues(_Game_GlobalData_Structs_Struct_CameraPOIVar::Struct_CameraPOIVar POIVariables) {
    return;
}
float& _Game_Characters_Hero_Logic_Components_General_HC_CameraPOI::HC_CameraPOI_C::get_FocusLockDuration() {
    return *(float*)((uintptr_t)this + 0x1a4);
}
_Script_SwGame::R4PlayerController*& _Game_Characters_Hero_Logic_Components_General_HC_CameraPOI::HC_CameraPOI_C::get_R4PlayerController() {
    return *(_Script_SwGame::R4PlayerController**)((uintptr_t)this + 0x180);
}
_Script_Engine::Actor*& _Game_Characters_Hero_Logic_Components_General_HC_CameraPOI::HC_CameraPOI_C::get_FocusActor() {
    return *(_Script_Engine::Actor**)((uintptr_t)this + 0x188);
}
void _Game_Characters_Hero_Logic_Components_General_HC_CameraPOI::HC_CameraPOI_C::SetLeftStickInput(float X_Axis, float Y_Axis) {
    return;
}
void* _Game_Characters_Hero_Logic_Components_General_HC_CameraPOI::HC_CameraPOI_C::get_POIName() {
    return (void*)((uintptr_t)this + 0x190);
}
float& _Game_Characters_Hero_Logic_Components_General_HC_CameraPOI::HC_CameraPOI_C::get_BlendInTime() {
    return *(float*)((uintptr_t)this + 0x198);
}
void _Game_Characters_Hero_Logic_Components_General_HC_CameraPOI::HC_CameraPOI_C::EndCameraPOI() {
    return;
}
float& _Game_Characters_Hero_Logic_Components_General_HC_CameraPOI::HC_CameraPOI_C::get_BlendOutTime() {
    return *(float*)((uintptr_t)this + 0x19c);
}
float& _Game_Characters_Hero_Logic_Components_General_HC_CameraPOI::HC_CameraPOI_C::get_LookAtFocusDuration() {
    return *(float*)((uintptr_t)this + 0x1a0);
}
void* _Game_Characters_Hero_Logic_Components_General_HC_CameraPOI::HC_CameraPOI_C::get_RightStickVector() {
    return (void*)((uintptr_t)this + 0x1a8);
}
float& _Game_Characters_Hero_Logic_Components_General_HC_CameraPOI::HC_CameraPOI_C::get_StickTestValue() {
    return *(float*)((uintptr_t)this + 0x1b8);
}
float& _Game_Characters_Hero_Logic_Components_General_HC_CameraPOI::HC_CameraPOI_C::get_EndCameraThreshhold() {
    return *(float*)((uintptr_t)this + 0x1bc);
}
void* _Game_Characters_Hero_Logic_Components_General_HC_CameraPOI::HC_CameraPOI_C::get_POIReset() {
    return (void*)((uintptr_t)this + 0x1c0);
}
void* _Game_Characters_Hero_Logic_Components_General_HC_CameraPOI::HC_CameraPOI_C::get_EnumToNameMap() {
    return (void*)((uintptr_t)this + 0x1c8);
}
bool _Game_Characters_Hero_Logic_Components_General_HC_CameraPOI::HC_CameraPOI_C::get_isClimb() {
    return (*(uint8_t*)((uintptr_t)this + 0x218 + 0)) & 1 != 0;
}
void _Game_Characters_Hero_Logic_Components_General_HC_CameraPOI::HC_CameraPOI_C::StartCameraPOIByCameraMode(_Game_GlobalData_Structs_Struct_CameraPOIVar::Struct_CameraPOIVar POIVariables, void* CameraMode) {
    return;
}
void _Game_Characters_Hero_Logic_Components_General_HC_CameraPOI::HC_CameraPOI_C::set_isClimb(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x218 + 0);
    *(uint8_t*)((uintptr_t)this + 0x218 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Game_Characters_Hero_Logic_Components_General_HC_CameraPOI::HC_CameraPOI_C::OnCameraPOIEnded__DelegateSignature() {
    return;
}
bool _Game_Characters_Hero_Logic_Components_General_HC_CameraPOI::HC_CameraPOI_C::get_ShouldResetCameraOnEnd() {
    return (*(uint8_t*)((uintptr_t)this + 0x219 + 0)) & 1 != 0;
}
void _Game_Characters_Hero_Logic_Components_General_HC_CameraPOI::HC_CameraPOI_C::set_ShouldResetCameraOnEnd(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x219 + 0);
    *(uint8_t*)((uintptr_t)this + 0x219 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Game_Characters_Hero_Logic_Components_General_HC_CameraPOI::HC_CameraPOI_C::get_DynamicRotationOffset() {
    return (void*)((uintptr_t)this + 0x21c);
}
void* _Game_Characters_Hero_Logic_Components_General_HC_CameraPOI::HC_CameraPOI_C::get_DynamicLocationOffset() {
    return (void*)((uintptr_t)this + 0x228);
}
void* _Game_Characters_Hero_Logic_Components_General_HC_CameraPOI::HC_CameraPOI_C::get_VariableStruct() {
    return (void*)((uintptr_t)this + 0x238);
}
void* _Game_Characters_Hero_Logic_Components_General_HC_CameraPOI::HC_CameraPOI_C::get_OnCameraPOIEnded() {
    return (void*)((uintptr_t)this + 0x278);
}
void* _Game_Characters_Hero_Logic_Components_General_HC_CameraPOI::HC_CameraPOI_C::get_OnCameraPOIBegin() {
    return (void*)((uintptr_t)this + 0x288);
}
bool _Game_Characters_Hero_Logic_Components_General_HC_CameraPOI::HC_CameraPOI_C::get_SetAutoDepthOfFieldTarget() {
    return (*(uint8_t*)((uintptr_t)this + 0x298 + 0)) & 1 != 0;
}
void _Game_Characters_Hero_Logic_Components_General_HC_CameraPOI::HC_CameraPOI_C::set_SetAutoDepthOfFieldTarget(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x298 + 0);
    *(uint8_t*)((uintptr_t)this + 0x298 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Game_Characters_Hero_Logic_Components_General_HC_CameraPOI::HC_CameraPOI_C::EvaluateLookAndMoveInput(float DeltaTime) {
    return;
}
void _Game_Characters_Hero_Logic_Components_General_HC_CameraPOI::HC_CameraPOI_C::ResetBoolFlags() {
    return;
}
void _Game_Characters_Hero_Logic_Components_General_HC_CameraPOI::HC_CameraPOI_C::ResetPOI() {
    return;
}
void _Game_Characters_Hero_Logic_Components_General_HC_CameraPOI::HC_CameraPOI_C::SetRightStickInput(float X_Axis, float Y_Axis) {
    return;
}
void _Game_Characters_Hero_Logic_Components_General_HC_CameraPOI::HC_CameraPOI_C::ReceiveTick0(float DeltaSeconds) {
    return;
}
void _Game_Characters_Hero_Logic_Components_General_HC_CameraPOI::HC_CameraPOI_C::ResetCamera() {
    return;
}
void _Game_Characters_Hero_Logic_Components_General_HC_CameraPOI::HC_CameraPOI_C::ReceiveBeginPlay0() {
    return;
}
void _Game_Characters_Hero_Logic_Components_General_HC_CameraPOI::HC_CameraPOI_C::StartCameraPOIwithVariables(_Game_GlobalData_Structs_Struct_CameraPOIVar::Struct_CameraPOIVar& POIVariables) {
    return;
}
void _Game_Characters_Hero_Logic_Components_General_HC_CameraPOI::HC_CameraPOI_C::StartCameraPOI() {
    return;
}
void _Game_Characters_Hero_Logic_Components_General_HC_CameraPOI::HC_CameraPOI_C::CheckToAddClimbPOISet() {
    return;
}
void _Game_Characters_Hero_Logic_Components_General_HC_CameraPOI::HC_CameraPOI_C::CheckToRemoveClimbPOISet() {
    return;
}
