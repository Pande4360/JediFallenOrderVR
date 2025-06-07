#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "MovieSceneAdditiveCameraAnimationTemplate.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_MovieSceneTracks {
#pragma pack(push, 1)
struct MovieSceneCameraAnimSectionTemplate : public MovieSceneAdditiveCameraAnimationTemplate {
    private: char pad_20[0x28]; public:
    void* get_SourceData();
    void* get_SectionStartTime();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x48
#pragma pack(pop)
}
