#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\RsConditionalAnimNotifyState.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
struct SkeletalMeshComponent;
}
namespace _Script_Engine {
struct AnimSequenceBase;
}
namespace _Game_GlobalData_AnimNotifies_notify_SetGlobalSlowdown {
#pragma pack(push, 1)
struct notify_SetGlobalSlowdown_C : public _Script_Engine::RsConditionalAnimNotifyState {
    private: char pad_78[0x4]; public:
    float& get_slowdownAmount();
    static _Script_CoreUObject::Class* static_class();
    bool Received_NotifyEnd(_Script_Engine::SkeletalMeshComponent* MeshComp, _Script_Engine::AnimSequenceBase* Animation, bool interrupted);
    bool Received_NotifyBegin(_Script_Engine::SkeletalMeshComponent* MeshComp, _Script_Engine::AnimSequenceBase* Animation, float TotalDuration);
}; // Size: 0x7c
#pragma pack(pop)
}
