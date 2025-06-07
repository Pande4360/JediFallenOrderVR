#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "CustomMeshComponent.hpp"
#include "..\_Script_Engine\MeshComponent.hpp"
_Script_CoreUObject::Class* _Script_CustomMeshComponent::CustomMeshComponent::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/CustomMeshComponent.CustomMeshComponent");
    return result;
}
void _Script_CustomMeshComponent::CustomMeshComponent::ClearCustomMeshTriangles() {
    return;
}
bool _Script_CustomMeshComponent::CustomMeshComponent::SetCustomMeshTriangles(void*& Triangles) {
    return;
}
void _Script_CustomMeshComponent::CustomMeshComponent::AddCustomMeshTriangles(void*& Triangles) {
    return;
}
