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
struct RsAISensorDefinition_Transference : public RsAISensorDefinition {
    private: char pad_38[0x8]; public:
    int32_t& get_MaxDegreesOfTransference();
    float& get_MaxTimeWindowForTransference();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x40
#pragma pack(pop)
}
