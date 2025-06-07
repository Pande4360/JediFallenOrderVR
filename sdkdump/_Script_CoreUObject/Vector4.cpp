#include "..\FUObjectArray.hpp"
#include "Class.hpp"
#include "Vector4.hpp"
float& _Script_CoreUObject::Vector4::get_X() {
    return *(float*)((uintptr_t)this + 0x0);
}
float& _Script_CoreUObject::Vector4::get_Y() {
    return *(float*)((uintptr_t)this + 0x4);
}
float& _Script_CoreUObject::Vector4::get_Z() {
    return *(float*)((uintptr_t)this + 0x8);
}
float& _Script_CoreUObject::Vector4::get_W() {
    return *(float*)((uintptr_t)this + 0xc);
}
_Script_CoreUObject::Class* _Script_CoreUObject::Vector4::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/CoreUObject.Vector4");
    return result;
}
