#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\DeveloperSettings.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_RsGameTechRT {
#pragma pack(push, 1)
struct RsUiSettings : public _Script_Engine::DeveloperSettings {
    private: char pad_38[0x48]; public:
    void* get_LeftStickActionPrefix();
    float& get_LeftStickPressThreshold();
    void* get_RightStickActionPrefix();
    float& get_RightStickPressThreshold();
    void* get_DisableInputHeroStateModifierAssetRef();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x80
#pragma pack(pop)
}
