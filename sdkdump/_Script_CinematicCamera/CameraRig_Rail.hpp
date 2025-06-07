#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\Actor.hpp"
namespace _Script_Engine {
struct SceneComponent;
}
namespace _Script_Engine {
struct SplineComponent;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_CinematicCamera {
#pragma pack(push, 1)
struct CameraRig_Rail : public _Script_Engine::Actor {
    private: char pad_360[0x20]; public:
    float& get_CurrentPositionOnRail();
    bool get_bLockOrientationToRail();
    void set_bLockOrientationToRail(bool value);
    _Script_Engine::SceneComponent*& get_TransformComponent();
    _Script_Engine::SplineComponent*& get_RailSplineComponent();
    _Script_Engine::SceneComponent*& get_RailCameraMount();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x380
#pragma pack(pop)
}
