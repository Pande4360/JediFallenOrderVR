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
namespace _Game_Characters_BuddyDroid_01_Logic_AnimNotifies_notify_BD1_MonkeyBeamDetachState {
#pragma pack(push, 1)
struct notify_BD1_MonkeyBeamDetachState_C : public _Script_Engine::AnimNotifyState {
    static _Script_CoreUObject::Class* static_class();
    bool Received_NotifyEnd0(_Script_Engine::SkeletalMeshComponent* MeshComp, _Script_Engine::AnimSequenceBase* Animation, bool interrupted);
}; // Size: 0x30
#pragma pack(pop)
}
