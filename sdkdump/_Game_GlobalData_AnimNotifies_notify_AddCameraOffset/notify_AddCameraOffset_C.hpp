#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\RsConditionalTargetAnimNotifyState.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
struct SkeletalMeshComponent;
}
namespace _Script_Engine {
struct AnimSequenceBase;
}
namespace _Game_GlobalData_AnimNotifies_notify_AddCameraOffset {
#pragma pack(push, 1)
struct notify_AddCameraOffset_C : public _Script_Engine::RsConditionalTargetAnimNotifyState {
    private: char pad_c0[0x20]; public:
    void* get_LocationOffset();
    void* get_RotationOffset();
    float& get_BlendInTime();
    float& get_BlendOutTime();
    static _Script_CoreUObject::Class* static_class();
    bool Received_NotifyEnd(_Script_Engine::SkeletalMeshComponent* MeshComp, _Script_Engine::AnimSequenceBase* Animation, bool interrupted);
    bool Received_NotifyBegin(_Script_Engine::SkeletalMeshComponent* MeshComp, _Script_Engine::AnimSequenceBase* Animation, float TotalDuration);
}; // Size: 0xe0
#pragma pack(pop)
}
