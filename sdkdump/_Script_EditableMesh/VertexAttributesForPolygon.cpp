#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "VertexAttributesForPolygon.hpp"
void* _Script_EditableMesh::VertexAttributesForPolygon::get_PolygonID() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Script_EditableMesh::VertexAttributesForPolygon::get_PerimeterVertexAttributeLists() {
    return (void*)((uintptr_t)this + 0x8);
}
void* _Script_EditableMesh::VertexAttributesForPolygon::get_VertexAttributeListsForEachHole() {
    return (void*)((uintptr_t)this + 0x18);
}
_Script_CoreUObject::Class* _Script_EditableMesh::VertexAttributesForPolygon::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/EditableMesh.VertexAttributesForPolygon");
    return result;
}
