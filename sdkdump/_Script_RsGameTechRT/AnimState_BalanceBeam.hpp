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
struct AnimState_BalanceBeam {
    private: char pad_0[0xc]; public:
    float& get_BalanceLeanAmount();
    float& get_MonkeySwingAmount();
    bool get_bIsParallelToBeam();
    void set_bIsParallelToBeam(bool value);
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0xc
#pragma pack(pop)
}
