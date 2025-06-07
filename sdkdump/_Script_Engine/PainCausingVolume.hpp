#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "PhysicsVolume.hpp"
namespace _Script_Engine {
struct Controller;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct PainCausingVolume : public PhysicsVolume {
    private: char pad_3a8[0x28]; public:
    bool get_bPainCausing();
    void set_bPainCausing(bool value);
    float& get_DamagePerSec();
    void* get_DamageType();
    float& get_PainInterval();
    bool get_bEntryPain();
    void set_bEntryPain(bool value);
    bool get_BACKUP_bPainCausing();
    void set_BACKUP_bPainCausing(bool value);
    _Script_Engine::Controller*& get_DamageInstigator();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x3d0
#pragma pack(pop)
}
