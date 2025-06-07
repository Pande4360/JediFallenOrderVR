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
namespace _Game_GlobalData_AnimNotifies_notify_HERO_durationFlags {
#pragma pack(push, 1)
struct notify_HERO_durationFlags_C : public _Script_Engine::AnimNotifyState {
    private: char pad_30[0x28]; public:
    void* get_FlagsDuration();
    void* get_iFlagsDuration();
    void* get_parmName();
    static _Script_CoreUObject::Class* static_class();
    bool Received_NotifyTick0(_Script_Engine::SkeletalMeshComponent* MeshComp, _Script_Engine::AnimSequenceBase* Animation, float FrameDeltaTime);
    bool Received_NotifyEnd0(_Script_Engine::SkeletalMeshComponent* MeshComp, _Script_Engine::AnimSequenceBase* Animation, bool interrupted);
}; // Size: 0x58
#pragma pack(pop)
}
