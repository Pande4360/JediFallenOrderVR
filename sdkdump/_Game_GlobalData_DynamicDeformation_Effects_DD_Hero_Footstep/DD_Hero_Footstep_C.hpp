#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_RsTechRT\RsDynamicDeformerParticleSystem.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_GlobalData_DynamicDeformation_Effects_DD_Hero_Footstep {
#pragma pack(push, 1)
struct DD_Hero_Footstep_C : public _Script_RsTechRT::RsDynamicDeformerParticleSystem {
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x368
#pragma pack(pop)
}
