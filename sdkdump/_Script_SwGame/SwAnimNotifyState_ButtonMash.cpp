#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\AnimNotifyState.hpp"
#include "SwAnimNotifyState_ButtonMash.hpp"
void* _Script_SwGame::SwAnimNotifyState_ButtonMash::get_ButtonMashIdentifier() {
    return (void*)((uintptr_t)this + 0x30);
}
bool _Script_SwGame::SwAnimNotifyState_ButtonMash::get_bStandAlone() {
    return (*(uint8_t*)((uintptr_t)this + 0x38 + 0)) & 1 != 0;
}
void _Script_SwGame::SwAnimNotifyState_ButtonMash::set_bStandAlone(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x38 + 0);
    *(uint8_t*)((uintptr_t)this + 0x38 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_CoreUObject::Class* _Script_SwGame::SwAnimNotifyState_ButtonMash::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/SwGame.SwAnimNotifyState_ButtonMash");
    return result;
}
void* _Script_SwGame::SwAnimNotifyState_ButtonMash::get_ButtonToPress() {
    return (void*)((uintptr_t)this + 0x40);
}
int32_t& _Script_SwGame::SwAnimNotifyState_ButtonMash::get_NumPressToSucceed() {
    return *(int32_t*)((uintptr_t)this + 0x48);
}
