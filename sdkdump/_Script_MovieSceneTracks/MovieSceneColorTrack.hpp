#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "MovieScenePropertyTrack.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_MovieSceneTracks {
#pragma pack(push, 1)
struct MovieSceneColorTrack : public MovieScenePropertyTrack {
    private: char pad_80[0x8]; public:
    bool get_bIsSlateColor();
    void set_bIsSlateColor(bool value);
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x88
#pragma pack(pop)
}
