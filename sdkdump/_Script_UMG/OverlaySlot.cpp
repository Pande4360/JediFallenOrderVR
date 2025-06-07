#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_SlateCore\Margin.hpp"
#include "OverlaySlot.hpp"
#include "PanelSlot.hpp"
void _Script_UMG::OverlaySlot::SetVerticalAlignment(void* InVerticalAlignment) {
    return;
}
void* _Script_UMG::OverlaySlot::get_Padding() {
    return (void*)((uintptr_t)this + 0x40);
}
void* _Script_UMG::OverlaySlot::get_HorizontalAlignment() {
    return (void*)((uintptr_t)this + 0x50);
}
_Script_CoreUObject::Class* _Script_UMG::OverlaySlot::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/UMG.OverlaySlot");
    return result;
}
void* _Script_UMG::OverlaySlot::get_VerticalAlignment() {
    return (void*)((uintptr_t)this + 0x51);
}
void _Script_UMG::OverlaySlot::SetPadding(_Script_SlateCore::Margin InPadding) {
    return;
}
void _Script_UMG::OverlaySlot::SetHorizontalAlignment(void* InHorizontalAlignment) {
    return;
}
