#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "SubdivisionLimitSection.hpp"
void* _Script_EditableMesh::SubdivisionLimitSection::get_SubdividedQuads() {
    return (void*)((uintptr_t)this + 0x0);
}
_Script_CoreUObject::Class* _Script_EditableMesh::SubdivisionLimitSection::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/EditableMesh.SubdivisionLimitSection");
    return result;
}
