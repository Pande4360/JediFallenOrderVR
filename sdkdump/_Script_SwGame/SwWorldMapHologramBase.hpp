#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\Rotator.hpp"
#include "..\_Script_CoreUObject\Transform.hpp"
#include "..\_Script_CoreUObject\Vector.hpp"
#include "..\_Script_RsGameTechRT\RsMapSectionTag.hpp"
#include "..\_Script_RsGameTechRT\RsWorldMapHologramBase.hpp"
namespace _Script_SwGame {
struct SwWorldMapHologramSettings;
}
namespace _Script_Engine {
struct SphereComponent;
}
namespace _Script_Engine {
struct PostProcessComponent;
}
namespace _Script_Engine {
struct Actor;
}
namespace _Script_RsGameTechRT {
struct RsWorldMapStaticMeshComponent;
}
namespace _Script_SwGame {
struct SwWorldMapIndicatorComponent;
}
namespace _Script_RsGameTechRT {
struct RsCharacter;
}
namespace _Script_RsGameTechRT {
struct RsWorldMap;
}
namespace _Script_Engine {
struct StaticMesh;
}
namespace _Script_Engine {
struct TimelineComponent;
}
namespace _Script_Engine {
struct PlayerCameraManager;
}
namespace _Script_AkAudio {
struct AkAudioEvent;
}
namespace _Script_Engine {
struct SceneComponent;
}
namespace _Script_Engine {
struct MaterialInstanceDynamic;
}
namespace _Script_Engine {
struct MaterialInterface;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_CoreUObject {
struct LinearColor;
}
namespace _Script_Engine {
struct World;
}
namespace _Script_SwGame {
#pragma pack(push, 1)
struct SwWorldMapHologramBase : public _Script_RsGameTechRT::RsWorldMapHologramBase {
    private: char pad_370[0xc00]; public:
    _Script_SwGame::SwWorldMapHologramSettings*& get_RuntimeSettings();
    void* get_PlayerArrowStaticMeshPtr();
    void* get_PlayerArrowMaterialPtr();
    void* get_LocationMarkerStaticMeshPtr();
    void* get_LocationMarkerMaterialPtr();
    void* get_BaseHologramCompositeMaterialPtr();
    void* get_HologramMaskMeshPtr();
    void* get_HologramMaskMaterialPtr();
    _Script_Engine::PostProcessComponent*& get_PostProcessComposite();
    _Script_Engine::SphereComponent*& get_PostProcessShape();
    _Script_RsGameTechRT::RsWorldMapStaticMeshComponent*& get_HologramMaskMeshComponent();
    _Script_SwGame::SwWorldMapIndicatorComponent*& get_PlayerArrowComponent();
    _Script_SwGame::SwWorldMapIndicatorComponent*& get_LocationMarkerComponent();
    _Script_Engine::TimelineComponent*& get_TransformTimelineComponent();
    _Script_Engine::Actor*& get_HologramConeActor();
    float& get_ControllerYawValue();
    float& get_MouseYawValue();
    void* get_TranslationDelta();
    float& get_VerticalPanDelta();
    float& get_InputAxisZoom();
    float& get_InputAxisRotate();
    float& get_InputMouseAxisRotate();
    void* get_InputAxisMove();
    bool get_bRightBumperDown();
    void set_bRightBumperDown(bool value);
    bool get_bLeftBumperDown();
    void set_bLeftBumperDown(bool value);
    _Script_AkAudio::AkAudioEvent*& get_AudioEvent_MapOpen();
    _Script_AkAudio::AkAudioEvent*& get_AudioEvent_MapClose();
    _Script_AkAudio::AkAudioEvent*& get_AudioEvent_MapRegionSelect();
    _Script_AkAudio::AkAudioEvent*& get_AudioEvent_SnapToPosition();
    _Script_AkAudio::AkAudioEvent*& get_AudioEvent_PeriodicDistortion();
    _Script_AkAudio::AkAudioEvent*& get_AudioEvent_InteriorLevelChanged();
    bool get_bIsMapZooming();
    void set_bIsMapZooming(bool value);
    void* get_HolomapCenterLocation();
    _Script_RsGameTechRT::RsCharacter*& get_PlayerCharacter();
    _Script_Engine::PlayerCameraManager*& get_PlayerCameraManager();
    void* get_SelectedMapSection();
    bool get_bLockstepMovementThroughGateways();
    void set_bLockstepMovementThroughGateways(bool value);
    bool get_bLockstep3DTargeting();
    void set_bLockstep3DTargeting(bool value);
    void* get_OnHoverOverExploredMapSections();
    _Script_Engine::SceneComponent*& get_WorldMapTransformRoot();
    bool get_bIsWorldMapOpen();
    void set_bIsWorldMapOpen(bool value);
    _Script_RsGameTechRT::RsWorldMap*& get_RsWorldMap();
    void* get_HolomapMode();
    _Script_Engine::MaterialInstanceDynamic*& get_HologramCompositeMaterial();
    _Script_Engine::StaticMesh*& get_PlayerArrowStaticMesh();
    _Script_Engine::MaterialInterface*& get_PlayerArrowMaterial();
    _Script_Engine::StaticMesh*& get_HologramMaskMesh();
    _Script_Engine::MaterialInterface*& get_HologramMaskMaterial();
    void* get_ActiveMapSectionActors();
    void* get_OverrideActiveMapSections();
    void* get_NonActiveMapSectionActors();
    static _Script_CoreUObject::Class* static_class();
    void TranslationTimelineInterpFunc(float InterpValue);
    void TranslationTimelineFinished();
    _Script_RsGameTechRT::RsMapSectionTag SwitchToTargetedNonActiveRegion();
    void SnapToPlayerArrow(bool bFinalizeTransform);
    void SetWorldMapTransform(_Script_CoreUObject::Transform& Transform, bool bFinalizeTransform);
    void SetWorldMapScale(float UniformScale, bool bFinalizeTransform);
    void SetWorldMapRotation(_Script_CoreUObject::Rotator& Rotator, bool bFinalizeTransform);
    void SetMapSectionStatusColor(_Script_RsGameTechRT::RsMapSectionTag& MapSectionTag, _Script_CoreUObject::LinearColor& InLinearColor);
    void SetActiveInteriorLevel(void* InteriorLevel, bool bApplyInteriorLevelTranslation);
    void ScaleWorldMapAboutPoint(float UniformScale, _Script_CoreUObject::Vector& Location, bool bFinalizeTransform);
    void RotateWorldMapAboutPoint(_Script_CoreUObject::Rotator& Rotator, _Script_CoreUObject::Vector& Location, bool bFinalizeTransform);
    void ResetTransforms(bool bFinalizeTransform);
    void ReceiveWorldMapOpened();
    void ReceiveWorldMapLevelChanged(void*& WorldMapName);
    void ReceiveWorldMapClosed();
    void ReceiveSecretMapSectionExplored(_Script_RsGameTechRT::RsMapSectionTag& MapSection);
    void ReceiveRuntimeSettingsChanged();
    void ReceiveRegionSelectionChanged(void*& RegionName);
    void ReceiveMapTranslationFinished();
    void ReceiveMapSectionSelectionChanged(_Script_RsGameTechRT::RsMapSectionTag& NewMapSection);
    void ReceiveMapSectionExplored(_Script_RsGameTechRT::RsMapSectionTag& MapSection);
    void ReceiveMapNavigationModeChange(bool bIsFreeTranslationMode);
    void ReceiveInteriorLevelHoverEnd(void* InteriorLevel);
    void ReceiveInteriorLevelHoverBegin(void* InteriorLevel);
    void ReceiveInteriorLevelChanged(void* NewInteriorLevel);
    _Script_RsGameTechRT::RsMapSectionTag LineTraceWorldMap(_Script_Engine::World* InWorld, bool bOnlyActiveInteriorLayer);
    float GetZoomDelta();
    _Script_CoreUObject::Transform GetWorldMapTransform();
    float GetWorldMapScale();
    _Script_CoreUObject::Rotator GetWorldMapRotation();
    _Script_CoreUObject::Vector GetRelativeHolomapCenterOffset(_Script_CoreUObject::Rotator& PlayerRotation);
    void FinalizeTransform();
    void EnableInputTranslation(bool bEnableInputTranslation);
    void EnableInputTransforms(bool bEnableInputTransforms);
    void EnableInputScale(bool bEnableInputScale);
    void EnableInputRotation(bool bEnableInputRotation);
    void ComposeWorldMapTransform(_Script_CoreUObject::Transform& Transform, bool bFinalizeTransform);
    void ClearInputAxisValues();
    void BeginTranslatingMap(_Script_CoreUObject::Vector& StartPosition, _Script_CoreUObject::Vector& EndPosition);
    void ApplyInputTransforms(_Script_Engine::PlayerCameraManager* InPlayerCameraManager);
}; // Size: 0xf70
#pragma pack(pop)
}
