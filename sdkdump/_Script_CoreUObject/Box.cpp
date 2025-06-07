#include "..\FUObjectArray.hpp"
#include "Box.hpp"
#include "Class.hpp"
void* _Script_CoreUObject::Box::get_Min() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Script_CoreUObject::Box::get_IsValid() {
    return (void*)((uintptr_t)this + 0x18);
}
void* _Script_CoreUObject::Box::get_Max() {
    return (void*)((uintptr_t)this + 0xc);
}
_Script_CoreUObject::Class* _Script_CoreUObject::Box::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/CoreUObject.Box");
    return result;
}
