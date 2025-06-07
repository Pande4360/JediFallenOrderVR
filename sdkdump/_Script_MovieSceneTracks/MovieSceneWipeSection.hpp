#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "MovieSceneFloatSection.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_MovieSceneTracks {
#pragma pack(push, 1)
struct MovieSceneWipeSection : public MovieSceneFloatSection {
    private: char pad_180[0x8]; public:
    float& get_WipeDirection();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x188
#pragma pack(pop)
}
