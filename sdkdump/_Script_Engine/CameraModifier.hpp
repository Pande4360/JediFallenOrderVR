#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\Object.hpp"
#include "..\_Script_CoreUObject\Rotator.hpp"
#include "..\_Script_CoreUObject\Vector.hpp"
namespace _Script_Engine {
struct PlayerCameraManager;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
struct Actor;
}
namespace _Script_Engine {
struct PostProcessSettings;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct CameraModifier : public _Script_CoreUObject::Object {
    private: char pad_28[0x20]; public:
    bool get_bDebug();
    void set_bDebug(bool value);
    bool get_bExclusive();
    void set_bExclusive(bool value);
    void* get_Priority();
    _Script_Engine::PlayerCameraManager*& get_CameraOwner();
    float& get_AlphaInTime();
    float& get_AlphaOutTime();
    float& get_Alpha();
    static _Script_CoreUObject::Class* static_class();
    bool IsDisabled();
    _Script_Engine::Actor* GetViewTarget();
    void EnableModifier();
    void DisableModifier(bool bImmediate);
    void BlueprintModifyPostProcess(float DeltaTime, float& PostProcessBlendWeight, _Script_Engine::PostProcessSettings& PostProcessSettings);
    void BlueprintModifyCamera(float DeltaTime, _Script_CoreUObject::Vector ViewLocation, _Script_CoreUObject::Rotator ViewRotation, float FOV, _Script_CoreUObject::Vector& NewViewLocation, _Script_CoreUObject::Rotator& NewViewRotation, float& NewFOV);
}; // Size: 0x48
#pragma pack(pop)
}
