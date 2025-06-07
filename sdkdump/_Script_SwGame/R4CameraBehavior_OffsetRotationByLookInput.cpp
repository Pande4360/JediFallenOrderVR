#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "R4CameraBehavior_LookInput.hpp"
#include "R4CameraBehavior_OffsetRotationByLookInput.hpp"
float& _Script_SwGame::R4CameraBehavior_OffsetRotationByLookInput::get_MaxYawOffset() {
    return *(float*)((uintptr_t)this + 0x48);
}
float& _Script_SwGame::R4CameraBehavior_OffsetRotationByLookInput::get_MaxPitchOffset() {
    return *(float*)((uintptr_t)this + 0x4c);
}
bool _Script_SwGame::R4CameraBehavior_OffsetRotationByLookInput::get_bGetMaxOffsetsFromSplineCamera() {
    return (*(uint8_t*)((uintptr_t)this + 0x59 + 0)) & 1 != 0;
}
float& _Script_SwGame::R4CameraBehavior_OffsetRotationByLookInput::get_OffsetSmoothTime() {
    return *(float*)((uintptr_t)this + 0x50);
}
float& _Script_SwGame::R4CameraBehavior_OffsetRotationByLookInput::get_SpringRatio() {
    return *(float*)((uintptr_t)this + 0x54);
}
bool _Script_SwGame::R4CameraBehavior_OffsetRotationByLookInput::get_bUseSpring() {
    return (*(uint8_t*)((uintptr_t)this + 0x58 + 0)) & 1 != 0;
}
void _Script_SwGame::R4CameraBehavior_OffsetRotationByLookInput::set_bUseSpring(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x58 + 0);
    *(uint8_t*)((uintptr_t)this + 0x58 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Script_SwGame::R4CameraBehavior_OffsetRotationByLookInput::set_bGetMaxOffsetsFromSplineCamera(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x59 + 0);
    *(uint8_t*)((uintptr_t)this + 0x59 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_CoreUObject::Class* _Script_SwGame::R4CameraBehavior_OffsetRotationByLookInput::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/SwGame.R4CameraBehavior_OffsetRotationByLookInput");
    return result;
}
