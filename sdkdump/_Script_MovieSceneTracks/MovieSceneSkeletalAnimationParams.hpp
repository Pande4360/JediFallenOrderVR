#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_Engine {
struct AnimSequenceBase;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_MovieSceneTracks {
#pragma pack(push, 1)
struct MovieSceneSkeletalAnimationParams {
    private: char pad_0[0xc8]; public:
    _Script_Engine::AnimSequenceBase*& get_Animation();
    float& get_StartOffset();
    float& get_EndOffset();
    float& get_Playrate();
    bool get_bReverse();
    void set_bReverse(bool value);
    void* get_SlotName();
    void* get_Weight();
    bool get_bSkipAnimNotifiers();
    void set_bSkipAnimNotifiers(bool value);
    bool get_bUseDefaultRootMotionSettings();
    void set_bUseDefaultRootMotionSettings(bool value);
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0xc8
#pragma pack(pop)
}
