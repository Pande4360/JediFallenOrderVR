#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "VertexAttributesForPolygonHole.hpp"
void* _Script_EditableMesh::VertexAttributesForPolygonHole::get_VertexAttributeList() {
    return (void*)((uintptr_t)this + 0x0);
}
_Script_CoreUObject::Class* _Script_EditableMesh::VertexAttributesForPolygonHole::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/EditableMesh.VertexAttributesForPolygonHole");
    return result;
}
