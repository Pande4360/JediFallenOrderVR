#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\TableRowBase.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_SwGame {
#pragma pack(push, 1)
struct SwPullAbilityWeightData : public _Script_Engine::TableRowBase {
    private: char pad_8[0x28]; public:
    void* get_CameraMode();
    float& get_Springiness();
    float& get_SpringDampening();
    float& get_LinearDampening();
    float& get_LinearStiffness();
    float& get_InterpolationSpeed();
    bool get_bShouldYank();
    void set_bShouldYank(bool value);
    float& get_YankSpeed();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x30
#pragma pack(pop)
}
