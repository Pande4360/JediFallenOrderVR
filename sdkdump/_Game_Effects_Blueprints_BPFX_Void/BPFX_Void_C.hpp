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
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_Effects_Blueprints_BPFX_Void {
#pragma pack(push, 1)
struct BPFX_Void_C : public _Script_Engine::Actor {
    private: char pad_360[0x38]; public:
    void* get_UberGraphFrame();
    _Script_Engine::PostProcessComponent*& get_PPV_Void();
    float& get_LeadOut_PPIn_E0E9526B4D9EC1B5EBC2B4BB4AFA35F5();
    void* get_LeadOut__Direction_E0E9526B4D9EC1B5EBC2B4BB4AFA35F5();
    _Script_Engine::TimelineComponent*& get_LeadOut();
    float& get_LeadIn_PPIn_5FDA744A4A3CC9684087AA99A503085B();
    void* get_LeadIn__Direction_5FDA744A4A3CC9684087AA99A503085B();
    _Script_Engine::TimelineComponent*& get_LeadIn();
    bool get_Fade_To_White_();
    void set_Fade_To_White_(bool value);
    static _Script_CoreUObject::Class* static_class();
    void UpdateBrightness(bool IsWhite_);
    void UserConstructionScript0();
    void LeadIn__FinishedFunc();
    void LeadIn__UpdateFunc();
    void LeadOut__FinishedFunc();
    void LeadOut__UpdateFunc();
    void LVL_FadeToVoid(bool IsWhite_, float Duration);
    void LVL_FadeFromVoid(bool IsWhite_, float Duration);
    void PauseMenuToggled(bool PauseMenuOpened);
    void ReceiveBeginPlay0();
    void ExecuteUbergraph_BPFX_Void(int32_t EntryPoint);
}; // Size: 0x398
#pragma pack(pop)
}
