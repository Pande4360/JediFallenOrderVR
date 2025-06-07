#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_RsGameTechRT\RsCameraBehavior.hpp"
#include "R4CameraBehavior_LookAtFocus.hpp"
void* _Script_SwGame::R4CameraBehavior_LookAtFocus::get_AnchorOffsetCS() {
    return (void*)((uintptr_t)this + 0x30);
}
float& _Script_SwGame::R4CameraBehavior_LookAtFocus::get_LookAtPercentage() {
    return *(float*)((uintptr_t)this + 0x3c);
}
void _Script_SwGame::R4CameraBehavior_LookAtFocus::set_bAdjustBaseRotationPitch(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xc4 + 0);
    *(uint8_t*)((uintptr_t)this + 0xc4 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_SwGame::R4CameraBehavior_LookAtFocus::get_bUseLookAtPercentageCurve() {
    return (*(uint8_t*)((uintptr_t)this + 0x40 + 0)) & 1 != 0;
}
void _Script_SwGame::R4CameraBehavior_LookAtFocus::set_bUseLookAtPercentageCurve(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x40 + 0);
    *(uint8_t*)((uintptr_t)this + 0x40 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_SwGame::R4CameraBehavior_LookAtFocus::get_LookAtPercentageCurve() {
    return (void*)((uintptr_t)this + 0x48);
}
float& _Script_SwGame::R4CameraBehavior_LookAtFocus::get_LookAtPercentageDistanceScale() {
    return *(float*)((uintptr_t)this + 0xc0);
}
bool _Script_SwGame::R4CameraBehavior_LookAtFocus::get_bAdjustBaseRotationPitch() {
    return (*(uint8_t*)((uintptr_t)this + 0xc4 + 0)) & 1 != 0;
}
_Script_CoreUObject::Class* _Script_SwGame::R4CameraBehavior_LookAtFocus::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/SwGame.R4CameraBehavior_LookAtFocus");
    return result;
}
