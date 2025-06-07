#include "..\FUObjectArray.hpp"
#include "Class.hpp"
#include "Int32RangeBound.hpp"
void* _Script_CoreUObject::Int32RangeBound::get_Type() {
    return (void*)((uintptr_t)this + 0x0);
}
int32_t& _Script_CoreUObject::Int32RangeBound::get_Value() {
    return *(int32_t*)((uintptr_t)this + 0x4);
}
_Script_CoreUObject::Class* _Script_CoreUObject::Int32RangeBound::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/CoreUObject.Int32RangeBound");
    return result;
}
