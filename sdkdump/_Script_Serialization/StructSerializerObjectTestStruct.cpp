#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "StructSerializerObjectTestStruct.hpp"
void* _Script_Serialization::StructSerializerObjectTestStruct::get_Class() {
    return (void*)((uintptr_t)this + 0x0);
}
_Script_CoreUObject::Object*& _Script_Serialization::StructSerializerObjectTestStruct::get_ObjectPtr() {
    return *(_Script_CoreUObject::Object**)((uintptr_t)this + 0x8);
}
_Script_CoreUObject::Class* _Script_Serialization::StructSerializerObjectTestStruct::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Serialization.StructSerializerObjectTestStruct");
    return result;
}
