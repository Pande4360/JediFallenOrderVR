#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "Emitter.hpp"
namespace _Script_Engine {
struct ParticleSystem;
}
namespace _Script_Engine {
struct PlayerCameraManager;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct EmitterCameraLensEffectBase : public Emitter {
    private: char pad_3b0[0x70]; public:
    _Script_Engine::ParticleSystem*& get_PS_CameraEffect();
    _Script_Engine::ParticleSystem*& get_PS_CameraEffectNonExtremeContent();
    _Script_Engine::PlayerCameraManager*& get_BaseCamera();
    void* get_RelativeTransform();
    float& get_BaseFOV();
    bool get_bAllowMultipleInstances();
    void set_bAllowMultipleInstances(bool value);
    bool get_bResetWhenRetriggered();
    void set_bResetWhenRetriggered(bool value);
    void* get_EmittersToTreatAsSame();
    float& get_DistFromCamera();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x420
#pragma pack(pop)
}
