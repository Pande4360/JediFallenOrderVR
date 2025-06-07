#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_MovieScene\MovieSceneSection.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_MovieSceneTracks {
#pragma pack(push, 1)
struct MovieSceneColorSection : public _Script_MovieScene::MovieSceneSection {
    private: char pad_e0[0x280]; public:
    void* get_RedCurve();
    void* get_GreenCurve();
    void* get_BlueCurve();
    void* get_AlphaCurve();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x360
#pragma pack(pop)
}
