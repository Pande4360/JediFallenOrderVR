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
struct SwForceMeterDataTableRow : public _Script_Engine::TableRowBase {
    private: char pad_8[0x20]; public:
    float& get_ForceAmountImmediate();
    float& get_ForceAmountImmediatePercentageOfMaxBar();
    float& get_ForceAmountImmediatePercentageOfRemainingBar();
    float& get_ForceAmountOverTime();
    float& get_ShadowTime();
    float& get_RegenerationMultiplier();
    float& get_MinForceRequired();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x28
#pragma pack(pop)
}
