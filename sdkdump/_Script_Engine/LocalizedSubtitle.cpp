#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "LocalizedSubtitle.hpp"
void* _Script_Engine::LocalizedSubtitle::get_Subtitles() {
    return (void*)((uintptr_t)this + 0x10);
}
void* _Script_Engine::LocalizedSubtitle::get_LanguageExt() {
    return (void*)((uintptr_t)this + 0x0);
}
void _Script_Engine::LocalizedSubtitle::set_bMature(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x20 + 0);
    *(uint8_t*)((uintptr_t)this + 0x20 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_Engine::LocalizedSubtitle::get_bMature() {
    return (*(uint8_t*)((uintptr_t)this + 0x20 + 0)) & 1 != 0;
}
bool _Script_Engine::LocalizedSubtitle::get_bManualWordWrap() {
    return (*(uint8_t*)((uintptr_t)this + 0x20 + 0)) & 2 != 0;
}
bool _Script_Engine::LocalizedSubtitle::get_bSingleLine() {
    return (*(uint8_t*)((uintptr_t)this + 0x20 + 0)) & 4 != 0;
}
void _Script_Engine::LocalizedSubtitle::set_bManualWordWrap(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x20 + 0);
    *(uint8_t*)((uintptr_t)this + 0x20 + 0) = (cur_value & ~2) | (value ? 2 : 0);
}
void _Script_Engine::LocalizedSubtitle::set_bSingleLine(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x20 + 0);
    *(uint8_t*)((uintptr_t)this + 0x20 + 0) = (cur_value & ~4) | (value ? 4 : 0);
}
_Script_CoreUObject::Class* _Script_Engine::LocalizedSubtitle::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.LocalizedSubtitle");
    return result;
}
