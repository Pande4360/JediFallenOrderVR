#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_RsGameTechRT\RsWorldMapGatewayActor.hpp"
namespace _Game_Levels_WorldMap_BP_BP_WorldMapHologram {
struct BP_WorldMapHologram_C;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_Levels_WorldMap_BP_GatewayActor_BP_Gateway_OneWay {
#pragma pack(push, 1)
struct BP_Gateway_OneWay_C : public _Script_RsGameTechRT::RsWorldMapGatewayActor {
    private: char pad_390[0x18]; public:
    void* get_UberGraphFrame();
    _Game_Levels_WorldMap_BP_BP_WorldMapHologram::BP_WorldMapHologram_C*& get_WorldMapHologram_Ref();
    int32_t& get_IsConnectedToCurrentRegion();
    bool get_SingleConnection_();
    void set_SingleConnection_(bool value);
    static _Script_CoreUObject::Class* static_class();
    void CheckIfBothSectionsAreExplored(bool& SectionsExplored);
    void UserConstructionScript();
    void SetVisible();
    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_Gateway_OneWay(int32_t EntryPoint);
}; // Size: 0x3a8
#pragma pack(pop)
}
