#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_RsGameTechRT\RsCameraBehavior.hpp"
#include "R4CameraBehavior_MaintainOffsets.hpp"
bool _Script_SwGame::R4CameraBehavior_MaintainOffsets::get_bMaintainCameraSpaceOffsets() {
    return (*(uint8_t*)((uintptr_t)this + 0x30 + 0)) & 1 != 0;
}
void _Script_SwGame::R4CameraBehavior_MaintainOffsets::set_bMaintainCameraSpaceOffsets(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x30 + 0);
    *(uint8_t*)((uintptr_t)this + 0x30 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_CoreUObject::Class* _Script_SwGame::R4CameraBehavior_MaintainOffsets::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/SwGame.R4CameraBehavior_MaintainOffsets");
    return result;
}
bool _Script_SwGame::R4CameraBehavior_MaintainOffsets::get_bMaintainWorldSpaceOffsets() {
    return (*(uint8_t*)((uintptr_t)this + 0x31 + 0)) & 1 != 0;
}
bool _Script_SwGame::R4CameraBehavior_MaintainOffsets::get_bSkipHorizontalOffset() {
    return (*(uint8_t*)((uintptr_t)this + 0x32 + 0)) & 1 != 0;
}
void _Script_SwGame::R4CameraBehavior_MaintainOffsets::set_bMaintainWorldSpaceOffsets(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x31 + 0);
    *(uint8_t*)((uintptr_t)this + 0x31 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Script_SwGame::R4CameraBehavior_MaintainOffsets::set_bSkipHorizontalOffset(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x32 + 0);
    *(uint8_t*)((uintptr_t)this + 0x32 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
