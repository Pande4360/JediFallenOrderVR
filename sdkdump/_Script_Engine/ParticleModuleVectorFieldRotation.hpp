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
struct ParticleModuleVectorFieldRotation : public ParticleModuleVectorFieldBase {
    private: char pad_30[0x18]; public:
    void* get_MinInitialRotation();
    void* get_MaxInitialRotation();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x48
#pragma pack(pop)
}
