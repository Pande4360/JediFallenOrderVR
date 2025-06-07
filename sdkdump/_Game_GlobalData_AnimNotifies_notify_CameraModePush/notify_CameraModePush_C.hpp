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
namespace _Game_GlobalData_AnimNotifies_notify_CameraModePush {
#pragma pack(push, 1)
struct notify_CameraModePush_C : public _Script_Engine::RsConditionalTargetAnimNotifyState {
    private: char pad_c0[0x18]; public:
    void* get_ModeName();
    float& get_BlendTimeOverride();
    float& get_BlendOutTimeOverride();
    bool get_requireHeroZTarget();
    void set_requireHeroZTarget(bool value);
    static _Script_CoreUObject::Class* static_class();
    bool Received_NotifyBegin(_Script_Engine::SkeletalMeshComponent* MeshComp, _Script_Engine::AnimSequenceBase* Animation, float TotalDuration);
    bool Received_NotifyEnd(_Script_Engine::SkeletalMeshComponent* MeshComp, _Script_Engine::AnimSequenceBase* Animation, bool interrupted);
}; // Size: 0xd8
#pragma pack(pop)
}
