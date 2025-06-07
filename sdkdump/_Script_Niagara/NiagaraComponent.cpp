#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\LinearColor.hpp"
#include "..\_Script_CoreUObject\Quat.hpp"
#include "..\_Script_CoreUObject\Vector.hpp"
#include "..\_Script_CoreUObject\Vector2D.hpp"
#include "..\_Script_CoreUObject\Vector4.hpp"
#include "..\_Script_Engine\Actor.hpp"
#include "..\_Script_Engine\PrimitiveComponent.hpp"
#include "..\_Script_Engine\SceneComponent.hpp"
#include "NiagaraComponent.hpp"
#include "NiagaraSystem.hpp"
void _Script_Niagara::NiagaraComponent::set_bForceSolo(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xc10 + 0);
    *(uint8_t*)((uintptr_t)this + 0xc10 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_Niagara::NiagaraSystem*& _Script_Niagara::NiagaraComponent::get_Asset() {
    return *(_Script_Niagara::NiagaraSystem**)((uintptr_t)this + 0xb28);
}
void _Script_Niagara::NiagaraComponent::AdvanceSimulation(int32_t TickCount, float TickDeltaSeconds) {
    return;
}
void* _Script_Niagara::NiagaraComponent::get_OverrideParameters() {
    return (void*)((uintptr_t)this + 0xb30);
}
bool _Script_Niagara::NiagaraComponent::get_bAutoDestroy() {
    return (*(uint8_t*)((uintptr_t)this + 0xc38 + 0)) & 1 != 0;
}
void _Script_Niagara::NiagaraComponent::AdvanceSimulationByTime(float SimulateTime, float TickDeltaSeconds) {
    return;
}
bool _Script_Niagara::NiagaraComponent::get_bForceSolo() {
    return (*(uint8_t*)((uintptr_t)this + 0xc10 + 0)) & 1 != 0;
}
void _Script_Niagara::NiagaraComponent::set_bAutoDestroy(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xc38 + 0);
    *(uint8_t*)((uintptr_t)this + 0xc38 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_Niagara::NiagaraComponent::get_bRenderingEnabled() {
    return (*(uint8_t*)((uintptr_t)this + 0xc38 + 0)) & 2 != 0;
}
void _Script_Niagara::NiagaraComponent::set_bRenderingEnabled(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xc38 + 0);
    *(uint8_t*)((uintptr_t)this + 0xc38 + 0) = (cur_value & ~2) | (value ? 2 : 0);
}
bool _Script_Niagara::NiagaraComponent::get_bAutoManageAttachment() {
    return (*(uint8_t*)((uintptr_t)this + 0xc38 + 0)) & 4 != 0;
}
void _Script_Niagara::NiagaraComponent::set_bAutoManageAttachment(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xc38 + 0);
    *(uint8_t*)((uintptr_t)this + 0xc38 + 0) = (cur_value & ~4) | (value ? 4 : 0);
}
void* _Script_Niagara::NiagaraComponent::get_AutoAttachParent() {
    return (void*)((uintptr_t)this + 0xc58);
}
void _Script_Niagara::NiagaraComponent::SetNiagaraVariableActor(void* InVariableName, _Script_Engine::Actor* Actor) {
    return;
}
void* _Script_Niagara::NiagaraComponent::get_AutoAttachSocketName() {
    return (void*)((uintptr_t)this + 0xc60);
}
void _Script_Niagara::NiagaraComponent::SetNiagaraVariableFloat(void* InVariableName, float InValue) {
    return;
}
void* _Script_Niagara::NiagaraComponent::get_AutoAttachLocationRule() {
    return (void*)((uintptr_t)this + 0xc68);
}
void* _Script_Niagara::NiagaraComponent::get_AutoAttachRotationRule() {
    return (void*)((uintptr_t)this + 0xc69);
}
void _Script_Niagara::NiagaraComponent::ReinitializeSystem() {
    return;
}
void* _Script_Niagara::NiagaraComponent::get_AutoAttachScaleRule() {
    return (void*)((uintptr_t)this + 0xc6a);
}
_Script_CoreUObject::Class* _Script_Niagara::NiagaraComponent::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Niagara.NiagaraComponent");
    return result;
}
float _Script_Niagara::NiagaraComponent::GetSeekDelta() {
    return;
}
void _Script_Niagara::NiagaraComponent::SetSeekDelta(float InSeekDelta) {
    return;
}
void _Script_Niagara::NiagaraComponent::SetRenderingEnabled(bool bInRenderingEnabled) {
    return;
}
void _Script_Niagara::NiagaraComponent::SetAutoAttachmentParameters(_Script_Engine::SceneComponent* Parent, void* SocketName, void* LocationRule, void* RotationRule, void* ScaleRule) {
    return;
}
void _Script_Niagara::NiagaraComponent::SetPaused(bool bInPaused) {
    return;
}
void _Script_Niagara::NiagaraComponent::SetNiagaraVariableVec4(void* InVariableName, _Script_CoreUObject::Vector4& InValue) {
    return;
}
bool _Script_Niagara::NiagaraComponent::GetForceSolo() {
    return;
}
void _Script_Niagara::NiagaraComponent::SetNiagaraVariableVec3(void* InVariableName, _Script_CoreUObject::Vector InValue) {
    return;
}
void _Script_Niagara::NiagaraComponent::SetNiagaraVariableVec2(void* InVariableName, _Script_CoreUObject::Vector2D InValue) {
    return;
}
void _Script_Niagara::NiagaraComponent::SetNiagaraVariableQuat(void* InVariableName, _Script_CoreUObject::Quat& InValue) {
    return;
}
void _Script_Niagara::NiagaraComponent::SetNiagaraVariableLinearColor(void* InVariableName, _Script_CoreUObject::LinearColor& InValue) {
    return;
}
void _Script_Niagara::NiagaraComponent::SetAgeUpdateMode(void* InAgeUpdateMode) {
    return;
}
void _Script_Niagara::NiagaraComponent::SetNiagaraVariableInt(void* InVariableName, int32_t InValue) {
    return;
}
float _Script_Niagara::NiagaraComponent::GetDesiredAge() {
    return;
}
void _Script_Niagara::NiagaraComponent::SetNiagaraVariableBool(void* InVariableName, bool InValue) {
    return;
}
void _Script_Niagara::NiagaraComponent::SetMaxSimTime(float InMaxTime) {
    return;
}
void _Script_Niagara::NiagaraComponent::SetForceSolo(bool bInForceSolo) {
    return;
}
void _Script_Niagara::NiagaraComponent::SetDesiredAge(float InDesiredAge) {
    return;
}
void _Script_Niagara::NiagaraComponent::SetCanRenderWhileSeeking(bool bInCanRenderWhileSeeking) {
    return;
}
void _Script_Niagara::NiagaraComponent::SetAutoDestroy(bool bInAutoDestroy) {
    return;
}
void _Script_Niagara::NiagaraComponent::SetAsset(_Script_Niagara::NiagaraSystem* InAsset) {
    return;
}
void _Script_Niagara::NiagaraComponent::SeekToDesiredAge(float InDesiredAge) {
    return;
}
void _Script_Niagara::NiagaraComponent::ResetSystem() {
    return;
}
bool _Script_Niagara::NiagaraComponent::IsPaused() {
    return;
}
void* _Script_Niagara::NiagaraComponent::GetNiagaraParticleValueVec3_DebugOnly(void* InEmitterName, void* InValueName) {
    return;
}
void* _Script_Niagara::NiagaraComponent::GetNiagaraParticleValues_DebugOnly(void* InEmitterName, void* InValueName) {
    return;
}
void* _Script_Niagara::NiagaraComponent::GetNiagaraParticlePositions_DebugOnly(void* InEmitterName) {
    return;
}
float _Script_Niagara::NiagaraComponent::GetMaxSimTime() {
    return;
}
_Script_Niagara::NiagaraSystem* _Script_Niagara::NiagaraComponent::GetAsset() {
    return;
}
void* _Script_Niagara::NiagaraComponent::GetAgeUpdateMode() {
    return;
}
