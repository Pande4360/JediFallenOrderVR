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
struct MovieSceneCameraShakeSection : public _Script_MovieScene::MovieSceneSection {
    private: char pad_e0[0x40]; public:
    void* get_ShakeData();
    void* get_ShakeClass();
    float& get_PlayScale();
    void* get_PlaySpace();
    void* get_UserDefinedPlaySpace();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x120
#pragma pack(pop)
}
