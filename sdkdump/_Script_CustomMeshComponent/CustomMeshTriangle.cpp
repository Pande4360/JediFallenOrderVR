#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "CustomMeshTriangle.hpp"
void* _Script_CustomMeshComponent::CustomMeshTriangle::get_Vertex0() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Script_CustomMeshComponent::CustomMeshTriangle::get_Vertex1() {
    return (void*)((uintptr_t)this + 0xc);
}
_Script_CoreUObject::Class* _Script_CustomMeshComponent::CustomMeshTriangle::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/CustomMeshComponent.CustomMeshTriangle");
    return result;
}
void* _Script_CustomMeshComponent::CustomMeshTriangle::get_Vertex2() {
    return (void*)((uintptr_t)this + 0x18);
}
