#include "..\FUObjectArray.hpp"
#include "..\_Script_AkAudio\AkAudioEvent.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\LinearColor.hpp"
#include "..\_Script_CoreUObject\Rotator.hpp"
#include "..\_Script_CoreUObject\Transform.hpp"
#include "..\_Script_CoreUObject\Vector.hpp"
#include "..\_Script_Engine\Actor.hpp"
#include "..\_Script_Engine\MaterialInstanceDynamic.hpp"
#include "..\_Script_Engine\MaterialInterface.hpp"
#include "..\_Script_Engine\PlayerCameraManager.hpp"
#include "..\_Script_Engine\PostProcessComponent.hpp"
#include "..\_Script_Engine\SceneComponent.hpp"
#include "..\_Script_Engine\SphereComponent.hpp"
#include "..\_Script_Engine\StaticMesh.hpp"
#include "..\_Script_Engine\TimelineComponent.hpp"
#include "..\_Script_Engine\World.hpp"
#include "..\_Script_RsGameTechRT\RsCharacter.hpp"
#include "..\_Script_RsGameTechRT\RsMapSectionTag.hpp"
#include "..\_Script_RsGameTechRT\RsWorldMap.hpp"
#include "..\_Script_RsGameTechRT\RsWorldMapHologramBase.hpp"
#include "..\_Script_RsGameTechRT\RsWorldMapStaticMeshComponent.hpp"
#include "SwWorldMapHologramBase.hpp"
#include "SwWorldMapHologramSettings.hpp"
#include "SwWorldMapIndicatorComponent.hpp"
void* _Script_SwGame::SwWorldMapHologramBase::get_HologramMaskMaterialPtr() {
    return (void*)((uintptr_t)this + 0x468);
}
void _Script_SwGame::SwWorldMapHologramBase::SnapToPlayerArrow(bool bFinalizeTransform) {
    return;
}
float& _Script_SwGame::SwWorldMapHologramBase::get_InputMouseAxisRotate() {
    return *(float*)((uintptr_t)this + 0x4e4);
}
void* _Script_SwGame::SwWorldMapHologramBase::get_HologramMaskMeshPtr() {
    return (void*)((uintptr_t)this + 0x440);
}
_Script_CoreUObject::Class* _Script_SwGame::SwWorldMapHologramBase::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/SwGame.SwWorldMapHologramBase");
    return result;
}
_Script_AkAudio::AkAudioEvent*& _Script_SwGame::SwWorldMapHologramBase::get_AudioEvent_MapRegionSelect() {
    return *(_Script_AkAudio::AkAudioEvent**)((uintptr_t)this + 0x518);
}
_Script_SwGame::SwWorldMapHologramSettings*& _Script_SwGame::SwWorldMapHologramBase::get_RuntimeSettings() {
    return *(_Script_SwGame::SwWorldMapHologramSettings**)((uintptr_t)this + 0x370);
}
void* _Script_SwGame::SwWorldMapHologramBase::get_LocationMarkerStaticMeshPtr() {
    return (void*)((uintptr_t)this + 0x3c8);
}
void* _Script_SwGame::SwWorldMapHologramBase::get_PlayerArrowMaterialPtr() {
    return (void*)((uintptr_t)this + 0x3a0);
}
void* _Script_SwGame::SwWorldMapHologramBase::get_PlayerArrowStaticMeshPtr() {
    return (void*)((uintptr_t)this + 0x378);
}
void* _Script_SwGame::SwWorldMapHologramBase::get_BaseHologramCompositeMaterialPtr() {
    return (void*)((uintptr_t)this + 0x418);
}
void _Script_SwGame::SwWorldMapHologramBase::SetWorldMapScale(float UniformScale, bool bFinalizeTransform) {
    return;
}
void* _Script_SwGame::SwWorldMapHologramBase::get_LocationMarkerMaterialPtr() {
    return (void*)((uintptr_t)this + 0x3f0);
}
_Script_Engine::PostProcessComponent*& _Script_SwGame::SwWorldMapHologramBase::get_PostProcessComposite() {
    return *(_Script_Engine::PostProcessComponent**)((uintptr_t)this + 0x490);
}
float& _Script_SwGame::SwWorldMapHologramBase::get_VerticalPanDelta() {
    return *(float*)((uintptr_t)this + 0x4d8);
}
void _Script_SwGame::SwWorldMapHologramBase::RotateWorldMapAboutPoint(_Script_CoreUObject::Rotator& Rotator, _Script_CoreUObject::Vector& Location, bool bFinalizeTransform) {
    return;
}
_Script_Engine::SphereComponent*& _Script_SwGame::SwWorldMapHologramBase::get_PostProcessShape() {
    return *(_Script_Engine::SphereComponent**)((uintptr_t)this + 0x498);
}
_Script_RsGameTechRT::RsWorldMapStaticMeshComponent*& _Script_SwGame::SwWorldMapHologramBase::get_HologramMaskMeshComponent() {
    return *(_Script_RsGameTechRT::RsWorldMapStaticMeshComponent**)((uintptr_t)this + 0x4a0);
}
_Script_Engine::MaterialInstanceDynamic*& _Script_SwGame::SwWorldMapHologramBase::get_HologramCompositeMaterial() {
    return *(_Script_Engine::MaterialInstanceDynamic**)((uintptr_t)this + 0x5a8);
}
_Script_SwGame::SwWorldMapIndicatorComponent*& _Script_SwGame::SwWorldMapHologramBase::get_PlayerArrowComponent() {
    return *(_Script_SwGame::SwWorldMapIndicatorComponent**)((uintptr_t)this + 0x4a8);
}
_Script_SwGame::SwWorldMapIndicatorComponent*& _Script_SwGame::SwWorldMapHologramBase::get_LocationMarkerComponent() {
    return *(_Script_SwGame::SwWorldMapIndicatorComponent**)((uintptr_t)this + 0x4b0);
}
_Script_Engine::SceneComponent*& _Script_SwGame::SwWorldMapHologramBase::get_WorldMapTransformRoot() {
    return *(_Script_Engine::SceneComponent**)((uintptr_t)this + 0x588);
}
_Script_Engine::TimelineComponent*& _Script_SwGame::SwWorldMapHologramBase::get_TransformTimelineComponent() {
    return *(_Script_Engine::TimelineComponent**)((uintptr_t)this + 0x4b8);
}
_Script_Engine::Actor*& _Script_SwGame::SwWorldMapHologramBase::get_HologramConeActor() {
    return *(_Script_Engine::Actor**)((uintptr_t)this + 0x4c0);
}
_Script_Engine::StaticMesh*& _Script_SwGame::SwWorldMapHologramBase::get_PlayerArrowStaticMesh() {
    return *(_Script_Engine::StaticMesh**)((uintptr_t)this + 0x5b0);
}
float& _Script_SwGame::SwWorldMapHologramBase::get_ControllerYawValue() {
    return *(float*)((uintptr_t)this + 0x4c8);
}
_Script_RsGameTechRT::RsMapSectionTag _Script_SwGame::SwWorldMapHologramBase::SwitchToTargetedNonActiveRegion() {
    return;
}
void* _Script_SwGame::SwWorldMapHologramBase::get_SelectedMapSection() {
    return (void*)((uintptr_t)this + 0x558);
}
float& _Script_SwGame::SwWorldMapHologramBase::get_MouseYawValue() {
    return *(float*)((uintptr_t)this + 0x4cc);
}
void* _Script_SwGame::SwWorldMapHologramBase::get_TranslationDelta() {
    return (void*)((uintptr_t)this + 0x4d0);
}
_Script_RsGameTechRT::RsCharacter*& _Script_SwGame::SwWorldMapHologramBase::get_PlayerCharacter() {
    return *(_Script_RsGameTechRT::RsCharacter**)((uintptr_t)this + 0x548);
}
float& _Script_SwGame::SwWorldMapHologramBase::get_InputAxisZoom() {
    return *(float*)((uintptr_t)this + 0x4dc);
}
float& _Script_SwGame::SwWorldMapHologramBase::get_InputAxisRotate() {
    return *(float*)((uintptr_t)this + 0x4e0);
}
void* _Script_SwGame::SwWorldMapHologramBase::get_InputAxisMove() {
    return (void*)((uintptr_t)this + 0x4e8);
}
void _Script_SwGame::SwWorldMapHologramBase::set_bIsWorldMapOpen(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x590 + 0);
    *(uint8_t*)((uintptr_t)this + 0x590 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_SwGame::SwWorldMapHologramBase::get_bRightBumperDown() {
    return (*(uint8_t*)((uintptr_t)this + 0x4f0 + 0)) & 1 != 0;
}
void _Script_SwGame::SwWorldMapHologramBase::set_bRightBumperDown(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x4f0 + 0);
    *(uint8_t*)((uintptr_t)this + 0x4f0 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_SwGame::SwWorldMapHologramBase::get_bLeftBumperDown() {
    return (*(uint8_t*)((uintptr_t)this + 0x4f1 + 0)) & 1 != 0;
}
_Script_RsGameTechRT::RsWorldMap*& _Script_SwGame::SwWorldMapHologramBase::get_RsWorldMap() {
    return *(_Script_RsGameTechRT::RsWorldMap**)((uintptr_t)this + 0x598);
}
void _Script_SwGame::SwWorldMapHologramBase::set_bLeftBumperDown(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x4f1 + 0);
    *(uint8_t*)((uintptr_t)this + 0x4f1 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_SwGame::SwWorldMapHologramBase::get_NonActiveMapSectionActors() {
    return (void*)((uintptr_t)this + 0x630);
}
_Script_AkAudio::AkAudioEvent*& _Script_SwGame::SwWorldMapHologramBase::get_AudioEvent_MapOpen() {
    return *(_Script_AkAudio::AkAudioEvent**)((uintptr_t)this + 0x508);
}
_Script_AkAudio::AkAudioEvent*& _Script_SwGame::SwWorldMapHologramBase::get_AudioEvent_MapClose() {
    return *(_Script_AkAudio::AkAudioEvent**)((uintptr_t)this + 0x510);
}
void _Script_SwGame::SwWorldMapHologramBase::set_bLockstepMovementThroughGateways(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x570 + 0);
    *(uint8_t*)((uintptr_t)this + 0x570 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_AkAudio::AkAudioEvent*& _Script_SwGame::SwWorldMapHologramBase::get_AudioEvent_SnapToPosition() {
    return *(_Script_AkAudio::AkAudioEvent**)((uintptr_t)this + 0x520);
}
_Script_AkAudio::AkAudioEvent*& _Script_SwGame::SwWorldMapHologramBase::get_AudioEvent_PeriodicDistortion() {
    return *(_Script_AkAudio::AkAudioEvent**)((uintptr_t)this + 0x528);
}
void* _Script_SwGame::SwWorldMapHologramBase::get_HolomapMode() {
    return (void*)((uintptr_t)this + 0x5a0);
}
_Script_AkAudio::AkAudioEvent*& _Script_SwGame::SwWorldMapHologramBase::get_AudioEvent_InteriorLevelChanged() {
    return *(_Script_AkAudio::AkAudioEvent**)((uintptr_t)this + 0x530);
}
void _Script_SwGame::SwWorldMapHologramBase::set_bIsMapZooming(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x538 + 0);
    *(uint8_t*)((uintptr_t)this + 0x538 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_SwGame::SwWorldMapHologramBase::get_bIsWorldMapOpen() {
    return (*(uint8_t*)((uintptr_t)this + 0x590 + 0)) & 1 != 0;
}
bool _Script_SwGame::SwWorldMapHologramBase::get_bIsMapZooming() {
    return (*(uint8_t*)((uintptr_t)this + 0x538 + 0)) & 1 != 0;
}
void* _Script_SwGame::SwWorldMapHologramBase::get_OverrideActiveMapSections() {
    return (void*)((uintptr_t)this + 0x5e0);
}
void* _Script_SwGame::SwWorldMapHologramBase::get_HolomapCenterLocation() {
    return (void*)((uintptr_t)this + 0x53c);
}
_Script_Engine::PlayerCameraManager*& _Script_SwGame::SwWorldMapHologramBase::get_PlayerCameraManager() {
    return *(_Script_Engine::PlayerCameraManager**)((uintptr_t)this + 0x550);
}
bool _Script_SwGame::SwWorldMapHologramBase::get_bLockstepMovementThroughGateways() {
    return (*(uint8_t*)((uintptr_t)this + 0x570 + 0)) & 1 != 0;
}
bool _Script_SwGame::SwWorldMapHologramBase::get_bLockstep3DTargeting() {
    return (*(uint8_t*)((uintptr_t)this + 0x571 + 0)) & 1 != 0;
}
_Script_Engine::StaticMesh*& _Script_SwGame::SwWorldMapHologramBase::get_HologramMaskMesh() {
    return *(_Script_Engine::StaticMesh**)((uintptr_t)this + 0x5c0);
}
void _Script_SwGame::SwWorldMapHologramBase::set_bLockstep3DTargeting(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x571 + 0);
    *(uint8_t*)((uintptr_t)this + 0x571 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_SwGame::SwWorldMapHologramBase::get_OnHoverOverExploredMapSections() {
    return (void*)((uintptr_t)this + 0x578);
}
_Script_Engine::MaterialInterface*& _Script_SwGame::SwWorldMapHologramBase::get_PlayerArrowMaterial() {
    return *(_Script_Engine::MaterialInterface**)((uintptr_t)this + 0x5b8);
}
_Script_Engine::MaterialInterface*& _Script_SwGame::SwWorldMapHologramBase::get_HologramMaskMaterial() {
    return *(_Script_Engine::MaterialInterface**)((uintptr_t)this + 0x5c8);
}
void* _Script_SwGame::SwWorldMapHologramBase::get_ActiveMapSectionActors() {
    return (void*)((uintptr_t)this + 0x5d0);
}
void _Script_SwGame::SwWorldMapHologramBase::TranslationTimelineInterpFunc(float InterpValue) {
    return;
}
void _Script_SwGame::SwWorldMapHologramBase::TranslationTimelineFinished() {
    return;
}
void _Script_SwGame::SwWorldMapHologramBase::SetWorldMapTransform(_Script_CoreUObject::Transform& Transform, bool bFinalizeTransform) {
    return;
}
void _Script_SwGame::SwWorldMapHologramBase::SetWorldMapRotation(_Script_CoreUObject::Rotator& Rotator, bool bFinalizeTransform) {
    return;
}
void _Script_SwGame::SwWorldMapHologramBase::SetMapSectionStatusColor(_Script_RsGameTechRT::RsMapSectionTag& MapSectionTag, _Script_CoreUObject::LinearColor& InLinearColor) {
    return;
}
void _Script_SwGame::SwWorldMapHologramBase::SetActiveInteriorLevel(void* InteriorLevel, bool bApplyInteriorLevelTranslation) {
    return;
}
void _Script_SwGame::SwWorldMapHologramBase::ScaleWorldMapAboutPoint(float UniformScale, _Script_CoreUObject::Vector& Location, bool bFinalizeTransform) {
    return;
}
void _Script_SwGame::SwWorldMapHologramBase::ResetTransforms(bool bFinalizeTransform) {
    return;
}
void _Script_SwGame::SwWorldMapHologramBase::ReceiveWorldMapOpened() {
    return;
}
void _Script_SwGame::SwWorldMapHologramBase::ReceiveWorldMapLevelChanged(void*& WorldMapName) {
    return;
}
void _Script_SwGame::SwWorldMapHologramBase::ReceiveWorldMapClosed() {
    return;
}
void _Script_SwGame::SwWorldMapHologramBase::ReceiveSecretMapSectionExplored(_Script_RsGameTechRT::RsMapSectionTag& MapSection) {
    return;
}
void _Script_SwGame::SwWorldMapHologramBase::ReceiveRuntimeSettingsChanged() {
    return;
}
void _Script_SwGame::SwWorldMapHologramBase::ReceiveRegionSelectionChanged(void*& RegionName) {
    return;
}
void _Script_SwGame::SwWorldMapHologramBase::ReceiveMapTranslationFinished() {
    return;
}
void _Script_SwGame::SwWorldMapHologramBase::ReceiveMapSectionSelectionChanged(_Script_RsGameTechRT::RsMapSectionTag& NewMapSection) {
    return;
}
void _Script_SwGame::SwWorldMapHologramBase::ReceiveMapSectionExplored(_Script_RsGameTechRT::RsMapSectionTag& MapSection) {
    return;
}
void _Script_SwGame::SwWorldMapHologramBase::ReceiveMapNavigationModeChange(bool bIsFreeTranslationMode) {
    return;
}
void _Script_SwGame::SwWorldMapHologramBase::ReceiveInteriorLevelHoverEnd(void* InteriorLevel) {
    return;
}
void _Script_SwGame::SwWorldMapHologramBase::ReceiveInteriorLevelHoverBegin(void* InteriorLevel) {
    return;
}
void _Script_SwGame::SwWorldMapHologramBase::ReceiveInteriorLevelChanged(void* NewInteriorLevel) {
    return;
}
_Script_RsGameTechRT::RsMapSectionTag _Script_SwGame::SwWorldMapHologramBase::LineTraceWorldMap(_Script_Engine::World* InWorld, bool bOnlyActiveInteriorLayer) {
    return;
}
float _Script_SwGame::SwWorldMapHologramBase::GetZoomDelta() {
    return;
}
_Script_CoreUObject::Transform _Script_SwGame::SwWorldMapHologramBase::GetWorldMapTransform() {
    return;
}
float _Script_SwGame::SwWorldMapHologramBase::GetWorldMapScale() {
    return;
}
_Script_CoreUObject::Rotator _Script_SwGame::SwWorldMapHologramBase::GetWorldMapRotation() {
    return;
}
_Script_CoreUObject::Vector _Script_SwGame::SwWorldMapHologramBase::GetRelativeHolomapCenterOffset(_Script_CoreUObject::Rotator& PlayerRotation) {
    return;
}
void _Script_SwGame::SwWorldMapHologramBase::FinalizeTransform() {
    return;
}
void _Script_SwGame::SwWorldMapHologramBase::EnableInputTranslation(bool bEnableInputTranslation) {
    return;
}
void _Script_SwGame::SwWorldMapHologramBase::EnableInputTransforms(bool bEnableInputTransforms) {
    return;
}
void _Script_SwGame::SwWorldMapHologramBase::EnableInputScale(bool bEnableInputScale) {
    return;
}
void _Script_SwGame::SwWorldMapHologramBase::EnableInputRotation(bool bEnableInputRotation) {
    return;
}
void _Script_SwGame::SwWorldMapHologramBase::ComposeWorldMapTransform(_Script_CoreUObject::Transform& Transform, bool bFinalizeTransform) {
    return;
}
void _Script_SwGame::SwWorldMapHologramBase::ClearInputAxisValues() {
    return;
}
void _Script_SwGame::SwWorldMapHologramBase::BeginTranslatingMap(_Script_CoreUObject::Vector& StartPosition, _Script_CoreUObject::Vector& EndPosition) {
    return;
}
void _Script_SwGame::SwWorldMapHologramBase::ApplyInputTransforms(_Script_Engine::PlayerCameraManager* InPlayerCameraManager) {
    return;
}
