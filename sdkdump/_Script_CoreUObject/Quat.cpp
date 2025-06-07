#include "..\FUObjectArray.hpp"
#include "Class.hpp"
#include "Quat.hpp"
float& _Script_CoreUObject::Quat::get_W() {
    return *(float*)((uintptr_t)this + 0xc);
}
float& _Script_CoreUObject::Quat::get_X() {
    return *(float*)((uintptr_t)this + 0x0);
}
_Script_CoreUObject::Class* _Script_CoreUObject::Quat::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/CoreUObject.Quat");
    return result;
}
float& _Script_CoreUObject::Quat::get_Y() {
    return *(float*)((uintptr_t)this + 0x4);
}
float& _Script_CoreUObject::Quat::get_Z() {
    return *(float*)((uintptr_t)this + 0x8);
}
