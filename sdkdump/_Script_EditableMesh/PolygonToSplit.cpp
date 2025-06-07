#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "PolygonToSplit.hpp"
_Script_CoreUObject::Class* _Script_EditableMesh::PolygonToSplit::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/EditableMesh.PolygonToSplit");
    return result;
}
void* _Script_EditableMesh::PolygonToSplit::get_PolygonID() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Script_EditableMesh::PolygonToSplit::get_VertexPairsToSplitAt() {
    return (void*)((uintptr_t)this + 0x8);
}
