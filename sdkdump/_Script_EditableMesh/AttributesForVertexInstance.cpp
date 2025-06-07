#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "AttributesForVertexInstance.hpp"
void* _Script_EditableMesh::AttributesForVertexInstance::get_VertexInstanceID() {
    return (void*)((uintptr_t)this + 0x0);
}
_Script_CoreUObject::Class* _Script_EditableMesh::AttributesForVertexInstance::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/EditableMesh.AttributesForVertexInstance");
    return result;
}
void* _Script_EditableMesh::AttributesForVertexInstance::get_VertexInstanceAttributes() {
    return (void*)((uintptr_t)this + 0x8);
}
