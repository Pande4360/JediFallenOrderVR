#include "..\FUObjectArray.hpp"
#include "Class.hpp"
#include "TwoVectors.hpp"
void* _Script_CoreUObject::TwoVectors::get_v1() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Script_CoreUObject::TwoVectors::get_v2() {
    return (void*)((uintptr_t)this + 0xc);
}
_Script_CoreUObject::Class* _Script_CoreUObject::TwoVectors::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/CoreUObject.TwoVectors");
    return result;
}
