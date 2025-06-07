#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "ProcMeshSection.hpp"
void _Script_ProceduralMeshComponent::ProcMeshSection::set_bSectionVisible(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x3d + 0);
    *(uint8_t*)((uintptr_t)this + 0x3d + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_ProceduralMeshComponent::ProcMeshSection::get_ProcVertexBuffer() {
    return (void*)((uintptr_t)this + 0x0);
}
bool _Script_ProceduralMeshComponent::ProcMeshSection::get_bSectionVisible() {
    return (*(uint8_t*)((uintptr_t)this + 0x3d + 0)) & 1 != 0;
}
void* _Script_ProceduralMeshComponent::ProcMeshSection::get_ProcIndexBuffer() {
    return (void*)((uintptr_t)this + 0x10);
}
void* _Script_ProceduralMeshComponent::ProcMeshSection::get_SectionLocalBox() {
    return (void*)((uintptr_t)this + 0x20);
}
bool _Script_ProceduralMeshComponent::ProcMeshSection::get_bEnableCollision() {
    return (*(uint8_t*)((uintptr_t)this + 0x3c + 0)) & 1 != 0;
}
void _Script_ProceduralMeshComponent::ProcMeshSection::set_bEnableCollision(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x3c + 0);
    *(uint8_t*)((uintptr_t)this + 0x3c + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_CoreUObject::Class* _Script_ProceduralMeshComponent::ProcMeshSection::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/ProceduralMeshComponent.ProcMeshSection");
    return result;
}
