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
struct RsAnimationCompressionCommandletAlgorithmParametersProfile {
    private: char pad_0[0xc0]; public:
    void* get_ProfileName();
    void* get_PerTrackAlgorithmParameters();
    void* get_RemoveLinearKeysAlgorithmParameters();
    void* get_ACLAlgorithmParameters();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0xc0
#pragma pack(pop)
}
