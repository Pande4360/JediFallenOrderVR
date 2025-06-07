#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_Characters_Hero_Logic_Definitions_Queries_HeroStateAnimation_Results {
#pragma pack(push, 1)
struct Queries_HeroStateAnimation_Results {
    private: char pad_0[0xf]; public:
    bool get_IsBeam_38_F81C8749452207EE564229957775CDE1();
    void set_IsBeam_38_F81C8749452207EE564229957775CDE1(bool value);
    bool get_IsBalanceBeam_7_345485DE4372E933D20C42BEA010BF30();
    void set_IsBalanceBeam_7_345485DE4372E933D20C42BEA010BF30(bool value);
    bool get_IsMonkeyBeam_9_ACF5A92A4BE91D3652B9B79FABCEA3EC();
    void set_IsMonkeyBeam_9_ACF5A92A4BE91D3652B9B79FABCEA3EC(bool value);
    bool get_IsWallPress_17_439F54DB45EBBEC0047909B5F747106E();
    void set_IsWallPress_17_439F54DB45EBBEC0047909B5F747106E(bool value);
    bool get_IsDoubleJump_30_68D5E7C34CD12A05949948931FB23AA3();
    void set_IsDoubleJump_30_68D5E7C34CD12A05949948931FB23AA3(bool value);
    bool get_IsSlide_33_C04862D34B9576FFD91B76878361CABC();
    void set_IsSlide_33_C04862D34B9576FFD91B76878361CABC(bool value);
    bool get_IsRope_34_2B429A3C4D912E23F92F249F32F96FE1();
    void set_IsRope_34_2B429A3C4D912E23F92F249F32F96FE1(bool value);
    bool get_IsSwim_40_33FF4DCD42476CE5F38D51B69FB97A82();
    void set_IsSwim_40_33FF4DCD42476CE5F38D51B69FB97A82(bool value);
    bool get_isJump_43_F859A8754C11EDE895B111977664D118();
    void set_isJump_43_F859A8754C11EDE895B111977664D118(bool value);
    bool get_IsForce_45_E29EF47540431E9323CE9D8B855D3210();
    void set_IsForce_45_E29EF47540431E9323CE9D8B855D3210(bool value);
    bool get_IsAir_47_B1507D724E37554761988BA60839CF7F();
    void set_IsAir_47_B1507D724E37554761988BA60839CF7F(bool value);
    bool get_isLedgeGrab_51_257C2A6542632A974C6159855FB97B90();
    void set_isLedgeGrab_51_257C2A6542632A974C6159855FB97B90(bool value);
    bool get_isClimb_57_0EC72B6540C3BC4A00311F99B5B10793();
    void set_isClimb_57_0EC72B6540C3BC4A00311F99B5B10793(bool value);
    bool get_isGround_59_4973E3F141AED23FDB04E5A0FEE32C1C();
    void set_isGround_59_4973E3F141AED23FDB04E5A0FEE32C1C(bool value);
    bool get_isZipline_61_E059034C45739A0C7A8C8181896305FF();
    void set_isZipline_61_E059034C45739A0C7A8C8181896305FF(bool value);
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0xf
#pragma pack(pop)
}
