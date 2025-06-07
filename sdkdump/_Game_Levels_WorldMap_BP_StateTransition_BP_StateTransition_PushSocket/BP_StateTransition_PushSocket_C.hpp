#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_RsGameTechRT\RsWorldMapStateTransitionGatewayActor.hpp"
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
namespace _Game_Levels_WorldMap_BP_StateTransition_BP_StateTransition_PushSocket {
#pragma pack(push, 1)
struct BP_StateTransition_PushSocket_C : public _Script_RsGameTechRT::RsWorldMapStateTransitionGatewayActor {
    private: char pad_398[0x30]; public:
    void* get_UberGraphFrame();
    _Script_RsGameTechRT::RsWorldMapStaticMeshComponent*& get_Gateway();
    _Script_RsGameTechRT::RsWorldMapStaticMeshComponent*& get_State_One();
    bool get_State_Changed();
    void set_State_Changed(bool value);
    bool get_IsLocked();
    void set_IsLocked(bool value);
    _Game_Levels_WorldMap_BP_BP_WorldMapHologram::BP_WorldMapHologram_C*& get_WorldMapHologram_Ref();
    void* get_ForceAbility();
    bool get_AbilityRequired_();
    void set_AbilityRequired_(bool value);
    bool get_UseGateway_();
    void set_UseGateway_(bool value);
    static _Script_CoreUObject::Class* static_class();
    void CheckIfLocked();
    void SetColors();
    void UserConstructionScript();
    void ReceiveMapSectionExplored0(_Script_RsGameTechRT::RsMapSectionTag& MapSection);
    void SetVisible();
    void ReceiveStateChanged0(int32_t State);
    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_StateTransition_PushSocket(int32_t EntryPoint);
}; // Size: 0x3c8
#pragma pack(pop)
}
