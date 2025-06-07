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
struct RsLedgeSurveyFrameInfo {
    private: char pad_0[0x1c]; public:
    float& get_m_width();
    float& get_m_height();
    float& get_m_overLedgeDepth();
    float& get_m_frontOfLedgeHeight();
    float& get_m_longitudinalAngleFromHorizontalDegrees();
    float& get_m_lateralAngleFromHorizontalDegrees();
    bool get_m_hasPullupClearance();
    void set_m_hasPullupClearance(bool value);
    bool get_m_hasHangingClearance();
    void set_m_hasHangingClearance(bool value);
    bool get_m_inDisableGrabVolume();
    void set_m_inDisableGrabVolume(bool value);
    bool get_m_forceLedgeHang();
    void set_m_forceLedgeHang(bool value);
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x1c
#pragma pack(pop)
}
