#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "RsAISensorDefinition.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_RsGameTechRT {
#pragma pack(push, 1)
struct RsAISensorDefinition_Hearing : public RsAISensorDefinition {
    private: char pad_38[0x20]; public:
    float& get_HearingRange();
    void* get_SoundAwarenessValues();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x58
#pragma pack(pop)
}
