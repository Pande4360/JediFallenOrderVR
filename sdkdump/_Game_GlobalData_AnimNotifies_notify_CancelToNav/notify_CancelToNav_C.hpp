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
namespace _Game_GlobalData_AnimNotifies_notify_CancelToNav {
#pragma pack(push, 1)
struct notify_CancelToNav_C : public _Script_Engine::AnimNotifyState {
    private: char pad_30[0x4]; public:
    float& get_BlendOutTime();
    static _Script_CoreUObject::Class* static_class();
    bool Received_NotifyBegin0(_Script_Engine::SkeletalMeshComponent* MeshComp, _Script_Engine::AnimSequenceBase* Animation, float TotalDuration);
    bool Received_NotifyTick0(_Script_Engine::SkeletalMeshComponent* MeshComp, _Script_Engine::AnimSequenceBase* Animation, float FrameDeltaTime);
}; // Size: 0x34
#pragma pack(pop)
}
