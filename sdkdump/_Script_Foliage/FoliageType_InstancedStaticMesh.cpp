#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\StaticMesh.hpp"
#include "FoliageType.hpp"
#include "FoliageType_InstancedStaticMesh.hpp"
_Script_Engine::StaticMesh*& _Script_Foliage::FoliageType_InstancedStaticMesh::get_Mesh() {
    return *(_Script_Engine::StaticMesh**)((uintptr_t)this + 0x850);
}
void* _Script_Foliage::FoliageType_InstancedStaticMesh::get_OverrideMaterials() {
    return (void*)((uintptr_t)this + 0x858);
}
void* _Script_Foliage::FoliageType_InstancedStaticMesh::get_ComponentClass() {
    return (void*)((uintptr_t)this + 0x868);
}
_Script_CoreUObject::Class* _Script_Foliage::FoliageType_InstancedStaticMesh::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Foliage.FoliageType_InstancedStaticMesh");
    return result;
}
