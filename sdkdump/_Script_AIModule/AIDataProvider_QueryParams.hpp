#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "AIDataProvider.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_AIModule {
#pragma pack(push, 1)
struct AIDataProvider_QueryParams : public AIDataProvider {
    private: char pad_28[0x18]; public:
    void* get_ParamName();
    float& get_FloatValue();
    int32_t& get_IntValue();
    bool get_BoolValue();
    void set_BoolValue(bool value);
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x40
#pragma pack(pop)
}
