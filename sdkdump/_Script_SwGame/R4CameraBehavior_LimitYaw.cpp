#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_RsGameTechRT\RsCameraBehavior.hpp"
#include "R4CameraBehavior_LimitYaw.hpp"
float& _Script_SwGame::R4CameraBehavior_LimitYaw::get_YawMin() {
    return *(float*)((uintptr_t)this + 0x30);
}
float& _Script_SwGame::R4CameraBehavior_LimitYaw::get_YawMax() {
    return *(float*)((uintptr_t)this + 0x34);
}
bool _Script_SwGame::R4CameraBehavior_LimitYaw::get_bRelativeYaw() {
    return (*(uint8_t*)((uintptr_t)this + 0x38 + 0)) & 1 != 0;
}
void _Script_SwGame::R4CameraBehavior_LimitYaw::set_bRelativeYaw(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x38 + 0);
    *(uint8_t*)((uintptr_t)this + 0x38 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_CoreUObject::Class* _Script_SwGame::R4CameraBehavior_LimitYaw::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/SwGame.R4CameraBehavior_LimitYaw");
    return result;
}
