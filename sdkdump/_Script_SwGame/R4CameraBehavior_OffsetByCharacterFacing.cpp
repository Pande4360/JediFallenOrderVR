#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_RsGameTechRT\RsCameraBehavior.hpp"
#include "R4CameraBehavior_OffsetByCharacterFacing.hpp"
void* _Script_SwGame::R4CameraBehavior_OffsetByCharacterFacing::get_HorizontalOffset() {
    return (void*)((uintptr_t)this + 0x30);
}
void* _Script_SwGame::R4CameraBehavior_OffsetByCharacterFacing::get_DepthOffset() {
    return (void*)((uintptr_t)this + 0x120);
}
void* _Script_SwGame::R4CameraBehavior_OffsetByCharacterFacing::get_VerticalOffset() {
    return (void*)((uintptr_t)this + 0xa8);
}
float& _Script_SwGame::R4CameraBehavior_OffsetByCharacterFacing::get_RampInOutTime() {
    return *(float*)((uintptr_t)this + 0x198);
}
_Script_CoreUObject::Class* _Script_SwGame::R4CameraBehavior_OffsetByCharacterFacing::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/SwGame.R4CameraBehavior_OffsetByCharacterFacing");
    return result;
}
