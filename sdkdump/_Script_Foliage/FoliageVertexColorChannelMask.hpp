#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Foliage {
#pragma pack(push, 1)
struct FoliageVertexColorChannelMask {
    private: char pad_0[0xc]; public:
    bool get_UseMask();
    void set_UseMask(bool value);
    float& get_MaskThreshold();
    bool get_InvertMask();
    void set_InvertMask(bool value);
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0xc
#pragma pack(pop)
}
