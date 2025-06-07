#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "MeshElementAttributeData.hpp"
void* _Script_EditableMesh::MeshElementAttributeData::get_AttributeName() {
    return (void*)((uintptr_t)this + 0x0);
}
int32_t& _Script_EditableMesh::MeshElementAttributeData::get_AttributeIndex() {
    return *(int32_t*)((uintptr_t)this + 0x8);
}
void* _Script_EditableMesh::MeshElementAttributeData::get_AttributeValue() {
    return (void*)((uintptr_t)this + 0x10);
}
_Script_CoreUObject::Class* _Script_EditableMesh::MeshElementAttributeData::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/EditableMesh.MeshElementAttributeData");
    return result;
}
