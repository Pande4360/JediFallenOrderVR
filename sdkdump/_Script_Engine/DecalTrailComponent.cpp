#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Vector.hpp"
#include "DecalTrailComponent.hpp"
#include "MaterialInterface.hpp"
#include "SceneComponent.hpp"
bool _Script_Engine::DecalTrailComponent::get_bWorldSpaceTrail() {
    return (*(uint8_t*)((uintptr_t)this + 0x2ec + 0)) & 1 != 0;
}
float& _Script_Engine::DecalTrailComponent::get_TrailWidth() {
    return *(float*)((uintptr_t)this + 0x2d8);
}
_Script_Engine::MaterialInterface*& _Script_Engine::DecalTrailComponent::get_Material() {
    return *(_Script_Engine::MaterialInterface**)((uintptr_t)this + 0x2c8);
}
int32_t& _Script_Engine::DecalTrailComponent::get_SortOrder() {
    return *(int32_t*)((uintptr_t)this + 0x2d0);
}
float& _Script_Engine::DecalTrailComponent::get_FadeScreenSize() {
    return *(float*)((uintptr_t)this + 0x2d4);
}
float& _Script_Engine::DecalTrailComponent::get_TrailDepth() {
    return *(float*)((uintptr_t)this + 0x2dc);
}
float& _Script_Engine::DecalTrailComponent::get_SegmentLifetime() {
    return *(float*)((uintptr_t)this + 0x2e0);
}
float& _Script_Engine::DecalTrailComponent::get_SegmentFadeDuration() {
    return *(float*)((uintptr_t)this + 0x2e4);
}
float& _Script_Engine::DecalTrailComponent::get_TexcoordVTiling() {
    return *(float*)((uintptr_t)this + 0x2e8);
}
void _Script_Engine::DecalTrailComponent::set_bWorldSpaceTrail(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x2ec + 0);
    *(uint8_t*)((uintptr_t)this + 0x2ec + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_Engine::DecalTrailComponent::get_Trail() {
    return (void*)((uintptr_t)this + 0x2f8);
}
_Script_CoreUObject::Class* _Script_Engine::DecalTrailComponent::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.DecalTrailComponent");
    return result;
}
void _Script_Engine::DecalTrailComponent::SetDecalTrailMaterial(_Script_Engine::MaterialInterface* InMaterial) {
    return;
}
void _Script_Engine::DecalTrailComponent::RemoveAllPoints() {
    return;
}
void _Script_Engine::DecalTrailComponent::AddPoint(_Script_CoreUObject::Vector Position, _Script_CoreUObject::Vector Normal) {
    return;
}
