#include "..\FUObjectArray.hpp"
#include "ClothCollisionPrim_Convex.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
void* _Script_ClothingSystemRuntimeInterface::ClothCollisionPrim_Convex::get_Planes() {
    return (void*)((uintptr_t)this + 0x0);
}
int32_t& _Script_ClothingSystemRuntimeInterface::ClothCollisionPrim_Convex::get_BoneIndex() {
    return *(int32_t*)((uintptr_t)this + 0x10);
}
_Script_CoreUObject::Class* _Script_ClothingSystemRuntimeInterface::ClothCollisionPrim_Convex::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/ClothingSystemRuntimeInterface.ClothCollisionPrim_Convex");
    return result;
}
