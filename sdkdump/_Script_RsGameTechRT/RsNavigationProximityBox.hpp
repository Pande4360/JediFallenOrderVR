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
struct RsNavigationProximityBox {
    private: char pad_0[0x20]; public:
    float& get_HorizontalDifference();
    void* get_TopWindow();
    void* get_FaceWindow();
    void* get_CenterOffset();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x20
#pragma pack(pop)
}
