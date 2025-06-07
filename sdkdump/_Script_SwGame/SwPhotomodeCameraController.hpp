#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\PlayerController.hpp"
namespace _Script_Engine {
struct SpotLightComponent;
}
namespace _Script_Engine {
struct SceneComponent;
}
namespace _Script_Engine {
struct StaticMeshComponent;
}
namespace _Script_Engine {
struct MaterialInstanceDynamic;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_SwGame {
#pragma pack(push, 1)
struct SwPhotomodeCameraController : public _Script_Engine::PlayerController {
    private: char pad_6d0[0xe80]; public:
    _Script_Engine::SpotLightComponent*& get_PhotoLightComponent();
    _Script_Engine::SceneComponent*& get_PhotoLightVisualGuide();
    _Script_Engine::StaticMeshComponent*& get_FocalPlaneComponent();
    void* get_SpectatorPawnClass();
    void* get_HUDClass();
    void* get_PhotomodeFilters();
    void* get_BlacklistedCameraModes();
    void* get_TextNone();
    void* get_TextOff();
    void* get_TextOn();
    _Script_Engine::MaterialInstanceDynamic*& get_CurrentFilter();
    _Script_Engine::MaterialInstanceDynamic*& get_FocalPlaneMaterial();
    void* get_HideableAIList();
    void* get_PostProcessTextureReferences();
    static _Script_CoreUObject::Class* static_class();
    void TogglePhotomode();
    void PhotomodeValueChanged(float Delta);
    void PhotomodeToggleSpotlight(bool bEnabled);
    void PhotomodeSelectionChanged();
    void PhotomodePhotoTaken();
    void PhotomodeHideHUD(bool bHUDHidden);
    bool IsSpotlightVisible();
    bool IsSelected(void* TweakID);
    bool IsMenuHidden();
    void* GetTextValue(void* TweakID);
    float GetSliderValue(void* TweakID);
}; // Size: 0x1550
#pragma pack(pop)
}
