#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "ButtonMashType.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_SwGame {
#pragma pack(push, 1)
struct ButtonMashDurationAnimNotify : public ButtonMashType {
    private: char pad_30[0x8]; public:
    void* get_NotifyIdentifier();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x38
#pragma pack(pop)
}
