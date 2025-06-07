#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "PolygonToCreate.hpp"
void* _Script_EditableMesh::PolygonToCreate::get_PolygonEdgeHardness() {
    return (void*)((uintptr_t)this + 0x2c);
}
void* _Script_EditableMesh::PolygonToCreate::get_PolygonGroupID() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Script_EditableMesh::PolygonToCreate::get_PolygonHoles() {
    return (void*)((uintptr_t)this + 0x18);
}
void* _Script_EditableMesh::PolygonToCreate::get_PerimeterVertices() {
    return (void*)((uintptr_t)this + 0x8);
}
void* _Script_EditableMesh::PolygonToCreate::get_OriginalPolygonID() {
    return (void*)((uintptr_t)this + 0x28);
}
_Script_CoreUObject::Class* _Script_EditableMesh::PolygonToCreate::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/EditableMesh.PolygonToCreate");
    return result;
}
