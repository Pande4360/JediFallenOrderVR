#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "SubdividedQuad.hpp"
void* _Script_EditableMesh::SubdividedQuad::get_QuadVertex0() {
    return (void*)((uintptr_t)this + 0x0);
}
_Script_CoreUObject::Class* _Script_EditableMesh::SubdividedQuad::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/EditableMesh.SubdividedQuad");
    return result;
}
void* _Script_EditableMesh::SubdividedQuad::get_QuadVertex3() {
    return (void*)((uintptr_t)this + 0x9c);
}
void* _Script_EditableMesh::SubdividedQuad::get_QuadVertex1() {
    return (void*)((uintptr_t)this + 0x34);
}
void* _Script_EditableMesh::SubdividedQuad::get_QuadVertex2() {
    return (void*)((uintptr_t)this + 0x68);
}
