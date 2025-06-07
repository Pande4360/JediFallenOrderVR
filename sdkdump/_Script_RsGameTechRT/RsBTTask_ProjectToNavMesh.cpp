#include "..\FUObjectArray.hpp"
#include "..\_Script_AIModule\BTTaskNode.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "RsBTTask_ProjectToNavMesh.hpp"
float& _Script_RsGameTechRT::RsBTTask_ProjectToNavMesh::get_ExtentZ() {
    return *(float*)((uintptr_t)this + 0xc8);
}
void* _Script_RsGameTechRT::RsBTTask_ProjectToNavMesh::get_LocationKey() {
    return (void*)((uintptr_t)this + 0x70);
}
void* _Script_RsGameTechRT::RsBTTask_ProjectToNavMesh::get_ResultKey() {
    return (void*)((uintptr_t)this + 0x98);
}
float& _Script_RsGameTechRT::RsBTTask_ProjectToNavMesh::get_ExtentX() {
    return *(float*)((uintptr_t)this + 0xc0);
}
float& _Script_RsGameTechRT::RsBTTask_ProjectToNavMesh::get_ExtentY() {
    return *(float*)((uintptr_t)this + 0xc4);
}
_Script_CoreUObject::Class* _Script_RsGameTechRT::RsBTTask_ProjectToNavMesh::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/RsGameTechRT.RsBTTask_ProjectToNavMesh");
    return result;
}
