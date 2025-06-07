#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\Actor.hpp"
namespace _Script_Engine {
struct SceneComponent;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_CinematicCamera {
#pragma pack(push, 1)
struct CameraRig_Crane : public _Script_Engine::Actor {
    private: char pad_360[0x30]; public:
    float& get_CranePitch();
    float& get_CraneYaw();
    float& get_CraneArmLength();
    bool get_bLockMountPitch();
    void set_bLockMountPitch(bool value);
    bool get_bLockMountYaw();
    void set_bLockMountYaw(bool value);
    _Script_Engine::SceneComponent*& get_TransformComponent();
    _Script_Engine::SceneComponent*& get_CraneYawControl();
    _Script_Engine::SceneComponent*& get_CranePitchControl();
    _Script_Engine::SceneComponent*& get_CraneCameraMount();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x390
#pragma pack(pop)
}
