#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Rotator.hpp"
#include "..\_Script_RsGameTechRT\RsCameraBehavior.hpp"
#include "..\_Script_RsGameTechRT\RsCameraOutputs.hpp"
#include "R4CameraBehavior_RotationSmoothing.hpp"
_Script_CoreUObject::Rotator _Script_SwGame::R4CameraBehavior_RotationSmoothing::GetTargetRotation(_Script_RsGameTechRT::RsCameraOutputs& Outputs) {
    return;
}
float& _Script_SwGame::R4CameraBehavior_RotationSmoothing::get_TrackingPercentage() {
    return *(float*)((uintptr_t)this + 0x30);
}
float& _Script_SwGame::R4CameraBehavior_RotationSmoothing::get_TrackingTime() {
    return *(float*)((uintptr_t)this + 0x34);
}
bool _Script_SwGame::R4CameraBehavior_RotationSmoothing::get_bSmoothRotationOffsets() {
    return (*(uint8_t*)((uintptr_t)this + 0x38 + 0)) & 1 != 0;
}
void _Script_SwGame::R4CameraBehavior_RotationSmoothing::set_bSmoothRotationOffsets(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x38 + 0);
    *(uint8_t*)((uintptr_t)this + 0x38 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_CoreUObject::Class* _Script_SwGame::R4CameraBehavior_RotationSmoothing::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/SwGame.R4CameraBehavior_RotationSmoothing");
    return result;
}
