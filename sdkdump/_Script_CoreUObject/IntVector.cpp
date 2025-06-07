#include "..\FUObjectArray.hpp"
#include "Class.hpp"
#include "IntVector.hpp"
_Script_CoreUObject::Class* _Script_CoreUObject::IntVector::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/CoreUObject.IntVector");
    return result;
}
int32_t& _Script_CoreUObject::IntVector::get_X() {
    return *(int32_t*)((uintptr_t)this + 0x0);
}
int32_t& _Script_CoreUObject::IntVector::get_Y() {
    return *(int32_t*)((uintptr_t)this + 0x4);
}
int32_t& _Script_CoreUObject::IntVector::get_Z() {
    return *(int32_t*)((uintptr_t)this + 0x8);
}
