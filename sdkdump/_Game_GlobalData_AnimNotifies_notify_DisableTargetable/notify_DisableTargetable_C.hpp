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
namespace _Game_GlobalData_AnimNotifies_notify_DisableTargetable {
#pragma pack(push, 1)
struct notify_DisableTargetable_C : public _Script_Engine::AnimNotifyState {
    private: char pad_30[0x3]; public:
    bool get_DisableZTargeting();
    void set_DisableZTargeting(bool value);
    bool get_DisableAITargeting();
    void set_DisableAITargeting(bool value);
    bool get_popzTarget();
    void set_popzTarget(bool value);
    static _Script_CoreUObject::Class* static_class();
    bool Received_NotifyEnd0(_Script_Engine::SkeletalMeshComponent* MeshComp, _Script_Engine::AnimSequenceBase* Animation, bool interrupted);
    bool Received_NotifyBegin0(_Script_Engine::SkeletalMeshComponent* MeshComp, _Script_Engine::AnimSequenceBase* Animation, float TotalDuration);
}; // Size: 0x33
#pragma pack(pop)
}
