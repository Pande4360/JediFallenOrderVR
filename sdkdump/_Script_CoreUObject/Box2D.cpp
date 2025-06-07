#include "..\FUObjectArray.hpp"
#include "Box2D.hpp"
#include "Class.hpp"
void* _Script_CoreUObject::Box2D::get_Min() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Script_CoreUObject::Box2D::get_Max() {
    return (void*)((uintptr_t)this + 0x8);
}
void* _Script_CoreUObject::Box2D::get_bIsValid() {
    return (void*)((uintptr_t)this + 0x10);
}
_Script_CoreUObject::Class* _Script_CoreUObject::Box2D::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/CoreUObject.Box2D");
    return result;
}
