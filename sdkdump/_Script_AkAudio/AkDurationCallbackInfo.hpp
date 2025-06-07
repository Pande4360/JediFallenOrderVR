#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "AkEventCallbackInfo.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_AkAudio {
#pragma pack(push, 1)
struct AkDurationCallbackInfo : public AkEventCallbackInfo {
    private: char pad_38[0x18]; public:
    float& get_Duration();
    float& get_EstimatedDuration();
    int32_t& get_AudioNodeID();
    int32_t& get_MediaID();
    bool get_bStreaming();
    void set_bStreaming(bool value);
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x50
#pragma pack(pop)
}
