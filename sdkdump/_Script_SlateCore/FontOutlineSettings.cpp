#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "FontOutlineSettings.hpp"
int32_t& _Script_SlateCore::FontOutlineSettings::get_OutlineSize() {
    return *(int32_t*)((uintptr_t)this + 0x0);
}
void _Script_SlateCore::FontOutlineSettings::set_bSeparateFillAlpha(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x20 + 0);
    *(uint8_t*)((uintptr_t)this + 0x20 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_SlateCore::FontOutlineSettings::get_OutlineColor() {
    return (void*)((uintptr_t)this + 0x10);
}
_Script_CoreUObject::Object*& _Script_SlateCore::FontOutlineSettings::get_OutlineMaterial() {
    return *(_Script_CoreUObject::Object**)((uintptr_t)this + 0x8);
}
bool _Script_SlateCore::FontOutlineSettings::get_bSeparateFillAlpha() {
    return (*(uint8_t*)((uintptr_t)this + 0x20 + 0)) & 1 != 0;
}
_Script_CoreUObject::Class* _Script_SlateCore::FontOutlineSettings::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/SlateCore.FontOutlineSettings");
    return result;
}
bool _Script_SlateCore::FontOutlineSettings::get_bApplyOutlineToDropShadows() {
    return (*(uint8_t*)((uintptr_t)this + 0x20 + 0)) & 2 != 0;
}
void _Script_SlateCore::FontOutlineSettings::set_bApplyOutlineToDropShadows(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x20 + 0);
    *(uint8_t*)((uintptr_t)this + 0x20 + 0) = (cur_value & ~2) | (value ? 2 : 0);
}
