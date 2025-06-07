#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "StructSerializerNumericTestStruct.hpp"
double& _Script_Serialization::StructSerializerNumericTestStruct::get_Double() {
    return *(double*)((uintptr_t)this + 0x28);
}
int32_t& _Script_Serialization::StructSerializerNumericTestStruct::get_Int32() {
    return *(int32_t*)((uintptr_t)this + 0x4);
}
void* _Script_Serialization::StructSerializerNumericTestStruct::get_Int8() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Script_Serialization::StructSerializerNumericTestStruct::get_Int16() {
    return (void*)((uintptr_t)this + 0x2);
}
void* _Script_Serialization::StructSerializerNumericTestStruct::get_Int64() {
    return (void*)((uintptr_t)this + 0x8);
}
void* _Script_Serialization::StructSerializerNumericTestStruct::get_UInt8() {
    return (void*)((uintptr_t)this + 0x10);
}
void* _Script_Serialization::StructSerializerNumericTestStruct::get_UInt16() {
    return (void*)((uintptr_t)this + 0x12);
}
void* _Script_Serialization::StructSerializerNumericTestStruct::get_UInt64() {
    return (void*)((uintptr_t)this + 0x18);
}
void* _Script_Serialization::StructSerializerNumericTestStruct::get_UInt32() {
    return (void*)((uintptr_t)this + 0x14);
}
float& _Script_Serialization::StructSerializerNumericTestStruct::get_Float() {
    return *(float*)((uintptr_t)this + 0x20);
}
_Script_CoreUObject::Class* _Script_Serialization::StructSerializerNumericTestStruct::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Serialization.StructSerializerNumericTestStruct");
    return result;
}
