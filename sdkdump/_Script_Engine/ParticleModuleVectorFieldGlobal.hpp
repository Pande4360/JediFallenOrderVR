#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "ParticleModuleVectorFieldBase.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct ParticleModuleVectorFieldGlobal : public ParticleModuleVectorFieldBase {
    private: char pad_30[0x10]; public:
    bool get_bOverrideGlobalVectorFieldTightness();
    void set_bOverrideGlobalVectorFieldTightness(bool value);
    float& get_GlobalVectorFieldScale();
    float& get_GlobalVectorFieldTightness();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x40
#pragma pack(pop)
}
