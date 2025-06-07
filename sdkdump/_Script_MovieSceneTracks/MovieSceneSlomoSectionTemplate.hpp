#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_MovieScene\MovieSceneEvalTemplate.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_MovieSceneTracks {
#pragma pack(push, 1)
struct MovieSceneSlomoSectionTemplate : public _Script_MovieScene::MovieSceneEvalTemplate {
    private: char pad_20[0xa0]; public:
    void* get_SlomoCurve();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0xc0
#pragma pack(pop)
}
