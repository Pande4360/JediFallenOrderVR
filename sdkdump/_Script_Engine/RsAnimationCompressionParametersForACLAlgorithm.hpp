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
struct RsAnimationCompressionParametersForACLAlgorithm {
    private: char pad_0[0x14]; public:
    void* get_CompressionLevel();
    float& get_DefaultVirtualVertexDistance();
    float& get_SafeVirtualVertexDistance();
    float& get_SafetyFallbackThreshold();
    float& get_ErrorThreshold();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x14
#pragma pack(pop)
}
