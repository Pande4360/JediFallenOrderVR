#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "VertexAndAttributes.hpp"
void* _Script_EditableMesh::VertexAndAttributes::get_VertexInstanceID() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Script_EditableMesh::VertexAndAttributes::get_VertexID() {
    return (void*)((uintptr_t)this + 0x4);
}
void* _Script_EditableMesh::VertexAndAttributes::get_PolygonVertexAttributes() {
    return (void*)((uintptr_t)this + 0x8);
}
_Script_CoreUObject::Class* _Script_EditableMesh::VertexAndAttributes::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/EditableMesh.VertexAndAttributes");
    return result;
}
