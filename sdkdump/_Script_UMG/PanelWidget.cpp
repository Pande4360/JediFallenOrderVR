#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "PanelSlot.hpp"
#include "PanelWidget.hpp"
#include "Widget.hpp"
void* _Script_UMG::PanelWidget::get_Slots() {
    return (void*)((uintptr_t)this + 0x100);
}
int32_t _Script_UMG::PanelWidget::GetChildIndex(_Script_UMG::Widget* Content) {
    return;
}
_Script_CoreUObject::Class* _Script_UMG::PanelWidget::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/UMG.PanelWidget");
    return result;
}
bool _Script_UMG::PanelWidget::RemoveChildAt(int32_t Index) {
    return;
}
int32_t _Script_UMG::PanelWidget::GetChildrenCount() {
    return;
}
bool _Script_UMG::PanelWidget::RemoveChild(_Script_UMG::Widget* Content) {
    return;
}
bool _Script_UMG::PanelWidget::HasChild(_Script_UMG::Widget* Content) {
    return;
}
bool _Script_UMG::PanelWidget::HasAnyChildren() {
    return;
}
_Script_UMG::Widget* _Script_UMG::PanelWidget::GetChildAt(int32_t Index) {
    return;
}
void _Script_UMG::PanelWidget::ClearChildren() {
    return;
}
_Script_UMG::PanelSlot* _Script_UMG::PanelWidget::AddChild(_Script_UMG::Widget* Content) {
    return;
}
