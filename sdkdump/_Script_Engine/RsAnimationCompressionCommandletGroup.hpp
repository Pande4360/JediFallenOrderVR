#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct RsAnimationCompressionCommandletGroup {
    private: char pad_0[0x48]; public:
    void* get_GroupName();
    bool get_bActivate();
    void set_bActivate(bool value);
    void* get_PathTokensRequired();
    void* get_PathTokensProhibited();
    void* get_ProfileNameWithAlgorithmParameters();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x48
#pragma pack(pop)
}
