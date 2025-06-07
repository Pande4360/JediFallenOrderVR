#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "EditableMeshAdapter.hpp"
#include "EditableStaticMeshAdapter.hpp"
#include "..\_Script_Engine\StaticMesh.hpp"
_Script_Engine::StaticMesh*& _Script_EditableMesh::EditableStaticMeshAdapter::get_StaticMesh() {
    return *(_Script_Engine::StaticMesh**)((uintptr_t)this + 0x28);
}
int32_t& _Script_EditableMesh::EditableStaticMeshAdapter::get_StaticMeshLODIndex() {
    return *(int32_t*)((uintptr_t)this + 0x38);
}
_Script_Engine::StaticMesh*& _Script_EditableMesh::EditableStaticMeshAdapter::get_OriginalStaticMesh() {
    return *(_Script_Engine::StaticMesh**)((uintptr_t)this + 0x30);
}
_Script_CoreUObject::Class* _Script_EditableMesh::EditableStaticMeshAdapter::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/EditableMesh.EditableStaticMeshAdapter");
    return result;
}
