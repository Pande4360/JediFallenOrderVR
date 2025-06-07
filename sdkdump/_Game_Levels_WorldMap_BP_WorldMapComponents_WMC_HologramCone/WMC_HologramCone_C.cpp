#include "..\FUObjectArray.hpp"
#include "..\_Game_Levels_WorldMap_BP_BP_WorldMapHologram\BP_WorldMapHologram_C.hpp"
#include "WMC_HologramCone_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Rotator.hpp"
#include "..\_Script_CoreUObject\Vector.hpp"
#include "..\_Script_Engine\ActorComponent.hpp"
#include "..\_Script_Engine\ParticleSystemComponent.hpp"
#include "..\_Script_Engine\StaticMesh.hpp"
#include "..\_Script_Engine\StaticMeshComponent.hpp"
#include "..\_Script_RsGameTechRT\RsWorldMapStaticMeshComponent.hpp"
void _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_HologramCone::WMC_HologramCone_C::SetSphereTransforms() {
    return;
}
_Script_Engine::StaticMeshComponent*& _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_HologramCone::WMC_HologramCone_C::get_HolotableConeRoot() {
    return *(_Script_Engine::StaticMeshComponent**)((uintptr_t)this + 0x1a0);
}
void* _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_HologramCone::WMC_HologramCone_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x170);
}
_Script_Engine::ParticleSystemComponent*& _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_HologramCone::WMC_HologramCone_C::get_Main_HolotableCone() {
    return *(_Script_Engine::ParticleSystemComponent**)((uintptr_t)this + 0x198);
}
void _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_HologramCone::WMC_HologramCone_C::SetLocationAndRotationOfCone() {
    return;
}
_Script_Engine::StaticMeshComponent*& _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_HologramCone::WMC_HologramCone_C::get_HologramConeNull() {
    return *(_Script_Engine::StaticMeshComponent**)((uintptr_t)this + 0x188);
}
float& _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_HologramCone::WMC_HologramCone_C::get_ConeAnimationLength() {
    return *(float*)((uintptr_t)this + 0x220);
}
void _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_HologramCone::WMC_HologramCone_C::UpdateLocationAndRotationOfCone() {
    return;
}
_Game_Levels_WorldMap_BP_BP_WorldMapHologram::BP_WorldMapHologram_C*& _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_HologramCone::WMC_HologramCone_C::get_WorldMapHologram_Ref() {
    return *(_Game_Levels_WorldMap_BP_BP_WorldMapHologram::BP_WorldMapHologram_C**)((uintptr_t)this + 0x178);
}
void _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_HologramCone::WMC_HologramCone_C::set_bInitiateSphereSize(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x1ea + 0);
    *(uint8_t*)((uintptr_t)this + 0x1ea + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_RsGameTechRT::RsWorldMapStaticMeshComponent*& _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_HologramCone::WMC_HologramCone_C::get_HologramMaskMeshComponent() {
    return *(_Script_RsGameTechRT::RsWorldMapStaticMeshComponent**)((uintptr_t)this + 0x180);
}
_Script_Engine::ParticleSystemComponent*& _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_HologramCone::WMC_HologramCone_C::get_HologramCone() {
    return *(_Script_Engine::ParticleSystemComponent**)((uintptr_t)this + 0x190);
}
_Script_Engine::ParticleSystemComponent*& _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_HologramCone::WMC_HologramCone_C::get_HologramCone_Cine() {
    return *(_Script_Engine::ParticleSystemComponent**)((uintptr_t)this + 0x1a8);
}
void _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_HologramCone::WMC_HologramCone_C::FindBuddyDroidLocationAndRotation(_Script_CoreUObject::Vector& SocketLocation, _Script_CoreUObject::Rotator& Rotation) {
    return;
}
float& _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_HologramCone::WMC_HologramCone_C::get_LargeCone_X() {
    return *(float*)((uintptr_t)this + 0x1b0);
}
void* _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_HologramCone::WMC_HologramCone_C::get_SmallConeColor() {
    return (void*)((uintptr_t)this + 0x1ec);
}
float& _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_HologramCone::WMC_HologramCone_C::get_LargeCone_Y() {
    return *(float*)((uintptr_t)this + 0x1b4);
}
float& _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_HologramCone::WMC_HologramCone_C::get_SmallCone_X() {
    return *(float*)((uintptr_t)this + 0x1b8);
}
float& _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_HologramCone::WMC_HologramCone_C::get_SmallCone_Y() {
    return *(float*)((uintptr_t)this + 0x1bc);
}
void _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_HologramCone::WMC_HologramCone_C::EnableHolomapEmitters(bool Holomap_) {
    return;
}
float& _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_HologramCone::WMC_HologramCone_C::get_MaskSphereSizeXY() {
    return *(float*)((uintptr_t)this + 0x1c0);
}
void _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_HologramCone::WMC_HologramCone_C::EndAnimEvent() {
    return;
}
float& _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_HologramCone::WMC_HologramCone_C::get_MaskSphereSizeZ() {
    return *(float*)((uintptr_t)this + 0x1c4);
}
float& _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_HologramCone::WMC_HologramCone_C::get_LargeConeGlow_X() {
    return *(float*)((uintptr_t)this + 0x1c8);
}
float& _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_HologramCone::WMC_HologramCone_C::get_LargeConeGlow_Y() {
    return *(float*)((uintptr_t)this + 0x1cc);
}
_Script_Engine::StaticMesh*& _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_HologramCone::WMC_HologramCone_C::get_MantisCone() {
    return *(_Script_Engine::StaticMesh**)((uintptr_t)this + 0x228);
}
float& _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_HologramCone::WMC_HologramCone_C::get_vertMovement() {
    return *(float*)((uintptr_t)this + 0x1d0);
}
void _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_HologramCone::WMC_HologramCone_C::SetMantisConeParameters(float base, float Fresnel) {
    return;
}
float& _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_HologramCone::WMC_HologramCone_C::get_VertMovementTarget() {
    return *(float*)((uintptr_t)this + 0x1d4);
}
float& _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_HologramCone::WMC_HologramCone_C::get_fresnelSwitch() {
    return *(float*)((uintptr_t)this + 0x1d8);
}
float& _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_HologramCone::WMC_HologramCone_C::get_fresnelSwitchInterpSpeed() {
    return *(float*)((uintptr_t)this + 0x1dc);
}
void _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_HologramCone::WMC_HologramCone_C::DecideMaskFate() {
    return;
}
float& _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_HologramCone::WMC_HologramCone_C::get_Cine_CamOffset() {
    return *(float*)((uintptr_t)this + 0x1e0);
}
float& _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_HologramCone::WMC_HologramCone_C::get_Cine_SmallCamOffset() {
    return *(float*)((uintptr_t)this + 0x1e4);
}
void _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_HologramCone::WMC_HologramCone_C::FresnelSwitchEvent() {
    return;
}
void _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_HologramCone::WMC_HologramCone_C::set_StartHologramConeAnim(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x1e8 + 0);
    *(uint8_t*)((uintptr_t)this + 0x1e8 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_HologramCone::WMC_HologramCone_C::get_StartHologramConeAnim() {
    return (*(uint8_t*)((uintptr_t)this + 0x1e8 + 0)) & 1 != 0;
}
void _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_HologramCone::WMC_HologramCone_C::InitiateHolotableCones() {
    return;
}
bool _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_HologramCone::WMC_HologramCone_C::get_EndAnimStart() {
    return (*(uint8_t*)((uintptr_t)this + 0x1e9 + 0)) & 1 != 0;
}
void _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_HologramCone::WMC_HologramCone_C::set_EndAnimStart(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x1e9 + 0);
    *(uint8_t*)((uintptr_t)this + 0x1e9 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_HologramCone::WMC_HologramCone_C::SetHologramConeBD() {
    return;
}
bool _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_HologramCone::WMC_HologramCone_C::get_bInitiateSphereSize() {
    return (*(uint8_t*)((uintptr_t)this + 0x1ea + 0)) & 1 != 0;
}
void* _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_HologramCone::WMC_HologramCone_C::get_LargeConeColor() {
    return (void*)((uintptr_t)this + 0x1fc);
}
void* _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_HologramCone::WMC_HologramCone_C::get_LargeConeGlowColor() {
    return (void*)((uintptr_t)this + 0x20c);
}
bool _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_HologramCone::WMC_HologramCone_C::get_bConeCine_() {
    return (*(uint8_t*)((uintptr_t)this + 0x21c + 0)) & 1 != 0;
}
void _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_HologramCone::WMC_HologramCone_C::set_bConeCine_(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x21c + 0);
    *(uint8_t*)((uintptr_t)this + 0x21c + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_Engine::StaticMesh*& _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_HologramCone::WMC_HologramCone_C::get_WhileOpenMask() {
    return *(_Script_Engine::StaticMesh**)((uintptr_t)this + 0x230);
}
_Script_Engine::StaticMesh*& _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_HologramCone::WMC_HologramCone_C::get_OpeningConeMask() {
    return *(_Script_Engine::StaticMesh**)((uintptr_t)this + 0x238);
}
_Script_Engine::StaticMesh*& _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_HologramCone::WMC_HologramCone_C::get_MantisSphere() {
    return *(_Script_Engine::StaticMesh**)((uintptr_t)this + 0x240);
}
float& _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_HologramCone::WMC_HologramCone_C::get_SpeedMult() {
    return *(float*)((uintptr_t)this + 0x248);
}
float& _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_HologramCone::WMC_HologramCone_C::get_Subtractor() {
    return *(float*)((uintptr_t)this + 0x24c);
}
void _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_HologramCone::WMC_HologramCone_C::RampBackgorundDarkness() {
    return;
}
void _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_HologramCone::WMC_HologramCone_C::OnMantisEnter() {
    return;
}
float& _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_HologramCone::WMC_HologramCone_C::get_InitialMult() {
    return *(float*)((uintptr_t)this + 0x250);
}
float& _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_HologramCone::WMC_HologramCone_C::get_InitialMultSwitch() {
    return *(float*)((uintptr_t)this + 0x254);
}
_Script_Engine::ParticleSystemComponent*& _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_HologramCone::WMC_HologramCone_C::get_HologramCone_BD() {
    return *(_Script_Engine::ParticleSystemComponent**)((uintptr_t)this + 0x258);
}
void _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_HologramCone::WMC_HologramCone_C::SetCineParticleSystemLocation() {
    return;
}
_Script_CoreUObject::Class* _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_HologramCone::WMC_HologramCone_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"BlueprintGeneratedClass /Game/Levels/WorldMap/BP/WorldMapComponents/WMC_HologramCone.WMC_HologramCone_C");
    return result;
}
void _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_HologramCone::WMC_HologramCone_C::EnableEmitters() {
    return;
}
void _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_HologramCone::WMC_HologramCone_C::DisableEmitters() {
    return;
}
void _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_HologramCone::WMC_HologramCone_C::UpdateConeLocationAndRotation() {
    return;
}
void _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_HologramCone::WMC_HologramCone_C::OnWorldMapClosed() {
    return;
}
void _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_HologramCone::WMC_HologramCone_C::SetHolotableParticle() {
    return;
}
void _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_HologramCone::WMC_HologramCone_C::OnTickHologramCone() {
    return;
}
void _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_HologramCone::WMC_HologramCone_C::SetLargeConeGlowParameters(_Script_Engine::ParticleSystemComponent* System, float InterpMultiplier, float XSize, float YSize) {
    return;
}
void _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_HologramCone::WMC_HologramCone_C::SetSmallConeParameters(_Script_Engine::ParticleSystemComponent* System, float InterpMultiplier, float XSize, float YSize) {
    return;
}
void _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_HologramCone::WMC_HologramCone_C::SetLargeConeParameters(_Script_Engine::ParticleSystemComponent* System, float InterpMultiplier, float XSize, float YSize) {
    return;
}
void _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_HologramCone::WMC_HologramCone_C::OpeningHologramConeAnimation(_Script_Engine::ParticleSystemComponent* HologramConeSystem) {
    return;
}
void _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_HologramCone::WMC_HologramCone_C::ActivateHologramCone(_Script_Engine::ParticleSystemComponent* HologramConeSystem, bool IsCombat) {
    return;
}
void _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_HologramCone::WMC_HologramCone_C::ZeroAllAnimParams() {
    return;
}
void _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_HologramCone::WMC_HologramCone_C::ReceiveBeginPlay0() {
    return;
}
void _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_HologramCone::WMC_HologramCone_C::StartTutorialCone() {
    return;
}
void _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_HologramCone::WMC_HologramCone_C::EndTutorialCone() {
    return;
}
void _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_HologramCone::WMC_HologramCone_C::TutorialConeDeactivated() {
    return;
}
void _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_HologramCone::WMC_HologramCone_C::ExecuteUbergraph_WMC_HologramCone(int32_t EntryPoint) {
    return;
}
