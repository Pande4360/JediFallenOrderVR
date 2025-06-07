#include "..\FUObjectArray.hpp"
#include "ClothCollisionData.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
void* _Script_ClothingSystemRuntimeInterface::ClothCollisionData::get_SphereConnections() {
    return (void*)((uintptr_t)this + 0x10);
}
void* _Script_ClothingSystemRuntimeInterface::ClothCollisionData::get_Spheres() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Script_ClothingSystemRuntimeInterface::ClothCollisionData::get_Convexes() {
    return (void*)((uintptr_t)this + 0x20);
}
_Script_CoreUObject::Class* _Script_ClothingSystemRuntimeInterface::ClothCollisionData::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/ClothingSystemRuntimeInterface.ClothCollisionData");
    return result;
}
