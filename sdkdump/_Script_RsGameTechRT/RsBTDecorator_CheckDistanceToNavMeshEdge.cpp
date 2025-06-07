#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "RsBTDecorator_CheckDistanceToNavMeshEdge.hpp"
#include "RsBTDecorator_RelativeToLocationBase.hpp"
void* _Script_RsGameTechRT::RsBTDecorator_CheckDistanceToNavMeshEdge::get_Comparison() {
    return (void*)((uintptr_t)this + 0x90);
}
float& _Script_RsGameTechRT::RsBTDecorator_CheckDistanceToNavMeshEdge::get_Distance() {
    return *(float*)((uintptr_t)this + 0x94);
}
_Script_CoreUObject::Class* _Script_RsGameTechRT::RsBTDecorator_CheckDistanceToNavMeshEdge::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/RsGameTechRT.RsBTDecorator_CheckDistanceToNavMeshEdge");
    return result;
}
