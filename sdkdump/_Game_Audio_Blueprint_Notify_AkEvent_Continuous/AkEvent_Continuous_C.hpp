#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\AnimNotifyState.hpp"
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
namespace _Game_Audio_Blueprint_Notify_AkEvent_Continuous {
#pragma pack(push, 1)
struct AkEvent_Continuous_C : public _Script_Engine::AnimNotifyState {
    private: char pad_30[0x28]; public:
    _Script_AkAudio::AkAudioEvent*& get_AK_LoopStartSound();
    _Script_AkAudio::AkAudioEvent*& get_AK_LoopEndSound();
    void* get_Attach_name();
    bool get_Follow();
    void set_Follow(bool value);
    bool get_Occlusion();
    void set_Occlusion(bool value);
    float& get_Occlusion_Interp();
    static _Script_CoreUObject::Class* static_class();
    bool Received_NotifyEnd0(_Script_Engine::SkeletalMeshComponent* MeshComp, _Script_Engine::AnimSequenceBase* Animation, bool interrupted);
    bool Received_NotifyBegin0(_Script_Engine::SkeletalMeshComponent* MeshComp, _Script_Engine::AnimSequenceBase* Animation, float TotalDuration);
}; // Size: 0x58
#pragma pack(pop)
}
