#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_SlateCore\SlateWidgetStyleAsset.hpp"
#include "ScrollBar.hpp"
#include "Widget.hpp"
void _Script_UMG::ScrollBar::SetState(float InOffsetFraction, float InThumbSizeFraction) {
    return;
}
void _Script_UMG::ScrollBar::set_bAlwaysShowScrollbar(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x5d8 + 0);
    *(uint8_t*)((uintptr_t)this + 0x5d8 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_UMG::ScrollBar::get_WidgetStyle() {
    return (void*)((uintptr_t)this + 0x100);
}
_Script_CoreUObject::Class* _Script_UMG::ScrollBar::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/UMG.ScrollBar");
    return result;
}
_Script_SlateCore::SlateWidgetStyleAsset*& _Script_UMG::ScrollBar::get_Style() {
    return *(_Script_SlateCore::SlateWidgetStyleAsset**)((uintptr_t)this + 0x5d0);
}
bool _Script_UMG::ScrollBar::get_bAlwaysShowScrollbar() {
    return (*(uint8_t*)((uintptr_t)this + 0x5d8 + 0)) & 1 != 0;
}
void* _Script_UMG::ScrollBar::get_Orientation() {
    return (void*)((uintptr_t)this + 0x5d9);
}
void* _Script_UMG::ScrollBar::get_Thickness() {
    return (void*)((uintptr_t)this + 0x5dc);
}
