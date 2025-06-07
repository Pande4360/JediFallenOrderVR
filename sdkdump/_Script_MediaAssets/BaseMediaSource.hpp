#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "MediaSource.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_MediaAssets {
#pragma pack(push, 1)
struct BaseMediaSource : public MediaSource {
    private: char pad_30[0x8]; public:
    void* get_PlayerName();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x38
#pragma pack(pop)
}
