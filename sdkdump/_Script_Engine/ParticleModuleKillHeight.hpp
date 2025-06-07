#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "ParticleModuleKillBase.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct ParticleModuleKillHeight : public ParticleModuleKillBase {
    private: char pad_30[0x40]; public:
    void* get_Height();
    bool get_bAbsolute();
    void set_bAbsolute(bool value);
    bool get_bFloor();
    void set_bFloor(bool value);
    bool get_bApplyPSysScale();
    void set_bApplyPSysScale(bool value);
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x70
#pragma pack(pop)
}
