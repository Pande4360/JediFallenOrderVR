#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\PlayerCameraManager.hpp"
namespace _Script_RsGameTechRT {
struct RsCameraManagerDefinition;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_RsGameTechRT {
struct RsCameraMode;
}
namespace _Script_CoreUObject {
struct Vector;
}
namespace _Script_Engine {
struct Actor;
}
namespace _Script_RsGameTechRT {
struct RsCharacter;
}
namespace _Script_RsGameTechRT {
#pragma pack(push, 1)
struct RsCameraManager : public _Script_Engine::PlayerCameraManager {
    private: char pad_25d0[0xef0]; public:
    void* get_DefinitionPath();
    _Script_RsGameTechRT::RsCameraManagerDefinition*& get_Definition();
    void* get_CameraModeSets();
    void* get_DefaultCameraModeOverride();
    _Script_RsGameTechRT::RsCameraMode*& get_ActiveCameraMode();
    void* get_ModeInputs();
    void* get_ModeOutputs();
    void* get_FocusInputs();
    void* get_ActiveSplineCameraModeName();
    void* get_ActiveShakes();
    void* get_ActivePostProcessEffects();
    void* get_PawnsToCollideWith();
    _Script_Engine::Actor*& get_AutoDepthOfFieldTarget();
    void* get_AutoDepthOfFieldBoneName();
    void* get_CameraModeCompletionDelegate();
    void* get_CameraModeUpdateDelegate();
    static _Script_CoreUObject::Class* static_class();
    void SetAutoDepthOfFieldTarget(_Script_Engine::Actor* Actor, void* BoneName);
    void RequestCSZoom();
    void OnViewTargetTeleported(_Script_RsGameTechRT::RsCharacter* Character);
    bool IsPointInViewFrustum(_Script_CoreUObject::Vector& Point, float FarPlaneDist);
    void* GetViewLocationsRenderedLastFrame();
    void ClearAutoDepthOfFieldTarget();
}; // Size: 0x34c0
#pragma pack(pop)
}
