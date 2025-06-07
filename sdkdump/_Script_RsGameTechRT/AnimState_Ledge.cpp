#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "AnimState_Ledge.hpp"
bool _Script_RsGameTechRT::AnimState_Ledge::get_bSkipSpecialJumpEntranceAnimation() {
    return (*(uint8_t*)((uintptr_t)this + 0x2 + 0)) & 1 != 0;
}
void* _Script_RsGameTechRT::AnimState_Ledge::get_EnteringConstrainedJumpDirection() {
    return (void*)((uintptr_t)this + 0x1);
}
void* _Script_RsGameTechRT::AnimState_Ledge::get_LedgeEntryType() {
    return (void*)((uintptr_t)this + 0x0);
}
bool _Script_RsGameTechRT::AnimState_Ledge::get_bShouldLedgeHang() {
    return (*(uint8_t*)((uintptr_t)this + 0x8 + 0)) & 1 != 0;
}
void _Script_RsGameTechRT::AnimState_Ledge::set_bSkipSpecialJumpEntranceAnimation(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x2 + 0);
    *(uint8_t*)((uintptr_t)this + 0x2 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
float& _Script_RsGameTechRT::AnimState_Ledge::get_LedgeHeight() {
    return *(float*)((uintptr_t)this + 0x4);
}
void _Script_RsGameTechRT::AnimState_Ledge::set_bShouldLedgeHang(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x8 + 0);
    *(uint8_t*)((uintptr_t)this + 0x8 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_RsGameTechRT::AnimState_Ledge::get_bShouldLedgeHangAtShimmyStart() {
    return (*(uint8_t*)((uintptr_t)this + 0x9 + 0)) & 1 != 0;
}
void _Script_RsGameTechRT::AnimState_Ledge::set_bShouldLedgeHangAtShimmyStart(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x9 + 0);
    *(uint8_t*)((uintptr_t)this + 0x9 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_RsGameTechRT::AnimState_Ledge::get_bShouldLedgeHangAtShimmyEnd() {
    return (*(uint8_t*)((uintptr_t)this + 0xa + 0)) & 1 != 0;
}
void _Script_RsGameTechRT::AnimState_Ledge::set_bShouldLedgeHangAtShimmyEnd(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xa + 0);
    *(uint8_t*)((uintptr_t)this + 0xa + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
float& _Script_RsGameTechRT::AnimState_Ledge::get_FrontOfLedgeHeight() {
    return *(float*)((uintptr_t)this + 0xc);
}
float& _Script_RsGameTechRT::AnimState_Ledge::get_ShimmyProgressionDriver() {
    return *(float*)((uintptr_t)this + 0x10);
}
bool _Script_RsGameTechRT::AnimState_Ledge::get_bShouldPullup() {
    return (*(uint8_t*)((uintptr_t)this + 0x14 + 0)) & 1 != 0;
}
void _Script_RsGameTechRT::AnimState_Ledge::set_bShouldPullup(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x14 + 0);
    *(uint8_t*)((uintptr_t)this + 0x14 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_RsGameTechRT::AnimState_Ledge::get_bIsConstraintBlending() {
    return (*(uint8_t*)((uintptr_t)this + 0x15 + 0)) & 1 != 0;
}
void _Script_RsGameTechRT::AnimState_Ledge::set_bIsConstraintBlending(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x15 + 0);
    *(uint8_t*)((uintptr_t)this + 0x15 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
float& _Script_RsGameTechRT::AnimState_Ledge::get_LedgeControllerIntent() {
    return *(float*)((uintptr_t)this + 0x18);
}
void* _Script_RsGameTechRT::AnimState_Ledge::get_LedgeReachMode() {
    return (void*)((uintptr_t)this + 0x1c);
}
float& _Script_RsGameTechRT::AnimState_Ledge::get_LedgeReachAngle() {
    return *(float*)((uintptr_t)this + 0x20);
}
_Script_CoreUObject::Class* _Script_RsGameTechRT::AnimState_Ledge::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/RsGameTechRT.AnimState_Ledge");
    return result;
}
