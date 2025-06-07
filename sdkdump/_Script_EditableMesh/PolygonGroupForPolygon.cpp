#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "PolygonGroupForPolygon.hpp"
void* _Script_EditableMesh::PolygonGroupForPolygon::get_PolygonID() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Script_EditableMesh::PolygonGroupForPolygon::get_PolygonGroupID() {
    return (void*)((uintptr_t)this + 0x4);
}
_Script_CoreUObject::Class* _Script_EditableMesh::PolygonGroupForPolygon::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/EditableMesh.PolygonGroupForPolygon");
    return result;
}
