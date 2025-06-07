#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "RenderingPolygonGroup.hpp"
void* _Script_EditableMesh::RenderingPolygonGroup::get_RenderingSectionIndex() {
    return (void*)((uintptr_t)this + 0x0);
}
int32_t& _Script_EditableMesh::RenderingPolygonGroup::get_MaterialIndex() {
    return *(int32_t*)((uintptr_t)this + 0x4);
}
int32_t& _Script_EditableMesh::RenderingPolygonGroup::get_MaxTriangles() {
    return *(int32_t*)((uintptr_t)this + 0x8);
}
_Script_CoreUObject::Class* _Script_EditableMesh::RenderingPolygonGroup::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/EditableMesh.RenderingPolygonGroup");
    return result;
}
