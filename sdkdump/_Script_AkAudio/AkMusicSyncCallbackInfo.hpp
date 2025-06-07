#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "AkCallbackInfo.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_AkAudio {
#pragma pack(push, 1)
struct AkMusicSyncCallbackInfo : public AkCallbackInfo {
    private: char pad_30[0x40]; public:
    int32_t& get_PlayingID();
    void* get_SegmentInfo();
    void* get_MusicSyncType();
    void* get_UserCueName();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x70
#pragma pack(pop)
}
