#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\DataAsset.hpp"
#include "..\_Script_Engine\PostProcessSettings.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_RsGameTechRT {
#pragma pack(push, 1)
struct RsPostProcessSettingsDefinition : public _Script_Engine::DataAsset {
    private: char pad_30[0x510]; public:
    void* get_PostProcessSettings();
    static _Script_CoreUObject::Class* static_class();
    _Script_Engine::PostProcessSettings GetPostProcessSettings();
}; // Size: 0x540
#pragma pack(pop)
}
