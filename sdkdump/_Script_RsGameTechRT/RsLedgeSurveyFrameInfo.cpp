#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "RsLedgeSurveyFrameInfo.hpp"
float& _Script_RsGameTechRT::RsLedgeSurveyFrameInfo::get_m_width() {
    return *(float*)((uintptr_t)this + 0x0);
}
float& _Script_RsGameTechRT::RsLedgeSurveyFrameInfo::get_m_height() {
    return *(float*)((uintptr_t)this + 0x4);
}
float& _Script_RsGameTechRT::RsLedgeSurveyFrameInfo::get_m_lateralAngleFromHorizontalDegrees() {
    return *(float*)((uintptr_t)this + 0x14);
}
float& _Script_RsGameTechRT::RsLedgeSurveyFrameInfo::get_m_longitudinalAngleFromHorizontalDegrees() {
    return *(float*)((uintptr_t)this + 0x10);
}
bool _Script_RsGameTechRT::RsLedgeSurveyFrameInfo::get_m_hasHangingClearance() {
    return (*(uint8_t*)((uintptr_t)this + 0x19 + 0)) & 1 != 0;
}
float& _Script_RsGameTechRT::RsLedgeSurveyFrameInfo::get_m_overLedgeDepth() {
    return *(float*)((uintptr_t)this + 0x8);
}
float& _Script_RsGameTechRT::RsLedgeSurveyFrameInfo::get_m_frontOfLedgeHeight() {
    return *(float*)((uintptr_t)this + 0xc);
}
bool _Script_RsGameTechRT::RsLedgeSurveyFrameInfo::get_m_hasPullupClearance() {
    return (*(uint8_t*)((uintptr_t)this + 0x18 + 0)) & 1 != 0;
}
void _Script_RsGameTechRT::RsLedgeSurveyFrameInfo::set_m_hasPullupClearance(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x18 + 0);
    *(uint8_t*)((uintptr_t)this + 0x18 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Script_RsGameTechRT::RsLedgeSurveyFrameInfo::set_m_hasHangingClearance(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x19 + 0);
    *(uint8_t*)((uintptr_t)this + 0x19 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_RsGameTechRT::RsLedgeSurveyFrameInfo::get_m_inDisableGrabVolume() {
    return (*(uint8_t*)((uintptr_t)this + 0x1a + 0)) & 1 != 0;
}
void _Script_RsGameTechRT::RsLedgeSurveyFrameInfo::set_m_inDisableGrabVolume(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x1a + 0);
    *(uint8_t*)((uintptr_t)this + 0x1a + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_RsGameTechRT::RsLedgeSurveyFrameInfo::get_m_forceLedgeHang() {
    return (*(uint8_t*)((uintptr_t)this + 0x1b + 0)) & 1 != 0;
}
void _Script_RsGameTechRT::RsLedgeSurveyFrameInfo::set_m_forceLedgeHang(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x1b + 0);
    *(uint8_t*)((uintptr_t)this + 0x1b + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_CoreUObject::Class* _Script_RsGameTechRT::RsLedgeSurveyFrameInfo::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/RsGameTechRT.RsLedgeSurveyFrameInfo");
    return result;
}
