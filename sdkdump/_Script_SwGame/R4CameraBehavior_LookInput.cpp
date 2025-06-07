#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_RsGameTechRT\RsCameraBehavior.hpp"
#include "..\_Script_RsGameTechRT\RsCameraInputs.hpp"
#include "R4CameraBehavior_LookInput.hpp"
float& _Script_SwGame::R4CameraBehavior_LookInput::get_ControllerLookInputScaleYaw() {
    return *(float*)((uintptr_t)this + 0x30);
}
_Script_CoreUObject::Class* _Script_SwGame::R4CameraBehavior_LookInput::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/SwGame.R4CameraBehavior_LookInput");
    return result;
}
float& _Script_SwGame::R4CameraBehavior_LookInput::get_ControllerLookInputScalePitch() {
    return *(float*)((uintptr_t)this + 0x34);
}
float& _Script_SwGame::R4CameraBehavior_LookInput::get_AcceleratedControllerInputScaleYaw() {
    return *(float*)((uintptr_t)this + 0x38);
}
float& _Script_SwGame::R4CameraBehavior_LookInput::get_AcceleratedControllerInputScalePitch() {
    return *(float*)((uintptr_t)this + 0x3c);
}
float& _Script_SwGame::R4CameraBehavior_LookInput::get_MouseLookInputScaleYaw() {
    return *(float*)((uintptr_t)this + 0x40);
}
float& _Script_SwGame::R4CameraBehavior_LookInput::get_MouseLookInputScalePitch() {
    return *(float*)((uintptr_t)this + 0x44);
}
float _Script_SwGame::R4CameraBehavior_LookInput::CalcYawRotationDelta(_Script_RsGameTechRT::RsCameraInputs& Inputs) {
    return;
}
float _Script_SwGame::R4CameraBehavior_LookInput::CalcPitchRotationDelta(_Script_RsGameTechRT::RsCameraInputs& Inputs) {
    return;
}
