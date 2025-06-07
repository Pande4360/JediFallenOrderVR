#include "..\FUObjectArray.hpp"
#include "Class.hpp"
#include "FloatRangeBound.hpp"
void* _Script_CoreUObject::FloatRangeBound::get_Type() {
    return (void*)((uintptr_t)this + 0x0);
}
float& _Script_CoreUObject::FloatRangeBound::get_Value() {
    return *(float*)((uintptr_t)this + 0x4);
}
_Script_CoreUObject::Class* _Script_CoreUObject::FloatRangeBound::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/CoreUObject.FloatRangeBound");
    return result;
}
