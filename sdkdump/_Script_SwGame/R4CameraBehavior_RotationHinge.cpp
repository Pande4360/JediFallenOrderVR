#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_RsGameTechRT\RsCameraBehavior.hpp"
#include "R4CameraBehavior_RotationHinge.hpp"
float& _Script_SwGame::R4CameraBehavior_RotationHinge::get_PlayerInputDelay() {
    return *(float*)((uintptr_t)this + 0x34);
}
float& _Script_SwGame::R4CameraBehavior_RotationHinge::get_HingeLength() {
    return *(float*)((uintptr_t)this + 0x30);
}
bool _Script_SwGame::R4CameraBehavior_RotationHinge::get_bAttachToAnchorLocation() {
    return (*(uint8_t*)((uintptr_t)this + 0x3e + 0)) & 1 != 0;
}
float& _Script_SwGame::R4CameraBehavior_RotationHinge::get_RampInTime() {
    return *(float*)((uintptr_t)this + 0x38);
}
void _Script_SwGame::R4CameraBehavior_RotationHinge::set_bAdjustPitch(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x3d + 0);
    *(uint8_t*)((uintptr_t)this + 0x3d + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_SwGame::R4CameraBehavior_RotationHinge::get_bAdjustYaw() {
    return (*(uint8_t*)((uintptr_t)this + 0x3c + 0)) & 1 != 0;
}
void _Script_SwGame::R4CameraBehavior_RotationHinge::set_bAdjustYaw(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x3c + 0);
    *(uint8_t*)((uintptr_t)this + 0x3c + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_SwGame::R4CameraBehavior_RotationHinge::get_bAdjustPitch() {
    return (*(uint8_t*)((uintptr_t)this + 0x3d + 0)) & 1 != 0;
}
void _Script_SwGame::R4CameraBehavior_RotationHinge::set_bAttachToAnchorLocation(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x3e + 0);
    *(uint8_t*)((uintptr_t)this + 0x3e + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
float& _Script_SwGame::R4CameraBehavior_RotationHinge::get_MinAutoPitch() {
    return *(float*)((uintptr_t)this + 0x40);
}
float& _Script_SwGame::R4CameraBehavior_RotationHinge::get_MaxAutoPitch() {
    return *(float*)((uintptr_t)this + 0x44);
}
float& _Script_SwGame::R4CameraBehavior_RotationHinge::get_TargetPitch() {
    return *(float*)((uintptr_t)this + 0x48);
}
void* _Script_SwGame::R4CameraBehavior_RotationHinge::get_DisablePitchAdjustmentMotionParms() {
    return (void*)((uintptr_t)this + 0x50);
}
float& _Script_SwGame::R4CameraBehavior_RotationHinge::get_DelayAfterDisablePitchMotionParmsDeactivated() {
    return *(float*)((uintptr_t)this + 0x60);
}
_Script_CoreUObject::Class* _Script_SwGame::R4CameraBehavior_RotationHinge::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/SwGame.R4CameraBehavior_RotationHinge");
    return result;
}
