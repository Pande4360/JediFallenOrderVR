#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "EdgeToCreate.hpp"
void* _Script_EditableMesh::EdgeToCreate::get_EdgeAttributes() {
    return (void*)((uintptr_t)this + 0x18);
}
void* _Script_EditableMesh::EdgeToCreate::get_VertexID0() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Script_EditableMesh::EdgeToCreate::get_VertexID1() {
    return (void*)((uintptr_t)this + 0x4);
}
_Script_CoreUObject::Class* _Script_EditableMesh::EdgeToCreate::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/EditableMesh.EdgeToCreate");
    return result;
}
void* _Script_EditableMesh::EdgeToCreate::get_ConnectedPolygons() {
    return (void*)((uintptr_t)this + 0x8);
}
void* _Script_EditableMesh::EdgeToCreate::get_OriginalEdgeID() {
    return (void*)((uintptr_t)this + 0x28);
}
