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
struct RsHeroGlobalSettings : public _Script_Engine::DeveloperSettings {
    private: char pad_38[0x58]; public:
    void* get_RsHeroFlagSetDefinition();
    void* get_DefaultSyncHeroStateModifierAssetRef();
    void* get_NoExtCancelRef();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x90
#pragma pack(pop)
}
