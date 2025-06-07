#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\TableRowBase.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_SwGame {
#pragma pack(push, 1)
struct SwResourceMeterDataTableRow : public _Script_Engine::TableRowBase {
    private: char pad_8[0x18]; public:
    float& get_AmountImmediate();
    float& get_AmountImmediatePercentageOfMaxBar();
    float& get_AmountImmediatePercentageOfRemainingBar();
    float& get_AmountOverTime();
    float& get_ShadowTime();
    float& get_RegenerationMultiplier();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x20
#pragma pack(pop)
}
