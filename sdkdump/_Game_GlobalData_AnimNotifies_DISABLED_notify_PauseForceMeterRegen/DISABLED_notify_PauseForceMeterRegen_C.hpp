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
namespace _Game_GlobalData_AnimNotifies_DISABLED_notify_PauseForceMeterRegen {
#pragma pack(push, 1)
struct DISABLED_notify_PauseForceMeterRegen_C : public _Script_Engine::AnimNotifyState {
    private: char pad_30[0x1]; public:
    bool get_PauseOnlyEmptyMeter();
    void set_PauseOnlyEmptyMeter(bool value);
    static _Script_CoreUObject::Class* static_class();
    bool Received_NotifyTick0(_Script_Engine::SkeletalMeshComponent* MeshComp, _Script_Engine::AnimSequenceBase* Animation, float FrameDeltaTime);
    bool Received_NotifyBegin0(_Script_Engine::SkeletalMeshComponent* MeshComp, _Script_Engine::AnimSequenceBase* Animation, float TotalDuration);
    bool Received_NotifyEnd0(_Script_Engine::SkeletalMeshComponent* MeshComp, _Script_Engine::AnimSequenceBase* Animation, bool interrupted);
}; // Size: 0x31
#pragma pack(pop)
}
