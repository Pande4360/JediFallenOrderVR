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
struct AkMarkerCallbackInfo : public AkEventCallbackInfo {
    private: char pad_38[0x18]; public:
    int32_t& get_Identifier();
    int32_t& get_Position();
    void* get_Label();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x50
#pragma pack(pop)
}
