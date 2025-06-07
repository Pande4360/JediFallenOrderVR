#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\LinearColor.hpp"
#include "..\_Script_Engine\ActorComponent.hpp"
#include "..\_Script_RsGameTechRT\RsMapSectionTag.hpp"
namespace _Game_Levels_WorldMap_BP_BP_WorldMapHologram {
struct BP_WorldMapHologram_C;
}
namespace _Script_RsGameTechRT {
struct RsWorldMapGatewayActor;
}
namespace _Script_Engine {
struct MeshComponent;
}
namespace _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_RuntimeSettings {
struct WMC_RuntimeSettings_C;
}
namespace _Script_RsGameTechRT {
struct RsWorldMapStateTransitionGatewayActor;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_RsGameTechRT {
struct RsWorldMapStaticMeshActor;
}
namespace _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_DoorsGateways {
#pragma pack(push, 1)
struct WMC_DoorsGateways_C : public _Script_Engine::ActorComponent {
    private: char pad_170[0x420]; public:
    void* get_UberGraphFrame();
    _Game_Levels_WorldMap_BP_BP_WorldMapHologram::BP_WorldMapHologram_C*& get_WorldMapHologram_Ref();
    _Script_RsGameTechRT::RsWorldMapGatewayActor*& get_GatewayActor();
    void* get_NeighboringSections();
    int32_t& get_GatewayIntStatus();
    void* get_GatewayDoorsArr();
    void* get_GatewayFinished_OneWayArr();
    void* get_Gateway_ForcePushArr();
    void* get_Gateway_Finished_ForcePushArr();
    void* get_Gateway_ForcePullArr();
    void* get_Gateway_Finished_ForcePullArr();
    void* get_Gateway_ForceTeleArr();
    void* get_Gateway_Finished_ForceTeleArr();
    void* get_Gateway_ForceSlowArr();
    void* get_Gateway_Finished_ForceSlowArr();
    void* get_Gateway_GrappleArr();
    void* get_Gateway_DivingArr();
    void* get_Gateway_DroidOverchargeArr();
    void* get_Gateway_Finished_DroidOverchargeArr();
    void* get_Gateway_DroidZiplineArr();
    void* get_Gateway_ClimbingClawArr();
    void* get_Gateway_POIArr();
    void* get_Gateway_SavePointArr();
    void* get_Gateway_DroidHackArr();
    void* get_Gateway_Finished_DroidHackArr();
    void* get_Gateway_ShortcutArr();
    void* get_WallRun_DoorsArr();
    void* get_WallRun_Finished_DoorsArr();
    void* get_DoubleJump_DoorsArr();
    void* get_DoubleJump_Finished_DoorsArr();
    void* get_TerrainMesh_Arr();
    void* get_Gateway_Elevator();
    void* get_Gateway_Elevator_Finished();
    void* get_Gateway_Shortcut_Finished();
    void* get_Gateway_Tram();
    bool get_bWallRun();
    void set_bWallRun(bool value);
    bool get_bClimbingClaws();
    void set_bClimbingClaws(bool value);
    bool get_bGrapple();
    void set_bGrapple(bool value);
    bool get_bDiving();
    void set_bDiving(bool value);
    bool get_bForceSlow();
    void set_bForceSlow(bool value);
    bool get_bForcePush();
    void set_bForcePush(bool value);
    bool get_bForcePull();
    void set_bForcePull(bool value);
    bool get_bForceTelekinesis();
    void set_bForceTelekinesis(bool value);
    bool get_bDroidOvercharge();
    void set_bDroidOvercharge(bool value);
    bool get_bDroidZipline();
    void set_bDroidZipline(bool value);
    bool get_bDroidHack();
    void set_bDroidHack(bool value);
    bool get_bDoubleJump();
    void set_bDoubleJump(bool value);
    void* get_GatewayToUnlockedStatus();
    void* get_DoorTypeToEnum();
    void* get_DoorToUI();
    void* get_ZeffoDoNotShow();
    void* get_BoganoDoNotShow();
    void* get_KashyyykDoNotShow();
    void* get_NeighboringSectionsTags();
    _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_RuntimeSettings::WMC_RuntimeSettings_C*& get_RuntimeSettings_Ref();
    void* get_IlumDoNotShow();
    void* get_FortressDoNotShow();
    void* get_FightClubDoNotShow();
    void* get_DathomirDoNotShow();
    void* get_EnumToUnlockedStatus();
    static _Script_CoreUObject::Class* static_class();
    void SetAbilityFogOfWarGateways(void*& SpecificDoorArray, bool DoorTypeUnlocked);
    void CheckDoNotShowPerSection(_Script_RsGameTechRT::RsMapSectionTag Section, bool& IsDoNotShow);
    void CheckDoNotShow(_Script_RsGameTechRT::RsMapSectionTag One, _Script_RsGameTechRT::RsMapSectionTag Two, bool& Continue_);
    void SetTram();
    void SetTransitionActors(_Script_RsGameTechRT::RsWorldMapStateTransitionGatewayActor* OneWayActor, _Script_CoreUObject::LinearColor UnlockedColor, _Script_CoreUObject::LinearColor Locked, _Script_CoreUObject::LinearColor TraversedColor, bool AbilityCheck, bool Traversed_);
    void CheckHiddenTraversal(_Script_RsGameTechRT::RsWorldMapGatewayActor* Gateway, bool& Traversal, bool& IsVisible);
    void SetDoorsUnlockedToggleVisibility(void*& Array, bool UnlockableState);
    void SetNonTraversedOneWayOvercharge(_Script_RsGameTechRT::RsWorldMapStateTransitionGatewayActor* OneWayActor, _Script_CoreUObject::LinearColor UnlockedColor, _Script_CoreUObject::LinearColor Locked, bool AbilityCheck);
    void SetTraversedOneWayOvercharge(_Script_RsGameTechRT::RsWorldMapStateTransitionGatewayActor* TraversedActor, _Script_CoreUObject::LinearColor TraversedColor, _Script_CoreUObject::LinearColor LockedColor, bool Check);
    void SetGatewayDoors(void*& Array);
    void SetNonTraversedWithChecks(_Script_RsGameTechRT::RsWorldMapStateTransitionGatewayActor* OneWayActor, _Script_CoreUObject::LinearColor UnlockedColor, _Script_CoreUObject::LinearColor Locked, bool Check);
    void SetForceRopes(void*& Array, bool UnlockableState, bool IsOneWay_, bool Print_, bool Shortcut_, bool StayOnMap_, bool IsActivated);
    void SetOneWayDoorUnlocked(void*& Array, bool UnlockableState, bool IsOneWay_, bool Print_, bool Shortcut_, bool StayOnMap_, bool IsActivated);
    void SetNonTraversedOneWay(_Script_RsGameTechRT::RsWorldMapStateTransitionGatewayActor* OneWayActor, _Script_CoreUObject::LinearColor UnlockedColor, _Script_CoreUObject::LinearColor Locked, bool TopCheck, bool BottomCheck);
    void SetTraversedOneWay(_Script_RsGameTechRT::RsWorldMapStateTransitionGatewayActor* TraversedActor, _Script_CoreUObject::LinearColor TraversedColor, _Script_CoreUObject::LinearColor LockedColor, bool Check);
    void SetVectorOnMaterials(_Script_Engine::MeshComponent* MeshComponent, _Script_CoreUObject::LinearColor Color);
    void OneWayGateways();
    void CheckIfSavePointIsVisible(_Script_RsGameTechRT::RsWorldMapGatewayActor* SavePoint, bool& SavePointVisible_);
    void ClearAllDoorGatewayArrays();
    void SetGatewayAndUnlockedStatus();
    void ChangeDoorVisibility(bool Collapsed_);
    void CheckForAdjacentSections(_Script_RsGameTechRT::RsWorldMapGatewayActor* Gateway);
    void CheckUnlockablePerDoorType(bool UnlockableOnMapOpen);
    void CheckIfDoorIsTemplate(_Script_RsGameTechRT::RsWorldMapGatewayActor* PossibleHiddenDoor);
    void CheckIfBothConnectionsAreExplored(_Script_RsGameTechRT::RsWorldMapGatewayActor* CurrentGateway, bool& BothConnected_);
    void SetLocationForDoorUI(_Script_RsGameTechRT::RsWorldMapGatewayActor* DoorActor, bool OnWorldMapOn);
    void CreateUIForEachType(_Script_RsGameTechRT::RsWorldMapGatewayActor* Type, bool CreateUICheckArea);
    void CheckArrayUnlockable(void*& Array, bool IsUnlocked, bool CheckDoorOnOpen, bool Gateways_, bool Shortcut_, bool Activated_, bool StayOnMap_);
    void CheckandSetLoadouts();
    void SetDoorsUnlocked(void*& Array, bool UnlockableState, bool IsOneWay_, bool Print_, bool Shortcut_, bool StayOnMap_, bool IsActivated);
    void CheckAllArraysOfDoors();
    void AssignMeshesToArrays(_Script_RsGameTechRT::RsWorldMapStaticMeshActor* Mesh);
    void AssignGatewaysAndDoors(_Script_RsGameTechRT::RsWorldMapGatewayActor* CurrentGateway);
    void ReceiveBeginPlay0();
    void SetMultiplierForAllDoors();
    void OnTickDoorClassification();
    void RunSecondaryTicks();
    void SetFogOfWarGateways();
    void ExecuteUbergraph_WMC_DoorsGateways(int32_t EntryPoint);
}; // Size: 0x590
#pragma pack(pop)
}
