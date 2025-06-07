#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "R4CameraBehavior_LimitPitch.hpp"
#include "R4CameraBehavior_LimitPitchRelativeToAimDirection.hpp"
bool _Script_SwGame::R4CameraBehavior_LimitPitchRelativeToAimDirection::get_bAdjustMaxPitchRelativeToAimDirection() {
    return (*(uint8_t*)((uintptr_t)this + 0x48 + 0)) & 1 != 0;
}
_Script_CoreUObject::Class* _Script_SwGame::R4CameraBehavior_LimitPitchRelativeToAimDirection::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/SwGame.R4CameraBehavior_LimitPitchRelativeToAimDirection");
    return result;
}
void _Script_SwGame::R4CameraBehavior_LimitPitchRelativeToAimDirection::set_bAdjustMaxPitchRelativeToAimDirection(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x48 + 0);
    *(uint8_t*)((uintptr_t)this + 0x48 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_SwGame::R4CameraBehavior_LimitPitchRelativeToAimDirection::get_bAdjustMinPitchRelativeToAimDirection() {
    return (*(uint8_t*)((uintptr_t)this + 0x49 + 0)) & 1 != 0;
}
void* _Script_SwGame::R4CameraBehavior_LimitPitchRelativeToAimDirection::get_PitchMaxCurve() {
    return (void*)((uintptr_t)this + 0x50);
}
void _Script_SwGame::R4CameraBehavior_LimitPitchRelativeToAimDirection::set_bAdjustMinPitchRelativeToAimDirection(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x49 + 0);
    *(uint8_t*)((uintptr_t)this + 0x49 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_SwGame::R4CameraBehavior_LimitPitchRelativeToAimDirection::get_PitchMinCurve() {
    return (void*)((uintptr_t)this + 0xc8);
}
