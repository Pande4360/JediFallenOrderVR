#include "..\FUObjectArray.hpp"
#include "Class.hpp"
#include "Int32Range.hpp"
void* _Script_CoreUObject::Int32Range::get_LowerBound() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Script_CoreUObject::Int32Range::get_UpperBound() {
    return (void*)((uintptr_t)this + 0x8);
}
_Script_CoreUObject::Class* _Script_CoreUObject::Int32Range::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/CoreUObject.Int32Range");
    return result;
}
