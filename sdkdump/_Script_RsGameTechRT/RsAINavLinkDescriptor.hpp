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
struct RsAINavLinkDescriptor {
    private: char pad_0[0x38]; public:
    void* get_Left();
    void* get_Right();
    void* get_Direction();
    float& get_SnapToEdgeRadius();
    float& get_SnapToGroundHeight();
    void* get_AreaClass();
    void* get_UserId();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x38
#pragma pack(pop)
}
