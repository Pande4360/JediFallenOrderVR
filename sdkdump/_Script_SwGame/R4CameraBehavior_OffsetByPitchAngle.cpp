#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_RsGameTechRT\RsCameraBehavior.hpp"
#include "R4CameraBehavior_OffsetByPitchAngle.hpp"
bool _Script_SwGame::R4CameraBehavior_OffsetByPitchAngle::get_bModifyZ() {
    return (*(uint8_t*)((uintptr_t)this + 0x33 + 0)) & 1 != 0;
}
void* _Script_SwGame::R4CameraBehavior_OffsetByPitchAngle::get_OffsetToModify() {
    return (void*)((uintptr_t)this + 0x30);
}
void _Script_SwGame::R4CameraBehavior_OffsetByPitchAngle::set_bModifyZ(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x33 + 0);
    *(uint8_t*)((uintptr_t)this + 0x33 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_SwGame::R4CameraBehavior_OffsetByPitchAngle::get_bModifyX() {
    return (*(uint8_t*)((uintptr_t)this + 0x31 + 0)) & 1 != 0;
}
void _Script_SwGame::R4CameraBehavior_OffsetByPitchAngle::set_bModifyX(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x31 + 0);
    *(uint8_t*)((uintptr_t)this + 0x31 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_SwGame::R4CameraBehavior_OffsetByPitchAngle::get_bModifyY() {
    return (*(uint8_t*)((uintptr_t)this + 0x32 + 0)) & 1 != 0;
}
void _Script_SwGame::R4CameraBehavior_OffsetByPitchAngle::set_bModifyY(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x32 + 0);
    *(uint8_t*)((uintptr_t)this + 0x32 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_SwGame::R4CameraBehavior_OffsetByPitchAngle::get_XOffsetCurve() {
    return (void*)((uintptr_t)this + 0x38);
}
void* _Script_SwGame::R4CameraBehavior_OffsetByPitchAngle::get_YOffsetCurve() {
    return (void*)((uintptr_t)this + 0xb0);
}
void* _Script_SwGame::R4CameraBehavior_OffsetByPitchAngle::get_ZOffsetCurve() {
    return (void*)((uintptr_t)this + 0x128);
}
_Script_CoreUObject::Class* _Script_SwGame::R4CameraBehavior_OffsetByPitchAngle::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/SwGame.R4CameraBehavior_OffsetByPitchAngle");
    return result;
}
