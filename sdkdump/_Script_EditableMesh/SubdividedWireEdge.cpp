#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "SubdividedWireEdge.hpp"
int32_t& _Script_EditableMesh::SubdividedWireEdge::get_EdgeVertex0PositionIndex() {
    return *(int32_t*)((uintptr_t)this + 0x0);
}
int32_t& _Script_EditableMesh::SubdividedWireEdge::get_EdgeVertex1PositionIndex() {
    return *(int32_t*)((uintptr_t)this + 0x4);
}
_Script_CoreUObject::Class* _Script_EditableMesh::SubdividedWireEdge::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/EditableMesh.SubdividedWireEdge");
    return result;
}
