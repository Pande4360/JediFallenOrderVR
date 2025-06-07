#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_Engine {
struct AnimMontage;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct AnimMontageInstance {
    private: char pad_0[0x1d0]; public:
    _Script_Engine::AnimMontage*& get_Montage();
    bool get_bPlaying();
    void set_bPlaying(bool value);
    float& get_DefaultBlendTimeMultiplier();
    void* get_NextSections();
    void* get_PrevSections();
    void* get_ActiveStateBranchingPoints();
    float& get_Position();
    float& get_Playrate();
    void* get_Blend();
    int32_t& get_DisableRootMotionCount();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x1d0
#pragma pack(pop)
}
