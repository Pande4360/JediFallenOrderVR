#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\Object.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_LightPropagationVolumeRuntime {
#pragma pack(push, 1)
struct LightPropagationVolumeBlendable : public _Script_CoreUObject::Object {
    private: char pad_28[0x50]; public:
    void* get_Settings();
    float& get_BlendWeight();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x78
#pragma pack(pop)
}
