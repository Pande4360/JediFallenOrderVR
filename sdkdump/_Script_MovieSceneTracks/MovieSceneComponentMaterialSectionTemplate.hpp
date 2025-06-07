#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "MovieSceneParameterSectionTemplate.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_MovieSceneTracks {
#pragma pack(push, 1)
struct MovieSceneComponentMaterialSectionTemplate : public MovieSceneParameterSectionTemplate {
    private: char pad_50[0x8]; public:
    int32_t& get_MaterialIndex();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x58
#pragma pack(pop)
}
