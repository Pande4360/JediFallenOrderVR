#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "AIDataProvider_QueryParams.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_AIModule {
#pragma pack(push, 1)
struct AIDataProvider_Random : public AIDataProvider_QueryParams {
    private: char pad_40[0x10]; public:
    float& get_Min();
    float& get_Max();
    bool get_bInteger();
    void set_bInteger(bool value);
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x50
#pragma pack(pop)
}
