#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_GlobalData_AnimState_Hero_AnimState_BP_BalanceBeam {
#pragma pack(push, 1)
struct AnimState_BP_BalanceBeam {
    private: char pad_0[0x8]; public:
    float& get_LeanAnimDriver_3_A5649D51468FE8035D0E9CB0EE4C4367();
    bool get_bIsSlow_5_D752161149AF480889D142A840632187();
    void set_bIsSlow_5_D752161149AF480889D142A840632187(bool value);
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x8
#pragma pack(pop)
}
