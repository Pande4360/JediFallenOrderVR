#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_MovieScene\MovieSceneSection.hpp"
namespace _Script_Engine {
struct AnimSequence;
}
namespace _Script_Engine {
struct AnimSequenceBase;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_MovieSceneTracks {
#pragma pack(push, 1)
struct MovieSceneSkeletalAnimationSection : public _Script_MovieScene::MovieSceneSection {
    private: char pad_e0[0xf0]; public:
    void* get_Params();
    _Script_Engine::AnimSequence*& get_AnimSequence();
    _Script_Engine::AnimSequenceBase*& get_Animation();
    float& get_StartOffset();
    float& get_EndOffset();
    float& get_Playrate();
    bool get_bReverse();
    void set_bReverse(bool value);
    void* get_SlotName();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x1d0
#pragma pack(pop)
}
