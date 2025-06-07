#include "..\FUObjectArray.hpp"
#include "Class.hpp"
#include "FloatInterval.hpp"
float& _Script_CoreUObject::FloatInterval::get_Min() {
    return *(float*)((uintptr_t)this + 0x0);
}
float& _Script_CoreUObject::FloatInterval::get_Max() {
    return *(float*)((uintptr_t)this + 0x4);
}
_Script_CoreUObject::Class* _Script_CoreUObject::FloatInterval::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/CoreUObject.FloatInterval");
    return result;
}
