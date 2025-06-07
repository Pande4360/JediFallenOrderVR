#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "BoxComponent.hpp"
#include "PlanarReflectionComponent.hpp"
#include "SceneCaptureComponent.hpp"
_Script_Engine::BoxComponent*& _Script_Engine::PlanarReflectionComponent::get_PreviewBox() {
    return *(_Script_Engine::BoxComponent**)((uintptr_t)this + 0x388);
}
float& _Script_Engine::PlanarReflectionComponent::get_DistanceFromPlaneFadeEnd() {
    return *(float*)((uintptr_t)this + 0x3a8);
}
float& _Script_Engine::PlanarReflectionComponent::get_NormalDistortionStrength() {
    return *(float*)((uintptr_t)this + 0x390);
}
float& _Script_Engine::PlanarReflectionComponent::get_PrefilterRoughness() {
    return *(float*)((uintptr_t)this + 0x394);
}
float& _Script_Engine::PlanarReflectionComponent::get_DistanceFromPlaneFadeoutEnd() {
    return *(float*)((uintptr_t)this + 0x3b0);
}
float& _Script_Engine::PlanarReflectionComponent::get_ExtraFOV() {
    return *(float*)((uintptr_t)this + 0x3a0);
}
float& _Script_Engine::PlanarReflectionComponent::get_PrefilterRoughnessDistance() {
    return *(float*)((uintptr_t)this + 0x398);
}
int32_t& _Script_Engine::PlanarReflectionComponent::get_ScreenPercentage() {
    return *(int32_t*)((uintptr_t)this + 0x39c);
}
float& _Script_Engine::PlanarReflectionComponent::get_DistanceFromPlaneFadeStart() {
    return *(float*)((uintptr_t)this + 0x3a4);
}
float& _Script_Engine::PlanarReflectionComponent::get_DistanceFromPlaneFadeoutStart() {
    return *(float*)((uintptr_t)this + 0x3ac);
}
float& _Script_Engine::PlanarReflectionComponent::get_AngleFromPlaneFadeStart() {
    return *(float*)((uintptr_t)this + 0x3b4);
}
float& _Script_Engine::PlanarReflectionComponent::get_AngleFromPlaneFadeEnd() {
    return *(float*)((uintptr_t)this + 0x3b8);
}
bool _Script_Engine::PlanarReflectionComponent::get_bRenderSceneTwoSided() {
    return (*(uint8_t*)((uintptr_t)this + 0x3bc + 0)) & 1 != 0;
}
void _Script_Engine::PlanarReflectionComponent::set_bRenderSceneTwoSided(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x3bc + 0);
    *(uint8_t*)((uintptr_t)this + 0x3bc + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_CoreUObject::Class* _Script_Engine::PlanarReflectionComponent::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.PlanarReflectionComponent");
    return result;
}
