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
struct RsAILocationSearchStrategy {
    private: char pad_0[0x8]; public:
    void* get_DistancePolicy();
    bool get_bRequiresLOS();
    void set_bRequiresLOS(bool value);
    bool get_bMustBeInViewFrustum();
    void set_bMustBeInViewFrustum(bool value);
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x8
#pragma pack(pop)
}
