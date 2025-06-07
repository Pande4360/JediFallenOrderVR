#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_RsGameTechRT\RsCameraBehavior.hpp"
#include "R4CameraBehavior_OrientToFocus.hpp"
float& _Script_SwGame::R4CameraBehavior_OrientToFocus::get_YawSlack() {
    return *(float*)((uintptr_t)this + 0x30);
}
float& _Script_SwGame::R4CameraBehavior_OrientToFocus::get_MinYawOffset() {
    return *(float*)((uintptr_t)this + 0x34);
}
float& _Script_SwGame::R4CameraBehavior_OrientToFocus::get_YawOffsetAdjustmentSpeed() {
    return *(float*)((uintptr_t)this + 0x38);
}
float& _Script_SwGame::R4CameraBehavior_OrientToFocus::get_MaxYawRotationSpeed() {
    return *(float*)((uintptr_t)this + 0x40);
}
float& _Script_SwGame::R4CameraBehavior_OrientToFocus::get_YawOffsetFadeInDistance() {
    return *(float*)((uintptr_t)this + 0x3c);
}
bool _Script_SwGame::R4CameraBehavior_OrientToFocus::get_bAdjustPitch() {
    return (*(uint8_t*)((uintptr_t)this + 0x44 + 0)) & 1 != 0;
}
bool _Script_SwGame::R4CameraBehavior_OrientToFocus::get_bUsePitchTargetCurve() {
    return (*(uint8_t*)((uintptr_t)this + 0x45 + 0)) & 1 != 0;
}
void _Script_SwGame::R4CameraBehavior_OrientToFocus::set_bAdjustPitch(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x44 + 0);
    *(uint8_t*)((uintptr_t)this + 0x44 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Script_SwGame::R4CameraBehavior_OrientToFocus::set_bUsePitchTargetCurve(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x45 + 0);
    *(uint8_t*)((uintptr_t)this + 0x45 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_SwGame::R4CameraBehavior_OrientToFocus::get_PitchTargetCurve() {
    return (void*)((uintptr_t)this + 0x48);
}
_Script_CoreUObject::Class* _Script_SwGame::R4CameraBehavior_OrientToFocus::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/SwGame.R4CameraBehavior_OrientToFocus");
    return result;
}
