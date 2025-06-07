#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "ConsoleSettings.hpp"
void _Script_EngineSettings::ConsoleSettings::set_bOrderTopToBottom(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x54 + 0);
    *(uint8_t*)((uintptr_t)this + 0x54 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
int32_t& _Script_EngineSettings::ConsoleSettings::get_MaxScrollbackSize() {
    return *(int32_t*)((uintptr_t)this + 0x28);
}
void* _Script_EngineSettings::ConsoleSettings::get_ManualAutoCompleteList() {
    return (void*)((uintptr_t)this + 0x30);
}
void* _Script_EngineSettings::ConsoleSettings::get_AutoCompleteMapPaths() {
    return (void*)((uintptr_t)this + 0x40);
}
float& _Script_EngineSettings::ConsoleSettings::get_BackgroundOpacityPercentage() {
    return *(float*)((uintptr_t)this + 0x50);
}
bool _Script_EngineSettings::ConsoleSettings::get_bOrderTopToBottom() {
    return (*(uint8_t*)((uintptr_t)this + 0x54 + 0)) & 1 != 0;
}
void* _Script_EngineSettings::ConsoleSettings::get_HistoryColor() {
    return (void*)((uintptr_t)this + 0x5c);
}
void* _Script_EngineSettings::ConsoleSettings::get_InputColor() {
    return (void*)((uintptr_t)this + 0x58);
}
void* _Script_EngineSettings::ConsoleSettings::get_AutoCompleteCommandColor() {
    return (void*)((uintptr_t)this + 0x60);
}
void* _Script_EngineSettings::ConsoleSettings::get_AutoCompleteCVarColor() {
    return (void*)((uintptr_t)this + 0x64);
}
void* _Script_EngineSettings::ConsoleSettings::get_AutoCompleteFadedColor() {
    return (void*)((uintptr_t)this + 0x68);
}
_Script_CoreUObject::Class* _Script_EngineSettings::ConsoleSettings::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/EngineSettings.ConsoleSettings");
    return result;
}
