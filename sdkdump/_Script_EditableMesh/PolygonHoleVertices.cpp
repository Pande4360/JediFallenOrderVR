#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "PolygonHoleVertices.hpp"
void* _Script_EditableMesh::PolygonHoleVertices::get_HoleVertices() {
    return (void*)((uintptr_t)this + 0x0);
}
_Script_CoreUObject::Class* _Script_EditableMesh::PolygonHoleVertices::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/EditableMesh.PolygonHoleVertices");
    return result;
}
