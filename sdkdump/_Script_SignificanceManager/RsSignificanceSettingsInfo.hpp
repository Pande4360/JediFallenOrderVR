#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_SignificanceManager {
#pragma pack(push, 1)
struct RsSignificanceSettingsInfo {
    private: char pad_0[0x18]; public:
    bool get_bDisableManaging();
    void set_bDisableManaging(bool value);
    void* get_MinSignificanceForHigh();
    void* get_MaxInstancesAtHigh();
    void* get_MinSignificanceForMedium();
    void* get_MaxInstancesAtMedium();
    void* get_MinDistToAllowCulling();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x18
#pragma pack(pop)
}
