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
struct SubsurfaceProfileStruct {
    private: char pad_0[0x60]; public:
    float& get_ScatterRadius();
    void* get_SubsurfaceColor();
    void* get_FalloffColor();
    void* get_BoundaryColorBleed();
    float& get_ExtinctionScale();
    float& get_NormalScale();
    float& get_ScatteringDistribution();
    float& get_IOR();
    float& get_Roughness0();
    float& get_Roughness1();
    float& get_LobeMix();
    void* get_TransmittanceColor();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x60
#pragma pack(pop)
}
