#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "VerticesForEdge.hpp"
void* _Script_EditableMesh::VerticesForEdge::get_EdgeID() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Script_EditableMesh::VerticesForEdge::get_NewVertexID0() {
    return (void*)((uintptr_t)this + 0x4);
}
void* _Script_EditableMesh::VerticesForEdge::get_NewVertexID1() {
    return (void*)((uintptr_t)this + 0x8);
}
_Script_CoreUObject::Class* _Script_EditableMesh::VerticesForEdge::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/EditableMesh.VerticesForEdge");
    return result;
}
