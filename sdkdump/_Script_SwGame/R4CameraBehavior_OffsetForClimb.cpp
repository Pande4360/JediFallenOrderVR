#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_RsGameTechRT\RsCameraBehavior.hpp"
#include "R4CameraBehavior_OffsetForClimb.hpp"
float& _Script_SwGame::R4CameraBehavior_OffsetForClimb::get_OffsetSmoothTime() {
    return *(float*)((uintptr_t)this + 0x44);
}
float& _Script_SwGame::R4CameraBehavior_OffsetForClimb::get_RotationOffsetHorizontal() {
    return *(float*)((uintptr_t)this + 0x38);
}
float& _Script_SwGame::R4CameraBehavior_OffsetForClimb::get_MovementOffsetHorizontal() {
    return *(float*)((uintptr_t)this + 0x30);
}
float& _Script_SwGame::R4CameraBehavior_OffsetForClimb::get_MovementOffsetVertical() {
    return *(float*)((uintptr_t)this + 0x34);
}
float& _Script_SwGame::R4CameraBehavior_OffsetForClimb::get_RotationOffsetVertical() {
    return *(float*)((uintptr_t)this + 0x3c);
}
float& _Script_SwGame::R4CameraBehavior_OffsetForClimb::get_FocusAdjustPercentage() {
    return *(float*)((uintptr_t)this + 0x40);
}
void _Script_SwGame::R4CameraBehavior_OffsetForClimb::set_bDoCollisionTrace(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x48 + 0);
    *(uint8_t*)((uintptr_t)this + 0x48 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_SwGame::R4CameraBehavior_OffsetForClimb::get_bDoCollisionTrace() {
    return (*(uint8_t*)((uintptr_t)this + 0x48 + 0)) & 1 != 0;
}
_Script_CoreUObject::Class* _Script_SwGame::R4CameraBehavior_OffsetForClimb::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/SwGame.R4CameraBehavior_OffsetForClimb");
    return result;
}
