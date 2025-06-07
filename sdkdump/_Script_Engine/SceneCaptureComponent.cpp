#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "Actor.hpp"
#include "PrimitiveComponent.hpp"
#include "SceneCaptureComponent.hpp"
#include "SceneComponent.hpp"
void* _Script_Engine::SceneCaptureComponent::get_ClearColor() {
    return (void*)((uintptr_t)this + 0x318);
}
void* _Script_Engine::SceneCaptureComponent::get_PrimitiveRenderMode() {
    return (void*)((uintptr_t)this + 0x2c8);
}
void* _Script_Engine::SceneCaptureComponent::get_CustomScene() {
    return (void*)((uintptr_t)this + 0x2d0);
}
void* _Script_Engine::SceneCaptureComponent::get_HiddenComponents() {
    return (void*)((uintptr_t)this + 0x2d8);
}
void* _Script_Engine::SceneCaptureComponent::get_ShowOnlyComponents() {
    return (void*)((uintptr_t)this + 0x2f8);
}
void* _Script_Engine::SceneCaptureComponent::get_HiddenActors() {
    return (void*)((uintptr_t)this + 0x2e8);
}
void* _Script_Engine::SceneCaptureComponent::get_ShowOnlyActors() {
    return (void*)((uintptr_t)this + 0x308);
}
bool _Script_Engine::SceneCaptureComponent::get_bCaptureEveryFrame() {
    return (*(uint8_t*)((uintptr_t)this + 0x328 + 0)) & 1 != 0;
}
void _Script_Engine::SceneCaptureComponent::set_bCaptureEveryFrame(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x328 + 0);
    *(uint8_t*)((uintptr_t)this + 0x328 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_Engine::SceneCaptureComponent::get_bCaptureOnMovement() {
    return (*(uint8_t*)((uintptr_t)this + 0x329 + 0)) & 1 != 0;
}
void _Script_Engine::SceneCaptureComponent::set_bCaptureOnMovement(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x329 + 0);
    *(uint8_t*)((uintptr_t)this + 0x329 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_Engine::SceneCaptureComponent::get_bOverrideDefaultTranslucentSortPolicy() {
    return (*(uint8_t*)((uintptr_t)this + 0x32a + 0)) & 1 != 0;
}
void _Script_Engine::SceneCaptureComponent::set_bOverrideDefaultTranslucentSortPolicy(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x32a + 0);
    *(uint8_t*)((uintptr_t)this + 0x32a + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_Engine::SceneCaptureComponent::get_TranslucentSortAxis() {
    return (void*)((uintptr_t)this + 0x32c);
}
void* _Script_Engine::SceneCaptureComponent::get_TranslucentSortPolicy() {
    return (void*)((uintptr_t)this + 0x338);
}
bool _Script_Engine::SceneCaptureComponent::get_bAlwaysPersistRenderingState() {
    return (*(uint8_t*)((uintptr_t)this + 0x339 + 0)) & 1 != 0;
}
void _Script_Engine::SceneCaptureComponent::set_bAlwaysPersistRenderingState(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x339 + 0);
    *(uint8_t*)((uintptr_t)this + 0x339 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
float& _Script_Engine::SceneCaptureComponent::get_LODDistanceFactor() {
    return *(float*)((uintptr_t)this + 0x33c);
}
float& _Script_Engine::SceneCaptureComponent::get_MaxViewDistanceOverride() {
    return *(float*)((uintptr_t)this + 0x340);
}
int32_t& _Script_Engine::SceneCaptureComponent::get_CaptureSortPriority() {
    return *(int32_t*)((uintptr_t)this + 0x344);
}
void* _Script_Engine::SceneCaptureComponent::get_ShowFlagSettings() {
    return (void*)((uintptr_t)this + 0x348);
}
void* _Script_Engine::SceneCaptureComponent::get_ProfilingEventName() {
    return (void*)((uintptr_t)this + 0x368);
}
_Script_CoreUObject::Class* _Script_Engine::SceneCaptureComponent::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.SceneCaptureComponent");
    return result;
}
void _Script_Engine::SceneCaptureComponent::ShowOnlyComponent(_Script_Engine::PrimitiveComponent* InComponent) {
    return;
}
void _Script_Engine::SceneCaptureComponent::ShowOnlyActorComponents(_Script_Engine::Actor* InActor) {
    return;
}
void _Script_Engine::SceneCaptureComponent::SetCaptureSortPriority(int32_t NewCaptureSortPriority) {
    return;
}
void _Script_Engine::SceneCaptureComponent::RemoveShowOnlyComponent(_Script_Engine::PrimitiveComponent* InComponent) {
    return;
}
void _Script_Engine::SceneCaptureComponent::RemoveShowOnlyActorComponents(_Script_Engine::Actor* InActor) {
    return;
}
void _Script_Engine::SceneCaptureComponent::HideComponent(_Script_Engine::PrimitiveComponent* InComponent) {
    return;
}
void _Script_Engine::SceneCaptureComponent::HideActorComponents(_Script_Engine::Actor* InActor) {
    return;
}
void _Script_Engine::SceneCaptureComponent::ClearShowOnlyComponents() {
    return;
}
void _Script_Engine::SceneCaptureComponent::ClearHiddenComponents() {
    return;
}
void _Script_Engine::SceneCaptureComponent::CleanupViewStates() {
    return;
}
