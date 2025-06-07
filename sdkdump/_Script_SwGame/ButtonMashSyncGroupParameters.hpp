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
struct ButtonMashSyncGroupParameters {
    private: char pad_0[0x14]; public:
    float& get_ExpirationTime();
    float& get_ButtonMashStartPoint();
    float& get_ProgressionAmount();
    float& get_DecayAmountPerSecond();
    float& get_GracePeriod();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x14
#pragma pack(pop)
}
