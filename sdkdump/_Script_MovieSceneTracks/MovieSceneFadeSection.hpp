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
struct MovieSceneFadeSection : public MovieSceneFloatSection {
    private: char pad_180[0x18]; public:
    void* get_FadeColor();
    bool get_bFadeAudio();
    void set_bFadeAudio(bool value);
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x198
#pragma pack(pop)
}
