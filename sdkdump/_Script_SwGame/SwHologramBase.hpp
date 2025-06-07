#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\Actor.hpp"
namespace _Script_Engine {
struct SceneComponent;
}
namespace _Script_SwGame {
struct SwHologramCameraFacerComponent;
}
namespace _Script_Engine {
struct TextureRenderTarget2D;
}
namespace _Script_Engine {
struct StaticMeshComponent;
}
namespace _Script_Engine {
struct SceneCaptureComponent2D;
}
namespace _Script_Engine {
struct MaterialInstanceDynamic;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_SwGame {
#pragma pack(push, 1)
struct SwHologramBase : public _Script_Engine::Actor {
    private: char pad_360[0x5b0]; public:
    bool get_bStartActive();
    void set_bStartActive(bool value);
    void* get_BaseHologramMaterialPtr();
    float& get_EmissiveIntensity();
    float& get_DisplayRampTime();
    float& get_CardVerticalOffset();
    float& get_CardScale();
    int32_t& get_CardTranslucencySortPriority();
    float& get_CameraDistance();
    float& get_CameraFOV();
    int32_t& get_RenderTargetSize();
    _Script_Engine::SceneComponent*& get_HologramSceneRoot();
    void* get_HologramSceneName();
    void* get_CameraPostProcessSettings();
    _Script_SwGame::SwHologramCameraFacerComponent*& get_CameraFacer();
    _Script_Engine::StaticMeshComponent*& get_HologramDisplayCard();
    _Script_SwGame::SwHologramCameraFacerComponent*& get_CameraArm();
    _Script_Engine::SceneCaptureComponent2D*& get_HologramCaptureCamera();
    _Script_Engine::TextureRenderTarget2D*& get_RenderTarget();
    _Script_Engine::MaterialInstanceDynamic*& get_HologramMaterial();
    static _Script_CoreUObject::Class* static_class();
    void SetCameraFOV(float FOV);
    void HologramDeactivated();
    bool HologramActive();
    void HologramActivated();
    _Script_Engine::MaterialInstanceDynamic* GetHologramMaterial();
    float GetActiveRampValue();
    void DeactivateHologram();
    void ActivateHologram();
}; // Size: 0x910
#pragma pack(pop)
}
