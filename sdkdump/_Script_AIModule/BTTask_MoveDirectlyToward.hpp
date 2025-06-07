#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "BTTask_MoveTo.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_AIModule {
#pragma pack(push, 1)
struct BTTask_MoveDirectlyToward : public BTTask_MoveTo {
    private: char pad_b0[0x8]; public:
    bool get_bDisablePathUpdateOnGoalLocationChange();
    void set_bDisablePathUpdateOnGoalLocationChange(bool value);
    bool get_bProjectVectorGoalToNavigation();
    void set_bProjectVectorGoalToNavigation(bool value);
    bool get_bUpdatedDeprecatedProperties();
    void set_bUpdatedDeprecatedProperties(bool value);
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0xb8
#pragma pack(pop)
}
