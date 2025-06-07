#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "VertexToCreate.hpp"
void* _Script_EditableMesh::VertexToCreate::get_VertexAttributes() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Script_EditableMesh::VertexToCreate::get_OriginalVertexID() {
    return (void*)((uintptr_t)this + 0x10);
}
_Script_CoreUObject::Class* _Script_EditableMesh::VertexToCreate::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/EditableMesh.VertexToCreate");
    return result;
}
