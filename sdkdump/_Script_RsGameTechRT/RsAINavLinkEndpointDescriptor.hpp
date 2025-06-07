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
struct RsAINavLinkEndpointDescriptor {
    private: char pad_0[0x40]; public:
    void* get_NavDataName();
    int32_t& get_NavDataIndex();
    void* get_LeftLocation();
    void* get_RightLocation();
    void* get_LeftTangent();
    void* get_RightTangent();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x40
#pragma pack(pop)
}
