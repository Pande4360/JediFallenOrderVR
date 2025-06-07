#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\RsConditionalAnimNotify.hpp"
namespace _Script_AkAudio {
struct AkAudioEvent;
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
namespace _Game_GlobalData_AnimNotifies_notify_Shock {
#pragma pack(push, 1)
struct notify_Shock_C : public _Script_Engine::RsConditionalAnimNotify {
    private: char pad_80[0x18]; public:
    void* get_Effect_Color();
    _Script_AkAudio::AkAudioEvent*& get_SFX();
    static _Script_CoreUObject::Class* static_class();
    bool Received_Notify(_Script_Engine::SkeletalMeshComponent* MeshComp, _Script_Engine::AnimSequenceBase* Animation);
}; // Size: 0x98
#pragma pack(pop)
}
