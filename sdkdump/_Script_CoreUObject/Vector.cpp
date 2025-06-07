#include "..\FUObjectArray.hpp"
#include "Class.hpp"
#include "Vector.hpp"
float& _Script_CoreUObject::Vector::get_X() {
    return *(float*)((uintptr_t)this + 0x0);
}
float& _Script_CoreUObject::Vector::get_Y() {
    return *(float*)((uintptr_t)this + 0x4);
}
_Script_CoreUObject::Class* _Script_CoreUObject::Vector::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/CoreUObject.Vector");
    return result;
}
float& _Script_CoreUObject::Vector::get_Z() {
    return *(float*)((uintptr_t)this + 0x8);
}
