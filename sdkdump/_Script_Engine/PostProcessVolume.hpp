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
struct PostProcessVolume : public Volume {
    private: char pad_398[0x528]; public:
    void* get_Settings();
    float& get_Priority();
    float& get_BlendRadius();
    float& get_BlendWeight();
    bool get_bEnabled();
    void set_bEnabled(bool value);
    bool get_bUnbound();
    void set_bUnbound(bool value);
    static _Script_CoreUObject::Class* static_class();
    void AddOrUpdateBlendable(void* InBlendableObject, float InWeight);
}; // Size: 0x8c0
#pragma pack(pop)
}
