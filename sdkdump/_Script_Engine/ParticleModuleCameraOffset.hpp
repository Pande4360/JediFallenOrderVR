#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "ParticleModuleCameraBase.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct ParticleModuleCameraOffset : public ParticleModuleCameraBase {
    private: char pad_30[0x40]; public:
    void* get_CameraOffset();
    bool get_bSpawnTimeOnly();
    void set_bSpawnTimeOnly(bool value);
    void* get_UpdateMethod();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x70
#pragma pack(pop)
}
