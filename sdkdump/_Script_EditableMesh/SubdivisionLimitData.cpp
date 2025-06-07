#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "SubdivisionLimitData.hpp"
void* _Script_EditableMesh::SubdivisionLimitData::get_SubdividedWireEdges() {
    return (void*)((uintptr_t)this + 0x20);
}
void* _Script_EditableMesh::SubdivisionLimitData::get_VertexPositions() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Script_EditableMesh::SubdivisionLimitData::get_Sections() {
    return (void*)((uintptr_t)this + 0x10);
}
_Script_CoreUObject::Class* _Script_EditableMesh::SubdivisionLimitData::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/EditableMesh.SubdivisionLimitData");
    return result;
}
