#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "SwBaseCustomSetting.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_SwGame {
#pragma pack(push, 1)
struct SwCustomSettingString : public SwBaseCustomSetting {
    private: char pad_10[0x10]; public:
    void* get_Data();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x20
#pragma pack(pop)
}
