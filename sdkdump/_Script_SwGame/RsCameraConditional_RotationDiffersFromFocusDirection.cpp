#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "RsCameraConditional.hpp"
#include "RsCameraConditional_RotationDiffersFromFocusDirection.hpp"
void _Script_SwGame::RsCameraConditional_RotationDiffersFromFocusDirection::set_bAllowablePitchDifferenceEnabled(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x30 + 0);
    *(uint8_t*)((uintptr_t)this + 0x30 + 0) = (cur_value & ~2) | (value ? 2 : 0);
}
float& _Script_SwGame::RsCameraConditional_RotationDiffersFromFocusDirection::get_AllowablePitchDifference() {
    return *(float*)((uintptr_t)this + 0x2c);
}
float& _Script_SwGame::RsCameraConditional_RotationDiffersFromFocusDirection::get_AllowableYawDifference() {
    return *(float*)((uintptr_t)this + 0x28);
}
bool _Script_SwGame::RsCameraConditional_RotationDiffersFromFocusDirection::get_bAllowablePitchDifferenceEnabled() {
    return (*(uint8_t*)((uintptr_t)this + 0x30 + 0)) & 2 != 0;
}
void _Script_SwGame::RsCameraConditional_RotationDiffersFromFocusDirection::set_bAllowableYawDifferenceEnabled(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x30 + 0);
    *(uint8_t*)((uintptr_t)this + 0x30 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_SwGame::RsCameraConditional_RotationDiffersFromFocusDirection::get_bAllowableYawDifferenceEnabled() {
    return (*(uint8_t*)((uintptr_t)this + 0x30 + 0)) & 1 != 0;
}
_Script_CoreUObject::Class* _Script_SwGame::RsCameraConditional_RotationDiffersFromFocusDirection::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/SwGame.RsCameraConditional_RotationDiffersFromFocusDirection");
    return result;
}
