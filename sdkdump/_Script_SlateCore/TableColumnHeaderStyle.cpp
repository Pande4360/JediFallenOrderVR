#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "SlateWidgetStyle.hpp"
#include "TableColumnHeaderStyle.hpp"
void* _Script_SlateCore::TableColumnHeaderStyle::get_SortPrimaryDescendingImage() {
    return (void*)((uintptr_t)this + 0x90);
}
void* _Script_SlateCore::TableColumnHeaderStyle::get_SortPrimaryAscendingImage() {
    return (void*)((uintptr_t)this + 0x8);
}
void* _Script_SlateCore::TableColumnHeaderStyle::get_SortSecondaryAscendingImage() {
    return (void*)((uintptr_t)this + 0x118);
}
void* _Script_SlateCore::TableColumnHeaderStyle::get_HoveredBrush() {
    return (void*)((uintptr_t)this + 0x2b0);
}
void* _Script_SlateCore::TableColumnHeaderStyle::get_SortSecondaryDescendingImage() {
    return (void*)((uintptr_t)this + 0x1a0);
}
void* _Script_SlateCore::TableColumnHeaderStyle::get_MenuDropdownNormalBorderBrush() {
    return (void*)((uintptr_t)this + 0x3c0);
}
void* _Script_SlateCore::TableColumnHeaderStyle::get_MenuDropdownImage() {
    return (void*)((uintptr_t)this + 0x338);
}
void* _Script_SlateCore::TableColumnHeaderStyle::get_NormalBrush() {
    return (void*)((uintptr_t)this + 0x228);
}
void* _Script_SlateCore::TableColumnHeaderStyle::get_MenuDropdownHoveredBorderBrush() {
    return (void*)((uintptr_t)this + 0x448);
}
_Script_CoreUObject::Class* _Script_SlateCore::TableColumnHeaderStyle::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/SlateCore.TableColumnHeaderStyle");
    return result;
}
