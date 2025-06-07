#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\Actor.hpp"
namespace _Script_Engine {
struct PostProcessComponent;
}
namespace _Script_Engine {
struct SceneComponent;
}
namespace _Script_Engine {
struct TimelineComponent;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_Effects_Blueprints_BPFX_SaveBeacon_PP {
#pragma pack(push, 1)
struct BPFX_SaveBeacon_PP_C : public _Script_Engine::Actor {
    private: char pad_360[0x30]; public:
    void* get_UberGraphFrame();
    _Script_Engine::PostProcessComponent*& get_PostProcess();
    _Script_Engine::SceneComponent*& get_DefaultSceneRoot();
    float& get_Timeline_0_NewTrack_0_AE5BCB1C4E324B10DFDF72BE35222CC4();
    void* get_Timeline_0__Direction_AE5BCB1C4E324B10DFDF72BE35222CC4();
    _Script_Engine::TimelineComponent*& get_Timeline_0();
    float& get_Blend();
    static _Script_CoreUObject::Class* static_class();
    void UserConstructionScript0();
    void Timeline_0__FinishedFunc();
    void Timeline_0__UpdateFunc();
    void PauseMenuToggled(bool PauseMenuOpened);
    void ReceiveBeginPlay0();
    void PlayStartingTimeLine();
    void ExecuteUbergraph_BPFX_SaveBeacon_PP(int32_t EntryPoint);
}; // Size: 0x390
#pragma pack(pop)
}
