#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "ComboBox.hpp"
#include "Widget.hpp"
void* _Script_UMG::ComboBox::get_Items() {
    return (void*)((uintptr_t)this + 0x100);
}
void* _Script_UMG::ComboBox::get_OnGenerateWidgetEvent() {
    return (void*)((uintptr_t)this + 0x110);
}
bool _Script_UMG::ComboBox::get_bIsFocusable() {
    return (*(uint8_t*)((uintptr_t)this + 0x120 + 0)) & 1 != 0;
}
void _Script_UMG::ComboBox::set_bIsFocusable(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x120 + 0);
    *(uint8_t*)((uintptr_t)this + 0x120 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_CoreUObject::Class* _Script_UMG::ComboBox::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/UMG.ComboBox");
    return result;
}
