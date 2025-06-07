#include "..\FUObjectArray.hpp"
#include "Class.hpp"
#include "IntPoint.hpp"
int32_t& _Script_CoreUObject::IntPoint::get_Y() {
    return *(int32_t*)((uintptr_t)this + 0x4);
}
int32_t& _Script_CoreUObject::IntPoint::get_X() {
    return *(int32_t*)((uintptr_t)this + 0x0);
}
_Script_CoreUObject::Class* _Script_CoreUObject::IntPoint::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/CoreUObject.IntPoint");
    return result;
}
