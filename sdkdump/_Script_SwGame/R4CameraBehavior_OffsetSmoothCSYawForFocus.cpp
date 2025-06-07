#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_RsGameTechRT\RsCameraBehavior.hpp"
#include "R4CameraBehavior_OffsetSmoothCSYawForFocus.hpp"
float& _Script_SwGame::R4CameraBehavior_OffsetSmoothCSYawForFocus::get_OffsetCSYaw() {
    return *(float*)((uintptr_t)this + 0x30);
}
float& _Script_SwGame::R4CameraBehavior_OffsetSmoothCSYawForFocus::get_SmoothingTime() {
    return *(float*)((uintptr_t)this + 0x34);
}
float& _Script_SwGame::R4CameraBehavior_OffsetSmoothCSYawForFocus::get_SmoothingPercent() {
    return *(float*)((uintptr_t)this + 0x38);
}
_Script_CoreUObject::Class* _Script_SwGame::R4CameraBehavior_OffsetSmoothCSYawForFocus::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/SwGame.R4CameraBehavior_OffsetSmoothCSYawForFocus");
    return result;
}
