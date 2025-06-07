#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "Volume.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct CullDistanceVolume : public Volume {
    private: char pad_398[0x18]; public:
    void* get_CullDistances();
    bool get_bEnabled();
    void set_bEnabled(bool value);
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x3b0
#pragma pack(pop)
}
