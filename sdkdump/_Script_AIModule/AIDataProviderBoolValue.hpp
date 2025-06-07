#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "AIDataProviderTypedValue.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_AIModule {
#pragma pack(push, 1)
struct AIDataProviderBoolValue : public AIDataProviderTypedValue {
    private: char pad_28[0x8]; public:
    bool get_DefaultValue();
    void set_DefaultValue(bool value);
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x30
#pragma pack(pop)
}
