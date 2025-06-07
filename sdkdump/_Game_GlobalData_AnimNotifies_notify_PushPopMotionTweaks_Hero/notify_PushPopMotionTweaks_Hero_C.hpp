#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\AnimNotifyState.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
struct SkeletalMeshComponent;
}
namespace _Script_Engine {
struct AnimSequenceBase;
}
namespace _Game_GlobalData_AnimNotifies_notify_PushPopMotionTweaks_Hero {
#pragma pack(push, 1)
struct notify_PushPopMotionTweaks_Hero_C : public _Script_Engine::AnimNotifyState {
    private: char pad_30[0xc]; public:
    void* get_MotionTweaks();
    float& get_blendInAmount();
    float& get_blendOutAmount();
    static _Script_CoreUObject::Class* static_class();
    bool Received_NotifyBegin0(_Script_Engine::SkeletalMeshComponent* MeshComp, _Script_Engine::AnimSequenceBase* Animation, float TotalDuration);
    bool Received_NotifyEnd0(_Script_Engine::SkeletalMeshComponent* MeshComp, _Script_Engine::AnimSequenceBase* Animation, bool interrupted);
}; // Size: 0x3c
#pragma pack(pop)
}
