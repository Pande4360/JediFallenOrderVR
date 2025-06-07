#include "..\FUObjectArray.hpp"
#include "Class.hpp"
#include "FloatRange.hpp"
void* _Script_CoreUObject::FloatRange::get_LowerBound() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Script_CoreUObject::FloatRange::get_UpperBound() {
    return (void*)((uintptr_t)this + 0x8);
}
_Script_CoreUObject::Class* _Script_CoreUObject::FloatRange::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/CoreUObject.FloatRange");
    return result;
}
