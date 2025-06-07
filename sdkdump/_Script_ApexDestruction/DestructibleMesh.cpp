#include "..\FUObjectArray.hpp"
#include "DestructibleMesh.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\SkeletalMesh.hpp"
void* _Script_ApexDestruction::DestructibleMesh::get_DefaultDestructibleParameters() {
    return (void*)((uintptr_t)this + 0x2f8);
}
void* _Script_ApexDestruction::DestructibleMesh::get_FractureEffects() {
    return (void*)((uintptr_t)this + 0x380);
}
_Script_CoreUObject::Class* _Script_ApexDestruction::DestructibleMesh::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/ApexDestruction.DestructibleMesh");
    return result;
}
