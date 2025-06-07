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
struct RsSyncDataOverride {
    private: char pad_0[0x60]; public:
    _Script_Engine::AnimationAsset*& get_Animation();
    void* get_SocketName();
    bool get_BreakOnMontageBlendingOut();
    void set_BreakOnMontageBlendingOut(bool value);
    bool get_ContinueAnimationAfterSync();
    void set_ContinueAnimationAfterSync(bool value);
    void* get_DeathAnimationData();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x60
#pragma pack(pop)
}
