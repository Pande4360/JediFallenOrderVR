#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "PolygonGroupToCreate.hpp"
_Script_CoreUObject::Class* _Script_EditableMesh::PolygonGroupToCreate::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/EditableMesh.PolygonGroupToCreate");
    return result;
}
void* _Script_EditableMesh::PolygonGroupToCreate::get_PolygonGroupAttributes() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Script_EditableMesh::PolygonGroupToCreate::get_OriginalPolygonGroupID() {
    return (void*)((uintptr_t)this + 0x10);
}
