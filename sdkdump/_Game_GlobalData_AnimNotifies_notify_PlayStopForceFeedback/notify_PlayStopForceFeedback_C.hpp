#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\AnimNotifyState.hpp"
namespace _Script_Engine {
struct ForceFeedbackEffect;
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
namespace _Game_GlobalData_AnimNotifies_notify_PlayStopForceFeedback {
#pragma pack(push, 1)
struct notify_PlayStopForceFeedback_C : public _Script_Engine::AnimNotifyState {
    private: char pad_30[0x18]; public:
    _Script_Engine::ForceFeedbackEffect*& get_forceFeedback();
    bool get_Looping();
    void set_Looping(bool value);
    bool get_ignoreTimeDilation();
    void set_ignoreTimeDilation(bool value);
    void* get_Tag();
    static _Script_CoreUObject::Class* static_class();
    bool Received_NotifyBegin0(_Script_Engine::SkeletalMeshComponent* MeshComp, _Script_Engine::AnimSequenceBase* Animation, float TotalDuration);
    bool Received_NotifyEnd0(_Script_Engine::SkeletalMeshComponent* MeshComp, _Script_Engine::AnimSequenceBase* Animation, bool interrupted);
}; // Size: 0x48
#pragma pack(pop)
}
