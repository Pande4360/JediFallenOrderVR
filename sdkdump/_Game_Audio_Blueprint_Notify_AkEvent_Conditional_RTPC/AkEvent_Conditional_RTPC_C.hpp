#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\RsConditionalAnimNotifyState.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
struct SkeletalMeshComponent;
}
namespace _Script_Engine {
struct AnimSequenceBase;
}
namespace _Game_Audio_Blueprint_Notify_AkEvent_Conditional_RTPC {
#pragma pack(push, 1)
struct AkEvent_Conditional_RTPC_C : public _Script_Engine::RsConditionalAnimNotifyState {
    private: char pad_78[0x10]; public:
    void* get_RTPCName();
    float& get_RTPCValueBegin();
    float& get_RTPCValueEnd();
    static _Script_CoreUObject::Class* static_class();
    bool Received_NotifyEnd(_Script_Engine::SkeletalMeshComponent* MeshComp, _Script_Engine::AnimSequenceBase* Animation, bool interrupted);
    bool Received_NotifyBegin(_Script_Engine::SkeletalMeshComponent* MeshComp, _Script_Engine::AnimSequenceBase* Animation, float TotalDuration);
}; // Size: 0x88
#pragma pack(pop)
}
