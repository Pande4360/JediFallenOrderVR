#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "SceneComponent.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct WindDirectionalSourceComponent : public SceneComponent {
    private: char pad_2d0[0x20]; public:
    float& get_Strength();
    float& get_Speed();
    float& get_MinGustAmount();
    float& get_MaxGustAmount();
    float& get_Radius();
    bool get_bPointWind();
    void set_bPointWind(bool value);
    static _Script_CoreUObject::Class* static_class();
    void SetWindType(void* InNewType);
    void SetStrength(float InNewStrength);
    void SetSpeed(float InNewSpeed);
    void SetRadius(float InNewRadius);
    void SetMinimumGustAmount(float InNewMinGust);
    void SetMaximumGustAmount(float InNewMaxGust);
}; // Size: 0x2f0
#pragma pack(pop)
}
