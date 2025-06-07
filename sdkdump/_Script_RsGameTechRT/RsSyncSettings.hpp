#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\DeveloperSettings.hpp"
namespace _Script_RsGameTechRT {
struct RsHeroStateModifierDefinition;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_RsGameTechRT {
#pragma pack(push, 1)
struct RsSyncSettings : public _Script_Engine::DeveloperSettings {
    private: char pad_38[0xc0]; public:
    float& get_VelocityAcceleration();
    float& get_AngularVelocityCloseness();
    void* get_VelocityCurveAsset();
    void* get_AngularVelocityCurveAsset();
    void* get_AngularVelocityBlendCurveAsset();
    void* get_NonCharacterChannel();
    void* get_DefaultSyncHeroStateModifierAssetRef();
    void* get_DefaultSyncNavHeroStateModifierAssetRef();
    _Script_RsGameTechRT::RsHeroStateModifierDefinition*& get_DefaultSyncHeroStateModifier();
    _Script_RsGameTechRT::RsHeroStateModifierDefinition*& get_DefaultSyncNavHeroStateModifier();
    float& get_NavSyncTimeout();
    float& get_NavSyncTimeoutDistance();
    bool get_SyncsWithVelocity();
    void set_SyncsWithVelocity(bool value);
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0xf8
#pragma pack(pop)
}
