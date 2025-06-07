#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\AnimMontage.hpp"
#include "ButtonMashType.hpp"
#include "SwButtonMashConfiguration.hpp"
void* _Script_SwGame::SwButtonMashConfiguration::get_ButtonAction() {
    return (void*)((uintptr_t)this + 0x0);
}
int32_t& _Script_SwGame::SwButtonMashConfiguration::get_NumPressToSucceed() {
    return *(int32_t*)((uintptr_t)this + 0x8);
}
float& _Script_SwGame::SwButtonMashConfiguration::get_Duration() {
    return *(float*)((uintptr_t)this + 0x10);
}
_Script_CoreUObject::Class* _Script_SwGame::SwButtonMashConfiguration::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/SwGame.SwButtonMashConfiguration");
    return result;
}
bool _Script_SwGame::SwButtonMashConfiguration::get_bDeferEvents() {
    return (*(uint8_t*)((uintptr_t)this + 0xc + 0)) & 1 != 0;
}
void _Script_SwGame::SwButtonMashConfiguration::set_bDeferEvents(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xc + 0);
    *(uint8_t*)((uintptr_t)this + 0xc + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_SwGame::SwButtonMashConfiguration::get_NotifyIdentifier() {
    return (void*)((uintptr_t)this + 0x18);
}
void* _Script_SwGame::SwButtonMashConfiguration::get_DurationTypeEnum() {
    return (void*)((uintptr_t)this + 0xd);
}
float& _Script_SwGame::SwButtonMashConfiguration::get_AutoSucceedDuration() {
    return *(float*)((uintptr_t)this + 0x14);
}
_Script_Engine::AnimMontage*& _Script_SwGame::SwButtonMashConfiguration::get_Montage() {
    return *(_Script_Engine::AnimMontage**)((uintptr_t)this + 0x20);
}
void* _Script_SwGame::SwButtonMashConfiguration::get_MontageSection() {
    return (void*)((uintptr_t)this + 0x28);
}
int32_t& _Script_SwGame::SwButtonMashConfiguration::get_SyncGroupID() {
    return *(int32_t*)((uintptr_t)this + 0x30);
}
void* _Script_SwGame::SwButtonMashConfiguration::get_SyncGroupData() {
    return (void*)((uintptr_t)this + 0x34);
}
void* _Script_SwGame::SwButtonMashConfiguration::get_OnStartEvent() {
    return (void*)((uintptr_t)this + 0x48);
}
void* _Script_SwGame::SwButtonMashConfiguration::get_OnButtonPressed() {
    return (void*)((uintptr_t)this + 0x58);
}
void* _Script_SwGame::SwButtonMashConfiguration::get_OnSucceed() {
    return (void*)((uintptr_t)this + 0x68);
}
void* _Script_SwGame::SwButtonMashConfiguration::get_OnFail() {
    return (void*)((uintptr_t)this + 0x78);
}
void* _Script_SwGame::SwButtonMashConfiguration::get_OnEnd() {
    return (void*)((uintptr_t)this + 0x88);
}
_Script_SwGame::ButtonMashType*& _Script_SwGame::SwButtonMashConfiguration::get_DurationType() {
    return *(_Script_SwGame::ButtonMashType**)((uintptr_t)this + 0x98);
}
