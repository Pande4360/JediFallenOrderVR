#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_RsGameTechRT\RsCameraBehavior.hpp"
#include "R4CameraBehavior_LimitPitch.hpp"
void _Script_SwGame::R4CameraBehavior_LimitPitch::set_bEnableInitialPitch(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x40 + 0);
    *(uint8_t*)((uintptr_t)this + 0x40 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
float& _Script_SwGame::R4CameraBehavior_LimitPitch::get_PitchMin() {
    return *(float*)((uintptr_t)this + 0x30);
}
float& _Script_SwGame::R4CameraBehavior_LimitPitch::get_PitchMax() {
    return *(float*)((uintptr_t)this + 0x34);
}
bool _Script_SwGame::R4CameraBehavior_LimitPitch::get_bEnableInitialPitch() {
    return (*(uint8_t*)((uintptr_t)this + 0x40 + 0)) & 1 != 0;
}
float& _Script_SwGame::R4CameraBehavior_LimitPitch::get_InitialPitch() {
    return *(float*)((uintptr_t)this + 0x38);
}
float& _Script_SwGame::R4CameraBehavior_LimitPitch::get_EndPitch() {
    return *(float*)((uintptr_t)this + 0x3c);
}
bool _Script_SwGame::R4CameraBehavior_LimitPitch::get_bInitialPitchRelative() {
    return (*(uint8_t*)((uintptr_t)this + 0x41 + 0)) & 1 != 0;
}
void _Script_SwGame::R4CameraBehavior_LimitPitch::set_bInitialPitchRelative(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x41 + 0);
    *(uint8_t*)((uintptr_t)this + 0x41 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_SwGame::R4CameraBehavior_LimitPitch::get_bEnableEndPitch() {
    return (*(uint8_t*)((uintptr_t)this + 0x42 + 0)) & 1 != 0;
}
void _Script_SwGame::R4CameraBehavior_LimitPitch::set_bEnableEndPitch(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x42 + 0);
    *(uint8_t*)((uintptr_t)this + 0x42 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_SwGame::R4CameraBehavior_LimitPitch::get_bEndPitchRelative() {
    return (*(uint8_t*)((uintptr_t)this + 0x43 + 0)) & 1 != 0;
}
void _Script_SwGame::R4CameraBehavior_LimitPitch::set_bEndPitchRelative(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x43 + 0);
    *(uint8_t*)((uintptr_t)this + 0x43 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_CoreUObject::Class* _Script_SwGame::R4CameraBehavior_LimitPitch::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/SwGame.R4CameraBehavior_LimitPitch");
    return result;
}
