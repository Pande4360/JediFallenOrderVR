#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "ProcMeshVertex.hpp"
void* _Script_ProceduralMeshComponent::ProcMeshVertex::get_UV1() {
    return (void*)((uintptr_t)this + 0x34);
}
void* _Script_ProceduralMeshComponent::ProcMeshVertex::get_Position() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Script_ProceduralMeshComponent::ProcMeshVertex::get_Normal() {
    return (void*)((uintptr_t)this + 0xc);
}
void* _Script_ProceduralMeshComponent::ProcMeshVertex::get_UV3() {
    return (void*)((uintptr_t)this + 0x44);
}
void* _Script_ProceduralMeshComponent::ProcMeshVertex::get_Tangent() {
    return (void*)((uintptr_t)this + 0x18);
}
void* _Script_ProceduralMeshComponent::ProcMeshVertex::get_Color() {
    return (void*)((uintptr_t)this + 0x28);
}
void* _Script_ProceduralMeshComponent::ProcMeshVertex::get_UV0() {
    return (void*)((uintptr_t)this + 0x2c);
}
void* _Script_ProceduralMeshComponent::ProcMeshVertex::get_UV2() {
    return (void*)((uintptr_t)this + 0x3c);
}
_Script_CoreUObject::Class* _Script_ProceduralMeshComponent::ProcMeshVertex::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/ProceduralMeshComponent.ProcMeshVertex");
    return result;
}
