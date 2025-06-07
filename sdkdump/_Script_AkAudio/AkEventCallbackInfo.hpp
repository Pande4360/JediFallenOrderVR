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
struct AkEventCallbackInfo : public AkCallbackInfo {
    private: char pad_30[0x8]; public:
    int32_t& get_PlayingID();
    int32_t& get_EventID();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x38
#pragma pack(pop)
}
