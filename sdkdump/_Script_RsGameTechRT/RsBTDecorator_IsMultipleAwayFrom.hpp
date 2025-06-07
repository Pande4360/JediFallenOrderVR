#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "RsBTDecorator_RelativeToLocationBase.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_RsGameTechRT {
#pragma pack(push, 1)
struct RsBTDecorator_IsMultipleAwayFrom : public RsBTDecorator_RelativeToLocationBase {
    private: char pad_90[0x38]; public:
    void* get_Comparison();
    void* get_MultiplicandSource();
    float& get_Multiplier();
    void* get_MultiplicandKey();
    bool get_bCheckDistanceIn2D();
    void set_bCheckDistanceIn2D(bool value);
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0xc8
#pragma pack(pop)
}
