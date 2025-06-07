#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\Object.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_HeightVolumeFogRuntime {
#pragma pack(push, 1)
struct HeightVolumeFogBlendable : public _Script_CoreUObject::Object {
    private: char pad_28[0xb8]; public:
    void* get_Settings();
    float& get_BlendWeight();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0xe0
#pragma pack(pop)
}
