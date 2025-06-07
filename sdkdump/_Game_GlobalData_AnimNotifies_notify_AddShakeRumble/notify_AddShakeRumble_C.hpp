#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\RsConditionalAnimNotify.hpp"
namespace _Script_Engine {
struct ForceFeedbackEffect;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
struct SkeletalMeshComponent;
}
namespace _Script_Engine {
struct AnimSequenceBase;
}
namespace _Game_GlobalData_AnimNotifies_notify_AddShakeRumble {
#pragma pack(push, 1)
struct notify_AddShakeRumble_C : public _Script_Engine::RsConditionalAnimNotify {
    private: char pad_80[0x20]; public:
    void* get_CameraShake();
    float& get_Radius();
    float& get_Falloff();
    _Script_Engine::ForceFeedbackEffect*& get_ForceFeedbackEffect();
    float& get_radial_rumble_intensity();
    float& get_radial_rumble_duration();
    static _Script_CoreUObject::Class* static_class();
    bool Received_Notify(_Script_Engine::SkeletalMeshComponent* MeshComp, _Script_Engine::AnimSequenceBase* Animation);
}; // Size: 0xa0
#pragma pack(pop)
}
