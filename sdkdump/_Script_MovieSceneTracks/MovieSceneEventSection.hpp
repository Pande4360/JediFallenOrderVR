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
struct MovieSceneEventSection : public _Script_MovieScene::MovieSceneSection {
    private: char pad_e0[0xf0]; public:
    void* get_Events();
    void* get_EventData();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x1d0
#pragma pack(pop)
}
