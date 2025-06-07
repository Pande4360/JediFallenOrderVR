#include "..\FUObjectArray.hpp"
#include "Class.hpp"
#include "Int32Interval.hpp"
int32_t& _Script_CoreUObject::Int32Interval::get_Min() {
    return *(int32_t*)((uintptr_t)this + 0x0);
}
int32_t& _Script_CoreUObject::Int32Interval::get_Max() {
    return *(int32_t*)((uintptr_t)this + 0x4);
}
_Script_CoreUObject::Class* _Script_CoreUObject::Int32Interval::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/CoreUObject.Int32Interval");
    return result;
}
