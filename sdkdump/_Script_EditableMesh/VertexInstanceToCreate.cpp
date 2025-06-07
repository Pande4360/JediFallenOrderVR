#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "VertexInstanceToCreate.hpp"
void* _Script_EditableMesh::VertexInstanceToCreate::get_VertexInstanceAttributes() {
    return (void*)((uintptr_t)this + 0x8);
}
void* _Script_EditableMesh::VertexInstanceToCreate::get_VertexID() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Script_EditableMesh::VertexInstanceToCreate::get_OriginalVertexInstanceID() {
    return (void*)((uintptr_t)this + 0x18);
}
_Script_CoreUObject::Class* _Script_EditableMesh::VertexInstanceToCreate::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/EditableMesh.VertexInstanceToCreate");
    return result;
}
