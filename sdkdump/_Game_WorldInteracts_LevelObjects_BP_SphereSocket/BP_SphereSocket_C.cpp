#include "..\FUObjectArray.hpp"
#include "..\_Game_WorldInteracts_LevelObjects_BP_SphereKey\BP_SphereKey_C.hpp"
#include "BP_SphereSocket_C.hpp"
#include "..\_Script_AkAudio\AkAudioEvent.hpp"
#include "..\_Script_AkAudio\AkBankLoadComponent.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\Actor.hpp"
#include "..\_Script_Engine\HitResult.hpp"
#include "..\_Script_Engine\ParticleSystemComponent.hpp"
#include "..\_Script_Engine\PhysicsHandleComponent.hpp"
#include "..\_Script_Engine\PrimitiveComponent.hpp"
#include "..\_Script_Engine\SceneComponent.hpp"
#include "..\_Script_Engine\SphereComponent.hpp"
#include "..\_Script_Engine\StaticMeshComponent.hpp"
#include "..\_Script_Engine\TimelineComponent.hpp"
#include "..\_Script_RsGameTechRT\RsWorldMapStateTransitionGatewayComponent.hpp"
#include "..\_Script_RsGameTechRT\RsWorldMapStateTransitionStaticMeshComponent.hpp"
_Script_Engine::TimelineComponent*& _Game_WorldInteracts_LevelObjects_BP_SphereSocket::BP_SphereSocket_C::get_CheckMoving() {
    return *(_Script_Engine::TimelineComponent**)((uintptr_t)this + 0x3f8);
}
_Script_AkAudio::AkBankLoadComponent*& _Game_WorldInteracts_LevelObjects_BP_SphereSocket::BP_SphereSocket_C::get_AkBankLoad() {
    return *(_Script_AkAudio::AkBankLoadComponent**)((uintptr_t)this + 0x378);
}
void* _Game_WorldInteracts_LevelObjects_BP_SphereSocket::BP_SphereSocket_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x360);
}
_Script_RsGameTechRT::RsWorldMapStateTransitionStaticMeshComponent*& _Game_WorldInteracts_LevelObjects_BP_SphereSocket::BP_SphereSocket_C::get_RsWorldMapStateTransitionStaticMesh() {
    return *(_Script_RsGameTechRT::RsWorldMapStateTransitionStaticMeshComponent**)((uintptr_t)this + 0x368);
}
_Game_WorldInteracts_LevelObjects_BP_SphereKey::BP_SphereKey_C*& _Game_WorldInteracts_LevelObjects_BP_SphereSocket::BP_SphereSocket_C::get_AttachedSphereKey() {
    return *(_Game_WorldInteracts_LevelObjects_BP_SphereKey::BP_SphereKey_C**)((uintptr_t)this + 0x470);
}
_Script_RsGameTechRT::RsWorldMapStateTransitionGatewayComponent*& _Game_WorldInteracts_LevelObjects_BP_SphereSocket::BP_SphereSocket_C::get_RsWorldMapStateTransitionGateway() {
    return *(_Script_RsGameTechRT::RsWorldMapStateTransitionGatewayComponent**)((uintptr_t)this + 0x370);
}
void* _Game_WorldInteracts_LevelObjects_BP_SphereSocket::BP_SphereSocket_C::get_MagnetRotation() {
    return (void*)((uintptr_t)this + 0x41c);
}
_Script_Engine::ParticleSystemComponent*& _Game_WorldInteracts_LevelObjects_BP_SphereSocket::BP_SphereSocket_C::get_P_Magnet_Effect_Push_Keyhole() {
    return *(_Script_Engine::ParticleSystemComponent**)((uintptr_t)this + 0x380);
}
void _Game_WorldInteracts_LevelObjects_BP_SphereSocket::BP_SphereSocket_C::CheckMoving__FinishedFunc() {
    return;
}
_Script_Engine::SphereComponent*& _Game_WorldInteracts_LevelObjects_BP_SphereSocket::BP_SphereSocket_C::get_ActivateZone() {
    return *(_Script_Engine::SphereComponent**)((uintptr_t)this + 0x398);
}
float& _Game_WorldInteracts_LevelObjects_BP_SphereSocket::BP_SphereSocket_C::get_RotateToSocket_MaxAngularSpeed_9FACD1D743066A8C22ECF08BCF368FCD() {
    return *(float*)((uintptr_t)this + 0x3d8);
}
_Script_Engine::StaticMeshComponent*& _Game_WorldInteracts_LevelObjects_BP_SphereSocket::BP_SphereSocket_C::get_ActiveGlow() {
    return *(_Script_Engine::StaticMeshComponent**)((uintptr_t)this + 0x388);
}
_Script_Engine::StaticMeshComponent*& _Game_WorldInteracts_LevelObjects_BP_SphereSocket::BP_SphereSocket_C::get_Ball_Platform01() {
    return *(_Script_Engine::StaticMeshComponent**)((uintptr_t)this + 0x390);
}
_Script_Engine::SceneComponent*& _Game_WorldInteracts_LevelObjects_BP_SphereSocket::BP_SphereSocket_C::get_GrabLoc() {
    return *(_Script_Engine::SceneComponent**)((uintptr_t)this + 0x3a0);
}
void _Game_WorldInteracts_LevelObjects_BP_SphereSocket::BP_SphereSocket_C::ReceiveBeginPlay0() {
    return;
}
_Script_Engine::PhysicsHandleComponent*& _Game_WorldInteracts_LevelObjects_BP_SphereSocket::BP_SphereSocket_C::get_PhysicsHandle() {
    return *(_Script_Engine::PhysicsHandleComponent**)((uintptr_t)this + 0x3a8);
}
_Script_Engine::SphereComponent*& _Game_WorldInteracts_LevelObjects_BP_SphereSocket::BP_SphereSocket_C::get_MagnetZone() {
    return *(_Script_Engine::SphereComponent**)((uintptr_t)this + 0x3b0);
}
_Script_Engine::StaticMeshComponent*& _Game_WorldInteracts_LevelObjects_BP_SphereSocket::BP_SphereSocket_C::get_Sphere() {
    return *(_Script_Engine::StaticMeshComponent**)((uintptr_t)this + 0x3b8);
}
_Script_Engine::SceneComponent*& _Game_WorldInteracts_LevelObjects_BP_SphereSocket::BP_SphereSocket_C::get_DefaultSceneRoot() {
    return *(_Script_Engine::SceneComponent**)((uintptr_t)this + 0x3c0);
}
void _Game_WorldInteracts_LevelObjects_BP_SphereSocket::BP_SphereSocket_C::UserConstructionScript0() {
    return;
}
void _Game_WorldInteracts_LevelObjects_BP_SphereSocket::BP_SphereSocket_C::set_AltSave_MoveKeyToSocket(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x48e + 0);
    *(uint8_t*)((uintptr_t)this + 0x48e + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_AkAudio::AkAudioEvent*& _Game_WorldInteracts_LevelObjects_BP_SphereSocket::BP_SphereSocket_C::get_Activate_Sound() {
    return *(_Script_AkAudio::AkAudioEvent**)((uintptr_t)this + 0x458);
}
bool _Game_WorldInteracts_LevelObjects_BP_SphereSocket::BP_SphereSocket_C::get_LocksSphereKey() {
    return (*(uint8_t*)((uintptr_t)this + 0x48c + 0)) & 1 != 0;
}
float& _Game_WorldInteracts_LevelObjects_BP_SphereSocket::BP_SphereSocket_C::get_BumpTimeline_BumpModifier_CE4814B046487683C6A493BB2AE17192() {
    return *(float*)((uintptr_t)this + 0x3c8);
}
void _Game_WorldInteracts_LevelObjects_BP_SphereSocket::BP_SphereSocket_C::LVL_Release() {
    return;
}
void* _Game_WorldInteracts_LevelObjects_BP_SphereSocket::BP_SphereSocket_C::get_BumpTimeline__Direction_CE4814B046487683C6A493BB2AE17192() {
    return (void*)((uintptr_t)this + 0x3cc);
}
_Script_Engine::TimelineComponent*& _Game_WorldInteracts_LevelObjects_BP_SphereSocket::BP_SphereSocket_C::get_BumpTimeline() {
    return *(_Script_Engine::TimelineComponent**)((uintptr_t)this + 0x3d0);
}
float& _Game_WorldInteracts_LevelObjects_BP_SphereSocket::BP_SphereSocket_C::get_RotateToSocket_InterpSpeed_9FACD1D743066A8C22ECF08BCF368FCD() {
    return *(float*)((uintptr_t)this + 0x3dc);
}
void _Game_WorldInteracts_LevelObjects_BP_SphereSocket::BP_SphereSocket_C::RotateToSocket__UpdateFunc() {
    return;
}
void _Game_WorldInteracts_LevelObjects_BP_SphereSocket::BP_SphereSocket_C::set_BeginPlay(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x478 + 0);
    *(uint8_t*)((uintptr_t)this + 0x478 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Game_WorldInteracts_LevelObjects_BP_SphereSocket::BP_SphereSocket_C::get_RotateToSocket__Direction_9FACD1D743066A8C22ECF08BCF368FCD() {
    return (void*)((uintptr_t)this + 0x3e0);
}
_Script_Engine::TimelineComponent*& _Game_WorldInteracts_LevelObjects_BP_SphereSocket::BP_SphereSocket_C::get_RotateToSocket() {
    return *(_Script_Engine::TimelineComponent**)((uintptr_t)this + 0x3e8);
}
void* _Game_WorldInteracts_LevelObjects_BP_SphereSocket::BP_SphereSocket_C::get_CheckMoving__Direction_FF088F794277D7AD6F14ADBCA2E88C94() {
    return (void*)((uintptr_t)this + 0x3f0);
}
void _Game_WorldInteracts_LevelObjects_BP_SphereSocket::BP_SphereSocket_C::CheckMoving__UpdateFunc() {
    return;
}
float& _Game_WorldInteracts_LevelObjects_BP_SphereSocket::BP_SphereSocket_C::get_BumpAmount() {
    return *(float*)((uintptr_t)this + 0x488);
}
float& _Game_WorldInteracts_LevelObjects_BP_SphereSocket::BP_SphereSocket_C::get_AnimateToSocket_progress_7A9488604B0AFBC43494F68FEFD7BEBA() {
    return *(float*)((uintptr_t)this + 0x400);
}
bool _Game_WorldInteracts_LevelObjects_BP_SphereSocket::BP_SphereSocket_C::get_AltSave_MoveKeyToSocket() {
    return (*(uint8_t*)((uintptr_t)this + 0x48e + 0)) & 1 != 0;
}
void _Game_WorldInteracts_LevelObjects_BP_SphereSocket::BP_SphereSocket_C::BackUpReleaseEventReceived(_Game_WorldInteracts_LevelObjects_BP_SphereKey::BP_SphereKey_C* SphereKey) {
    return;
}
void* _Game_WorldInteracts_LevelObjects_BP_SphereSocket::BP_SphereSocket_C::get_AnimateToSocket__Direction_7A9488604B0AFBC43494F68FEFD7BEBA() {
    return (void*)((uintptr_t)this + 0x404);
}
void _Game_WorldInteracts_LevelObjects_BP_SphereSocket::BP_SphereSocket_C::BndEvt__EntryZone_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(_Script_Engine::PrimitiveComponent* OverlappedComponent, _Script_Engine::Actor* OtherActor, _Script_Engine::PrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, _Script_Engine::HitResult& SweepResult) {
    return;
}
_Script_Engine::TimelineComponent*& _Game_WorldInteracts_LevelObjects_BP_SphereSocket::BP_SphereSocket_C::get_AnimateToSocket() {
    return *(_Script_Engine::TimelineComponent**)((uintptr_t)this + 0x408);
}
void* _Game_WorldInteracts_LevelObjects_BP_SphereSocket::BP_SphereSocket_C::get_SphereStartLoc() {
    return (void*)((uintptr_t)this + 0x410);
}
float& _Game_WorldInteracts_LevelObjects_BP_SphereSocket::BP_SphereSocket_C::get_SuctionTime() {
    return *(float*)((uintptr_t)this + 0x428);
}
_Script_AkAudio::AkAudioEvent*& _Game_WorldInteracts_LevelObjects_BP_SphereSocket::BP_SphereSocket_C::get_Deacivate_Sound() {
    return *(_Script_AkAudio::AkAudioEvent**)((uintptr_t)this + 0x460);
}
void* _Game_WorldInteracts_LevelObjects_BP_SphereSocket::BP_SphereSocket_C::get_LVL_OnRelease() {
    return (void*)((uintptr_t)this + 0x430);
}
void _Game_WorldInteracts_LevelObjects_BP_SphereSocket::BP_SphereSocket_C::AnimateToSocket__FinishedFunc() {
    return;
}
void _Game_WorldInteracts_LevelObjects_BP_SphereSocket::BP_SphereSocket_C::set_SocketEnabled(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x454 + 0);
    *(uint8_t*)((uintptr_t)this + 0x454 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Game_WorldInteracts_LevelObjects_BP_SphereSocket::BP_SphereSocket_C::get_LVL_OnAttach() {
    return (void*)((uintptr_t)this + 0x440);
}
float& _Game_WorldInteracts_LevelObjects_BP_SphereSocket::BP_SphereSocket_C::get_MagnetRadius() {
    return *(float*)((uintptr_t)this + 0x450);
}
bool _Game_WorldInteracts_LevelObjects_BP_SphereSocket::BP_SphereSocket_C::get_SocketEnabled() {
    return (*(uint8_t*)((uintptr_t)this + 0x454 + 0)) & 1 != 0;
}
_Game_WorldInteracts_LevelObjects_BP_SphereKey::BP_SphereKey_C*& _Game_WorldInteracts_LevelObjects_BP_SphereSocket::BP_SphereSocket_C::get_MagetizingSphereKey() {
    return *(_Game_WorldInteracts_LevelObjects_BP_SphereKey::BP_SphereKey_C**)((uintptr_t)this + 0x468);
}
bool _Game_WorldInteracts_LevelObjects_BP_SphereSocket::BP_SphereSocket_C::get_BeginPlay() {
    return (*(uint8_t*)((uintptr_t)this + 0x478 + 0)) & 1 != 0;
}
_Game_WorldInteracts_LevelObjects_BP_SphereKey::BP_SphereKey_C*& _Game_WorldInteracts_LevelObjects_BP_SphereSocket::BP_SphereSocket_C::get_LeavingSphereKey() {
    return *(_Game_WorldInteracts_LevelObjects_BP_SphereKey::BP_SphereKey_C**)((uintptr_t)this + 0x480);
}
void _Game_WorldInteracts_LevelObjects_BP_SphereSocket::BP_SphereSocket_C::set_LocksSphereKey(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x48c + 0);
    *(uint8_t*)((uintptr_t)this + 0x48c + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Game_WorldInteracts_LevelObjects_BP_SphereSocket::BP_SphereSocket_C::get_SphereLockedInPlace() {
    return (*(uint8_t*)((uintptr_t)this + 0x48d + 0)) & 1 != 0;
}
void _Game_WorldInteracts_LevelObjects_BP_SphereSocket::BP_SphereSocket_C::set_SphereLockedInPlace(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x48d + 0);
    *(uint8_t*)((uintptr_t)this + 0x48d + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_CoreUObject::Class* _Game_WorldInteracts_LevelObjects_BP_SphereSocket::BP_SphereSocket_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"BlueprintGeneratedClass /Game/WorldInteracts/LevelObjects/BP_SphereSocket.BP_SphereSocket_C");
    return result;
}
void _Game_WorldInteracts_LevelObjects_BP_SphereSocket::BP_SphereSocket_C::AnimateToSocket__UpdateFunc() {
    return;
}
void _Game_WorldInteracts_LevelObjects_BP_SphereSocket::BP_SphereSocket_C::UpdateMagnetAngularSpeed(float MaxSpeed) {
    return;
}
void _Game_WorldInteracts_LevelObjects_BP_SphereSocket::BP_SphereSocket_C::RotateToSocket__FinishedFunc() {
    return;
}
void _Game_WorldInteracts_LevelObjects_BP_SphereSocket::BP_SphereSocket_C::UpdateMagnetRotation() {
    return;
}
void _Game_WorldInteracts_LevelObjects_BP_SphereSocket::BP_SphereSocket_C::BumpTimeline__FinishedFunc() {
    return;
}
void _Game_WorldInteracts_LevelObjects_BP_SphereSocket::BP_SphereSocket_C::BumpTimeline__UpdateFunc() {
    return;
}
void _Game_WorldInteracts_LevelObjects_BP_SphereSocket::BP_SphereSocket_C::Activate(_Game_WorldInteracts_LevelObjects_BP_SphereKey::BP_SphereKey_C* SphereKey, bool BeginPlay) {
    return;
}
void _Game_WorldInteracts_LevelObjects_BP_SphereSocket::BP_SphereSocket_C::BndEvt__ActivateZone_K2Node_ComponentBoundEvent_20_ComponentBeginOverlapSignature__DelegateSignature(_Script_Engine::PrimitiveComponent* OverlappedComponent, _Script_Engine::Actor* OtherActor, _Script_Engine::PrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, _Script_Engine::HitResult& SweepResult) {
    return;
}
void _Game_WorldInteracts_LevelObjects_BP_SphereSocket::BP_SphereSocket_C::ActivateMagnet(_Game_WorldInteracts_LevelObjects_BP_SphereKey::BP_SphereKey_C* SphereKey) {
    return;
}
void _Game_WorldInteracts_LevelObjects_BP_SphereSocket::BP_SphereSocket_C::LVL_DisableSocket() {
    return;
}
void _Game_WorldInteracts_LevelObjects_BP_SphereSocket::BP_SphereSocket_C::LVL_EnableSocket() {
    return;
}
void _Game_WorldInteracts_LevelObjects_BP_SphereSocket::BP_SphereSocket_C::ReleaseMagnet(bool FromTK) {
    return;
}
void _Game_WorldInteracts_LevelObjects_BP_SphereSocket::BP_SphereSocket_C::StopMagnet() {
    return;
}
void _Game_WorldInteracts_LevelObjects_BP_SphereSocket::BP_SphereSocket_C::PlayActivationEffects() {
    return;
}
void _Game_WorldInteracts_LevelObjects_BP_SphereSocket::BP_SphereSocket_C::BndEvt__ActivateZone_K2Node_ComponentBoundEvent_0_ComponentEndOverlapSignature__DelegateSignature(_Script_Engine::PrimitiveComponent* OverlappedComponent, _Script_Engine::Actor* OtherActor, _Script_Engine::PrimitiveComponent* OtherComp, int32_t OtherBodyIndex) {
    return;
}
void _Game_WorldInteracts_LevelObjects_BP_SphereSocket::BP_SphereSocket_C::TKEnded(_Game_WorldInteracts_LevelObjects_BP_SphereKey::BP_SphereKey_C* SphereKey) {
    return;
}
void _Game_WorldInteracts_LevelObjects_BP_SphereSocket::BP_SphereSocket_C::StopCheckMoving() {
    return;
}
void _Game_WorldInteracts_LevelObjects_BP_SphereSocket::BP_SphereSocket_C::Lvl_BumpSphereUpwardOnForceUse(_Game_WorldInteracts_LevelObjects_BP_SphereKey::BP_SphereKey_C* ForcedSphereKey) {
    return;
}
void _Game_WorldInteracts_LevelObjects_BP_SphereSocket::BP_SphereSocket_C::LockIntoSocket() {
    return;
}
void _Game_WorldInteracts_LevelObjects_BP_SphereSocket::BP_SphereSocket_C::ExecuteUbergraph_BP_SphereSocket(int32_t EntryPoint) {
    return;
}
void _Game_WorldInteracts_LevelObjects_BP_SphereSocket::BP_SphereSocket_C::LVL_OnAttach__DelegateSignature(bool BeginPlay) {
    return;
}
void _Game_WorldInteracts_LevelObjects_BP_SphereSocket::BP_SphereSocket_C::LVL_OnRelease__DelegateSignature() {
    return;
}
