#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_Engine {
struct Actor;
}
namespace _Script_RsGameTechRT {
struct RsCameraManagerDefinition;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_RsGameTechRT {
struct RsCameraManager;
}
namespace _Script_RsGameTechRT {
struct RsSplineCameraDefinition;
}
namespace _Script_RsGameTechRT {
#pragma pack(push, 1)
struct RsCameraInputs {
    private: char pad_0[0x130]; public:
    void* get_AnchorLocation();
    void* get_AnchorRotation();
    void* get_DynamicLocationOffsetCS();
    void* get_DynamicRotationOffsetCS();
    float& get_DynamicOffsetTransitionTime();
    float& get_DefaultFOV();
    void* get_FocusLocation();
    void* get_FocusDirection();
    _Script_Engine::Actor*& get_ViewTarget();
    _Script_Engine::Actor*& get_FocusActor();
    void* get_FocusSocket();
    float& get_LastFocusActorSetTime();
    _Script_RsGameTechRT::RsCameraManagerDefinition*& get_CameraDefinition();
    float& get_CurrentTime();
    float& get_LastLookInputTime();
    float& get_LastMovementInputTime();
    void* get_MovementDirection();
    void* get_LocalMovementDirection();
    bool get_bUseMovementInput();
    void set_bUseMovementInput(bool value);
    _Script_RsGameTechRT::RsCameraManager*& get_CameraManager();
    _Script_RsGameTechRT::RsSplineCameraDefinition*& get_SplineCameraDefinition();
    _Script_Engine::Actor*& get_SplineCameraAttachActor();
    void* get_SplineCameraInitMethod();
    float& get_DeltaTime();
    float& get_DynamicOffsetTransitionTimeRemaining();
    float& get_NavSurfaceZ();
    void* get_ControllerInput();
    void* get_MouseInput();
    void* get_AimDirection();
    void* get_BaseLocationDelta();
    void* get_BaseRotationDelta();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x130
#pragma pack(pop)
}
