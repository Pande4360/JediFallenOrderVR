#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "PrimitiveComponent.hpp"
namespace _Script_Engine {
struct MaterialInterface;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct DecalComponent : public PrimitiveComponent {
    private: char pad_b30[0x40]; public:
    _Script_Engine::MaterialInterface*& get_DecalMaterial();
    int32_t& get_SortOrder();
    float& get_FadeScreenSize();
    float& get_FadeStartDelay();
    float& get_FadeDuration();
    float& get_FadeInDuration();
    float& get_FadeInStartDelay();
    bool get_bDestroyOwnerAfterFade();
    void set_bDestroyOwnerAfterFade(bool value);
    void* get_DecalSize();
    static _Script_CoreUObject::Class* static_class();
    void SetSortOrder(int32_t Value);
    void SetFadeScreenSize(float NewFadeScreenSize);
    void SetFadeOut(float StartDelay, float Duration, bool DestroyOwnerAfterFade);
    void SetFadeIn(float StartDelay, float Duaration);
    void SetDecalMaterial(_Script_Engine::MaterialInterface* NewDecalMaterial);
    float GetFadeStartDelay();
    float GetFadeInStartDelay();
    float GetFadeInDuration();
    float GetFadeDuration();
    _Script_Engine::MaterialInterface* GetDecalMaterial();
}; // Size: 0xb70
#pragma pack(pop)
}
