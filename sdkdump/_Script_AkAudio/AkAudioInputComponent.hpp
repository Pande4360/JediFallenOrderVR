#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "AkComponent.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_AkAudio {
#pragma pack(push, 1)
struct AkAudioInputComponent : public AkComponent {
    private: char pad_510[0x10]; public:
    static _Script_CoreUObject::Class* static_class();
    int32_t PostAssociatedAudioInputEvent();
}; // Size: 0x520
#pragma pack(pop)
}
