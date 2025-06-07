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
struct TimelineComponent;
}
namespace _Script_Engine {
struct MaterialInstanceDynamic;
}
namespace _Script_Engine {
struct MaterialInterface;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_Effects_Blueprints_BPFX_ForceSlowBoost_BPFX_PostProcess_Parent {
#pragma pack(push, 1)
struct BPFX_PostProcess_Parent_C : public _Script_Engine::Actor {
    private: char pad_360[0x40]; public:
    void* get_UberGraphFrame();
    _Script_Engine::PostProcessComponent*& get_PostProcess();
    float& get_Blend_Blend_69009D1E4EA9D14234CE578259ED1D61();
    void* get_Blend__Direction_69009D1E4EA9D14234CE578259ED1D61();
    _Script_Engine::TimelineComponent*& get_Blend();
    _Script_Engine::MaterialInstanceDynamic*& get_PPMAT();
    float& get_PPIntensity();
    _Script_Engine::MaterialInterface*& get_PPDynamic();
    float& get_RumbleIntensity();
    float& get_RumbleDuration();
    static _Script_CoreUObject::Class* static_class();
    void UserConstructionScript0();
    void Blend__FinishedFunc();
    void Blend__UpdateFunc();
    void ReceiveBeginPlay0();
    void PauseMenuToggled(bool PauseMenuOpened);
    void ExecuteUbergraph_BPFX_PostProcess_Parent(int32_t EntryPoint);
}; // Size: 0x3a0
#pragma pack(pop)
}
