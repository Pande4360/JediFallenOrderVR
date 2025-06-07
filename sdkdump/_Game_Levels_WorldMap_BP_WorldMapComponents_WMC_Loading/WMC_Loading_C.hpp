#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\Vector.hpp"
#include "..\_Script_Engine\ActorComponent.hpp"
#include "..\_Script_RsGameTechRT\RsBitfield_HeroLoadoutFlags.hpp"
namespace _Game_Levels_WorldMap_BP_BP_WorldMapHologram {
struct BP_WorldMapHologram_C;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_Loading {
#pragma pack(push, 1)
struct WMC_Loading_C : public _Script_Engine::ActorComponent {
    private: char pad_170[0x278]; public:
    void* get_UberGraphFrame();
    _Game_Levels_WorldMap_BP_BP_WorldMapHologram::BP_WorldMapHologram_C*& get_WorldMapHologram_Ref();
    void* get_WorldNames();
    void* get_PlanetToNameDict();
    void* get_PlanetsUnlockedArr();
    void* get_PlayerPlanet();
    void* get_WorldPlanetsToPlanet();
    void* get_MapAreaArr();
    void* get_GalaxyArr();
    void* get_CurrentPlanetEnum();
    bool get_ChangeMapToGalaxy();
    void set_ChangeMapToGalaxy(bool value);
    void* get_KAS_Name();
    void* get_ZEF_Name();
    void* get_BOG_Name();
    void* get_DAT_Name();
    void* get_UFC_Name();
    void* get_FORT_Name();
    void* get_ILUM_Name();
    void* get_GXY_Name();
    void* get_GalaxySetLocationEnum();
    void* get_PreviouslySelectedPlanetEnum();
    float& get_MovementLerpFloat();
    void* get_WorldMap_PlanetEnum();
    bool get_bFightClubCine();
    void set_bFightClubCine(bool value);
    bool get_bInterpToPlanet();
    void set_bInterpToPlanet(bool value);
    float& get_PlanetInterpValue();
    bool get_bInterpToPlayer();
    void set_bInterpToPlayer(bool value);
    float& get_PlayerInterpValue();
    bool get_ToCenter_();
    void set_ToCenter_(bool value);
    float& get_PlanetInterpSpeed();
    bool get_StartLerpTransform();
    void set_StartLerpTransform(bool value);
    bool get_bImmediate_();
    void set_bImmediate_(bool value);
    static _Script_CoreUObject::Class* static_class();
    void Transform_Immediate_Planet();
    void SetLocationToNur();
    void SetLocationToSelectionPlayer_Interp();
    void TransformInterpTick_Player();
    void TransformInterpTick_Planet();
    void SetLocationToSelectionPlanet_Interp(bool ToCenter_, bool Immediate_);
    void SetLocationToSelection_Timeline(bool OnStart, _Script_CoreUObject::Vector Beginning, bool& Interp);
    void TurnOffArrowOnOtherPlanets();
    void TurnOffShipOnOtherPlanets();
    void SetLocationToSelection(bool ToGalaxy_);
    void CheckIfGalaxy();
    void GetCurrentLevel();
    void CheckIfInHyperspace();
    void SetGalaxyPlanetRegionsExplored();
    void SetPlanetUnlockedInGalaxy();
    void GalaxyMapPrep();
    void SetToLocalMap(bool OnOpen_);
    void ReceiveBeginPlay0();
    void SetToGalaxyMap(bool BeginPlay_);
    void SetPlanetForTravel();
    void InitializeLocalMap();
    void InitializeGalaxyMap();
    void SetPlanetEnum();
    void LoadNewPlanet(_Script_RsGameTechRT::RsBitfield_HeroLoadoutFlags OldFlags, _Script_RsGameTechRT::RsBitfield_HeroLoadoutFlags NewFlags);
    void ReceiveTick0(float DeltaSeconds);
    void OnLevelChanged();
    void DelayTransformInterp();
    void ExecuteUbergraph_WMC_Loading(int32_t EntryPoint);
}; // Size: 0x3e8
#pragma pack(pop)
}
