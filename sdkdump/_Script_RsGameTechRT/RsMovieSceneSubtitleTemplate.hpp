#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_MovieScene\MovieSceneEvalTemplate.hpp"
namespace _Script_RsGameTechRT {
struct RsMovieSceneSubtitleEventSection;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_RsGameTechRT {
#pragma pack(push, 1)
struct RsMovieSceneSubtitleTemplate : public _Script_MovieScene::MovieSceneEvalTemplate {
    private: char pad_20[0x8]; public:
    _Script_RsGameTechRT::RsMovieSceneSubtitleEventSection*& get_Section();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x28
#pragma pack(pop)
}
