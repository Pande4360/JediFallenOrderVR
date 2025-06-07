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
struct MovieSceneFadeSectionTemplate : public _Script_MovieScene::MovieSceneEvalTemplate {
    private: char pad_20[0xb8]; public:
    void* get_FadeCurve();
    void* get_FadeColor();
    bool get_bFadeAudio();
    void set_bFadeAudio(bool value);
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0xd8
#pragma pack(pop)
}
