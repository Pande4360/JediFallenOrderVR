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
namespace _Game_GlobalData_AnimNotifies_notify_AI_PushPopMotion_DistCheck {
#pragma pack(push, 1)
struct notify_AI_PushPopMotion_DistCheck_C : public _Script_Engine::AnimNotifyState {
    private: char pad_30[0x18]; public:
    float& get_ParmDistance();
    bool get_RemoveOnCheck();
    void set_RemoveOnCheck(bool value);
    void* get_MotionParmPush();
    void* get_Comparison();
    static _Script_CoreUObject::Class* static_class();
    bool Received_NotifyEnd0(_Script_Engine::SkeletalMeshComponent* MeshComp, _Script_Engine::AnimSequenceBase* Animation, bool interrupted);
    bool Received_NotifyTick0(_Script_Engine::SkeletalMeshComponent* MeshComp, _Script_Engine::AnimSequenceBase* Animation, float FrameDeltaTime);
}; // Size: 0x48
#pragma pack(pop)
}
