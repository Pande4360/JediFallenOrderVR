#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Game_Levels_WorldMap_BP_StateTransition_BP_StateTransition_Parent\BP_StateTransition_Parent_C.hpp"
namespace _Script_RsGameTechRT {
struct RsWorldMapStaticMeshComponent;
}
namespace _Game_Levels_WorldMap_BP_BP_WorldMapHologram {
struct BP_WorldMapHologram_C;
}
namespace _Game_Levels_WorldMap_BP_BP_GreebleUI_StateTransition {
struct BP_GreebleUI_StateTransition_C;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_RsGameTechRT {
struct RsMapSectionTag;
}
namespace _Game_Levels_WorldMap_BP_StateTransition_BP_StateTransition_SavePoint {
#pragma pack(push, 1)
struct BP_StateTransition_SavePoint_C : public _Game_Levels_WorldMap_BP_StateTransition_BP_StateTransition_Parent::BP_StateTransition_Parent_C {
    private: char pad_3a8[0x28]; public:
    void* get_UberGraphFrame0();
    _Script_RsGameTechRT::RsWorldMapStaticMeshComponent*& get_SavePoint();
    _Game_Levels_WorldMap_BP_BP_WorldMapHologram::BP_WorldMapHologram_C*& get_WorldMapHologram_Ref();
    _Game_Levels_WorldMap_BP_BP_GreebleUI_StateTransition::BP_GreebleUI_StateTransition_C*& get_GreebleUI();
    bool get_bStateChanged();
    void set_bStateChanged(bool value);
    static _Script_CoreUObject::Class* static_class();
    void UserConstructionScript0();
    void ReceiveMapSectionExplored(_Script_RsGameTechRT::RsMapSectionTag& MapSection);
    void SetVisible();
    void ReceiveStateChanged(int32_t State);
    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_StateTransition_SavePoint(int32_t EntryPoint);
}; // Size: 0x3d0
#pragma pack(pop)
}
