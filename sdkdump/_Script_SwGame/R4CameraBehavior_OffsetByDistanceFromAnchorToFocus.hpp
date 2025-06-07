#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_RsGameTechRT\RsCameraBehavior.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_SwGame {
#pragma pack(push, 1)
struct R4CameraBehavior_OffsetByDistanceFromAnchorToFocus : public _Script_RsGameTechRT::RsCameraBehavior {
    private: char pad_30[0x98]; public:
    float& get_DistanceScaleFactor();
    bool get_bApplyDistanceOffset();
    void set_bApplyDistanceOffset(bool value);
    bool get_bApplyHeightOffset();
    void set_bApplyHeightOffset(bool value);
    void* get_HeightOffsetCurve();
    float& get_HeightOffsetDistanceScale();
    float& get_HeightOffsetHeightScale();
    float& get_MinDistToTarget();
    bool get_bSetFloorNormalByDirectionToFocus();
    void set_bSetFloorNormalByDirectionToFocus(bool value);
    bool get_bOffsetFocusActorHeightByCollisionHeight();
    void set_bOffsetFocusActorHeightByCollisionHeight(bool value);
    float& get_FocusActorHeightOffset();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0xc8
#pragma pack(pop)
}
