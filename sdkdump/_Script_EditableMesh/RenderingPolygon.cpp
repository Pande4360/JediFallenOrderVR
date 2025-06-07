#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "RenderingPolygon.hpp"
void* _Script_EditableMesh::RenderingPolygon::get_PolygonGroupID() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Script_EditableMesh::RenderingPolygon::get_TriangulatedPolygonTriangleIndices() {
    return (void*)((uintptr_t)this + 0x8);
}
_Script_CoreUObject::Class* _Script_EditableMesh::RenderingPolygon::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/EditableMesh.RenderingPolygon");
    return result;
}
