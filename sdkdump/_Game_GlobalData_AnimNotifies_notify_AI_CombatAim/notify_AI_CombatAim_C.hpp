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
namespace _Game_GlobalData_AnimNotifies_notify_AI_CombatAim {
#pragma pack(push, 1)
struct notify_AI_CombatAim_C : public _Script_Engine::RsConditionalTargetAnimNotifyState {
    private: char pad_c0[0x20]; public:
    void* get_motionParmAim();
    bool get_CombatAim();
    void set_CombatAim(bool value);
    bool get_AimWhileInForceSlowdown();
    void set_AimWhileInForceSlowdown(bool value);
    void* get_motionParmNoAim();
    void* get_AimSpeed();
    bool get_DontTrackIfEvading();
    void set_DontTrackIfEvading(bool value);
    float& get_AimOffSet();
    static _Script_CoreUObject::Class* static_class();
    bool Received_NotifyTick(_Script_Engine::SkeletalMeshComponent* MeshComp, _Script_Engine::AnimSequenceBase* Animation, float FrameDeltaTime);
    bool Received_NotifyBegin(_Script_Engine::SkeletalMeshComponent* MeshComp, _Script_Engine::AnimSequenceBase* Animation, float TotalDuration);
    bool Received_NotifyEnd(_Script_Engine::SkeletalMeshComponent* MeshComp, _Script_Engine::AnimSequenceBase* Animation, bool interrupted);
}; // Size: 0xe0
#pragma pack(pop)
}
