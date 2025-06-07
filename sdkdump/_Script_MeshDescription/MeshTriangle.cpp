#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "MeshTriangle.hpp"
_Script_CoreUObject::Class* _Script_MeshDescription::MeshTriangle::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/MeshDescription.MeshTriangle");
    return result;
}
void* _Script_MeshDescription::MeshTriangle::get_VertexInstanceID0() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Script_MeshDescription::MeshTriangle::get_VertexInstanceID1() {
    return (void*)((uintptr_t)this + 0x4);
}
void* _Script_MeshDescription::MeshTriangle::get_VertexInstanceID2() {
    return (void*)((uintptr_t)this + 0x8);
}
