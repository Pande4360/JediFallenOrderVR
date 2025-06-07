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
struct AnimState_Ledge {
    private: char pad_0[0x24]; public:
    void* get_LedgeEntryType();
    void* get_EnteringConstrainedJumpDirection();
    bool get_bSkipSpecialJumpEntranceAnimation();
    void set_bSkipSpecialJumpEntranceAnimation(bool value);
    float& get_LedgeHeight();
    bool get_bShouldLedgeHang();
    void set_bShouldLedgeHang(bool value);
    bool get_bShouldLedgeHangAtShimmyStart();
    void set_bShouldLedgeHangAtShimmyStart(bool value);
    bool get_bShouldLedgeHangAtShimmyEnd();
    void set_bShouldLedgeHangAtShimmyEnd(bool value);
    float& get_FrontOfLedgeHeight();
    float& get_ShimmyProgressionDriver();
    bool get_bShouldPullup();
    void set_bShouldPullup(bool value);
    bool get_bIsConstraintBlending();
    void set_bIsConstraintBlending(bool value);
    float& get_LedgeControllerIntent();
    void* get_LedgeReachMode();
    float& get_LedgeReachAngle();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x24
#pragma pack(pop)
}
