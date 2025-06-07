#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Game_Effects_Blueprints_BPFX_SaveBeacon_PP\BPFX_SaveBeacon_PP_C.hpp"
namespace _Script_Engine {
struct TimelineComponent;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_Effects_Blueprints_BPFX_ForceEcho_PP {
#pragma pack(push, 1)
struct BPFX_ForceEcho_PP_C : public _Game_Effects_Blueprints_BPFX_SaveBeacon_PP::BPFX_SaveBeacon_PP_C {
    private: char pad_390[0x28]; public:
    void* get_UberGraphFrame0();
    float& get_BeginTimeline_NewTrack_0_C96AC96649B3961122EB9DB95EBCC362();
    void* get_BeginTimeline__Direction_C96AC96649B3961122EB9DB95EBCC362();
    _Script_Engine::TimelineComponent*& get_BeginTimeline();
    float& get_EndTimeline_NewTrack_0_659EB02642A21AB65329E788D1E23FFF();
    void* get_EndTimeline__Direction_659EB02642A21AB65329E788D1E23FFF();
    _Script_Engine::TimelineComponent*& get_EndTimeline();
    static _Script_CoreUObject::Class* static_class();
    void UserConstructionScript();
    void EndTimeline__FinishedFunc();
    void EndTimeline__UpdateFunc();
    void BeginTimeline__FinishedFunc();
    void BeginTimeline__UpdateFunc();
    void EndPPFX();
    void PlayStartingTimeLine0();
    void ExecuteUbergraph_BPFX_ForceEcho_PP(int32_t EntryPoint);
}; // Size: 0x3b8
#pragma pack(pop)
}
