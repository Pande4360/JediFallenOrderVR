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
namespace _Game_GlobalData_AnimNotifies_notify_Hero_Sheathing {
#pragma pack(push, 1)
struct notify_Hero_Sheathing_C : public _Script_Engine::AnimNotifyState {
    private: char pad_30[0x10]; public:
    bool get_Unsheathe();
    void set_Unsheathe(bool value);
    bool get_requireHostileTarget();
    void set_requireHostileTarget(bool value);
    void* get_requiredAbility();
    static _Script_CoreUObject::Class* static_class();
    bool Received_NotifyEnd0(_Script_Engine::SkeletalMeshComponent* MeshComp, _Script_Engine::AnimSequenceBase* Animation, bool interrupted);
    bool Received_NotifyBegin0(_Script_Engine::SkeletalMeshComponent* MeshComp, _Script_Engine::AnimSequenceBase* Animation, float TotalDuration);
}; // Size: 0x40
#pragma pack(pop)
}
