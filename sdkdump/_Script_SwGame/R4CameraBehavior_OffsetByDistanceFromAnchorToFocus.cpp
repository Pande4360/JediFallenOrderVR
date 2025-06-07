#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_RsGameTechRT\RsCameraBehavior.hpp"
#include "R4CameraBehavior_OffsetByDistanceFromAnchorToFocus.hpp"
float& _Script_SwGame::R4CameraBehavior_OffsetByDistanceFromAnchorToFocus::get_DistanceScaleFactor() {
    return *(float*)((uintptr_t)this + 0x30);
}
void* _Script_SwGame::R4CameraBehavior_OffsetByDistanceFromAnchorToFocus::get_HeightOffsetCurve() {
    return (void*)((uintptr_t)this + 0x38);
}
bool _Script_SwGame::R4CameraBehavior_OffsetByDistanceFromAnchorToFocus::get_bApplyHeightOffset() {
    return (*(uint8_t*)((uintptr_t)this + 0x35 + 0)) & 1 != 0;
}
bool _Script_SwGame::R4CameraBehavior_OffsetByDistanceFromAnchorToFocus::get_bApplyDistanceOffset() {
    return (*(uint8_t*)((uintptr_t)this + 0x34 + 0)) & 1 != 0;
}
void _Script_SwGame::R4CameraBehavior_OffsetByDistanceFromAnchorToFocus::set_bApplyDistanceOffset(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x34 + 0);
    *(uint8_t*)((uintptr_t)this + 0x34 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
float& _Script_SwGame::R4CameraBehavior_OffsetByDistanceFromAnchorToFocus::get_HeightOffsetDistanceScale() {
    return *(float*)((uintptr_t)this + 0xb0);
}
void _Script_SwGame::R4CameraBehavior_OffsetByDistanceFromAnchorToFocus::set_bApplyHeightOffset(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x35 + 0);
    *(uint8_t*)((uintptr_t)this + 0x35 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
float& _Script_SwGame::R4CameraBehavior_OffsetByDistanceFromAnchorToFocus::get_HeightOffsetHeightScale() {
    return *(float*)((uintptr_t)this + 0xb4);
}
float& _Script_SwGame::R4CameraBehavior_OffsetByDistanceFromAnchorToFocus::get_MinDistToTarget() {
    return *(float*)((uintptr_t)this + 0xb8);
}
bool _Script_SwGame::R4CameraBehavior_OffsetByDistanceFromAnchorToFocus::get_bSetFloorNormalByDirectionToFocus() {
    return (*(uint8_t*)((uintptr_t)this + 0xbc + 0)) & 1 != 0;
}
void _Script_SwGame::R4CameraBehavior_OffsetByDistanceFromAnchorToFocus::set_bSetFloorNormalByDirectionToFocus(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xbc + 0);
    *(uint8_t*)((uintptr_t)this + 0xbc + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_SwGame::R4CameraBehavior_OffsetByDistanceFromAnchorToFocus::get_bOffsetFocusActorHeightByCollisionHeight() {
    return (*(uint8_t*)((uintptr_t)this + 0xbd + 0)) & 1 != 0;
}
void _Script_SwGame::R4CameraBehavior_OffsetByDistanceFromAnchorToFocus::set_bOffsetFocusActorHeightByCollisionHeight(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xbd + 0);
    *(uint8_t*)((uintptr_t)this + 0xbd + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
float& _Script_SwGame::R4CameraBehavior_OffsetByDistanceFromAnchorToFocus::get_FocusActorHeightOffset() {
    return *(float*)((uintptr_t)this + 0xc0);
}
_Script_CoreUObject::Class* _Script_SwGame::R4CameraBehavior_OffsetByDistanceFromAnchorToFocus::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/SwGame.R4CameraBehavior_OffsetByDistanceFromAnchorToFocus");
    return result;
}
