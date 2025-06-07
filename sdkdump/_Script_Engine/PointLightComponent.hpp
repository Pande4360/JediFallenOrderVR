#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "LocalLightComponent.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct PointLightComponent : public LocalLightComponent {
    private: char pad_440[0x10]; public:
    bool get_bUseInverseSquaredFalloff();
    void set_bUseInverseSquaredFalloff(bool value);
    float& get_LightFalloffExponent();
    float& get_SourceRadius();
    float& get_SoftSourceRadius();
    float& get_SourceLength();
    static _Script_CoreUObject::Class* static_class();
    void SetSourceRadius(float bNewValue);
    void SetSourceLength(float NewValue);
    void SetSoftSourceRadius(float bNewValue);
    void SetLightFalloffExponent(float NewLightFalloffExponent);
}; // Size: 0x450
#pragma pack(pop)
}
