#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "ParticleModuleSpawnBase.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct ParticleModuleSpawnPerUnit : public ParticleModuleSpawnBase {
    private: char pad_38[0x50]; public:
    float& get_UnitScalar();
    void* get_SpawnPerUnit();
    bool get_bIgnoreSpawnRateWhenMoving();
    void set_bIgnoreSpawnRateWhenMoving(bool value);
    float& get_MovementTolerance();
    float& get_MaxFrameDistance();
    bool get_bIgnoreMovementAlongX();
    void set_bIgnoreMovementAlongX(bool value);
    bool get_bIgnoreMovementAlongY();
    void set_bIgnoreMovementAlongY(bool value);
    bool get_bIgnoreMovementAlongZ();
    void set_bIgnoreMovementAlongZ(bool value);
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x88
#pragma pack(pop)
}
