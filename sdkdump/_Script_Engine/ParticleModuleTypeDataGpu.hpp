#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "ParticleModuleTypeDataBase.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct ParticleModuleTypeDataGpu : public ParticleModuleTypeDataBase {
    private: char pad_30[0x440]; public:
    void* get_EmitterInfo();
    void* get_ResourceData();
    float& get_CameraMotionBlurAmount();
    bool get_bClearExistingParticlesOnInit();
    void set_bClearExistingParticlesOnInit(bool value);
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x470
#pragma pack(pop)
}
