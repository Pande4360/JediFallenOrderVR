#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "VertexToMove.hpp"
void* _Script_EditableMesh::VertexToMove::get_VertexID() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Script_EditableMesh::VertexToMove::get_NewVertexPosition() {
    return (void*)((uintptr_t)this + 0x4);
}
_Script_CoreUObject::Class* _Script_EditableMesh::VertexToMove::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/EditableMesh.VertexToMove");
    return result;
}
