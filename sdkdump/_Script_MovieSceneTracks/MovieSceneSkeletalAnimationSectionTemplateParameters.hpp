#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "MovieSceneSkeletalAnimationParams.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_MovieSceneTracks {
#pragma pack(push, 1)
struct MovieSceneSkeletalAnimationSectionTemplateParameters : public MovieSceneSkeletalAnimationParams {
    private: char pad_c8[0x8]; public:
    void* get_SectionStartTime();
    void* get_SectionEndTime();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0xd0
#pragma pack(pop)
}
