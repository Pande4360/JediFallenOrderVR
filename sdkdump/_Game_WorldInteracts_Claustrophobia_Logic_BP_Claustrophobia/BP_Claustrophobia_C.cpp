#include "..\FUObjectArray.hpp"
#include "BP_Claustrophobia_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Transform.hpp"
#include "..\_Script_Engine\Actor.hpp"
#include "..\_Script_Engine\AnimMontage.hpp"
#include "..\_Script_Engine\ArrowComponent.hpp"
#include "..\_Script_Engine\CapsuleComponent.hpp"
#include "..\_Script_Engine\HitResult.hpp"
#include "..\_Script_Engine\PrimitiveComponent.hpp"
#include "..\_Script_Engine\SceneComponent.hpp"
#include "..\_Script_Engine\TimelineComponent.hpp"
#include "..\_Script_RsGameTechRT\RsAIAnimInstance.hpp"
#include "..\_Script_RsGameTechRT\RsHero.hpp"
#include "..\_Script_RsGameTechRT\RsSlaveSyncInstance.hpp"
#include "..\_Script_RsGameTechRT\RsSplineCameraOrigin.hpp"
#include "..\_Script_RsGameTechRT\RsSyncDefinition.hpp"
#include "..\_Script_SwGame\SwAIBuddyDroid.hpp"
_Script_Engine::CapsuleComponent*& _Game_WorldInteracts_Claustrophobia_Logic_BP_Claustrophobia::BP_Claustrophobia_C::get_CapsuleForward() {
    return *(_Script_Engine::CapsuleComponent**)((uintptr_t)this + 0x380);
}
void* _Game_WorldInteracts_Claustrophobia_Logic_BP_Claustrophobia::BP_Claustrophobia_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x360);
}
_Script_Engine::ArrowComponent*& _Game_WorldInteracts_Claustrophobia_Logic_BP_Claustrophobia::BP_Claustrophobia_C::get_SyncBackward() {
    return *(_Script_Engine::ArrowComponent**)((uintptr_t)this + 0x368);
}
void _Game_WorldInteracts_Claustrophobia_Logic_BP_Claustrophobia::BP_Claustrophobia_C::CheckInput(bool EarlyOut, bool& StepForward, bool& StepBackward) {
    return;
}
void* _Game_WorldInteracts_Claustrophobia_Logic_BP_Claustrophobia::BP_Claustrophobia_C::get_LVL_EnteredReverse() {
    return (void*)((uintptr_t)this + 0x7f8);
}
_Script_Engine::TimelineComponent*& _Game_WorldInteracts_Claustrophobia_Logic_BP_Claustrophobia::BP_Claustrophobia_C::get_CheckEarlyOutTick() {
    return *(_Script_Engine::TimelineComponent**)((uintptr_t)this + 0x398);
}
void _Game_WorldInteracts_Claustrophobia_Logic_BP_Claustrophobia::BP_Claustrophobia_C::NavStateChange(void* NewState, void* PrevState) {
    return;
}
_Script_Engine::CapsuleComponent*& _Game_WorldInteracts_Claustrophobia_Logic_BP_Claustrophobia::BP_Claustrophobia_C::get_CapsuleBackward() {
    return *(_Script_Engine::CapsuleComponent**)((uintptr_t)this + 0x370);
}
void _Game_WorldInteracts_Claustrophobia_Logic_BP_Claustrophobia::BP_Claustrophobia_C::set_AutoPositionCameraOrigins(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x7d0 + 0);
    *(uint8_t*)((uintptr_t)this + 0x7d0 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_Engine::ArrowComponent*& _Game_WorldInteracts_Claustrophobia_Logic_BP_Claustrophobia::BP_Claustrophobia_C::get_SyncForward() {
    return *(_Script_Engine::ArrowComponent**)((uintptr_t)this + 0x378);
}
_Script_Engine::SceneComponent*& _Game_WorldInteracts_Claustrophobia_Logic_BP_Claustrophobia::BP_Claustrophobia_C::get_DefaultSceneRoot() {
    return *(_Script_Engine::SceneComponent**)((uintptr_t)this + 0x388);
}
void* _Game_WorldInteracts_Claustrophobia_Logic_BP_Claustrophobia::BP_Claustrophobia_C::get_LVL_EnteredAny() {
    return (void*)((uintptr_t)this + 0x808);
}
void* _Game_WorldInteracts_Claustrophobia_Logic_BP_Claustrophobia::BP_Claustrophobia_C::get_CheckEarlyOutTick__Direction_05687688456959D260BB08944504F2AE() {
    return (void*)((uintptr_t)this + 0x390);
}
void* _Game_WorldInteracts_Claustrophobia_Logic_BP_Claustrophobia::BP_Claustrophobia_C::get_MoveSequence() {
    return (void*)((uintptr_t)this + 0x3a0);
}
void* _Game_WorldInteracts_Claustrophobia_Logic_BP_Claustrophobia::BP_Claustrophobia_C::get_NextIdle() {
    return (void*)((uintptr_t)this + 0x748);
}
void* _Game_WorldInteracts_Claustrophobia_Logic_BP_Claustrophobia::BP_Claustrophobia_C::get_LVL_EarlyExitReverse() {
    return (void*)((uintptr_t)this + 0x878);
}
void* _Game_WorldInteracts_Claustrophobia_Logic_BP_Claustrophobia::BP_Claustrophobia_C::get_MirrorSequence() {
    return (void*)((uintptr_t)this + 0x3b0);
}
void* _Game_WorldInteracts_Claustrophobia_Logic_BP_Claustrophobia::BP_Claustrophobia_C::get_SyncPoints() {
    return (void*)((uintptr_t)this + 0x3c0);
}
void _Game_WorldInteracts_Claustrophobia_Logic_BP_Claustrophobia::BP_Claustrophobia_C::PlayIdle() {
    return;
}
_Script_RsGameTechRT::RsSyncDefinition*& _Game_WorldInteracts_Claustrophobia_Logic_BP_Claustrophobia::BP_Claustrophobia_C::get_MoveSync() {
    return *(_Script_RsGameTechRT::RsSyncDefinition**)((uintptr_t)this + 0x7d8);
}
bool _Game_WorldInteracts_Claustrophobia_Logic_BP_Claustrophobia::BP_Claustrophobia_C::get_Initialized() {
    return (*(uint8_t*)((uintptr_t)this + 0x3e1 + 0)) & 1 != 0;
}
void* _Game_WorldInteracts_Claustrophobia_Logic_BP_Claustrophobia::BP_Claustrophobia_C::get_ForwardVectors() {
    return (void*)((uintptr_t)this + 0x3d0);
}
void _Game_WorldInteracts_Claustrophobia_Logic_BP_Claustrophobia::BP_Claustrophobia_C::PlayMove(bool Reverse) {
    return;
}
void _Game_WorldInteracts_Claustrophobia_Logic_BP_Claustrophobia::BP_Claustrophobia_C::set_OnlyMoveForward(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x849 + 0);
    *(uint8_t*)((uintptr_t)this + 0x849 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Game_WorldInteracts_Claustrophobia_Logic_BP_Claustrophobia::BP_Claustrophobia_C::get_ExitType() {
    return (void*)((uintptr_t)this + 0x3e0);
}
void _Game_WorldInteracts_Claustrophobia_Logic_BP_Claustrophobia::BP_Claustrophobia_C::set_Initialized(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x3e1 + 0);
    *(uint8_t*)((uintptr_t)this + 0x3e1 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Game_WorldInteracts_Claustrophobia_Logic_BP_Claustrophobia::BP_Claustrophobia_C::AddTurn45Proxy(_Script_Engine::SceneComponent* ParentScene, void* MoveType, _Script_Engine::SceneComponent*& NewParentScene) {
    return;
}
_Script_RsGameTechRT::RsHero*& _Game_WorldInteracts_Claustrophobia_Logic_BP_Claustrophobia::BP_Claustrophobia_C::get_Hero() {
    return *(_Script_RsGameTechRT::RsHero**)((uintptr_t)this + 0x3e8);
}
void _Game_WorldInteracts_Claustrophobia_Logic_BP_Claustrophobia::BP_Claustrophobia_C::set_SaveImmmediate(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x861 + 0);
    *(uint8_t*)((uintptr_t)this + 0x861 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_RsGameTechRT::RsSplineCameraOrigin*& _Game_WorldInteracts_Claustrophobia_Logic_BP_Claustrophobia::BP_Claustrophobia_C::get_ForwardSpline() {
    return *(_Script_RsGameTechRT::RsSplineCameraOrigin**)((uintptr_t)this + 0x7b0);
}
_Script_SwGame::SwAIBuddyDroid*& _Game_WorldInteracts_Claustrophobia_Logic_BP_Claustrophobia::BP_Claustrophobia_C::get_BuddyDroid() {
    return *(_Script_SwGame::SwAIBuddyDroid**)((uintptr_t)this + 0x3f0);
}
void _Game_WorldInteracts_Claustrophobia_Logic_BP_Claustrophobia::BP_Claustrophobia_C::AddSqueezeOnRightProxy(_Script_Engine::SceneComponent* ParentScene, void* MoveType, _Script_Engine::SceneComponent*& NewParentScene) {
    return;
}
_Script_RsGameTechRT::RsAIAnimInstance*& _Game_WorldInteracts_Claustrophobia_Logic_BP_Claustrophobia::BP_Claustrophobia_C::get_BDAnimInstance() {
    return *(_Script_RsGameTechRT::RsAIAnimInstance**)((uintptr_t)this + 0x3f8);
}
bool _Game_WorldInteracts_Claustrophobia_Logic_BP_Claustrophobia::BP_Claustrophobia_C::get_IsIdle() {
    return (*(uint8_t*)((uintptr_t)this + 0x400 + 0)) & 1 != 0;
}
void _Game_WorldInteracts_Claustrophobia_Logic_BP_Claustrophobia::BP_Claustrophobia_C::set_IsIdle(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x400 + 0);
    *(uint8_t*)((uintptr_t)this + 0x400 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Game_WorldInteracts_Claustrophobia_Logic_BP_Claustrophobia::BP_Claustrophobia_C::get_EnterType() {
    return (void*)((uintptr_t)this + 0x401);
}
float& _Game_WorldInteracts_Claustrophobia_Logic_BP_Claustrophobia::BP_Claustrophobia_C::get_DefaultTotalWidth() {
    return *(float*)((uintptr_t)this + 0x7c4);
}
bool _Game_WorldInteracts_Claustrophobia_Logic_BP_Claustrophobia::BP_Claustrophobia_C::get_Reverse() {
    return (*(uint8_t*)((uintptr_t)this + 0x402 + 0)) & 1 != 0;
}
void _Game_WorldInteracts_Claustrophobia_Logic_BP_Claustrophobia::BP_Claustrophobia_C::set_Reverse(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x402 + 0);
    *(uint8_t*)((uintptr_t)this + 0x402 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Game_WorldInteracts_Claustrophobia_Logic_BP_Claustrophobia::BP_Claustrophobia_C::set_ExitReverse(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x403 + 0);
    *(uint8_t*)((uintptr_t)this + 0x403 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Game_WorldInteracts_Claustrophobia_Logic_BP_Claustrophobia::BP_Claustrophobia_C::Exit(bool Reverse) {
    return;
}
bool _Game_WorldInteracts_Claustrophobia_Logic_BP_Claustrophobia::BP_Claustrophobia_C::get_ExitReverse() {
    return (*(uint8_t*)((uintptr_t)this + 0x403 + 0)) & 1 != 0;
}
int32_t& _Game_WorldInteracts_Claustrophobia_Logic_BP_Claustrophobia::BP_Claustrophobia_C::get_MoveIndex() {
    return *(int32_t*)((uintptr_t)this + 0x404);
}
void* _Game_WorldInteracts_Claustrophobia_Logic_BP_Claustrophobia::BP_Claustrophobia_C::get_MovesMap() {
    return (void*)((uintptr_t)this + 0x408);
}
void _Game_WorldInteracts_Claustrophobia_Logic_BP_Claustrophobia::BP_Claustrophobia_C::ActivateCamera() {
    return;
}
void* _Game_WorldInteracts_Claustrophobia_Logic_BP_Claustrophobia::BP_Claustrophobia_C::get_ReverseMoveMap() {
    return (void*)((uintptr_t)this + 0x4a8);
}
void* _Game_WorldInteracts_Claustrophobia_Logic_BP_Claustrophobia::BP_Claustrophobia_C::get_ReverseEnterMap() {
    return (void*)((uintptr_t)this + 0x458);
}
void* _Game_WorldInteracts_Claustrophobia_Logic_BP_Claustrophobia::BP_Claustrophobia_C::get_LVL_ExitedReverse() {
    return (void*)((uintptr_t)this + 0x828);
}
void* _Game_WorldInteracts_Claustrophobia_Logic_BP_Claustrophobia::BP_Claustrophobia_C::get_MirrorMoveMap() {
    return (void*)((uintptr_t)this + 0x4f8);
}
bool _Game_WorldInteracts_Claustrophobia_Logic_BP_Claustrophobia::BP_Claustrophobia_C::get_TurnAround() {
    return (*(uint8_t*)((uintptr_t)this + 0x848 + 0)) & 1 != 0;
}
void* _Game_WorldInteracts_Claustrophobia_Logic_BP_Claustrophobia::BP_Claustrophobia_C::get_ReverseExitMap() {
    return (void*)((uintptr_t)this + 0x548);
}
void* _Game_WorldInteracts_Claustrophobia_Logic_BP_Claustrophobia::BP_Claustrophobia_C::get_NextIdleMap() {
    return (void*)((uintptr_t)this + 0x598);
}
void* _Game_WorldInteracts_Claustrophobia_Logic_BP_Claustrophobia::BP_Claustrophobia_C::get_ChangeSidesMoves() {
    return (void*)((uintptr_t)this + 0x638);
}
void* _Game_WorldInteracts_Claustrophobia_Logic_BP_Claustrophobia::BP_Claustrophobia_C::get_CancelIdleMap() {
    return (void*)((uintptr_t)this + 0x5e8);
}
void _Game_WorldInteracts_Claustrophobia_Logic_BP_Claustrophobia::BP_Claustrophobia_C::BndEvt__CapsuleBackward_K2Node_ComponentBoundEvent_2_ComponentEndOverlapSignature__DelegateSignature(_Script_Engine::PrimitiveComponent* OverlappedComponent, _Script_Engine::Actor* OtherActor, _Script_Engine::PrimitiveComponent* OtherComp, int32_t OtherBodyIndex) {
    return;
}
void* _Game_WorldInteracts_Claustrophobia_Logic_BP_Claustrophobia::BP_Claustrophobia_C::get_BD1Moves() {
    return (void*)((uintptr_t)this + 0x648);
}
void* _Game_WorldInteracts_Claustrophobia_Logic_BP_Claustrophobia::BP_Claustrophobia_C::get_EnterSyncMap() {
    return (void*)((uintptr_t)this + 0x658);
}
void* _Game_WorldInteracts_Claustrophobia_Logic_BP_Claustrophobia::BP_Claustrophobia_C::get_MoveSyncMap() {
    return (void*)((uintptr_t)this + 0x6a8);
}
void* _Game_WorldInteracts_Claustrophobia_Logic_BP_Claustrophobia::BP_Claustrophobia_C::get_LVL_ExitedAny() {
    return (void*)((uintptr_t)this + 0x838);
}
void* _Game_WorldInteracts_Claustrophobia_Logic_BP_Claustrophobia::BP_Claustrophobia_C::get_ExitSyncMap() {
    return (void*)((uintptr_t)this + 0x6f8);
}
void _Game_WorldInteracts_Claustrophobia_Logic_BP_Claustrophobia::BP_Claustrophobia_C::ExecuteUbergraph_BP_Claustrophobia(int32_t EntryPoint) {
    return;
}
void* _Game_WorldInteracts_Claustrophobia_Logic_BP_Claustrophobia::BP_Claustrophobia_C::get_IdleSyncMap() {
    return (void*)((uintptr_t)this + 0x750);
}
void* _Game_WorldInteracts_Claustrophobia_Logic_BP_Claustrophobia::BP_Claustrophobia_C::get_Moves() {
    return (void*)((uintptr_t)this + 0x7a0);
}
void _Game_WorldInteracts_Claustrophobia_Logic_BP_Claustrophobia::BP_Claustrophobia_C::BndEvt__CapsuleForward_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(_Script_Engine::PrimitiveComponent* OverlappedComponent, _Script_Engine::Actor* OtherActor, _Script_Engine::PrimitiveComponent* OtherComp, int32_t OtherBodyIndex) {
    return;
}
bool _Game_WorldInteracts_Claustrophobia_Logic_BP_Claustrophobia::BP_Claustrophobia_C::get_OnlyMoveForward() {
    return (*(uint8_t*)((uintptr_t)this + 0x849 + 0)) & 1 != 0;
}
_Script_RsGameTechRT::RsSplineCameraOrigin*& _Game_WorldInteracts_Claustrophobia_Logic_BP_Claustrophobia::BP_Claustrophobia_C::get_ReverseSpline() {
    return *(_Script_RsGameTechRT::RsSplineCameraOrigin**)((uintptr_t)this + 0x7b8);
}
float& _Game_WorldInteracts_Claustrophobia_Logic_BP_Claustrophobia::BP_Claustrophobia_C::get_DefaultTunnelWidth() {
    return *(float*)((uintptr_t)this + 0x7c0);
}
float& _Game_WorldInteracts_Claustrophobia_Logic_BP_Claustrophobia::BP_Claustrophobia_C::get_DefaultTunnelHeight() {
    return *(float*)((uintptr_t)this + 0x7c8);
}
float& _Game_WorldInteracts_Claustrophobia_Logic_BP_Claustrophobia::BP_Claustrophobia_C::get_DefaultTotalHeight() {
    return *(float*)((uintptr_t)this + 0x7cc);
}
bool _Game_WorldInteracts_Claustrophobia_Logic_BP_Claustrophobia::BP_Claustrophobia_C::get_AutoPositionCameraOrigins() {
    return (*(uint8_t*)((uintptr_t)this + 0x7d0 + 0)) & 1 != 0;
}
bool _Game_WorldInteracts_Claustrophobia_Logic_BP_Claustrophobia::BP_Claustrophobia_C::get_BuildProxyMesh() {
    return (*(uint8_t*)((uintptr_t)this + 0x7d1 + 0)) & 1 != 0;
}
void _Game_WorldInteracts_Claustrophobia_Logic_BP_Claustrophobia::BP_Claustrophobia_C::ExitEnding(_Script_Engine::AnimMontage* Montage, bool bInterrupted) {
    return;
}
void _Game_WorldInteracts_Claustrophobia_Logic_BP_Claustrophobia::BP_Claustrophobia_C::set_BuildProxyMesh(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x7d1 + 0);
    *(uint8_t*)((uintptr_t)this + 0x7d1 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Game_WorldInteracts_Claustrophobia_Logic_BP_Claustrophobia::BP_Claustrophobia_C::get_MoveEnum() {
    return (void*)((uintptr_t)this + 0x7e0);
}
void* _Game_WorldInteracts_Claustrophobia_Logic_BP_Claustrophobia::BP_Claustrophobia_C::get_LVL_EnteredForward() {
    return (void*)((uintptr_t)this + 0x7e8);
}
void _Game_WorldInteracts_Claustrophobia_Logic_BP_Claustrophobia::BP_Claustrophobia_C::LVL_EnteredReverse__DelegateSignature() {
    return;
}
void* _Game_WorldInteracts_Claustrophobia_Logic_BP_Claustrophobia::BP_Claustrophobia_C::get_LVL_ExitedForward() {
    return (void*)((uintptr_t)this + 0x818);
}
void _Game_WorldInteracts_Claustrophobia_Logic_BP_Claustrophobia::BP_Claustrophobia_C::set_TurnAround(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x848 + 0);
    *(uint8_t*)((uintptr_t)this + 0x848 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Game_WorldInteracts_Claustrophobia_Logic_BP_Claustrophobia::BP_Claustrophobia_C::get_IsCurrentlyEnabled() {
    return (*(uint8_t*)((uintptr_t)this + 0x84a + 0)) & 1 != 0;
}
void _Game_WorldInteracts_Claustrophobia_Logic_BP_Claustrophobia::BP_Claustrophobia_C::set_IsCurrentlyEnabled(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x84a + 0);
    *(uint8_t*)((uintptr_t)this + 0x84a + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Game_WorldInteracts_Claustrophobia_Logic_BP_Claustrophobia::BP_Claustrophobia_C::get_ContactLeftMaterialSlot() {
    return (void*)((uintptr_t)this + 0x850);
}
void* _Game_WorldInteracts_Claustrophobia_Logic_BP_Claustrophobia::BP_Claustrophobia_C::get_ContactRightMaterialSlot() {
    return (void*)((uintptr_t)this + 0x858);
}
void _Game_WorldInteracts_Claustrophobia_Logic_BP_Claustrophobia::BP_Claustrophobia_C::GetExitSync(_Script_RsGameTechRT::RsSyncDefinition*& ExitSync, void*& ExitCancelIdle) {
    return;
}
bool _Game_WorldInteracts_Claustrophobia_Logic_BP_Claustrophobia::BP_Claustrophobia_C::get_CameraActive() {
    return (*(uint8_t*)((uintptr_t)this + 0x860 + 0)) & 1 != 0;
}
void _Game_WorldInteracts_Claustrophobia_Logic_BP_Claustrophobia::BP_Claustrophobia_C::set_CameraActive(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x860 + 0);
    *(uint8_t*)((uintptr_t)this + 0x860 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Game_WorldInteracts_Claustrophobia_Logic_BP_Claustrophobia::BP_Claustrophobia_C::StepForward() {
    return;
}
bool _Game_WorldInteracts_Claustrophobia_Logic_BP_Claustrophobia::BP_Claustrophobia_C::get_SaveImmmediate() {
    return (*(uint8_t*)((uintptr_t)this + 0x861 + 0)) & 1 != 0;
}
bool _Game_WorldInteracts_Claustrophobia_Logic_BP_Claustrophobia::BP_Claustrophobia_C::get_LeaveCameraActiveForward() {
    return (*(uint8_t*)((uintptr_t)this + 0x862 + 0)) & 1 != 0;
}
void _Game_WorldInteracts_Claustrophobia_Logic_BP_Claustrophobia::BP_Claustrophobia_C::set_LeaveCameraActiveForward(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x862 + 0);
    *(uint8_t*)((uintptr_t)this + 0x862 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Game_WorldInteracts_Claustrophobia_Logic_BP_Claustrophobia::BP_Claustrophobia_C::get_LeaveCameraActiveReverse() {
    return (*(uint8_t*)((uintptr_t)this + 0x863 + 0)) & 1 != 0;
}
void _Game_WorldInteracts_Claustrophobia_Logic_BP_Claustrophobia::BP_Claustrophobia_C::CheckEarlyOutTick__UpdateFunc() {
    return;
}
void _Game_WorldInteracts_Claustrophobia_Logic_BP_Claustrophobia::BP_Claustrophobia_C::set_LeaveCameraActiveReverse(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x863 + 0);
    *(uint8_t*)((uintptr_t)this + 0x863 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Game_WorldInteracts_Claustrophobia_Logic_BP_Claustrophobia::BP_Claustrophobia_C::ScriptedAnimStart(_Script_Engine::Actor* ScriptingActor) {
    return;
}
void* _Game_WorldInteracts_Claustrophobia_Logic_BP_Claustrophobia::BP_Claustrophobia_C::get_LVL_EarlyExitForward() {
    return (void*)((uintptr_t)this + 0x868);
}
float& _Game_WorldInteracts_Claustrophobia_Logic_BP_Claustrophobia::BP_Claustrophobia_C::get_CameraResetDelay() {
    return *(float*)((uintptr_t)this + 0x888);
}
void* _Game_WorldInteracts_Claustrophobia_Logic_BP_Claustrophobia::BP_Claustrophobia_C::get_OriginalFaceTickOption() {
    return (void*)((uintptr_t)this + 0x88c);
}
bool _Game_WorldInteracts_Claustrophobia_Logic_BP_Claustrophobia::BP_Claustrophobia_C::get_AutoMove() {
    return (*(uint8_t*)((uintptr_t)this + 0x88d + 0)) & 1 != 0;
}
void _Game_WorldInteracts_Claustrophobia_Logic_BP_Claustrophobia::BP_Claustrophobia_C::set_AutoMove(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x88d + 0);
    *(uint8_t*)((uintptr_t)this + 0x88d + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_CoreUObject::Class* _Game_WorldInteracts_Claustrophobia_Logic_BP_Claustrophobia::BP_Claustrophobia_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"BlueprintGeneratedClass /Game/WorldInteracts/Claustrophobia/Logic/BP_Claustrophobia.BP_Claustrophobia_C");
    return result;
}
void _Game_WorldInteracts_Claustrophobia_Logic_BP_Claustrophobia::BP_Claustrophobia_C::ShouldEnter(bool& Enter) {
    return;
}
void _Game_WorldInteracts_Claustrophobia_Logic_BP_Claustrophobia::BP_Claustrophobia_C::GetStartingBD1_AttachPoint(void*& AttachPoint) {
    return;
}
void _Game_WorldInteracts_Claustrophobia_Logic_BP_Claustrophobia::BP_Claustrophobia_C::AddPushUpOverProxy(_Script_Engine::SceneComponent* ParentScene, void* MoveType, _Script_Engine::SceneComponent*& NewParentScene) {
    return;
}
void _Game_WorldInteracts_Claustrophobia_Logic_BP_Claustrophobia::BP_Claustrophobia_C::AddSqueezeOnLeftProxy(_Script_Engine::SceneComponent* ParentScene, void* MoveType, _Script_Engine::SceneComponent*& NewParentScene) {
    return;
}
void _Game_WorldInteracts_Claustrophobia_Logic_BP_Claustrophobia::BP_Claustrophobia_C::AddHoleProxy(_Script_Engine::SceneComponent* ParentScene, void* MoveType, _Script_Engine::SceneComponent*& NewParentScene) {
    return;
}
void _Game_WorldInteracts_Claustrophobia_Logic_BP_Claustrophobia::BP_Claustrophobia_C::ReceiveBeginPlay0() {
    return;
}
void _Game_WorldInteracts_Claustrophobia_Logic_BP_Claustrophobia::BP_Claustrophobia_C::AddQuickDuckProxy(_Script_Engine::SceneComponent* ParentScene, void* MoveType, _Script_Engine::SceneComponent*& NewParentScene) {
    return;
}
void _Game_WorldInteracts_Claustrophobia_Logic_BP_Claustrophobia::BP_Claustrophobia_C::AddPullUpOverProxy(_Script_Engine::SceneComponent* ParentScene, void* MoveType, _Script_Engine::SceneComponent*& NewParentScene) {
    return;
}
void _Game_WorldInteracts_Claustrophobia_Logic_BP_Claustrophobia::BP_Claustrophobia_C::EarlyOut() {
    return;
}
void _Game_WorldInteracts_Claustrophobia_Logic_BP_Claustrophobia::BP_Claustrophobia_C::ShouldDeactivateCamera(bool& DeactivateCamera) {
    return;
}
void _Game_WorldInteracts_Claustrophobia_Logic_BP_Claustrophobia::BP_Claustrophobia_C::ExitBuddyDroid() {
    return;
}
void _Game_WorldInteracts_Claustrophobia_Logic_BP_Claustrophobia::BP_Claustrophobia_C::InitBuddyDroid() {
    return;
}
void _Game_WorldInteracts_Claustrophobia_Logic_BP_Claustrophobia::BP_Claustrophobia_C::AddStepProxy(_Script_Engine::SceneComponent* ParentScene, void* MoveType, _Script_Engine::SceneComponent*& NewParentScene) {
    return;
}
void _Game_WorldInteracts_Claustrophobia_Logic_BP_Claustrophobia::BP_Claustrophobia_C::AddSlopeProxy(_Script_Engine::SceneComponent* ParentScene, void* MoveType, _Script_Engine::SceneComponent*& NewParentScene) {
    return;
}
void _Game_WorldInteracts_Claustrophobia_Logic_BP_Claustrophobia::BP_Claustrophobia_C::AddStepUnderProxy(_Script_Engine::SceneComponent* ParentScene, void* MoveType, _Script_Engine::SceneComponent*& NewParentScene) {
    return;
}
void _Game_WorldInteracts_Claustrophobia_Logic_BP_Claustrophobia::BP_Claustrophobia_C::AddSyncPoint(_Script_Engine::SceneComponent* Scene) {
    return;
}
void _Game_WorldInteracts_Claustrophobia_Logic_BP_Claustrophobia::BP_Claustrophobia_C::AddProxyMesh(_Script_CoreUObject::Transform RelativeTransform, _Script_Engine::SceneComponent* ParentScene, bool IsTouchSurface) {
    return;
}
void _Game_WorldInteracts_Claustrophobia_Logic_BP_Claustrophobia::BP_Claustrophobia_C::AddHighWallProxy(_Script_Engine::SceneComponent* ParentScene, void* MoveType, _Script_Engine::SceneComponent*& NewParentScene) {
    return;
}
void _Game_WorldInteracts_Claustrophobia_Logic_BP_Claustrophobia::BP_Claustrophobia_C::LVL_DeactivateCamera(float OverrideBlendTime) {
    return;
}
void _Game_WorldInteracts_Claustrophobia_Logic_BP_Claustrophobia::BP_Claustrophobia_C::InitMoveSequence() {
    return;
}
void _Game_WorldInteracts_Claustrophobia_Logic_BP_Claustrophobia::BP_Claustrophobia_C::PlaySyncAtSyncPoint(_Script_RsGameTechRT::RsSyncDefinition* SyncDefinition, bool IsIdle, _Script_RsGameTechRT::RsSlaveSyncInstance*& SyncSlaveInstance) {
    return;
}
void _Game_WorldInteracts_Claustrophobia_Logic_BP_Claustrophobia::BP_Claustrophobia_C::PlayEnterAnim(_Script_RsGameTechRT::RsSlaveSyncInstance*& SyncSlaveInstance) {
    return;
}
void _Game_WorldInteracts_Claustrophobia_Logic_BP_Claustrophobia::BP_Claustrophobia_C::AddExitProxy(_Script_Engine::SceneComponent* ParentScene, _Script_Engine::SceneComponent*& NewParentScene) {
    return;
}
void _Game_WorldInteracts_Claustrophobia_Logic_BP_Claustrophobia::BP_Claustrophobia_C::BuildTunnelProxy(_Script_Engine::SceneComponent* ParentScene, float Length, float EndOffsetY, float EndOffsetZ, float TunnelWidth, float TotalWidth, float TunnelHeight, float TotalHeight, bool TouchWallOnLeft, _Script_Engine::SceneComponent*& NewParentScene) {
    return;
}
void _Game_WorldInteracts_Claustrophobia_Logic_BP_Claustrophobia::BP_Claustrophobia_C::LVL_EarlyExitForward__DelegateSignature() {
    return;
}
void _Game_WorldInteracts_Claustrophobia_Logic_BP_Claustrophobia::BP_Claustrophobia_C::GetIdleSync(_Script_RsGameTechRT::RsSyncDefinition*& IdleSync) {
    return;
}
void _Game_WorldInteracts_Claustrophobia_Logic_BP_Claustrophobia::BP_Claustrophobia_C::GetMoveSync(_Script_RsGameTechRT::RsSyncDefinition*& MoveSync, void*& MoveEnum, void*& NextIdle, void*& CancelIdle) {
    return;
}
void _Game_WorldInteracts_Claustrophobia_Logic_BP_Claustrophobia::BP_Claustrophobia_C::GetEnterSync(_Script_RsGameTechRT::RsSyncDefinition*& EnterSync, void*& EnterEnum) {
    return;
}
void _Game_WorldInteracts_Claustrophobia_Logic_BP_Claustrophobia::BP_Claustrophobia_C::AddMoveProxy(_Script_Engine::SceneComponent* ParentScene, void* MoveType, _Script_Engine::SceneComponent*& NewParentScene) {
    return;
}
void _Game_WorldInteracts_Claustrophobia_Logic_BP_Claustrophobia::BP_Claustrophobia_C::AddEnterProxy(_Script_Engine::SceneComponent* ParentScene, _Script_Engine::SceneComponent*& NewParentScene) {
    return;
}
void _Game_WorldInteracts_Claustrophobia_Logic_BP_Claustrophobia::BP_Claustrophobia_C::BuildEditorProxyMesh(_Script_Engine::SceneComponent*& NewParentScene) {
    return;
}
void _Game_WorldInteracts_Claustrophobia_Logic_BP_Claustrophobia::BP_Claustrophobia_C::UserConstructionScript0() {
    return;
}
void _Game_WorldInteracts_Claustrophobia_Logic_BP_Claustrophobia::BP_Claustrophobia_C::CheckEarlyOutTick__FinishedFunc() {
    return;
}
void _Game_WorldInteracts_Claustrophobia_Logic_BP_Claustrophobia::BP_Claustrophobia_C::ScriptedAnimEnd() {
    return;
}
void _Game_WorldInteracts_Claustrophobia_Logic_BP_Claustrophobia::BP_Claustrophobia_C::BndEvt__Capsule_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(_Script_Engine::PrimitiveComponent* OverlappedComponent, _Script_Engine::Actor* OtherActor, _Script_Engine::PrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, _Script_Engine::HitResult& SweepResult) {
    return;
}
void _Game_WorldInteracts_Claustrophobia_Logic_BP_Claustrophobia::BP_Claustrophobia_C::Enter(_Script_RsGameTechRT::RsHero* Hero, bool Reverse) {
    return;
}
void _Game_WorldInteracts_Claustrophobia_Logic_BP_Claustrophobia::BP_Claustrophobia_C::BndEvt__CapsuleBackward_K2Node_ComponentBoundEvent_88_ComponentBeginOverlapSignature__DelegateSignature(_Script_Engine::PrimitiveComponent* OverlappedComponent, _Script_Engine::Actor* OtherActor, _Script_Engine::PrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, _Script_Engine::HitResult& SweepResult) {
    return;
}
void _Game_WorldInteracts_Claustrophobia_Logic_BP_Claustrophobia::BP_Claustrophobia_C::ChooseNextAnim(_Script_Engine::AnimMontage* Montage, bool interrupted) {
    return;
}
void _Game_WorldInteracts_Claustrophobia_Logic_BP_Claustrophobia::BP_Claustrophobia_C::StepBackward() {
    return;
}
void _Game_WorldInteracts_Claustrophobia_Logic_BP_Claustrophobia::BP_Claustrophobia_C::StopCheckEarlyOut() {
    return;
}
void _Game_WorldInteracts_Claustrophobia_Logic_BP_Claustrophobia::BP_Claustrophobia_C::MoveAnimComplete(_Script_Engine::AnimMontage* Montage, bool interrupted) {
    return;
}
void _Game_WorldInteracts_Claustrophobia_Logic_BP_Claustrophobia::BP_Claustrophobia_C::PlayTurnAround(void* ToIdle) {
    return;
}
void _Game_WorldInteracts_Claustrophobia_Logic_BP_Claustrophobia::BP_Claustrophobia_C::LVL_Enable() {
    return;
}
void _Game_WorldInteracts_Claustrophobia_Logic_BP_Claustrophobia::BP_Claustrophobia_C::LVL_Disable() {
    return;
}
void _Game_WorldInteracts_Claustrophobia_Logic_BP_Claustrophobia::BP_Claustrophobia_C::ScriptedAnimNotify(void* NotifyName) {
    return;
}
void _Game_WorldInteracts_Claustrophobia_Logic_BP_Claustrophobia::BP_Claustrophobia_C::EnterSyncStopped(bool bInterrupted) {
    return;
}
void _Game_WorldInteracts_Claustrophobia_Logic_BP_Claustrophobia::BP_Claustrophobia_C::UnbindEnterSyncStopped() {
    return;
}
void _Game_WorldInteracts_Claustrophobia_Logic_BP_Claustrophobia::BP_Claustrophobia_C::ReceiveTick0(float DeltaSeconds) {
    return;
}
void _Game_WorldInteracts_Claustrophobia_Logic_BP_Claustrophobia::BP_Claustrophobia_C::AbortCameraReset() {
    return;
}
void _Game_WorldInteracts_Claustrophobia_Logic_BP_Claustrophobia::BP_Claustrophobia_C::LVL_AutoMove(bool AutoMove) {
    return;
}
void _Game_WorldInteracts_Claustrophobia_Logic_BP_Claustrophobia::BP_Claustrophobia_C::LVL_EarlyExitReverse__DelegateSignature() {
    return;
}
void _Game_WorldInteracts_Claustrophobia_Logic_BP_Claustrophobia::BP_Claustrophobia_C::LVL_ExitedAny__DelegateSignature() {
    return;
}
void _Game_WorldInteracts_Claustrophobia_Logic_BP_Claustrophobia::BP_Claustrophobia_C::LVL_ExitedReverse__DelegateSignature() {
    return;
}
void _Game_WorldInteracts_Claustrophobia_Logic_BP_Claustrophobia::BP_Claustrophobia_C::LVL_ExitedForward__DelegateSignature() {
    return;
}
void _Game_WorldInteracts_Claustrophobia_Logic_BP_Claustrophobia::BP_Claustrophobia_C::LVL_EnteredAny__DelegateSignature() {
    return;
}
void _Game_WorldInteracts_Claustrophobia_Logic_BP_Claustrophobia::BP_Claustrophobia_C::LVL_EnteredForward__DelegateSignature() {
    return;
}
