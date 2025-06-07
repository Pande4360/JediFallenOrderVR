#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "Actor.hpp"
namespace _Script_Engine {
struct CameraComponent;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
struct SceneComponent;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct CameraActor : public Actor {
    private: char pad_360[0x540]; public:
    void* get_AutoActivateForPlayer();
    _Script_Engine::CameraComponent*& get_CameraComponent();
    _Script_Engine::SceneComponent*& get_SceneComponent();
    bool get_bConstrainAspectRatio();
    void set_bConstrainAspectRatio(bool value);
    float& get_AspectRatio();
    float& get_FOVAngle();
    float& get_PostProcessBlendWeight();
    void* get_PostProcessSettings();
    static _Script_CoreUObject::Class* static_class();
    int32_t GetAutoActivatePlayerIndex();
}; // Size: 0x8a0
#pragma pack(pop)
}
