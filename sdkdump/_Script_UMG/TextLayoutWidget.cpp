#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "TextLayoutWidget.hpp"
#include "Widget.hpp"
void* _Script_UMG::TextLayoutWidget::get_ShapedTextOptions() {
    return (void*)((uintptr_t)this + 0x100);
}
void* _Script_UMG::TextLayoutWidget::get_Justification() {
    return (void*)((uintptr_t)this + 0x103);
}
void* _Script_UMG::TextLayoutWidget::get_WrappingPolicy() {
    return (void*)((uintptr_t)this + 0x104);
}
float& _Script_UMG::TextLayoutWidget::get_LineHeightPercentage() {
    return *(float*)((uintptr_t)this + 0x11c);
}
void* _Script_UMG::TextLayoutWidget::get_Margin() {
    return (void*)((uintptr_t)this + 0x10c);
}
bool _Script_UMG::TextLayoutWidget::get_AutoWrapText() {
    return (*(uint8_t*)((uintptr_t)this + 0x105 + 0)) & 1 != 0;
}
void _Script_UMG::TextLayoutWidget::set_AutoWrapText(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x105 + 0);
    *(uint8_t*)((uintptr_t)this + 0x105 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
float& _Script_UMG::TextLayoutWidget::get_WrapTextAt() {
    return *(float*)((uintptr_t)this + 0x108);
}
float& _Script_UMG::TextLayoutWidget::get_Tracking() {
    return *(float*)((uintptr_t)this + 0x120);
}
_Script_CoreUObject::Class* _Script_UMG::TextLayoutWidget::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/UMG.TextLayoutWidget");
    return result;
}
