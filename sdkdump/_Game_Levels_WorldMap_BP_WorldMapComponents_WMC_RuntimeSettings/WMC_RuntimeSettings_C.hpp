#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\LinearColor.hpp"
#include "..\_Script_Engine\ActorComponent.hpp"
namespace _Game_Levels_WorldMap_BP_BP_WorldMapHologram {
struct BP_WorldMapHologram_C;
}
namespace _Script_Engine {
struct MaterialInstanceDynamic;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
struct MeshComponent;
}
namespace _Script_RsGameTechRT {
struct RsWorldMapGatewayActor;
}
namespace _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_RuntimeSettings {
#pragma pack(push, 1)
struct WMC_RuntimeSettings_C : public _Script_Engine::ActorComponent {
    private: char pad_170[0x118]; public:
    void* get_UberGraphFrame();
    _Game_Levels_WorldMap_BP_BP_WorldMapHologram::BP_WorldMapHologram_C*& get_WorldMapHologram_Ref();
    _Script_Engine::MaterialInstanceDynamic*& get_VariableMaterial();
    float& get_Exposure();
    float& get_BackgroundDarkness();
    float& get_OverallEmissiveIntensity();
    float& get_StayOnMapBlinking_();
    float& get_StayOnMapBlinkingSpeed();
    float& get_StayOnMapMultiplier();
    float& get_FogOfWarBlinking_();
    float& get_FogOfWarBlinkingSpeed();
    float& get_FogOfWarMultiplier();
    float& get_SavePointsBlinking_();
    float& get_SavePointsBlinkingSpeed();
    float& get_SavePointsMultiplier();
    float& get_TraversibleBlinking_();
    float& get_TraversibleBlinkingSpeed();
    float& get_TraversibleMultiplier();
    float& get_MoveableBlinking_();
    float& get_MoveableBlinkingSpeed();
    float& get_MoveableMultiplier();
    float& get_ArrowBlinking_();
    float& get_ArrowBlinkingSpeed();
    float& get_ArrowMultiplier();
    float& get_ShipBlinking_();
    float& get_ShipBlinkingSpeed();
    float& get_ShipMultiplier();
    float& get_MissionObjectiveBlinking_();
    float& get_MissionObjectiveBlinkingSpeed();
    float& get_MissionObjectiveMultiplier();
    float& get_BoganoBrightness();
    float& get_DathomirBrightness();
    float& get_FightClubBrightness();
    float& get_FortressBrightness();
    float& get_IlumBrightness();
    float& get_KashyyykBrightness();
    float& get_DoorBlinking_();
    float& get_DoorBlinkingSpeed();
    float& get_DoorMultiplier();
    float& get_MissionObjectiveLow();
    float& get_ZeffoBrightness();
    float& get_OverallEmissiveValue();
    float& get_GeoemetryEmissiveValue();
    float& get_OverallOpacity();
    float& get_GalaxyOverallEmissiveValue();
    float& get_StartingBlur();
    float& get_BlurIntroSpeed();
    float& get_TotalBlur();
    float& get_IntroDistortionSpeed();
    float& get_PlanetMissionObjectiveBlinking_();
    float& get_PlanetMissionObjectiveBlinkingSpeed();
    float& get_PlanetMissionObjectiveMultiplier();
    float& get_TerrainBlinking_();
    float& get_TerrainBlinkingSpeed();
    float& get_TerrainMultiplier();
    float& get_CollectiblesAvailableBlinking_();
    float& get_CollectiblesAvailableBlinkingSpeed();
    float& get_CollectiblesAvailableMultiplier();
    float& get_RegionMultiplier();
    float& get_ElevationOverlayColorMix();
    float& get_UnlockableBlinking_();
    float& get_UnlockableBlinkingSpeed();
    float& get_UnlockableMultiplier();
    float& get_AuxillaryTerrainMultiplier();
    float& get_AuxillaryFractalHigh();
    bool get_bInterpDarkness();
    void set_bInterpDarkness(bool value);
    bool get_bDarknessSame();
    void set_bDarknessSame(bool value);
    static _Script_CoreUObject::Class* static_class();
    void RuntimeSettingsOnTick(_Script_Engine::MeshComponent* MeshComponent);
    void SetStayOnMapGateways(void*& SpecificDoorArray, bool DoorTypeUnlocked);
    void SetSpecificVisibilityDoorArr(void*& SpecificDoorArray, float fBlinking_, float fBlinkingSpeed, float fMultiplier);
    void SetGatewayDoorActors(_Script_RsGameTechRT::RsWorldMapGatewayActor*& SpecificDoorArray, bool DoorTypeUnlocked);
    void SetStayOnMap(void*& SpecificDoorArray, bool DoorTypeUnlocked);
    void SetDoubleJumpDoorActors(void*& SpecificDoorArray, bool DoorTypeUnlocked);
    void SetLightsaber(void*& SpecificDoorArray, bool DoorTypeUnlocked);
    void SetSliceableActors(void*& SpecificDoorArray, bool DoorTypeUnlocked);
    void SetForceFieldActors(void*& SpecificDoorArray);
    void SetPuzzleActors(void*& SpecificDoorArray, bool DoorTypeUnlocked);
    void SetForceRopeActors(void*& SpecificDoorArray, bool DoorTypeUnlocked);
    void SetElevatorSpecific(void*& SpecificDoorArray, bool DoorTypeUnlocked);
    void SetRopeDoorActors(void*& SpecificDoorArray, bool DoorTypeUnlocked);
    void SetWallRunDoorActors(void*& SpecificDoorArray, bool DoorTypeUnlocked);
    void SetSpecificDoorArr(void*& SpecificDoorArray, bool DoorTypeUnlocked, bool OneWay_, bool AlwaysVisible_, float fBlinking_, float fBlinkingSpeed, float fMultiplier);
    void ResetCollectibleValues(_Script_Engine::MeshComponent* MeshComponent);
    void SetCollectibleRegion(_Script_Engine::MeshComponent* MeshComponent);
    void SetPlanetSpecificBrightness();
    _Script_CoreUObject::LinearColor GetCollectibleRegionColor();
    void GetRegionMultiplier(float& Multiplier);
    void ResetValues(_Script_Engine::MeshComponent* MeshComponent);
    void GetAndSetElevationOverlayColor(_Script_Engine::MeshComponent* MeshComponent);
    void GetAndSetElevationOverlayColorMix(_Script_Engine::MeshComponent* MeshComponent);
    void GetTotalBlur(float& TotalBlur);
    void GetBlurIntroSpeed(float& BlurIntroSpeed);
    void GetButtonPressThreshold(float& ButtonPressThreshold);
    void GetIntroDistortionSpeed(float& IntroDistortionSpeed);
    void GetStartingBlur(float& StartingBlur);
    void RunPlanetSpecificValues();
    void SetAllLayerCompParameters();
    void SetDeathLocationParameters(_Script_Engine::MeshComponent* MeshComponent);
    void SetPlanetMissionObjectiveParameters(_Script_Engine::MeshComponent* MeshComponent);
    void SetGeometryMultiplier(_Script_Engine::MeshComponent* MeshComponent);
    void SetMissionObjectiveSectionParameters(_Script_Engine::MeshComponent* MeshComponent, bool IsSameInteriorLevel);
    void SetTerrainMeshParameters(_Script_Engine::MeshComponent* MeshComponent, bool IsAuxillaryTerrain_);
    void SetShipParameters(_Script_Engine::MeshComponent* MeshComponent);
    void SetArrowParameters(_Script_Engine::MeshComponent* ArrowComponent);
    void SetForTheSpecificGateway(_Script_RsGameTechRT::RsWorldMapGatewayActor* Gateway, void*& InitialArray, bool DoorTypeUnlocked);
    void SetSpecificGateway(_Script_RsGameTechRT::RsWorldMapGatewayActor* Gateway, void*& InitialArray, void* Blinking_, void* BlinkingSpeed, bool DoorTypeUnlocked, bool IsElevatorOrShorcut, float fBlinking_, float fBlinkingSpeed);
    void SetDoorsUnlockable(_Script_Engine::MeshComponent* MeshComponent);
    void SetAdjacentSectionColors(_Script_Engine::MeshComponent* MeshComponent);
    void SetShortcutGatewayActors(void*& SpecificDoorArray, bool DoorTypeUnlocked);
    void SetElevatorGatewayActors(void*& SpecificDoorArray, bool DoorTypeUnlocked);
    void SetDoubleJumpGatewayActors(void*& SpecificDoorArray, bool DoorTypeUnlocked);
    void SetAbilityFogOfWarGateways(void*& SpecificDoorArray, bool DoorTypeUnlocked);
    void SetDoorMultipliers(_Script_Engine::MeshComponent* MeshComponent);
    void SetSpecificGatewayArr(void*& SpecificDoorArray, bool DoorTypeUnlocked, bool IsElevatorOrShorcut, bool AlwaysVisible_, float fBlinking_, float fBlinkingSpeed, float fMultiplier, bool Invisible_);
    void SetTrams(_Script_Engine::MeshComponent* MeshComponent, _Script_CoreUObject::LinearColor Color);
    void SetSavePoints(_Script_Engine::MeshComponent* MeshComponent);
    void SetGatewaysOfHighlightedSections(_Script_Engine::MeshComponent* MeshComponent);
    void SetFogOfWarGateways(_Script_Engine::MeshComponent* MeshComponent);
    void ReceiveBeginPlay0();
    void SetMaterialParametersInstance();
    void SetPlanetSpecificBrightness_Event();
    void RunPlanetSpecificValues_Event();
    void ReceiveTick0(float DeltaSeconds);
    void ExecuteUbergraph_WMC_RuntimeSettings(int32_t EntryPoint);
}; // Size: 0x288
#pragma pack(pop)
}
