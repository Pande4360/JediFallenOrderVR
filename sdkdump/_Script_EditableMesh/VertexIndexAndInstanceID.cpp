#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "VertexIndexAndInstanceID.hpp"
int32_t& _Script_EditableMesh::VertexIndexAndInstanceID::get_ContourIndex() {
    return *(int32_t*)((uintptr_t)this + 0x0);
}
_Script_CoreUObject::Class* _Script_EditableMesh::VertexIndexAndInstanceID::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/EditableMesh.VertexIndexAndInstanceID");
    return result;
}
void* _Script_EditableMesh::VertexIndexAndInstanceID::get_VertexInstanceID() {
    return (void*)((uintptr_t)this + 0x4);
}
