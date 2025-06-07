#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\AnimNotify.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
struct SkeletalMeshComponent;
}
namespace _Script_Engine {
struct AnimSequenceBase;
}
namespace _Game_WorldInteracts_Doors_Notify_Trigger_Door_Unlock_From_Animation {
#pragma pack(push, 1)
struct Notify_Trigger_Door_Unlock_From_Animation_C : public _Script_Engine::AnimNotify {
    static _Script_CoreUObject::Class* static_class();
    bool Received_Notify0(_Script_Engine::SkeletalMeshComponent* MeshComp, _Script_Engine::AnimSequenceBase* Animation);
}; // Size: 0x38
#pragma pack(pop)
}
