#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "ParticleModuleSizeBase.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct ParticleModuleSizeMultiplyLife : public ParticleModuleSizeBase {
    private: char pad_30[0x58]; public:
    void* get_LifeMultiplier();
    bool get_MultiplyX();
    void set_MultiplyX(bool value);
    bool get_MultiplyY();
    void set_MultiplyY(bool value);
    bool get_MultiplyZ();
    void set_MultiplyZ(bool value);
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x88
#pragma pack(pop)
}
