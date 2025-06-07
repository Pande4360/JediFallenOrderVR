#include "..\FUObjectArray.hpp"
#include "ClothCollisionPrim_SphereConnection.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
int32_t& _Script_ClothingSystemRuntimeInterface::ClothCollisionPrim_SphereConnection::get_SphereIndices() {
    return *(int32_t*)((uintptr_t)this + 0x0);
}
_Script_CoreUObject::Class* _Script_ClothingSystemRuntimeInterface::ClothCollisionPrim_SphereConnection::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/ClothingSystemRuntimeInterface.ClothCollisionPrim_SphereConnection");
    return result;
}
