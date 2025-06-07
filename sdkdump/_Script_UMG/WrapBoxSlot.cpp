#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_SlateCore\Margin.hpp"
#include "PanelSlot.hpp"
#include "WrapBoxSlot.hpp"
void _Script_UMG::WrapBoxSlot::SetFillEmptySpace(bool InbFillEmptySpace) {
    return;
}
_Script_CoreUObject::Class* _Script_UMG::WrapBoxSlot::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/UMG.WrapBoxSlot");
    return result;
}
float& _Script_UMG::WrapBoxSlot::get_FillSpanWhenLessThan() {
    return *(float*)((uintptr_t)this + 0x4c);
}
void* _Script_UMG::WrapBoxSlot::get_Padding() {
    return (void*)((uintptr_t)this + 0x38);
}
bool _Script_UMG::WrapBoxSlot::get_bFillEmptySpace() {
    return (*(uint8_t*)((uintptr_t)this + 0x48 + 0)) & 1 != 0;
}
void _Script_UMG::WrapBoxSlot::set_bFillEmptySpace(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x48 + 0);
    *(uint8_t*)((uintptr_t)this + 0x48 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_UMG::WrapBoxSlot::get_HorizontalAlignment() {
    return (void*)((uintptr_t)this + 0x50);
}
void* _Script_UMG::WrapBoxSlot::get_VerticalAlignment() {
    return (void*)((uintptr_t)this + 0x51);
}
void _Script_UMG::WrapBoxSlot::SetVerticalAlignment(void* InVerticalAlignment) {
    return;
}
void _Script_UMG::WrapBoxSlot::SetPadding(_Script_SlateCore::Margin InPadding) {
    return;
}
void _Script_UMG::WrapBoxSlot::SetHorizontalAlignment(void* InHorizontalAlignment) {
    return;
}
void _Script_UMG::WrapBoxSlot::SetFillSpanWhenLessThan(float InFillSpanWhenLessThan) {
    return;
}
