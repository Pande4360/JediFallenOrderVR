#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "PanelSlot.hpp"
#include "UniformGridSlot.hpp"
void _Script_UMG::UniformGridSlot::SetColumn(int32_t InColumn) {
    return;
}
void* _Script_UMG::UniformGridSlot::get_HorizontalAlignment() {
    return (void*)((uintptr_t)this + 0x38);
}
void _Script_UMG::UniformGridSlot::SetRow(int32_t InRow) {
    return;
}
void* _Script_UMG::UniformGridSlot::get_VerticalAlignment() {
    return (void*)((uintptr_t)this + 0x39);
}
int32_t& _Script_UMG::UniformGridSlot::get_Row() {
    return *(int32_t*)((uintptr_t)this + 0x3c);
}
int32_t& _Script_UMG::UniformGridSlot::get_Column() {
    return *(int32_t*)((uintptr_t)this + 0x40);
}
_Script_CoreUObject::Class* _Script_UMG::UniformGridSlot::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/UMG.UniformGridSlot");
    return result;
}
void _Script_UMG::UniformGridSlot::SetVerticalAlignment(void* InVerticalAlignment) {
    return;
}
void _Script_UMG::UniformGridSlot::SetHorizontalAlignment(void* InHorizontalAlignment) {
    return;
}
