#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "PanelWidget.hpp"
#include "Widget.hpp"
#include "WidgetSwitcher.hpp"
int32_t _Script_UMG::WidgetSwitcher::GetNumWidgets() {
    return;
}
int32_t& _Script_UMG::WidgetSwitcher::get_ActiveWidgetIndex() {
    return *(int32_t*)((uintptr_t)this + 0x118);
}
_Script_CoreUObject::Class* _Script_UMG::WidgetSwitcher::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/UMG.WidgetSwitcher");
    return result;
}
int32_t _Script_UMG::WidgetSwitcher::GetActiveWidgetIndex() {
    return;
}
void _Script_UMG::WidgetSwitcher::SetActiveWidgetIndex(int32_t Index) {
    return;
}
void _Script_UMG::WidgetSwitcher::SetActiveWidget(_Script_UMG::Widget* Widget) {
    return;
}
_Script_UMG::Widget* _Script_UMG::WidgetSwitcher::GetWidgetAtIndex(int32_t Index) {
    return;
}
_Script_UMG::Widget* _Script_UMG::WidgetSwitcher::GetActiveWidget() {
    return;
}
