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
struct ParticleModuleBeamSource : public ParticleModuleBeamBase {
    private: char pad_30[0x108]; public:
    void* get_SourceMethod();
    void* get_SourceName();
    bool get_bSourceAbsolute();
    void set_bSourceAbsolute(bool value);
    void* get_Source();
    bool get_bLockSource();
    void set_bLockSource(bool value);
    void* get_SourceTangentMethod();
    void* get_SourceTangent();
    bool get_bLockSourceTangent();
    void set_bLockSourceTangent(bool value);
    void* get_SourceStrength();
    bool get_bLockSourceStength();
    void set_bLockSourceStength(bool value);
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x138
#pragma pack(pop)
}
