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
namespace _Game_GlobalData_AnimNotifies_notify_Echo_Acquire {
#pragma pack(push, 1)
struct notify_Echo_Acquire_C : public _Script_Engine::RsConditionalAnimNotify {
    private: char pad_80[0x28]; public:
    _Script_AkAudio::AkAudioEvent*& get_SFX();
    void* get_Bone_Name();
    void* get_Location_Offset();
    void* get_Rotation_Offset();
    static _Script_CoreUObject::Class* static_class();
    bool Received_Notify(_Script_Engine::SkeletalMeshComponent* MeshComp, _Script_Engine::AnimSequenceBase* Animation);
}; // Size: 0xa8
#pragma pack(pop)
}
