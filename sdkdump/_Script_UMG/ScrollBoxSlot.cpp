#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_SlateCore\Margin.hpp"
#include "PanelSlot.hpp"
#include "ScrollBoxSlot.hpp"
_Script_CoreUObject::Class* _Script_UMG::ScrollBoxSlot::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/UMG.ScrollBoxSlot");
    return result;
}
void* _Script_UMG::ScrollBoxSlot::get_HorizontalAlignment() {
    return (void*)((uintptr_t)this + 0x48);
}
void* _Script_UMG::ScrollBoxSlot::get_Padding() {
    return (void*)((uintptr_t)this + 0x38);
}
void _Script_UMG::ScrollBoxSlot::SetHorizontalAlignment(void* InHorizontalAlignment) {
    return;
}
void* _Script_UMG::ScrollBoxSlot::get_VerticalAlignment() {
    return (void*)((uintptr_t)this + 0x49);
}
void _Script_UMG::ScrollBoxSlot::SetVerticalAlignment(void* InVerticalAlignment) {
    return;
}
void _Script_UMG::ScrollBoxSlot::SetPadding(_Script_SlateCore::Margin InPadding) {
    return;
}
