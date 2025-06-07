#include "..\FUObjectArray.hpp"
#include "Class.hpp"
#include "LinearColor.hpp"
float& _Script_CoreUObject::LinearColor::get_B() {
    return *(float*)((uintptr_t)this + 0x8);
}
float& _Script_CoreUObject::LinearColor::get_R() {
    return *(float*)((uintptr_t)this + 0x0);
}
float& _Script_CoreUObject::LinearColor::get_G() {
    return *(float*)((uintptr_t)this + 0x4);
}
float& _Script_CoreUObject::LinearColor::get_A() {
    return *(float*)((uintptr_t)this + 0xc);
}
_Script_CoreUObject::Class* _Script_CoreUObject::LinearColor::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/CoreUObject.LinearColor");
    return result;
}
