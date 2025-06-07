#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "InstancedStaticMeshOcclusionCluster.hpp"
void* _Script_Engine::InstancedStaticMeshOcclusionCluster::get_Bounds() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Script_Engine::InstancedStaticMeshOcclusionCluster::get_InstanceIndices() {
    return (void*)((uintptr_t)this + 0x20);
}
_Script_CoreUObject::Class* _Script_Engine::InstancedStaticMeshOcclusionCluster::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.InstancedStaticMeshOcclusionCluster");
    return result;
}
