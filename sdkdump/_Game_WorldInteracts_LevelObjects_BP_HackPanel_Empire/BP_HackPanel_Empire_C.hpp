#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Game_WorldInteracts_LevelObjects_BP_HackPanel\BP_HackPanel_C.hpp"
namespace _Script_RsGameTechRT {
struct RsWorldMapStateTransitionGatewayComponent;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
struct StaticMeshComponent;
}
namespace _Script_RsGameTechRT {
struct RsAIPOI;
}
namespace _Game_WorldInteracts_LevelObjects_BP_HackPanel_Empire {
#pragma pack(push, 1)
struct BP_HackPanel_Empire_C : public _Game_WorldInteracts_LevelObjects_BP_HackPanel::BP_HackPanel_C {
    private: char pad_690[0x18]; public:
    void* get_UberGraphFrame();
    _Script_RsGameTechRT::RsWorldMapStateTransitionGatewayComponent*& get_RsWorldMapStateTransitionGateway();
    _Script_Engine::StaticMeshComponent*& get_HackPanel_Empire_BodyCase_01();
    static _Script_CoreUObject::Class* static_class();
    void UserConstructionScript();
    void ReceiveBeginPlay();
    void PanelHacked(_Script_RsGameTechRT::RsAIPOI* POI);
    void ExecuteUbergraph_BP_HackPanel_Empire(int32_t EntryPoint);
}; // Size: 0x6a8
#pragma pack(pop)
}
