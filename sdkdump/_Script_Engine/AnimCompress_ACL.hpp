#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "AnimCompress_ACLBase.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct AnimCompress_ACL : public AnimCompress_ACLBase {
    private: char pad_50[0x18]; public:
    void* get_CompressionLevel();
    float& get_DefaultVirtualVertexDistance();
    float& get_SafeVirtualVertexDistance();
    float& get_SafetyFallbackThreshold();
    float& get_ErrorThreshold();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x68
#pragma pack(pop)
}
