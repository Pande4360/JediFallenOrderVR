#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "AttributesForVertex.hpp"
void* _Script_EditableMesh::AttributesForVertex::get_VertexID() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Script_EditableMesh::AttributesForVertex::get_VertexAttributes() {
    return (void*)((uintptr_t)this + 0x8);
}
_Script_CoreUObject::Class* _Script_EditableMesh::AttributesForVertex::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/EditableMesh.AttributesForVertex");
    return result;
}
