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
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_RsGameTechRT {
struct RsMapSectionTag;
}
namespace _Game_Levels_WorldMap_BP_StateTransition_BP_StateTransition_General {
#pragma pack(push, 1)
struct BP_StateTransition_General_C : public _Game_Levels_WorldMap_BP_StateTransition_BP_StateTransition_Parent::BP_StateTransition_Parent_C {
    private: char pad_3a8[0x30]; public:
    void* get_UberGraphFrame0();
    _Script_RsGameTechRT::RsWorldMapStaticMeshComponent*& get_State_Two();
    _Script_RsGameTechRT::RsWorldMapStaticMeshComponent*& get_State_One();
    bool get_State_Changed();
    void set_State_Changed(bool value);
    bool get_IsLocked();
    void set_IsLocked(bool value);
    _Game_Levels_WorldMap_BP_BP_WorldMapHologram::BP_WorldMapHologram_C*& get_WorldMapHologram_Ref();
    void* get_ForceAbility();
    static _Script_CoreUObject::Class* static_class();
    void CheckIfLocked();
    void SetColors();
    void UserConstructionScript0();
    void ReceiveMapSectionExplored(_Script_RsGameTechRT::RsMapSectionTag& MapSection);
    void SetVisible();
    void ReceiveStateChanged(int32_t State);
    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_StateTransition_General(int32_t EntryPoint);
}; // Size: 0x3d8
#pragma pack(pop)
}
