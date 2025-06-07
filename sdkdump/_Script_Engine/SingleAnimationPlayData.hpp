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
namespace _Script_Engine {
#pragma pack(push, 1)
struct SingleAnimationPlayData {
    private: char pad_0[0x18]; public:
    _Script_Engine::AnimationAsset*& get_AnimToPlay();
    bool get_bSavedLooping();
    void set_bSavedLooping(bool value);
    bool get_bSavedPlaying();
    void set_bSavedPlaying(bool value);
    float& get_SavedPosition();
    float& get_SavedPlayRate();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x18
#pragma pack(pop)
}
