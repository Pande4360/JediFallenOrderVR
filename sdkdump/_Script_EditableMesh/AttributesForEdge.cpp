#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "AttributesForEdge.hpp"
_Script_CoreUObject::Class* _Script_EditableMesh::AttributesForEdge::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/EditableMesh.AttributesForEdge");
    return result;
}
void* _Script_EditableMesh::AttributesForEdge::get_EdgeID() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Script_EditableMesh::AttributesForEdge::get_EdgeAttributes() {
    return (void*)((uintptr_t)this + 0x8);
}
