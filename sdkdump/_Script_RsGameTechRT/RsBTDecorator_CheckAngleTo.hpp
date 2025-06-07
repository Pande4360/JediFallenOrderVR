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
struct RsBTDecorator_CheckAngleTo : public RsBTDecorator_RelativeToLocationBase {
    private: char pad_90[0x38]; public:
    void* get_Axis();
    void* get_Comparison();
    float& get_Angle();
    bool get_bUseCustomAxis();
    void set_bUseCustomAxis(bool value);
    void* get_CustomAxisEndLocationKey();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0xc8
#pragma pack(pop)
}
