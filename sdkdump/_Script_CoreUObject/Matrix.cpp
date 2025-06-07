#include "..\FUObjectArray.hpp"
#include "Class.hpp"
#include "Matrix.hpp"
void* _Script_CoreUObject::Matrix::get_ZPlane() {
    return (void*)((uintptr_t)this + 0x20);
}
void* _Script_CoreUObject::Matrix::get_XPlane() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Script_CoreUObject::Matrix::get_YPlane() {
    return (void*)((uintptr_t)this + 0x10);
}
void* _Script_CoreUObject::Matrix::get_WPlane() {
    return (void*)((uintptr_t)this + 0x30);
}
_Script_CoreUObject::Class* _Script_CoreUObject::Matrix::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/CoreUObject.Matrix");
    return result;
}
