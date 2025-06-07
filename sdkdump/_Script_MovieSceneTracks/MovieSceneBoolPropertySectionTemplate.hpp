#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_MovieScene\MovieScenePropertySectionTemplate.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_MovieSceneTracks {
#pragma pack(push, 1)
struct MovieSceneBoolPropertySectionTemplate : public _Script_MovieScene::MovieScenePropertySectionTemplate {
    private: char pad_48[0x90]; public:
    void* get_BoolCurve();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0xd8
#pragma pack(pop)
}
