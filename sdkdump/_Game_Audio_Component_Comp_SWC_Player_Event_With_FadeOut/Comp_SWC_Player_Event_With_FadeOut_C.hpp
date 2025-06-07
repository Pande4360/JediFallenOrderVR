#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Game_Audio_Component_Comp_Volume_Amb_Overlap_Parent\Comp_Volume_Amb_Overlap_Parent_C.hpp"
namespace _Script_AkAudio {
struct AkAudioEvent;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
struct Actor;
}
namespace _Game_Audio_Component_Comp_SWC_Player_Event_With_FadeOut {
#pragma pack(push, 1)
struct Comp_SWC_Player_Event_With_FadeOut_C : public _Game_Audio_Component_Comp_Volume_Amb_Overlap_Parent::Comp_Volume_Amb_Overlap_Parent_C {
    private: char pad_328[0x20]; public:
    void* get_UberGraphFrame();
    _Script_AkAudio::AkAudioEvent*& get_Overlap_Begin_Sound();
    void* get_Action_Type();
    int32_t& get_Transition_Duration();
    void* get_Fade_Curve();
    bool get_OnlyTriggerInCinematic();
    void set_OnlyTriggerInCinematic(bool value);
    bool get_PlayOnPlayerController_();
    void set_PlayOnPlayerController_(bool value);
    static _Script_CoreUObject::Class* static_class();
    void TriggerBeginOverlap0(_Script_Engine::Actor* Other_Actor);
    void Trigger_End_Overlap0(_Script_Engine::Actor* Other_Actor);
    void ExecuteUbergraph_Comp_SWC_Player_Event_With_FadeOut(int32_t EntryPoint);
}; // Size: 0x348
#pragma pack(pop)
}
