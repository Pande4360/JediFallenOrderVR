#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "PlayerController.hpp"
namespace _Script_Engine {
struct DrawFrustumComponent;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
struct HitResult;
}
namespace _Script_Engine {
struct Actor;
}
namespace _Script_CoreUObject {
struct Vector;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct DebugCameraController : public PlayerController {
    private: char pad_6d0[0x48]; public:
    bool get_bShowSelectedInfo();
    void set_bShowSelectedInfo(bool value);
    bool get_bIsFrozenRendering();
    void set_bIsFrozenRendering(bool value);
    _Script_Engine::DrawFrustumComponent*& get_DrawFrustum();
    float& get_SpeedScale();
    float& get_InitialMaxSpeed();
    float& get_InitialAccel();
    float& get_InitialDecel();
    static _Script_CoreUObject::Class* static_class();
    void ToggleDisplay();
    void ShowDebugSelectedInfo();
    void SetPawnMovementSpeedScale(float NewSpeedScale);
    void ReceiveOnDeactivate(_Script_Engine::PlayerController* RestoredPC);
    void ReceiveOnActorSelected(_Script_Engine::Actor* NewSelectedActor, _Script_CoreUObject::Vector& SelectHitLocation, _Script_CoreUObject::Vector& SelectHitNormal, _Script_Engine::HitResult& Hit);
    void ReceiveOnActivate(_Script_Engine::PlayerController* OriginalPC);
    _Script_Engine::Actor* GetSelectedActor();
}; // Size: 0x718
#pragma pack(pop)
}
