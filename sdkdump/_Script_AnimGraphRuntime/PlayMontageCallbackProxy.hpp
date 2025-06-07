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
struct BranchingPointNotifyPayload;
}
namespace _Script_Engine {
struct AnimMontage;
}
namespace _Script_Engine {
struct SkeletalMeshComponent;
}
namespace _Script_AnimGraphRuntime {
#pragma pack(push, 1)
struct PlayMontageCallbackProxy : public _Script_CoreUObject::Object {
    private: char pad_28[0x80]; public:
    void* get_OnCompleted();
    void* get_OnBlendOut();
    void* get_OnInterrupted();
    void* get_OnNotifyBegin();
    void* get_OnNotifyEnd();
    static _Script_CoreUObject::Class* static_class();
    void OnNotifyEndReceived(void* NotifyName, _Script_Engine::BranchingPointNotifyPayload& BranchingPointNotifyPayload);
    void OnNotifyBeginReceived(void* NotifyName, _Script_Engine::BranchingPointNotifyPayload& BranchingPointNotifyPayload);
    void OnMontageEnded(_Script_Engine::AnimMontage* Montage, bool bInterrupted);
    void OnMontageBlendingOut(_Script_Engine::AnimMontage* Montage, bool bInterrupted);
    _Script_AnimGraphRuntime::PlayMontageCallbackProxy* CreateProxyObjectForPlayMontage(_Script_Engine::SkeletalMeshComponent* inSkeletalMeshComponent, _Script_Engine::AnimMontage* MontageToPlay, float Playrate, float StartingPosition, void* StartingSection);
}; // Size: 0xa8
#pragma pack(pop)
}
