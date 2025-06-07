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
struct RsSyncData {
    private: char pad_0[0x100]; public:
    bool get_bDontUseAsFallback();
    void set_bDontUseAsFallback(bool value);
    bool get_bUseHeroOffGroundFallback();
    void set_bUseHeroOffGroundFallback(bool value);
    _Script_Engine::AnimationAsset*& get_Animation();
    bool get_BreakOnMontageBlendingOut();
    void set_BreakOnMontageBlendingOut(bool value);
    bool get_ContinueAnimationAfterSync();
    void set_ContinueAnimationAfterSync(bool value);
    void* get_DeathAnimationData();
    void* get_SocketName();
    void* get_ComponentName();
    void* get_OffsetTransform();
    void* get_PutInState();
    void* get_CharacterToSyncDataMappingNative();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x100
#pragma pack(pop)
}
