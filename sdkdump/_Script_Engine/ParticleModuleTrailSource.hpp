#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "ParticleModuleTrailBase.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct ParticleModuleTrailSource : public ParticleModuleTrailBase {
    private: char pad_30[0x68]; public:
    void* get_SourceMethod();
    void* get_SourceName();
    void* get_SourceStrength();
    bool get_bLockSourceStength();
    void set_bLockSourceStength(bool value);
    int32_t& get_SourceOffsetCount();
    void* get_SourceOffsetDefaults();
    void* get_SelectionMethod();
    bool get_bInheritRotation();
    void set_bInheritRotation(bool value);
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x98
#pragma pack(pop)
}
