#include "..\FUObjectArray.hpp"
#include "Class.hpp"
#include "Color.hpp"
void* _Script_CoreUObject::Color::get_R() {
    return (void*)((uintptr_t)this + 0x2);
}
void* _Script_CoreUObject::Color::get_B() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Script_CoreUObject::Color::get_G() {
    return (void*)((uintptr_t)this + 0x1);
}
void* _Script_CoreUObject::Color::get_A() {
    return (void*)((uintptr_t)this + 0x3);
}
_Script_CoreUObject::Class* _Script_CoreUObject::Color::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/CoreUObject.Color");
    return result;
}
