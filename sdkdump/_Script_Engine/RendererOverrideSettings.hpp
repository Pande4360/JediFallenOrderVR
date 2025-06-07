#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "DeveloperSettings.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct RendererOverrideSettings : public DeveloperSettings {
    private: char pad_38[0x8]; public:
    bool get_bSupportAllShaderPermutations();
    void set_bSupportAllShaderPermutations(bool value);
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x40
#pragma pack(pop)
}
