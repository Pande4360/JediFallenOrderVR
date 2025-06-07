#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "ParticleModuleBeamBase.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct ParticleModuleBeamModifier : public ParticleModuleBeamBase {
    private: char pad_30[0xf0]; public:
    void* get_ModifierType();
    void* get_PositionOptions();
    void* get_Position();
    void* get_TangentOptions();
    void* get_Tangent();
    bool get_bAbsoluteTangent();
    void set_bAbsoluteTangent(bool value);
    void* get_StrengthOptions();
    void* get_Strength();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x120
#pragma pack(pop)
}
