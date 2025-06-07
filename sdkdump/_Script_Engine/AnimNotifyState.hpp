#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\Object.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
struct SkeletalMeshComponent;
}
namespace _Script_Engine {
struct AnimSequenceBase;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct AnimNotifyState : public _Script_CoreUObject::Object {
    private: char pad_28[0x8]; public:
    void* get_RequiredSignificance();
    static _Script_CoreUObject::Class* static_class();
    bool Received_NotifyTick(_Script_Engine::SkeletalMeshComponent* MeshComp, _Script_Engine::AnimSequenceBase* Animation, float FrameDeltaTime);
    bool Received_NotifyEnd(_Script_Engine::SkeletalMeshComponent* MeshComp, _Script_Engine::AnimSequenceBase* Animation, bool interrupted);
    bool Received_NotifyBegin(_Script_Engine::SkeletalMeshComponent* MeshComp, _Script_Engine::AnimSequenceBase* Animation, float TotalDuration);
    void* GetNotifyName();
}; // Size: 0x30
#pragma pack(pop)
}
