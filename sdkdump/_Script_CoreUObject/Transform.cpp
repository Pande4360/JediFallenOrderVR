#include "..\FUObjectArray.hpp"
#include "Class.hpp"
#include "Transform.hpp"
void* _Script_CoreUObject::Transform::get_Rotation() {
    return (void*)((uintptr_t)this + 0x0);
}
_Script_CoreUObject::Class* _Script_CoreUObject::Transform::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/CoreUObject.Transform");
    return result;
}
void* _Script_CoreUObject::Transform::get_Translation() {
    return (void*)((uintptr_t)this + 0x10);
}
void* _Script_CoreUObject::Transform::get_Scale3D() {
    return (void*)((uintptr_t)this + 0x20);
}
