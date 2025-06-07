#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "RsBTTask_SpatialQueryBase.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_RsGameTechRT {
#pragma pack(push, 1)
struct RsBTTask_FindLocationInCone : public RsBTTask_SpatialQueryBase {
    private: char pad_a8[0x40]; public:
    void* get_SourceLocationKey();
    float& get_MinDistance();
    float& get_MaxDistance();
    float& get_OffsetAngle();
    float& get_HalfAngle();
    bool get_bRequireInCone();
    void set_bRequireInCone(bool value);
    void* get_ItemSelection();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0xe8
#pragma pack(pop)
}
