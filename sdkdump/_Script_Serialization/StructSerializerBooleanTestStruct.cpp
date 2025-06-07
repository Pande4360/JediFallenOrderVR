#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "StructSerializerBooleanTestStruct.hpp"
bool _Script_Serialization::StructSerializerBooleanTestStruct::get_BoolFalse() {
    return (*(uint8_t*)((uintptr_t)this + 0x0 + 0)) & 1 != 0;
}
void _Script_Serialization::StructSerializerBooleanTestStruct::set_BoolFalse(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x0 + 0);
    *(uint8_t*)((uintptr_t)this + 0x0 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Script_Serialization::StructSerializerBooleanTestStruct::set_BoolTrue(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x1 + 0);
    *(uint8_t*)((uintptr_t)this + 0x1 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_Serialization::StructSerializerBooleanTestStruct::get_BoolTrue() {
    return (*(uint8_t*)((uintptr_t)this + 0x1 + 0)) & 1 != 0;
}
void* _Script_Serialization::StructSerializerBooleanTestStruct::get_Bitfield() {
    return (void*)((uintptr_t)this + 0x4);
}
_Script_CoreUObject::Class* _Script_Serialization::StructSerializerBooleanTestStruct::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Serialization.StructSerializerBooleanTestStruct");
    return result;
}
