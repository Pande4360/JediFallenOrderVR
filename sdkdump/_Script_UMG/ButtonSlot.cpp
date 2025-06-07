#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_SlateCore\Margin.hpp"
#include "ButtonSlot.hpp"
#include "PanelSlot.hpp"
void* _Script_UMG::ButtonSlot::get_Padding() {
    return (void*)((uintptr_t)this + 0x38);
}
void* _Script_UMG::ButtonSlot::get_HorizontalAlignment() {
    return (void*)((uintptr_t)this + 0x48);
}
void* _Script_UMG::ButtonSlot::get_VerticalAlignment() {
    return (void*)((uintptr_t)this + 0x49);
}
_Script_CoreUObject::Class* _Script_UMG::ButtonSlot::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/UMG.ButtonSlot");
    return result;
}
void _Script_UMG::ButtonSlot::SetHorizontalAlignment(void* InHorizontalAlignment) {
    return;
}
void _Script_UMG::ButtonSlot::SetVerticalAlignment(void* InVerticalAlignment) {
    return;
}
void _Script_UMG::ButtonSlot::SetPadding(_Script_SlateCore::Margin InPadding) {
    return;
}
