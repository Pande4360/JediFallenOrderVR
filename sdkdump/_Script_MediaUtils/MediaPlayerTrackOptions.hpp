#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_MediaUtils {
#pragma pack(push, 1)
struct MediaPlayerTrackOptions {
    private: char pad_0[0x1c]; public:
    int32_t& get_Audio();
    int32_t& get_Caption();
    int32_t& get_MetaData();
    int32_t& get_Script();
    int32_t& get_Subtitle();
    int32_t& get_Text();
    int32_t& get_Video();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x1c
#pragma pack(pop)
}
