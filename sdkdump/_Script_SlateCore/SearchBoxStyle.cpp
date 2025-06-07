#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "SearchBoxStyle.hpp"
#include "SlateWidgetStyle.hpp"
void* _Script_SlateCore::SearchBoxStyle::get_TextBoxStyle() {
    return (void*)((uintptr_t)this + 0x8);
}
void* _Script_SlateCore::SearchBoxStyle::get_GlassImage() {
    return (void*)((uintptr_t)this + 0x968);
}
void* _Script_SlateCore::SearchBoxStyle::get_ActiveFontInfo() {
    return (void*)((uintptr_t)this + 0x800);
}
void* _Script_SlateCore::SearchBoxStyle::get_UpArrowImage() {
    return (void*)((uintptr_t)this + 0x858);
}
void* _Script_SlateCore::SearchBoxStyle::get_DownArrowImage() {
    return (void*)((uintptr_t)this + 0x8e0);
}
void* _Script_SlateCore::SearchBoxStyle::get_ClearImage() {
    return (void*)((uintptr_t)this + 0x9f0);
}
void _Script_SlateCore::SearchBoxStyle::set_bLeftAlignButtons(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xa88 + 0);
    *(uint8_t*)((uintptr_t)this + 0xa88 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_SlateCore::SearchBoxStyle::get_ImagePadding() {
    return (void*)((uintptr_t)this + 0xa78);
}
bool _Script_SlateCore::SearchBoxStyle::get_bLeftAlignButtons() {
    return (*(uint8_t*)((uintptr_t)this + 0xa88 + 0)) & 1 != 0;
}
_Script_CoreUObject::Class* _Script_SlateCore::SearchBoxStyle::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/SlateCore.SearchBoxStyle");
    return result;
}
