#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\Actor.hpp"
namespace _Script_Engine {
struct BoxComponent;
}
namespace _Script_Engine {
struct PointLightComponent;
}
namespace _Script_Engine {
struct MaterialInstanceDynamic;
}
namespace _Script_Engine {
struct PostProcessComponent;
}
namespace _Script_Engine {
struct TimelineComponent;
}
namespace _Script_AkAudio {
struct AkAudioEvent;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_Effects_Blueprints_BPFX_TEMP_HealFeedback {
#pragma pack(push, 1)
struct BPFX_TEMP_HealFeedback_C : public _Script_Engine::Actor {
    private: char pad_360[0x58]; public:
    void* get_UberGraphFrame();
    _Script_Engine::BoxComponent*& get_Box();
    _Script_Engine::PointLightComponent*& get_PointLight();
    _Script_Engine::PostProcessComponent*& get_PostProcess();
    float& get_Timeline_0_light_606AC7CD40D773DF2921E1A7A4C5BB34();
    float& get_Timeline_0_scale_606AC7CD40D773DF2921E1A7A4C5BB34();
    void* get_Timeline_0__Direction_606AC7CD40D773DF2921E1A7A4C5BB34();
    _Script_Engine::TimelineComponent*& get_Timeline_0();
    float& get_Timeline_1_NewTrack_0_8F1DD81F4DA86CF51C0D81A4A31E93EC();
    void* get_Timeline_1__Direction_8F1DD81F4DA86CF51C0D81A4A31E93EC();
    _Script_Engine::TimelineComponent*& get_Timeline_1();
    _Script_Engine::MaterialInstanceDynamic*& get_PPMAT();
    _Script_AkAudio::AkAudioEvent*& get_SFX_Activate();
    static _Script_CoreUObject::Class* static_class();
    void UserConstructionScript0();
    void Timeline_0__FinishedFunc();
    void Timeline_0__UpdateFunc();
    void Timeline_1__FinishedFunc();
    void Timeline_1__UpdateFunc();
    void ReceiveBeginPlay0();
    void PauseMenuToggled(bool PauseMenuOpened);
    void ExecuteUbergraph_BPFX_TEMP_HealFeedback(int32_t EntryPoint);
}; // Size: 0x3b8
#pragma pack(pop)
}
