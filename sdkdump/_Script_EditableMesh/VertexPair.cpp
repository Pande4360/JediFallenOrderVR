#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "VertexPair.hpp"
void* _Script_EditableMesh::VertexPair::get_VertexID0() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Script_EditableMesh::VertexPair::get_VertexID1() {
    return (void*)((uintptr_t)this + 0x4);
}
_Script_CoreUObject::Class* _Script_EditableMesh::VertexPair::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/EditableMesh.VertexPair");
    return result;
}
