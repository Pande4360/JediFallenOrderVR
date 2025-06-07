#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\Vector.hpp"
#include "..\_Script_Engine\ActorComponent.hpp"
#include "..\_Script_RsGameTechRT\RsMapSectionTag.hpp"
namespace _Game_Levels_WorldMap_BP_BP_WorldMapHologram {
struct BP_WorldMapHologram_C;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_Cinematic {
#pragma pack(push, 1)
struct WMC_Cinematic_C : public _Script_Engine::ActorComponent {
    private: char pad_170[0xd8]; public:
    void* get_UberGraphFrame();
    _Game_Levels_WorldMap_BP_BP_WorldMapHologram::BP_WorldMapHologram_C*& get_WorldMapHologram_Ref();
    bool get_CineToBeScaled();
    void set_CineToBeScaled(bool value);
    void* get_CineFocusedMapSection();
    void* get_Cine_FocusedMapSectionTMap();
    bool get_TransformMap();
    void set_TransformMap(bool value);
    float& get_Cine_Scale();
    float& get_Cine_Yaw();
    float& get_Cine_CamOffset();
    float& get_Cine_SmallCamOffset();
    void* get_Cine_InMapLocation();
    void* get_Cine_NameToMST();
    void* get_Cine_HolomapLocation();
    void* get_Cine_CinematicName();
    void* get_Cine_MSTToExplore();
    bool get_bIsCine();
    void set_bIsCine(bool value);
    static _Script_CoreUObject::Class* static_class();
    void SetMeshesExplored(_Script_RsGameTechRT::RsMapSectionTag Tag, bool IsTerrain_, bool On_);
    void ChangeScaleOfMap(float Scale);
    void SetCineSelectedSectionParameters();
    void Cine_HideAllGatewayActors(void* Cine);
    void Cine_OnTick();
    void Cine_OnEnd();
    void Cine_SetNewFocusLocation();
    void Cine_SetCinematicAndHologramLocation(_Script_CoreUObject::Vector CineHologramLocation, void* Cinematic);
    void GetMSTFromStruct(int32_t MapSectionTagLocation, void* Cinematic, bool SpecificMapSection_, _Script_CoreUObject::Vector& CentroidOfSelectedTag, _Script_CoreUObject::Vector& AverageOfCinematicTags);
    void DecideMaskFate();
    void Cine_OnStart();
    void ReceiveBeginPlay0();
    void ExecuteUbergraph_WMC_Cinematic(int32_t EntryPoint);
}; // Size: 0x248
#pragma pack(pop)
}
