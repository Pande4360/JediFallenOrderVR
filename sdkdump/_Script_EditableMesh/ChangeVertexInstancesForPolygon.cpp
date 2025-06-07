#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "ChangeVertexInstancesForPolygon.hpp"
_Script_CoreUObject::Class* _Script_EditableMesh::ChangeVertexInstancesForPolygon::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/EditableMesh.ChangeVertexInstancesForPolygon");
    return result;
}
void* _Script_EditableMesh::ChangeVertexInstancesForPolygon::get_PolygonID() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Script_EditableMesh::ChangeVertexInstancesForPolygon::get_PerimeterVertexIndicesAndInstanceIDs() {
    return (void*)((uintptr_t)this + 0x8);
}
void* _Script_EditableMesh::ChangeVertexInstancesForPolygon::get_VertexIndicesAndInstanceIDsForEachHole() {
    return (void*)((uintptr_t)this + 0x18);
}
