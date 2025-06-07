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
namespace _Game_GlobalData_AnimNotifies_notify_SetSphereCollision {
#pragma pack(push, 1)
struct notify_SetSphereCollision_C : public _Script_Engine::AnimNotify {
    private: char pad_38[0x70]; public:
    float& get_StartForward();
    float& get_StartUp();
    float& get_EndForward();
    float& get_EndUp();
    float& get_Radius();
    void* get_HitObjectTypes();
    void* get_DebugDraw();
    void* get_AttackType();
    void* get_HitEvent();
    static _Script_CoreUObject::Class* static_class();
    bool Received_Notify0(_Script_Engine::SkeletalMeshComponent* MeshComp, _Script_Engine::AnimSequenceBase* Animation);
}; // Size: 0xa8
#pragma pack(pop)
}
