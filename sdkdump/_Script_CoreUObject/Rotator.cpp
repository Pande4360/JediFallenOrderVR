#include "..\FUObjectArray.hpp"
#include "Class.hpp"
#include "Rotator.hpp"
float& _Script_CoreUObject::Rotator::get_Pitch() {
    return *(float*)((uintptr_t)this + 0x0);
}
float& _Script_CoreUObject::Rotator::get_Yaw() {
    return *(float*)((uintptr_t)this + 0x4);
}
float& _Script_CoreUObject::Rotator::get_Roll() {
    return *(float*)((uintptr_t)this + 0x8);
}
_Script_CoreUObject::Class* _Script_CoreUObject::Rotator::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/CoreUObject.Rotator");
    return result;
}
