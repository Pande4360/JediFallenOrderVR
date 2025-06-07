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
namespace _Game_GlobalData_AnimNotifies_notify_saberExtend {
#pragma pack(push, 1)
struct notify_saberExtend_C : public _Script_Engine::AnimNotifyState {
    private: char pad_30[0x18]; public:
    bool get_Reverse();
    void set_Reverse(bool value);
    bool get_use_notifyEnd();
    void set_use_notifyEnd(bool value);
    bool get_hero_requireHostileTarget();
    void set_hero_requireHostileTarget(bool value);
    void* get_hero_requiredAbility();
    bool get_hero_requireRHandAttachToExtend();
    void set_hero_requireRHandAttachToExtend(bool value);
    static _Script_CoreUObject::Class* static_class();
    bool Received_NotifyEnd0(_Script_Engine::SkeletalMeshComponent* MeshComp, _Script_Engine::AnimSequenceBase* Animation, bool interrupted);
    bool Received_NotifyBegin0(_Script_Engine::SkeletalMeshComponent* MeshComp, _Script_Engine::AnimSequenceBase* Animation, float TotalDuration);
}; // Size: 0x48
#pragma pack(pop)
}
