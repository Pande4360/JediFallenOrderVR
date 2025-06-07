#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\RsConditionalAnimNotify.hpp"
namespace _Script_AkAudio {
struct AkAudioEvent;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
struct SkeletalMeshComponent;
}
namespace _Script_Engine {
struct AnimSequenceBase;
}
namespace _Game_Audio_Blueprint_Notify_AkEvent_OneShot_Conditional {
#pragma pack(push, 1)
struct AkEvent_OneShot_Conditional_C : public _Script_Engine::RsConditionalAnimNotify {
    private: char pad_80[0x40]; public:
    void* get_Attach_Name();
    _Script_AkAudio::AkAudioEvent*& get_Event();
    bool get_Follow();
    void set_Follow(bool value);
    void* get_EventName();
    bool get_Occlusion();
    void set_Occlusion(bool value);
    void* get_Location_Offset();
    static _Script_CoreUObject::Class* static_class();
    bool Received_Notify(_Script_Engine::SkeletalMeshComponent* MeshComp, _Script_Engine::AnimSequenceBase* Animation);
}; // Size: 0xc0
#pragma pack(pop)
}
