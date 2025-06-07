#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_SwGame {
#pragma pack(push, 1)
struct RsVolumePlacementData {
    private: char pad_0[0x50]; public:
    void* get_Tags();
    void* get_BoneName();
    void* get_OffsetFromBone();
    void* get_HalfSize();
    void* get_AdditionalRotation();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x50
#pragma pack(pop)
}
