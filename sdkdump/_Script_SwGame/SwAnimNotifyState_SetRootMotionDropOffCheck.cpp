#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\AnimNotifyState.hpp"
#include "SwAnimNotifyState_SetRootMotionDropOffCheck.hpp"
bool _Script_SwGame::SwAnimNotifyState_SetRootMotionDropOffCheck::get_DropOffCheckEnabled() {
    return (*(uint8_t*)((uintptr_t)this + 0x30 + 0)) & 1 != 0;
}
void _Script_SwGame::SwAnimNotifyState_SetRootMotionDropOffCheck::set_DropOffCheckEnabled(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x30 + 0);
    *(uint8_t*)((uintptr_t)this + 0x30 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_CoreUObject::Class* _Script_SwGame::SwAnimNotifyState_SetRootMotionDropOffCheck::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/SwGame.SwAnimNotifyState_SetRootMotionDropOffCheck");
    return result;
}
