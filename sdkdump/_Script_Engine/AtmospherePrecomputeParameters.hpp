#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct AtmospherePrecomputeParameters {
    private: char pad_0[0x2c]; public:
    float& get_DensityHeight();
    float& get_DecayHeight();
    int32_t& get_MaxScatteringOrder();
    int32_t& get_TransmittanceTexWidth();
    int32_t& get_TransmittanceTexHeight();
    int32_t& get_IrradianceTexWidth();
    int32_t& get_IrradianceTexHeight();
    int32_t& get_InscatterAltitudeSampleNum();
    int32_t& get_InscatterMuNum();
    int32_t& get_InscatterMuSNum();
    int32_t& get_InscatterNuNum();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x2c
#pragma pack(pop)
}
