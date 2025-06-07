#include "..\FUObjectArray.hpp"
#include "ClothCollisionPrim_Sphere.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
int32_t& _Script_ClothingSystemRuntimeInterface::ClothCollisionPrim_Sphere::get_BoneIndex() {
    return *(int32_t*)((uintptr_t)this + 0x0);
}
float& _Script_ClothingSystemRuntimeInterface::ClothCollisionPrim_Sphere::get_Radius() {
    return *(float*)((uintptr_t)this + 0x4);
}
void* _Script_ClothingSystemRuntimeInterface::ClothCollisionPrim_Sphere::get_LocalPosition() {
    return (void*)((uintptr_t)this + 0x8);
}
_Script_CoreUObject::Class* _Script_ClothingSystemRuntimeInterface::ClothCollisionPrim_Sphere::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/ClothingSystemRuntimeInterface.ClothCollisionPrim_Sphere");
    return result;
}
