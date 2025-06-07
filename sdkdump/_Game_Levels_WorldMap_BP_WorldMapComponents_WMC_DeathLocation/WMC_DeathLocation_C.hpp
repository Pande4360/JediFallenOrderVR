#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\ActorComponent.hpp"
namespace _Game_Levels_WorldMap_BP_BP_WorldMapHologram {
struct BP_WorldMapHologram_C;
}
namespace _Game_UI_Holomap_UI_DeathLocation {
struct UI_DeathLocation_C;
}
namespace _Game_Characters_Hero_Logic_BP_SwPlayerState {
struct BP_SwPlayerState_C;
}
namespace _Script_RsGameTechRT {
struct RsWorldMapGatewayActor;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_DeathLocation {
#pragma pack(push, 1)
struct WMC_DeathLocation_C : public _Script_Engine::ActorComponent {
    private: char pad_170[0x48]; public:
    void* get_UberGraphFrame();
    _Game_Levels_WorldMap_BP_BP_WorldMapHologram::BP_WorldMapHologram_C*& get_WorldMapHologram_Ref();
    _Game_UI_Holomap_UI_DeathLocation::UI_DeathLocation_C*& get_DeathUI();
    bool get_DeathVisible();
    void set_DeathVisible(bool value);
    void* get_DeathLocation();
    void* get_DeathPlanet();
    _Script_RsGameTechRT::RsWorldMapGatewayActor*& get_DeathLocationPOI();
    _Script_RsGameTechRT::RsWorldMapGatewayActor*& get_NewVar_0();
    _Game_Characters_Hero_Logic_BP_SwPlayerState::BP_SwPlayerState_C*& get_PlayerState_Ref();
    static _Script_CoreUObject::Class* static_class();
    void RemoveDeathLocationOnClose();
    void RemoveDeathLocationFromParent();
    void SetDeathLocation();
    void DeathPOIVisibility();
    void UpdateDeathLocation();
    void CreateDeathLocation();
    void ReceiveBeginPlay0();
    void UpdateDeathLocationOnDeath();
    void ExecuteUbergraph_WMC_DeathLocation(int32_t EntryPoint);
}; // Size: 0x1b8
#pragma pack(pop)
}
