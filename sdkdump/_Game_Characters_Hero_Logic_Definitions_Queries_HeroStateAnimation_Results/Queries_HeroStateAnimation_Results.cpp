#include "..\FUObjectArray.hpp"
#include "Queries_HeroStateAnimation_Results.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
bool _Game_Characters_Hero_Logic_Definitions_Queries_HeroStateAnimation_Results::Queries_HeroStateAnimation_Results::get_IsBeam_38_F81C8749452207EE564229957775CDE1() {
    return (*(uint8_t*)((uintptr_t)this + 0x0 + 0)) & 1 != 0;
}
void _Game_Characters_Hero_Logic_Definitions_Queries_HeroStateAnimation_Results::Queries_HeroStateAnimation_Results::set_IsBalanceBeam_7_345485DE4372E933D20C42BEA010BF30(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x1 + 0);
    *(uint8_t*)((uintptr_t)this + 0x1 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Game_Characters_Hero_Logic_Definitions_Queries_HeroStateAnimation_Results::Queries_HeroStateAnimation_Results::set_IsBeam_38_F81C8749452207EE564229957775CDE1(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x0 + 0);
    *(uint8_t*)((uintptr_t)this + 0x0 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Game_Characters_Hero_Logic_Definitions_Queries_HeroStateAnimation_Results::Queries_HeroStateAnimation_Results::get_IsBalanceBeam_7_345485DE4372E933D20C42BEA010BF30() {
    return (*(uint8_t*)((uintptr_t)this + 0x1 + 0)) & 1 != 0;
}
bool _Game_Characters_Hero_Logic_Definitions_Queries_HeroStateAnimation_Results::Queries_HeroStateAnimation_Results::get_IsMonkeyBeam_9_ACF5A92A4BE91D3652B9B79FABCEA3EC() {
    return (*(uint8_t*)((uintptr_t)this + 0x2 + 0)) & 1 != 0;
}
void _Game_Characters_Hero_Logic_Definitions_Queries_HeroStateAnimation_Results::Queries_HeroStateAnimation_Results::set_IsWallPress_17_439F54DB45EBBEC0047909B5F747106E(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x3 + 0);
    *(uint8_t*)((uintptr_t)this + 0x3 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Game_Characters_Hero_Logic_Definitions_Queries_HeroStateAnimation_Results::Queries_HeroStateAnimation_Results::set_IsMonkeyBeam_9_ACF5A92A4BE91D3652B9B79FABCEA3EC(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x2 + 0);
    *(uint8_t*)((uintptr_t)this + 0x2 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Game_Characters_Hero_Logic_Definitions_Queries_HeroStateAnimation_Results::Queries_HeroStateAnimation_Results::get_IsWallPress_17_439F54DB45EBBEC0047909B5F747106E() {
    return (*(uint8_t*)((uintptr_t)this + 0x3 + 0)) & 1 != 0;
}
bool _Game_Characters_Hero_Logic_Definitions_Queries_HeroStateAnimation_Results::Queries_HeroStateAnimation_Results::get_IsDoubleJump_30_68D5E7C34CD12A05949948931FB23AA3() {
    return (*(uint8_t*)((uintptr_t)this + 0x4 + 0)) & 1 != 0;
}
void _Game_Characters_Hero_Logic_Definitions_Queries_HeroStateAnimation_Results::Queries_HeroStateAnimation_Results::set_IsDoubleJump_30_68D5E7C34CD12A05949948931FB23AA3(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x4 + 0);
    *(uint8_t*)((uintptr_t)this + 0x4 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Game_Characters_Hero_Logic_Definitions_Queries_HeroStateAnimation_Results::Queries_HeroStateAnimation_Results::get_IsSlide_33_C04862D34B9576FFD91B76878361CABC() {
    return (*(uint8_t*)((uintptr_t)this + 0x5 + 0)) & 1 != 0;
}
void _Game_Characters_Hero_Logic_Definitions_Queries_HeroStateAnimation_Results::Queries_HeroStateAnimation_Results::set_IsSlide_33_C04862D34B9576FFD91B76878361CABC(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x5 + 0);
    *(uint8_t*)((uintptr_t)this + 0x5 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Game_Characters_Hero_Logic_Definitions_Queries_HeroStateAnimation_Results::Queries_HeroStateAnimation_Results::get_IsRope_34_2B429A3C4D912E23F92F249F32F96FE1() {
    return (*(uint8_t*)((uintptr_t)this + 0x6 + 0)) & 1 != 0;
}
void _Game_Characters_Hero_Logic_Definitions_Queries_HeroStateAnimation_Results::Queries_HeroStateAnimation_Results::set_IsForce_45_E29EF47540431E9323CE9D8B855D3210(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x9 + 0);
    *(uint8_t*)((uintptr_t)this + 0x9 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Game_Characters_Hero_Logic_Definitions_Queries_HeroStateAnimation_Results::Queries_HeroStateAnimation_Results::set_IsRope_34_2B429A3C4D912E23F92F249F32F96FE1(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x6 + 0);
    *(uint8_t*)((uintptr_t)this + 0x6 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Game_Characters_Hero_Logic_Definitions_Queries_HeroStateAnimation_Results::Queries_HeroStateAnimation_Results::get_IsSwim_40_33FF4DCD42476CE5F38D51B69FB97A82() {
    return (*(uint8_t*)((uintptr_t)this + 0x7 + 0)) & 1 != 0;
}
void _Game_Characters_Hero_Logic_Definitions_Queries_HeroStateAnimation_Results::Queries_HeroStateAnimation_Results::set_IsSwim_40_33FF4DCD42476CE5F38D51B69FB97A82(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x7 + 0);
    *(uint8_t*)((uintptr_t)this + 0x7 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Game_Characters_Hero_Logic_Definitions_Queries_HeroStateAnimation_Results::Queries_HeroStateAnimation_Results::get_isZipline_61_E059034C45739A0C7A8C8181896305FF() {
    return (*(uint8_t*)((uintptr_t)this + 0xe + 0)) & 1 != 0;
}
bool _Game_Characters_Hero_Logic_Definitions_Queries_HeroStateAnimation_Results::Queries_HeroStateAnimation_Results::get_isJump_43_F859A8754C11EDE895B111977664D118() {
    return (*(uint8_t*)((uintptr_t)this + 0x8 + 0)) & 1 != 0;
}
void _Game_Characters_Hero_Logic_Definitions_Queries_HeroStateAnimation_Results::Queries_HeroStateAnimation_Results::set_isJump_43_F859A8754C11EDE895B111977664D118(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x8 + 0);
    *(uint8_t*)((uintptr_t)this + 0x8 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Game_Characters_Hero_Logic_Definitions_Queries_HeroStateAnimation_Results::Queries_HeroStateAnimation_Results::get_IsForce_45_E29EF47540431E9323CE9D8B855D3210() {
    return (*(uint8_t*)((uintptr_t)this + 0x9 + 0)) & 1 != 0;
}
bool _Game_Characters_Hero_Logic_Definitions_Queries_HeroStateAnimation_Results::Queries_HeroStateAnimation_Results::get_IsAir_47_B1507D724E37554761988BA60839CF7F() {
    return (*(uint8_t*)((uintptr_t)this + 0xa + 0)) & 1 != 0;
}
void _Game_Characters_Hero_Logic_Definitions_Queries_HeroStateAnimation_Results::Queries_HeroStateAnimation_Results::set_IsAir_47_B1507D724E37554761988BA60839CF7F(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xa + 0);
    *(uint8_t*)((uintptr_t)this + 0xa + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Game_Characters_Hero_Logic_Definitions_Queries_HeroStateAnimation_Results::Queries_HeroStateAnimation_Results::get_isLedgeGrab_51_257C2A6542632A974C6159855FB97B90() {
    return (*(uint8_t*)((uintptr_t)this + 0xb + 0)) & 1 != 0;
}
void _Game_Characters_Hero_Logic_Definitions_Queries_HeroStateAnimation_Results::Queries_HeroStateAnimation_Results::set_isLedgeGrab_51_257C2A6542632A974C6159855FB97B90(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xb + 0);
    *(uint8_t*)((uintptr_t)this + 0xb + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Game_Characters_Hero_Logic_Definitions_Queries_HeroStateAnimation_Results::Queries_HeroStateAnimation_Results::get_isClimb_57_0EC72B6540C3BC4A00311F99B5B10793() {
    return (*(uint8_t*)((uintptr_t)this + 0xc + 0)) & 1 != 0;
}
void _Game_Characters_Hero_Logic_Definitions_Queries_HeroStateAnimation_Results::Queries_HeroStateAnimation_Results::set_isClimb_57_0EC72B6540C3BC4A00311F99B5B10793(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xc + 0);
    *(uint8_t*)((uintptr_t)this + 0xc + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Game_Characters_Hero_Logic_Definitions_Queries_HeroStateAnimation_Results::Queries_HeroStateAnimation_Results::get_isGround_59_4973E3F141AED23FDB04E5A0FEE32C1C() {
    return (*(uint8_t*)((uintptr_t)this + 0xd + 0)) & 1 != 0;
}
void _Game_Characters_Hero_Logic_Definitions_Queries_HeroStateAnimation_Results::Queries_HeroStateAnimation_Results::set_isGround_59_4973E3F141AED23FDB04E5A0FEE32C1C(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xd + 0);
    *(uint8_t*)((uintptr_t)this + 0xd + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Game_Characters_Hero_Logic_Definitions_Queries_HeroStateAnimation_Results::Queries_HeroStateAnimation_Results::set_isZipline_61_E059034C45739A0C7A8C8181896305FF(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xe + 0);
    *(uint8_t*)((uintptr_t)this + 0xe + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_CoreUObject::Class* _Game_Characters_Hero_Logic_Definitions_Queries_HeroStateAnimation_Results::Queries_HeroStateAnimation_Results::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"UserDefinedStruct /Game/Characters/Hero/Logic/Definitions/Queries_HeroStateAnimation_Results.Queries_HeroStateAnimation_Results");
    return result;
}
