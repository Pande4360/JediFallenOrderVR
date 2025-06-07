#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\AnimNotifyState.hpp"
#include "SwAnimNotifyState_ShowActionPrompt.hpp"
void* _Script_SwGame::SwAnimNotifyState_ShowActionPrompt::get_ActionName() {
    return (void*)((uintptr_t)this + 0x30);
}
void _Script_SwGame::SwAnimNotifyState_ShowActionPrompt::set_Pulsing(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x38 + 0);
    *(uint8_t*)((uintptr_t)this + 0x38 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_SwGame::SwAnimNotifyState_ShowActionPrompt::get_Pulsing() {
    return (*(uint8_t*)((uintptr_t)this + 0x38 + 0)) & 1 != 0;
}
bool _Script_SwGame::SwAnimNotifyState_ShowActionPrompt::get_ShowDuringReaction() {
    return (*(uint8_t*)((uintptr_t)this + 0x39 + 0)) & 1 != 0;
}
void _Script_SwGame::SwAnimNotifyState_ShowActionPrompt::set_ShowDuringReaction(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x39 + 0);
    *(uint8_t*)((uintptr_t)this + 0x39 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
float& _Script_SwGame::SwAnimNotifyState_ShowActionPrompt::get_MaxDistance() {
    return *(float*)((uintptr_t)this + 0x3c);
}
_Script_CoreUObject::Class* _Script_SwGame::SwAnimNotifyState_ShowActionPrompt::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/SwGame.SwAnimNotifyState_ShowActionPrompt");
    return result;
}
