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
namespace _Game_GlobalData_AnimNotifies_notify_CameraModePush_OneShot {
#pragma pack(push, 1)
struct notify_CameraModePush_OneShot_C : public _Script_Engine::AnimNotify {
    private: char pad_38[0x10]; public:
    void* get_ModeName();
    float& get_BlendTimeOverride();
    static _Script_CoreUObject::Class* static_class();
    bool Received_Notify0(_Script_Engine::SkeletalMeshComponent* MeshComp, _Script_Engine::AnimSequenceBase* Animation);
}; // Size: 0x48
#pragma pack(pop)
}
