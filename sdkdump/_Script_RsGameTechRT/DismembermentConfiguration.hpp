#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_Engine {
struct AnimationAsset;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_RsGameTechRT {
#pragma pack(push, 1)
struct DismembermentConfiguration {
    private: char pad_0[0x30]; public:
    void* get_MeshComponentName();
    void* get_SkinnedMeshComponent();
    bool get_bChangeToRagdoll();
    void set_bChangeToRagdoll(bool value);
    bool get_bApplyRadialImpulse();
    void set_bApplyRadialImpulse(bool value);
    void* get_ImpulseDirection();
    float& get_ImpulseStrength();
    _Script_Engine::AnimationAsset*& get_AnimationToPlay();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x30
#pragma pack(pop)
}
