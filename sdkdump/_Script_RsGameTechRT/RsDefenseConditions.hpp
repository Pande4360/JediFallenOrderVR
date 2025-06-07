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
struct RsDefenseConditions {
    private: char pad_0[0x24]; public:
    int32_t& get_RandomMinCount();
    int32_t& get_MaxCount();
    bool get_SpecialActionAtMax();
    void set_SpecialActionAtMax(bool value);
    float& get_RechargeStartDelay();
    float& get_RechargeRate();
    int32_t& get_MarkerRandomMinCount();
    int32_t& get_MarkerRandomMaxCount();
    float& get_MarkerTimeOut();
    float& get_MaxAngleCosine();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x24
#pragma pack(pop)
}
