#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "SubdividedQuadVertex.hpp"
void* _Script_EditableMesh::SubdividedQuadVertex::get_VertexNormal() {
    return (void*)((uintptr_t)this + 0x18);
}
int32_t& _Script_EditableMesh::SubdividedQuadVertex::get_VertexPositionIndex() {
    return *(int32_t*)((uintptr_t)this + 0x0);
}
_Script_CoreUObject::Class* _Script_EditableMesh::SubdividedQuadVertex::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/EditableMesh.SubdividedQuadVertex");
    return result;
}
void* _Script_EditableMesh::SubdividedQuadVertex::get_TextureCoordinate1() {
    return (void*)((uintptr_t)this + 0xc);
}
void* _Script_EditableMesh::SubdividedQuadVertex::get_TextureCoordinate0() {
    return (void*)((uintptr_t)this + 0x4);
}
void* _Script_EditableMesh::SubdividedQuadVertex::get_VertexColor() {
    return (void*)((uintptr_t)this + 0x14);
}
void* _Script_EditableMesh::SubdividedQuadVertex::get_VertexTangent() {
    return (void*)((uintptr_t)this + 0x24);
}
float& _Script_EditableMesh::SubdividedQuadVertex::get_VertexBinormalSign() {
    return *(float*)((uintptr_t)this + 0x30);
}
