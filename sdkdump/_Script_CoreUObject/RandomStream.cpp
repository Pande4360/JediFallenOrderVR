#include "..\FUObjectArray.hpp"
#include "Class.hpp"
#include "RandomStream.hpp"
int32_t& _Script_CoreUObject::RandomStream::get_InitialSeed() {
    return *(int32_t*)((uintptr_t)this + 0x0);
}
int32_t& _Script_CoreUObject::RandomStream::get_Seed() {
    return *(int32_t*)((uintptr_t)this + 0x4);
}
_Script_CoreUObject::Class* _Script_CoreUObject::RandomStream::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/CoreUObject.RandomStream");
    return result;
}
