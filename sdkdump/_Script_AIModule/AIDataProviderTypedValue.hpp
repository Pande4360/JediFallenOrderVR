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
struct AIDataProviderTypedValue : public AIDataProviderValue {
    private: char pad_20[0x8]; public:
    void* get_PropertyType();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x28
#pragma pack(pop)
}
