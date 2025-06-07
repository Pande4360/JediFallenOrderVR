#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_SlateCore\Margin.hpp"
#include "PanelSlot.hpp"
#include "WidgetSwitcherSlot.hpp"
void _Script_UMG::WidgetSwitcherSlot::SetVerticalAlignment(void* InVerticalAlignment) {
    return;
}
void* _Script_UMG::WidgetSwitcherSlot::get_Padding() {
    return (void*)((uintptr_t)this + 0x38);
}
void* _Script_UMG::WidgetSwitcherSlot::get_HorizontalAlignment() {
    return (void*)((uintptr_t)this + 0x48);
}
void* _Script_UMG::WidgetSwitcherSlot::get_VerticalAlignment() {
    return (void*)((uintptr_t)this + 0x49);
}
_Script_CoreUObject::Class* _Script_UMG::WidgetSwitcherSlot::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/UMG.WidgetSwitcherSlot");
    return result;
}
void _Script_UMG::WidgetSwitcherSlot::SetHorizontalAlignment(void* InHorizontalAlignment) {
    return;
}
void _Script_UMG::WidgetSwitcherSlot::SetPadding(_Script_SlateCore::Margin InPadding) {
    return;
}
