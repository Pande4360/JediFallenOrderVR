#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_RsGameTechRT {
struct RsPostProcessSettingsDefinition;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_RsGameTechRT {
#pragma pack(push, 1)
struct RsPostProcessEffectData {
    private: char pad_0[0x10]; public:
    _Script_RsGameTechRT::RsPostProcessSettingsDefinition*& get_PostProcessSettingsDefinition();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x10
#pragma pack(pop)
}
