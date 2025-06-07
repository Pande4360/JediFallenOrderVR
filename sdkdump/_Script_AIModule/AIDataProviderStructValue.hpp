#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "AIDataProviderValue.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_AIModule {
#pragma pack(push, 1)
struct AIDataProviderStructValue : public AIDataProviderValue {
    private: char pad_20[0x10]; public:
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x30
#pragma pack(pop)
}
