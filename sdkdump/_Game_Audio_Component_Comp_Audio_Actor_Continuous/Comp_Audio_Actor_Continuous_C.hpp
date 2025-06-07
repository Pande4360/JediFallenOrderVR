#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Game_Audio_Component_Comp_SW_Amb_Overlap\Comp_SW_Amb_Overlap_C.hpp"
namespace _Script_AkAudio {
struct AkAudioEvent;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
struct Actor;
}
namespace _Game_Audio_Component_Comp_Audio_Actor_Continuous {
#pragma pack(push, 1)
struct Comp_Audio_Actor_Continuous_C : public _Game_Audio_Component_Comp_SW_Amb_Overlap::Comp_SW_Amb_Overlap_C {
    private: char pad_320[0x18]; public:
    void* get_UberGraphFrame0();
    _Script_AkAudio::AkAudioEvent*& get_Sound_Start();
    int32_t& get_Fade_Out_Sound_Duration__ms__On_Destroy();
    bool get_OcclusionEnabled();
    void set_OcclusionEnabled(bool value);
    bool get_IsManualBeginPlay();
    void set_IsManualBeginPlay(bool value);
    static _Script_CoreUObject::Class* static_class();
    void ReceiveBeginPlay0();
    void Death(_Script_Engine::Actor* DeadActor);
    void Manual_Stop();
    void Manual_Start();
    void OnDestroyed_Event_0(_Script_Engine::Actor* DestroyedActor);
    void OnOverlapHeroBegin_Event_0();
    void CustomEvent_00();
    void ExecuteUbergraph_Comp_Audio_Actor_Continuous(int32_t EntryPoint);
}; // Size: 0x338
#pragma pack(pop)
}
