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
struct RsGroupHitCollider {
    private: char pad_0[0x1e0]; public:
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x1e0
#pragma pack(pop)
}
