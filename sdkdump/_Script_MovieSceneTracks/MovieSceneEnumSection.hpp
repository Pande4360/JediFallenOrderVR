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
struct MovieSceneEnumSection : public _Script_MovieScene::MovieSceneSection {
    private: char pad_e0[0x98]; public:
    void* get_EnumCurve();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x178
#pragma pack(pop)
}
