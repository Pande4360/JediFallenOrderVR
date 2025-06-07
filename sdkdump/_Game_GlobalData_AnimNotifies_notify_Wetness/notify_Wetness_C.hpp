#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\RsConditionalAnimNotify.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
struct SkeletalMeshComponent;
}
namespace _Script_Engine {
struct AnimSequenceBase;
}
namespace _Game_GlobalData_AnimNotifies_notify_Wetness {
#pragma pack(push, 1)
struct notify_Wetness_C : public _Script_Engine::RsConditionalAnimNotify {
    private: char pad_80[0x4]; public:
    float& get_Height__0_1_();
    static _Script_CoreUObject::Class* static_class();
    bool Received_Notify(_Script_Engine::SkeletalMeshComponent* MeshComp, _Script_Engine::AnimSequenceBase* Animation);
}; // Size: 0x84
#pragma pack(pop)
}
