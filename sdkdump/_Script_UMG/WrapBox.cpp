#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Vector2D.hpp"
#include "PanelWidget.hpp"
#include "Widget.hpp"
#include "WrapBox.hpp"
#include "WrapBoxSlot.hpp"
_Script_CoreUObject::Class* _Script_UMG::WrapBox::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/UMG.WrapBox");
    return result;
}
void* _Script_UMG::WrapBox::get_InnerSlotPadding() {
    return (void*)((uintptr_t)this + 0x118);
}
float& _Script_UMG::WrapBox::get_WrapWidth() {
    return *(float*)((uintptr_t)this + 0x120);
}
void _Script_UMG::WrapBox::set_bExplicitWrapWidth(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x124 + 0);
    *(uint8_t*)((uintptr_t)this + 0x124 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_UMG::WrapBox::get_bExplicitWrapWidth() {
    return (*(uint8_t*)((uintptr_t)this + 0x124 + 0)) & 1 != 0;
}
void _Script_UMG::WrapBox::SetInnerSlotPadding(_Script_CoreUObject::Vector2D InPadding) {
    return;
}
_Script_UMG::WrapBoxSlot* _Script_UMG::WrapBox::AddChildWrapBox(_Script_UMG::Widget* Content) {
    return;
}
