#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\LinearColor.hpp"
#include "..\_Script_CoreUObject\Vector.hpp"
#include "Actor.hpp"
namespace _Script_Engine {
struct LightComponent;
}
namespace _Script_Engine {
struct RsLightTriggerComponent;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
struct MaterialInterface;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct Light : public Actor {
    private: char pad_360[0x18]; public:
    _Script_Engine::LightComponent*& get_LightComponent();
    _Script_Engine::RsLightTriggerComponent*& get_LightTriggerComponent();
    bool get_bEnabled();
    void set_bEnabled(bool value);
    static _Script_CoreUObject::Class* static_class();
    void ToggleEnabled();
    void SetLightFunctionScale(_Script_CoreUObject::Vector NewLightFunctionScale);
    void SetLightFunctionMaterial(_Script_Engine::MaterialInterface* NewLightFunctionMaterial);
    void SetLightFunctionFadeDistance(float NewLightFunctionFadeDistance);
    void SetLightColor(_Script_CoreUObject::LinearColor NewLightColor);
    void SetEnabled(bool bSetEnabled);
    void SetCastShadows(bool bNewValue);
    void SetBrightness(float NewBrightness);
    void SetAffectTranslucentLighting(bool bNewValue);
    void OnRep_bEnabled();
    bool IsEnabled();
    _Script_CoreUObject::LinearColor GetLightColor();
    float GetBrightness();
}; // Size: 0x378
#pragma pack(pop)
}
