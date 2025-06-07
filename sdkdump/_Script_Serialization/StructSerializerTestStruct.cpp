#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "StructSerializerTestStruct.hpp"
void* _Script_Serialization::StructSerializerTestStruct::get_Numerics() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Script_Serialization::StructSerializerTestStruct::get_Arrays() {
    return (void*)((uintptr_t)this + 0xa8);
}
void* _Script_Serialization::StructSerializerTestStruct::get_Booleans() {
    return (void*)((uintptr_t)this + 0x30);
}
void* _Script_Serialization::StructSerializerTestStruct::get_Objects() {
    return (void*)((uintptr_t)this + 0x38);
}
void* _Script_Serialization::StructSerializerTestStruct::get_Builtins() {
    return (void*)((uintptr_t)this + 0x48);
}
void* _Script_Serialization::StructSerializerTestStruct::get_Maps() {
    return (void*)((uintptr_t)this + 0xe8);
}
_Script_CoreUObject::Class* _Script_Serialization::StructSerializerTestStruct::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Serialization.StructSerializerTestStruct");
    return result;
}
