#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_MovieScene\MovieSceneSection.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_RsGameTechRT {
#pragma pack(push, 1)
struct RsMovieSceneSubtitleEventSection : public _Script_MovieScene::MovieSceneSection {
    private: char pad_e0[0x28]; public:
    void* get_RAPUID();
    void* get_TextOverride();
    void* get_RAPSystem();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x108
#pragma pack(pop)
}
