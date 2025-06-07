#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "HapticFeedbackEffect_Base.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct HapticFeedbackEffect_Curve : public HapticFeedbackEffect_Base {
    private: char pad_28[0xf0]; public:
    void* get_HapticDetails();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x118
#pragma pack(pop)
}
