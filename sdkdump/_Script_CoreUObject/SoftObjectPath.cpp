#include "..\FUObjectArray.hpp"
#include "Class.hpp"
#include "SoftObjectPath.hpp"
void* _Script_CoreUObject::SoftObjectPath::get_AssetPathName() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Script_CoreUObject::SoftObjectPath::get_SubPathString() {
    return (void*)((uintptr_t)this + 0x8);
}
_Script_CoreUObject::Class* _Script_CoreUObject::SoftObjectPath::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/CoreUObject.SoftObjectPath");
    return result;
}
