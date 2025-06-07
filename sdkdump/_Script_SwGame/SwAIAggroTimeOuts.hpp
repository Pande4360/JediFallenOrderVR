#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_SwGame {
#pragma pack(push, 1)
struct SwAIAggroTimeOuts {
    private: char pad_0[0x20]; public:
    int32_t& get_MaxCharacterType();
    float& get_MinCharacterTypeLockoutTime();
    float& get_MaxCharacterTypeLockoutTime();
    float& get_MinIndividualLockoutTime();
    float& get_MaxIndividualLockoutTime();
    float& get_MinSingleAttackerLockoutTime();
    float& get_MaxSingleAttackerLockoutTime();
    bool get_bUseSingleAttackerLockoutTimes();
    void set_bUseSingleAttackerLockoutTimes(bool value);
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x20
#pragma pack(pop)
}
