#include "..\FUObjectArray.hpp"
#include "..\_Game_Characters_Hero_Logic_Components_General_HC_Cosmetics\HC_Cosmetics_C.hpp"
#include "..\_Game_UI_UI_CosmeticCustomization\UI_CosmeticCustomization_C.hpp"
#include "..\_Game_WorldInteracts_EventZones_Interact_Zone_Interact_Animated\Zone_Interact_Animated_C.hpp"
#include "BP_CustomizationWorkbench_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\AnimMontage.hpp"
#include "..\_Script_Engine\ArrowComponent.hpp"
#include "..\_Script_Engine\CameraComponent.hpp"
#include "..\_Script_Engine\ParticleSystemComponent.hpp"
#include "..\_Script_Engine\SceneComponent.hpp"
#include "..\_Script_Engine\StaticMeshComponent.hpp"
#include "..\_Script_Engine\TextRenderComponent.hpp"
#include "..\_Script_Engine\TimelineComponent.hpp"
#include "..\_Script_RsGameTechRT\RsWorldMapStateTransitionGatewayComponent.hpp"
void* _Game_WorldInteracts_LevelObjects_BP_CustomizationWorkbench::BP_CustomizationWorkbench_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x4a8);
}
_Script_Engine::ParticleSystemComponent*& _Game_WorldInteracts_LevelObjects_BP_CustomizationWorkbench::BP_CustomizationWorkbench_C::get_P_Lightsaber_Magnetic_Stand() {
    return *(_Script_Engine::ParticleSystemComponent**)((uintptr_t)this + 0x4c8);
}
float& _Game_WorldInteracts_LevelObjects_BP_CustomizationWorkbench::BP_CustomizationWorkbench_C::get_LerpToLocation_Alpha_7DC4AEB64B9842814F113F827A116A3A() {
    return *(float*)((uintptr_t)this + 0x510);
}
_Script_Engine::SceneComponent*& _Game_WorldInteracts_LevelObjects_BP_CustomizationWorkbench::BP_CustomizationWorkbench_C::get_SaberLocationStatic() {
    return *(_Script_Engine::SceneComponent**)((uintptr_t)this + 0x4b0);
}
void* _Game_WorldInteracts_LevelObjects_BP_CustomizationWorkbench::BP_CustomizationWorkbench_C::get_BladeExtendTimer() {
    return (void*)((uintptr_t)this + 0x538);
}
_Script_RsGameTechRT::RsWorldMapStateTransitionGatewayComponent*& _Game_WorldInteracts_LevelObjects_BP_CustomizationWorkbench::BP_CustomizationWorkbench_C::get_RsWorldMapStateTransitionGateway() {
    return *(_Script_RsGameTechRT::RsWorldMapStateTransitionGatewayComponent**)((uintptr_t)this + 0x4b8);
}
void _Game_WorldInteracts_LevelObjects_BP_CustomizationWorkbench::BP_CustomizationWorkbench_C::LVL_RefreshCosmetics() {
    return;
}
float& _Game_WorldInteracts_LevelObjects_BP_CustomizationWorkbench::BP_CustomizationWorkbench_C::get_SaberSpinRate() {
    return *(float*)((uintptr_t)this + 0x550);
}
_Script_Engine::StaticMeshComponent*& _Game_WorldInteracts_LevelObjects_BP_CustomizationWorkbench::BP_CustomizationWorkbench_C::get_Lightsaber_Workbend_Stand_Open() {
    return *(_Script_Engine::StaticMeshComponent**)((uintptr_t)this + 0x4d8);
}
_Script_Engine::ParticleSystemComponent*& _Game_WorldInteracts_LevelObjects_BP_CustomizationWorkbench::BP_CustomizationWorkbench_C::get_ParticleSystem() {
    return *(_Script_Engine::ParticleSystemComponent**)((uintptr_t)this + 0x4c0);
}
void _Game_WorldInteracts_LevelObjects_BP_CustomizationWorkbench::BP_CustomizationWorkbench_C::ApplySaberMetal(void* Enum) {
    return;
}
_Script_Engine::StaticMeshComponent*& _Game_WorldInteracts_LevelObjects_BP_CustomizationWorkbench::BP_CustomizationWorkbench_C::get_Saber_Stand_02() {
    return *(_Script_Engine::StaticMeshComponent**)((uintptr_t)this + 0x4d0);
}
void _Game_WorldInteracts_LevelObjects_BP_CustomizationWorkbench::BP_CustomizationWorkbench_C::ReceiveTick(float DeltaSeconds) {
    return;
}
_Script_Engine::ArrowComponent*& _Game_WorldInteracts_LevelObjects_BP_CustomizationWorkbench::BP_CustomizationWorkbench_C::get_Arrow() {
    return *(_Script_Engine::ArrowComponent**)((uintptr_t)this + 0x4e0);
}
void _Game_WorldInteracts_LevelObjects_BP_CustomizationWorkbench::BP_CustomizationWorkbench_C::LerpToLocation__FinishedFunc() {
    return;
}
_Script_Engine::SceneComponent*& _Game_WorldInteracts_LevelObjects_BP_CustomizationWorkbench::BP_CustomizationWorkbench_C::get_SingleSaberRoot() {
    return *(_Script_Engine::SceneComponent**)((uintptr_t)this + 0x4e8);
}
void _Game_WorldInteracts_LevelObjects_BP_CustomizationWorkbench::BP_CustomizationWorkbench_C::ApplySleeveMesh(void* Enum) {
    return;
}
_Script_Engine::TextRenderComponent*& _Game_WorldInteracts_LevelObjects_BP_CustomizationWorkbench::BP_CustomizationWorkbench_C::get_TextRender() {
    return *(_Script_Engine::TextRenderComponent**)((uintptr_t)this + 0x4f0);
}
_Script_Engine::CameraComponent*& _Game_WorldInteracts_LevelObjects_BP_CustomizationWorkbench::BP_CustomizationWorkbench_C::get_Camera() {
    return *(_Script_Engine::CameraComponent**)((uintptr_t)this + 0x4f8);
}
_Script_Engine::SceneComponent*& _Game_WorldInteracts_LevelObjects_BP_CustomizationWorkbench::BP_CustomizationWorkbench_C::get_StaffSaberRoot() {
    return *(_Script_Engine::SceneComponent**)((uintptr_t)this + 0x500);
}
_Script_Engine::TimelineComponent*& _Game_WorldInteracts_LevelObjects_BP_CustomizationWorkbench::BP_CustomizationWorkbench_C::get_LerpToLocation() {
    return *(_Script_Engine::TimelineComponent**)((uintptr_t)this + 0x518);
}
_Script_Engine::StaticMeshComponent*& _Game_WorldInteracts_LevelObjects_BP_CustomizationWorkbench::BP_CustomizationWorkbench_C::get_Workbench_Mesh() {
    return *(_Script_Engine::StaticMeshComponent**)((uintptr_t)this + 0x508);
}
void _Game_WorldInteracts_LevelObjects_BP_CustomizationWorkbench::BP_CustomizationWorkbench_C::BeginCustomization() {
    return;
}
void* _Game_WorldInteracts_LevelObjects_BP_CustomizationWorkbench::BP_CustomizationWorkbench_C::get_LerpToLocation__Direction_7DC4AEB64B9842814F113F827A116A3A() {
    return (void*)((uintptr_t)this + 0x514);
}
void _Game_WorldInteracts_LevelObjects_BP_CustomizationWorkbench::BP_CustomizationWorkbench_C::ExtendBlades() {
    return;
}
_Game_Characters_Hero_Logic_Components_General_HC_Cosmetics::HC_Cosmetics_C*& _Game_WorldInteracts_LevelObjects_BP_CustomizationWorkbench::BP_CustomizationWorkbench_C::get_HC_Cosmetics() {
    return *(_Game_Characters_Hero_Logic_Components_General_HC_Cosmetics::HC_Cosmetics_C**)((uintptr_t)this + 0x520);
}
void _Game_WorldInteracts_LevelObjects_BP_CustomizationWorkbench::BP_CustomizationWorkbench_C::EndCustomization() {
    return;
}
void* _Game_WorldInteracts_LevelObjects_BP_CustomizationWorkbench::BP_CustomizationWorkbench_C::get_StoredCosmeticLoadout() {
    return (void*)((uintptr_t)this + 0x528);
}
bool _Game_WorldInteracts_LevelObjects_BP_CustomizationWorkbench::BP_CustomizationWorkbench_C::get_hideTemp() {
    return (*(uint8_t*)((uintptr_t)this + 0x534 + 0)) & 1 != 0;
}
void _Game_WorldInteracts_LevelObjects_BP_CustomizationWorkbench::BP_CustomizationWorkbench_C::ReceiveEndPlay(void* EndPlayReason) {
    return;
}
void _Game_WorldInteracts_LevelObjects_BP_CustomizationWorkbench::BP_CustomizationWorkbench_C::set_hideTemp(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x534 + 0);
    *(uint8_t*)((uintptr_t)this + 0x534 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Game_WorldInteracts_LevelObjects_BP_CustomizationWorkbench::BP_CustomizationWorkbench_C::get_SetSyncPointOnGround() {
    return (*(uint8_t*)((uintptr_t)this + 0x540 + 0)) & 1 != 0;
}
void _Game_WorldInteracts_LevelObjects_BP_CustomizationWorkbench::BP_CustomizationWorkbench_C::set_SetSyncPointOnGround(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x540 + 0);
    *(uint8_t*)((uintptr_t)this + 0x540 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Game_WorldInteracts_LevelObjects_BP_CustomizationWorkbench::BP_CustomizationWorkbench_C::get_SyncPointOffsetIfNotOnGround() {
    return (void*)((uintptr_t)this + 0x544);
}
void* _Game_WorldInteracts_LevelObjects_BP_CustomizationWorkbench::BP_CustomizationWorkbench_C::get_SaberRootBaseRotation() {
    return (void*)((uintptr_t)this + 0x554);
}
void _Game_WorldInteracts_LevelObjects_BP_CustomizationWorkbench::BP_CustomizationWorkbench_C::ApplyCereMesh(void* Enum) {
    return;
}
_Game_UI_UI_CosmeticCustomization::UI_CosmeticCustomization_C*& _Game_WorldInteracts_LevelObjects_BP_CustomizationWorkbench::BP_CustomizationWorkbench_C::get_UI_Cosmetics() {
    return *(_Game_UI_UI_CosmeticCustomization::UI_CosmeticCustomization_C**)((uintptr_t)this + 0x560);
}
_Script_CoreUObject::Class* _Game_WorldInteracts_LevelObjects_BP_CustomizationWorkbench::BP_CustomizationWorkbench_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"BlueprintGeneratedClass /Game/WorldInteracts/LevelObjects/BP_CustomizationWorkbench.BP_CustomizationWorkbench_C");
    return result;
}
void _Game_WorldInteracts_LevelObjects_BP_CustomizationWorkbench::BP_CustomizationWorkbench_C::CheckAchievements() {
    return;
}
void _Game_WorldInteracts_LevelObjects_BP_CustomizationWorkbench::BP_CustomizationWorkbench_C::UserConstructionScript0() {
    return;
}
void _Game_WorldInteracts_LevelObjects_BP_CustomizationWorkbench::BP_CustomizationWorkbench_C::LerpToLocation__UpdateFunc() {
    return;
}
void _Game_WorldInteracts_LevelObjects_BP_CustomizationWorkbench::BP_CustomizationWorkbench_C::ReceiveBeginPlay0() {
    return;
}
void _Game_WorldInteracts_LevelObjects_BP_CustomizationWorkbench::BP_CustomizationWorkbench_C::ApplyEmitterMesh(void* Enum) {
    return;
}
void _Game_WorldInteracts_LevelObjects_BP_CustomizationWorkbench::BP_CustomizationWorkbench_C::ApplySwitchMesh(void* Enum) {
    return;
}
void _Game_WorldInteracts_LevelObjects_BP_CustomizationWorkbench::BP_CustomizationWorkbench_C::SyncEnded0(_Script_Engine::AnimMontage* Montage, bool bInterrupted) {
    return;
}
void _Game_WorldInteracts_LevelObjects_BP_CustomizationWorkbench::BP_CustomizationWorkbench_C::HideTempMesh() {
    return;
}
void _Game_WorldInteracts_LevelObjects_BP_CustomizationWorkbench::BP_CustomizationWorkbench_C::ApplySaberColor(void* Color) {
    return;
}
void _Game_WorldInteracts_LevelObjects_BP_CustomizationWorkbench::BP_CustomizationWorkbench_C::ContinueInteractSyncAnim0() {
    return;
}
void _Game_WorldInteracts_LevelObjects_BP_CustomizationWorkbench::BP_CustomizationWorkbench_C::SetLightsaberStandVisibility(bool bNewVisibility) {
    return;
}
void _Game_WorldInteracts_LevelObjects_BP_CustomizationWorkbench::BP_CustomizationWorkbench_C::Interacted() {
    return;
}
void _Game_WorldInteracts_LevelObjects_BP_CustomizationWorkbench::BP_CustomizationWorkbench_C::ExecuteUbergraph_BP_CustomizationWorkbench(int32_t EntryPoint) {
    return;
}
