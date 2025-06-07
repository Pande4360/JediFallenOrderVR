#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_SlateCore\Margin.hpp"
#include "PanelSlot.hpp"
#include "ScaleBoxSlot.hpp"
void* _Script_UMG::ScaleBoxSlot::get_VerticalAlignment() {
    return (void*)((uintptr_t)this + 0x49);
}
void* _Script_UMG::ScaleBoxSlot::get_Padding() {
    return (void*)((uintptr_t)this + 0x38);
}
void _Script_UMG::ScaleBoxSlot::SetVerticalAlignment(void* InVerticalAlignment) {
    return;
}
void* _Script_UMG::ScaleBoxSlot::get_HorizontalAlignment() {
    return (void*)((uintptr_t)this + 0x48);
}
void _Script_UMG::ScaleBoxSlot::SetHorizontalAlignment(void* InHorizontalAlignment) {
    return;
}
_Script_CoreUObject::Class* _Script_UMG::ScaleBoxSlot::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/UMG.ScaleBoxSlot");
    return result;
}
void _Script_UMG::ScaleBoxSlot::SetPadding(_Script_SlateCore::Margin InPadding) {
    return;
}
