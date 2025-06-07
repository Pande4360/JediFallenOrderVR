#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\ActorComponent.hpp"
namespace _Game_Audio_Widget_Widget_Audio_Cinematic_Debug {
struct Widget_Audio_Cinematic_Debug_C;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_Audio_Component_Comp_Audio_Debug_Print_Cinematic_Info {
#pragma pack(push, 1)
struct Comp_Audio_Debug_Print_Cinematic_Info_C : public _Script_Engine::ActorComponent {
    private: char pad_170[0x48]; public:
    void* get_UberGraphFrame();
    bool get_TogglePrint();
    void set_TogglePrint(bool value);
    _Game_Audio_Widget_Widget_Audio_Cinematic_Debug::Widget_Audio_Cinematic_Debug_C*& get_Widget();
    void* get_Tick();
    int32_t& get_FrameNumber();
    int32_t& get_FrameCounter();
    bool get_IsCinematicActive();
    void set_IsCinematicActive(bool value);
    float& get_Time();
    void* get_Resolutions();
    static _Script_CoreUObject::Class* static_class();
    void Start();
    void End();
    void ReceiveTick0(float DeltaSeconds);
    void ReceiveBeginPlay0();
    void Toggle();
    void ExecuteUbergraph_Comp_Audio_Debug_Print_Cinematic_Info(int32_t EntryPoint);
    void Tick__DelegateSignature();
}; // Size: 0x1b8
#pragma pack(pop)
}
