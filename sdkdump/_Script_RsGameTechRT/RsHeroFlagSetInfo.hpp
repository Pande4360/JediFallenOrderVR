#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_RsGameTechRT {
#pragma pack(push, 1)
struct RsHeroFlagSetInfo {
    private: char pad_0[0x48]; public:
    void* get_FlagSet();
    void* get_SetFlags();
    void* get_ClearFlags();
    void* get_InvalidFlags();
    void* get_ClearInvalidFlags();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x48
#pragma pack(pop)
}
