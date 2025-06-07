#include "..\FUObjectArray.hpp"
#include "BPFX_Focus_Attack_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\Actor.hpp"
#include "..\_Script_Engine\ParticleSystemComponent.hpp"
#include "..\_Script_Engine\SceneComponent.hpp"
#include "..\_Script_Engine\SkeletalMeshComponent.hpp"
#include "..\_Script_Engine\TimelineComponent.hpp"
void* _Game_Effects_Blueprints_BPFX_Focus_Attack::BPFX_Focus_Attack_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x360);
}
_Script_Engine::ParticleSystemComponent*& _Game_Effects_Blueprints_BPFX_Focus_Attack::BPFX_Focus_Attack_C::get_P_Hero_FocusAttack_Copy() {
    return *(_Script_Engine::ParticleSystemComponent**)((uintptr_t)this + 0x368);
}
_Script_Engine::ParticleSystemComponent*& _Game_Effects_Blueprints_BPFX_Focus_Attack::BPFX_Focus_Attack_C::get_P_FocusAttack_head() {
    return *(_Script_Engine::ParticleSystemComponent**)((uintptr_t)this + 0x370);
}
void _Game_Effects_Blueprints_BPFX_Focus_Attack::BPFX_Focus_Attack_C::ExecuteUbergraph_BPFX_Focus_Attack(int32_t EntryPoint) {
    return;
}
_Script_Engine::ParticleSystemComponent*& _Game_Effects_Blueprints_BPFX_Focus_Attack::BPFX_Focus_Attack_C::get_P_FocusAttack_thigh_r() {
    return *(_Script_Engine::ParticleSystemComponent**)((uintptr_t)this + 0x378);
}
_Script_Engine::ParticleSystemComponent*& _Game_Effects_Blueprints_BPFX_Focus_Attack::BPFX_Focus_Attack_C::get_P_FocusAttack_thigh_l() {
    return *(_Script_Engine::ParticleSystemComponent**)((uintptr_t)this + 0x380);
}
float& _Game_Effects_Blueprints_BPFX_Focus_Attack::BPFX_Focus_Attack_C::get_Blend() {
    return *(float*)((uintptr_t)this + 0x3ec);
}
_Script_Engine::ParticleSystemComponent*& _Game_Effects_Blueprints_BPFX_Focus_Attack::BPFX_Focus_Attack_C::get_P_FocusAttack_knee_r() {
    return *(_Script_Engine::ParticleSystemComponent**)((uintptr_t)this + 0x388);
}
_Script_Engine::ParticleSystemComponent*& _Game_Effects_Blueprints_BPFX_Focus_Attack::BPFX_Focus_Attack_C::get_P_FocusAttack_knee_l() {
    return *(_Script_Engine::ParticleSystemComponent**)((uintptr_t)this + 0x390);
}
_Script_Engine::ParticleSystemComponent*& _Game_Effects_Blueprints_BPFX_Focus_Attack::BPFX_Focus_Attack_C::get_P_FocusAttack_shoulder_r() {
    return *(_Script_Engine::ParticleSystemComponent**)((uintptr_t)this + 0x398);
}
_Script_Engine::ParticleSystemComponent*& _Game_Effects_Blueprints_BPFX_Focus_Attack::BPFX_Focus_Attack_C::get_P_FocusAttack_shoulder_l() {
    return *(_Script_Engine::ParticleSystemComponent**)((uintptr_t)this + 0x3a0);
}
_Script_Engine::ParticleSystemComponent*& _Game_Effects_Blueprints_BPFX_Focus_Attack::BPFX_Focus_Attack_C::get_P_FocusAttack_elbow_r() {
    return *(_Script_Engine::ParticleSystemComponent**)((uintptr_t)this + 0x3a8);
}
_Script_Engine::ParticleSystemComponent*& _Game_Effects_Blueprints_BPFX_Focus_Attack::BPFX_Focus_Attack_C::get_P_FocusAttack_elbow_l() {
    return *(_Script_Engine::ParticleSystemComponent**)((uintptr_t)this + 0x3b0);
}
_Script_Engine::ParticleSystemComponent*& _Game_Effects_Blueprints_BPFX_Focus_Attack::BPFX_Focus_Attack_C::get_P_FocusAttack_Back() {
    return *(_Script_Engine::ParticleSystemComponent**)((uintptr_t)this + 0x3b8);
}
float& _Game_Effects_Blueprints_BPFX_Focus_Attack::BPFX_Focus_Attack_C::get_Timeline_0_blend_854AE86049761ED1CE5A20B36F19EE56() {
    return *(float*)((uintptr_t)this + 0x3c8);
}
_Script_Engine::SceneComponent*& _Game_Effects_Blueprints_BPFX_Focus_Attack::BPFX_Focus_Attack_C::get_DefaultSceneRoot() {
    return *(_Script_Engine::SceneComponent**)((uintptr_t)this + 0x3c0);
}
void* _Game_Effects_Blueprints_BPFX_Focus_Attack::BPFX_Focus_Attack_C::get_Timeline_0__Direction_854AE86049761ED1CE5A20B36F19EE56() {
    return (void*)((uintptr_t)this + 0x3cc);
}
_Script_Engine::TimelineComponent*& _Game_Effects_Blueprints_BPFX_Focus_Attack::BPFX_Focus_Attack_C::get_Timeline_0() {
    return *(_Script_Engine::TimelineComponent**)((uintptr_t)this + 0x3d0);
}
float& _Game_Effects_Blueprints_BPFX_Focus_Attack::BPFX_Focus_Attack_C::get_Timer() {
    return *(float*)((uintptr_t)this + 0x3e0);
}
_Script_Engine::SkeletalMeshComponent*& _Game_Effects_Blueprints_BPFX_Focus_Attack::BPFX_Focus_Attack_C::get_SkelMesh() {
    return *(_Script_Engine::SkeletalMeshComponent**)((uintptr_t)this + 0x3d8);
}
float& _Game_Effects_Blueprints_BPFX_Focus_Attack::BPFX_Focus_Attack_C::get_Duration() {
    return *(float*)((uintptr_t)this + 0x3e4);
}
float& _Game_Effects_Blueprints_BPFX_Focus_Attack::BPFX_Focus_Attack_C::get_Width() {
    return *(float*)((uintptr_t)this + 0x3e8);
}
float& _Game_Effects_Blueprints_BPFX_Focus_Attack::BPFX_Focus_Attack_C::get_BlurScale() {
    return *(float*)((uintptr_t)this + 0x3f0);
}
_Script_CoreUObject::Class* _Game_Effects_Blueprints_BPFX_Focus_Attack::BPFX_Focus_Attack_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"BlueprintGeneratedClass /Game/Effects/Blueprints/BPFX_Focus_Attack.BPFX_Focus_Attack_C");
    return result;
}
void _Game_Effects_Blueprints_BPFX_Focus_Attack::BPFX_Focus_Attack_C::EndTrails() {
    return;
}
void _Game_Effects_Blueprints_BPFX_Focus_Attack::BPFX_Focus_Attack_C::BeginTrails() {
    return;
}
void _Game_Effects_Blueprints_BPFX_Focus_Attack::BPFX_Focus_Attack_C::UserConstructionScript0() {
    return;
}
void _Game_Effects_Blueprints_BPFX_Focus_Attack::BPFX_Focus_Attack_C::ReceiveBeginPlay0() {
    return;
}
void _Game_Effects_Blueprints_BPFX_Focus_Attack::BPFX_Focus_Attack_C::Timeline_0__FinishedFunc() {
    return;
}
void _Game_Effects_Blueprints_BPFX_Focus_Attack::BPFX_Focus_Attack_C::Timeline_0__UpdateFunc() {
    return;
}
void _Game_Effects_Blueprints_BPFX_Focus_Attack::BPFX_Focus_Attack_C::ReceiveTick0(float DeltaSeconds) {
    return;
}
