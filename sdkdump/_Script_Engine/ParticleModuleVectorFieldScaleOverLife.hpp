#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "ParticleModuleVectorFieldBase.hpp"
namespace _Script_Engine {
struct DistributionFloat;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct ParticleModuleVectorFieldScaleOverLife : public ParticleModuleVectorFieldBase {
    private: char pad_30[0x40]; public:
    _Script_Engine::DistributionFloat*& get_VectorFieldScaleOverLife();
    void* get_VectorFieldScaleOverLifeRaw();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x70
#pragma pack(pop)
}
