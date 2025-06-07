#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_RsGameTechRT\RsCameraBehavior.hpp"
#include "R4CameraBehavior_Offset.hpp"
void* _Script_SwGame::R4CameraBehavior_Offset::get_LocationOffsetWS() {
    return (void*)((uintptr_t)this + 0x30);
}
void* _Script_SwGame::R4CameraBehavior_Offset::get_LocationOffsetVTS() {
    return (void*)((uintptr_t)this + 0x3c);
}
void* _Script_SwGame::R4CameraBehavior_Offset::get_LocationOffsetCS() {
    return (void*)((uintptr_t)this + 0x48);
}
void* _Script_SwGame::R4CameraBehavior_Offset::get_FocusLocationOffset() {
    return (void*)((uintptr_t)this + 0x78);
}
void* _Script_SwGame::R4CameraBehavior_Offset::get_RotationOffsetCS() {
    return (void*)((uintptr_t)this + 0x6c);
}
void* _Script_SwGame::R4CameraBehavior_Offset::get_LocationOffsetCSYawOnly() {
    return (void*)((uintptr_t)this + 0x54);
}
void* _Script_SwGame::R4CameraBehavior_Offset::get_RotationOffsetWS() {
    return (void*)((uintptr_t)this + 0x60);
}
bool _Script_SwGame::R4CameraBehavior_Offset::get_bOffsetZToViewTargetHeight() {
    return (*(uint8_t*)((uintptr_t)this + 0x84 + 0)) & 1 != 0;
}
void _Script_SwGame::R4CameraBehavior_Offset::set_bOffsetZToViewTargetHeight(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x84 + 0);
    *(uint8_t*)((uintptr_t)this + 0x84 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_CoreUObject::Class* _Script_SwGame::R4CameraBehavior_Offset::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/SwGame.R4CameraBehavior_Offset");
    return result;
}
