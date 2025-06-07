#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "PropertyValue.hpp"
void* _Script_VariantManagerContent::PropertyValue::get_Properties() {
    return (void*)((uintptr_t)this + 0xa8);
}
void* _Script_VariantManagerContent::PropertyValue::get_FullDisplayString() {
    return (void*)((uintptr_t)this + 0x78);
}
void* _Script_VariantManagerContent::PropertyValue::get_PropCategory() {
    return (void*)((uintptr_t)this + 0xa0);
}
bool _Script_VariantManagerContent::PropertyValue::get_bHasRecordedData() {
    return (*(uint8_t*)((uintptr_t)this + 0x88 + 0)) & 1 != 0;
}
void _Script_VariantManagerContent::PropertyValue::set_bHasRecordedData(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x88 + 0);
    *(uint8_t*)((uintptr_t)this + 0x88 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Script_VariantManagerContent::PropertyValue::set_bIsObjectProperty(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x89 + 0);
    *(uint8_t*)((uintptr_t)this + 0x89 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_VariantManagerContent::PropertyValue::get_bIsObjectProperty() {
    return (*(uint8_t*)((uintptr_t)this + 0x89 + 0)) & 1 != 0;
}
void* _Script_VariantManagerContent::PropertyValue::get_ValueBytes() {
    return (void*)((uintptr_t)this + 0x90);
}
void* _Script_VariantManagerContent::PropertyValue::get_PropertyIndices() {
    return (void*)((uintptr_t)this + 0xb8);
}
_Script_CoreUObject::Class* _Script_VariantManagerContent::PropertyValue::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/VariantManagerContent.PropertyValue");
    return result;
}
