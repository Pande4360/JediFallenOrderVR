#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "RsIKBehaviorDefinition.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_RsGameTechRT {
#pragma pack(push, 1)
struct RsIKBehaviorDefinition_HandsVerticalAdjust : public RsIKBehaviorDefinition {
    private: char pad_30[0x28]; public:
    float& get_VerticalTraceDistance();
    float& get_LedgeVerticalTraceDistance();
    float& get_VerticalTraceRadius();
    float& get_MinAngleFromSurfaceBoneDegrees();
    void* get_RefBoneName();
    void* get_LedgeRefBoneName();
    bool get_bDebugDraw();
    void set_bDebugDraw(bool value);
    bool get_bDebugDrawTrace();
    void set_bDebugDrawTrace(bool value);
    bool get_bRotationEnabled();
    void set_bRotationEnabled(bool value);
    bool get_bRefMovementOffsetEnabled();
    void set_bRefMovementOffsetEnabled(bool value);
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x58
#pragma pack(pop)
}
