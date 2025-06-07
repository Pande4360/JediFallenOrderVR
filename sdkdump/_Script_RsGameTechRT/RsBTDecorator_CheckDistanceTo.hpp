#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "RsBTDecorator_RelativeToLocationBase.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_RsGameTechRT {
#pragma pack(push, 1)
struct RsBTDecorator_CheckDistanceTo : public RsBTDecorator_RelativeToLocationBase {
    private: char pad_90[0x98]; public:
    void* get_Comparison();
    float& get_Distance();
    void* get_DistanceKey();
    float& get_MinDistance();
    void* get_MinDistanceKey();
    float& get_MaxDistance();
    void* get_MaxDistanceKey();
    bool get_bIsRangeCheck();
    void set_bIsRangeCheck(bool value);
    bool get_bCheckDistanceIn2D();
    void set_bCheckDistanceIn2D(bool value);
    bool get_bCheckDistanceInZ();
    void set_bCheckDistanceInZ(bool value);
    bool get_bUseDistanceBlackboardKey();
    void set_bUseDistanceBlackboardKey(bool value);
    bool get_bUseMinDistanceBlackboardKey();
    void set_bUseMinDistanceBlackboardKey(bool value);
    bool get_bUseMaxDistanceBlackboardKey();
    void set_bUseMaxDistanceBlackboardKey(bool value);
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x128
#pragma pack(pop)
}
