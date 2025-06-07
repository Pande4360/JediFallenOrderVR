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
namespace _Game_Effects_Blueprints_BPFX_LowHP {
#pragma pack(push, 1)
struct BPFX_LowHP_C : public _Script_Engine::Actor {
    private: char pad_360[0x40]; public:
    void* get_UberGraphFrame();
    _Script_Engine::PostProcessComponent*& get_PostProcess();
    _Script_Engine::SceneComponent*& get_DefaultSceneRoot();
    float& get_Timeline_1_NewTrack_1_49E3164D408C864B91840B8F15C2E17A();
    void* get_Timeline_1__Direction_49E3164D408C864B91840B8F15C2E17A();
    _Script_Engine::TimelineComponent*& get_Timeline_1();
    float& get_Timeline_0_NewTrack_0_7126FD4443EF269E73FAFFA25C0DE2C2();
    void* get_Timeline_0__Direction_7126FD4443EF269E73FAFFA25C0DE2C2();
    _Script_Engine::TimelineComponent*& get_Timeline_0();
    float& get_Blend();
    static _Script_CoreUObject::Class* static_class();
    void UserConstructionScript0();
    void Timeline_0__FinishedFunc();
    void Timeline_0__UpdateFunc();
    void Timeline_1__FinishedFunc();
    void Timeline_1__UpdateFunc();
    void Desaturate();
    void ExecuteUbergraph_BPFX_LowHP(int32_t EntryPoint);
}; // Size: 0x3a0
#pragma pack(pop)
}
