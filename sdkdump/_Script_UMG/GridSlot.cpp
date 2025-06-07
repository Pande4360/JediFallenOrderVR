#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_SlateCore\Margin.hpp"
#include "GridSlot.hpp"
#include "PanelSlot.hpp"
int32_t& _Script_UMG::GridSlot::get_Column() {
    return *(int32_t*)((uintptr_t)this + 0x54);
}
void* _Script_UMG::GridSlot::get_Padding() {
    return (void*)((uintptr_t)this + 0x38);
}
void* _Script_UMG::GridSlot::get_HorizontalAlignment() {
    return (void*)((uintptr_t)this + 0x48);
}
void* _Script_UMG::GridSlot::get_VerticalAlignment() {
    return (void*)((uintptr_t)this + 0x49);
}
int32_t& _Script_UMG::GridSlot::get_Row() {
    return *(int32_t*)((uintptr_t)this + 0x4c);
}
int32_t& _Script_UMG::GridSlot::get_RowSpan() {
    return *(int32_t*)((uintptr_t)this + 0x50);
}
int32_t& _Script_UMG::GridSlot::get_ColumnSpan() {
    return *(int32_t*)((uintptr_t)this + 0x58);
}
int32_t& _Script_UMG::GridSlot::get_Layer() {
    return *(int32_t*)((uintptr_t)this + 0x5c);
}
void* _Script_UMG::GridSlot::get_Nudge() {
    return (void*)((uintptr_t)this + 0x60);
}
_Script_CoreUObject::Class* _Script_UMG::GridSlot::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/UMG.GridSlot");
    return result;
}
void _Script_UMG::GridSlot::SetVerticalAlignment(void* InVerticalAlignment) {
    return;
}
void _Script_UMG::GridSlot::SetRowSpan(int32_t InRowSpan) {
    return;
}
void _Script_UMG::GridSlot::SetRow(int32_t InRow) {
    return;
}
void _Script_UMG::GridSlot::SetPadding(_Script_SlateCore::Margin InPadding) {
    return;
}
void _Script_UMG::GridSlot::SetLayer(int32_t InLayer) {
    return;
}
void _Script_UMG::GridSlot::SetHorizontalAlignment(void* InHorizontalAlignment) {
    return;
}
void _Script_UMG::GridSlot::SetColumnSpan(int32_t InColumnSpan) {
    return;
}
void _Script_UMG::GridSlot::SetColumn(int32_t InColumn) {
    return;
}
