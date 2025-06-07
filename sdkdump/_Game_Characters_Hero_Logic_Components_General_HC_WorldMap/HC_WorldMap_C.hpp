#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_RsGameTechRT\RsHeroComponent.hpp"
#include "..\_Script_RsGameTechRT\RsMapSectionTag.hpp"
namespace _Game_Characters_Hero_Logic_BP_Hero {
struct BP_Hero_C;
}
namespace _Game_Levels_WorldMap_BP_BP_WorldMapHologram {
struct BP_WorldMapHologram_C;
}
namespace _Game_Characters_BuddyDroid_01_Logic_BP_BuddyDroid {
struct BP_BuddyDroid_C;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_Characters_Hero_Logic_BP_SwPlayerController {
struct BP_SwPlayerController_C;
}
namespace _Script_SwGame {
struct SwWorldMapHologramSettings;
}
namespace _Game_Characters_Hero_Logic_Components_General_HC_WorldMap {
#pragma pack(push, 1)
struct HC_WorldMap_C : public _Script_RsGameTechRT::RsHeroComponent {
    private: char pad_180[0x48]; public:
    void* get_UberGraphFrame();
    _Game_Characters_Hero_Logic_BP_Hero::BP_Hero_C*& get_Hero_Ref();
    _Game_Characters_BuddyDroid_01_Logic_BP_BuddyDroid::BP_BuddyDroid_C*& get_Droid_Ref();
    _Game_Levels_WorldMap_BP_BP_WorldMapHologram::BP_WorldMapHologram_C*& get_WorldMapHologram_Ref();
    _Game_Characters_Hero_Logic_BP_SwPlayerController::BP_SwPlayerController_C*& get_R4PlayerController();
    bool get_ShowMap();
    void set_ShowMap(bool value);
    _Script_SwGame::SwWorldMapHologramSettings*& get_HolomapSettings();
    bool get_TutorialInitiated();
    void set_TutorialInitiated(bool value);
    bool get_TutorialFinished();
    void set_TutorialFinished(bool value);
    int32_t& get_CurrentCollectables();
    int32_t& get_TotalCollectables();
    void* get_CurrentPlanet();
    bool get_BD_1BusyDebounce();
    void set_BD_1BusyDebounce(bool value);
    bool get_bMantisTriggerEntered();
    void set_bMantisTriggerEntered(bool value);
    static _Script_CoreUObject::Class* static_class();
    void InitializeComponent();
    void CountTotalCollectables(void* WorldName, int32_t& current, int32_t& Total);
    void OnCameraModeCompleted_WorldMapFollow();
    void ToggleWorldMap();
    void TurnOffMap();
    void ReceiveBeginPlay();
    void CameraModeCompleted_WorldMapFollow(void* CameraModeName);
    void CollectableAcquired(void* CollectableType, void*& WorldName, void*& RegionName);
    void Map_Section_Explored(_Script_RsGameTechRT::RsMapSectionTag Map_Section);
    void BD_1IsBusyCheck();
    void ExecuteUbergraph_HC_WorldMap(int32_t EntryPoint);
}; // Size: 0x1c8
#pragma pack(pop)
}
