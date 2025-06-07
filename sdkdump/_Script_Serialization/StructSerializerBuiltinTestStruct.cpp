#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "StructSerializerBuiltinTestStruct.hpp"
void* _Script_Serialization::StructSerializerBuiltinTestStruct::get_Text() {
    return (void*)((uintptr_t)this + 0x38);
}
void* _Script_Serialization::StructSerializerBuiltinTestStruct::get_Guid() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Script_Serialization::StructSerializerBuiltinTestStruct::get_Name() {
    return (void*)((uintptr_t)this + 0x10);
}
void* _Script_Serialization::StructSerializerBuiltinTestStruct::get_Rotator() {
    return (void*)((uintptr_t)this + 0x28);
}
void* _Script_Serialization::StructSerializerBuiltinTestStruct::get_String() {
    return (void*)((uintptr_t)this + 0x18);
}
void* _Script_Serialization::StructSerializerBuiltinTestStruct::get_Vector() {
    return (void*)((uintptr_t)this + 0x50);
}
_Script_CoreUObject::Class* _Script_Serialization::StructSerializerBuiltinTestStruct::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Serialization.StructSerializerBuiltinTestStruct");
    return result;
}
