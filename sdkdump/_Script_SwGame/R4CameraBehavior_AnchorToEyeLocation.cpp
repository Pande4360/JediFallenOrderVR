#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_RsGameTechRT\RsCameraBehavior.hpp"
#include "R4CameraBehavior_AnchorToEyeLocation.hpp"
float& _Script_SwGame::R4CameraBehavior_AnchorToEyeLocation::get_AttachToleranceHorizontal() {
    return *(float*)((uintptr_t)this + 0x30);
}
void _Script_SwGame::R4CameraBehavior_AnchorToEyeLocation::set_bDoOffsetTrace(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x44 + 0);
    *(uint8_t*)((uintptr_t)this + 0x44 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
float& _Script_SwGame::R4CameraBehavior_AnchorToEyeLocation::get_AttachToleranceVertical() {
    return *(float*)((uintptr_t)this + 0x34);
}
bool _Script_SwGame::R4CameraBehavior_AnchorToEyeLocation::get_bDoOffsetTrace() {
    return (*(uint8_t*)((uintptr_t)this + 0x44 + 0)) & 1 != 0;
}
void* _Script_SwGame::R4CameraBehavior_AnchorToEyeLocation::get_Offset() {
    return (void*)((uintptr_t)this + 0x38);
}
float& _Script_SwGame::R4CameraBehavior_AnchorToEyeLocation::get_OffsetTraceRadius() {
    return *(float*)((uintptr_t)this + 0x48);
}
float& _Script_SwGame::R4CameraBehavior_AnchorToEyeLocation::get_OffsetTraceOriginHeight() {
    return *(float*)((uintptr_t)this + 0x4c);
}
bool _Script_SwGame::R4CameraBehavior_AnchorToEyeLocation::get_bKeepAnchorAboveNavSurface() {
    return (*(uint8_t*)((uintptr_t)this + 0x50 + 0)) & 1 != 0;
}
void _Script_SwGame::R4CameraBehavior_AnchorToEyeLocation::set_bKeepAnchorAboveNavSurface(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x50 + 0);
    *(uint8_t*)((uintptr_t)this + 0x50 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_CoreUObject::Class* _Script_SwGame::R4CameraBehavior_AnchorToEyeLocation::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/SwGame.R4CameraBehavior_AnchorToEyeLocation");
    return result;
}
