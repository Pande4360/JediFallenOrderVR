#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\Rotator.hpp"
#include "..\_Script_CoreUObject\Vector.hpp"
#include "SceneComponent.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct SpringArmComponent : public SceneComponent {
    private: char pad_2d0[0x90]; public:
    float& get_TargetArmLength();
    void* get_SocketOffset();
    void* get_TargetOffset();
    float& get_ProbeSize();
    float& get_ProbeOcclusionDelay();
    void* get_ProbeChannel();
    bool get_bDoCollisionTest();
    void set_bDoCollisionTest(bool value);
    bool get_bUsePawnControlRotation();
    void set_bUsePawnControlRotation(bool value);
    bool get_bInheritPitch();
    void set_bInheritPitch(bool value);
    bool get_bInheritYaw();
    void set_bInheritYaw(bool value);
    bool get_bInheritRoll();
    void set_bInheritRoll(bool value);
    bool get_bEnableCameraLag();
    void set_bEnableCameraLag(bool value);
    bool get_bEnableCameraRotationLag();
    void set_bEnableCameraRotationLag(bool value);
    bool get_bUseCameraLagSubstepping();
    void set_bUseCameraLagSubstepping(bool value);
    bool get_bDrawDebugLagMarkers();
    void set_bDrawDebugLagMarkers(bool value);
    float& get_CameraLagSpeed();
    float& get_CameraRotationLagSpeed();
    float& get_CameraLagMaxTimeStep();
    float& get_CameraLagMaxDistance();
    static _Script_CoreUObject::Class* static_class();
    bool IsCollisionFixApplied();
    _Script_CoreUObject::Vector GetUnfixedCameraPosition();
    _Script_CoreUObject::Rotator GetTargetRotation();
}; // Size: 0x360
#pragma pack(pop)
}
