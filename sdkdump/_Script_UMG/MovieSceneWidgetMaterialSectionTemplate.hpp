#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_MovieSceneTracks\MovieSceneParameterSectionTemplate.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_UMG {
#pragma pack(push, 1)
struct MovieSceneWidgetMaterialSectionTemplate : public _Script_MovieSceneTracks::MovieSceneParameterSectionTemplate {
    private: char pad_50[0x10]; public:
    void* get_BrushPropertyNamePath();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x60
#pragma pack(pop)
}
