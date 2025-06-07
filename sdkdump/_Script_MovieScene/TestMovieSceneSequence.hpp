#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "MovieSceneSequence.hpp"
namespace _Script_MovieScene {
struct MovieScene;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_MovieScene {
#pragma pack(push, 1)
struct TestMovieSceneSequence : public MovieSceneSequence {
    private: char pad_348[0x8]; public:
    _Script_MovieScene::MovieScene*& get_MovieScene();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x350
#pragma pack(pop)
}
