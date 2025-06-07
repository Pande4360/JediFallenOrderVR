#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_MovieScene\MovieSceneEvalTemplate.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_GeometryCacheTracks {
#pragma pack(push, 1)
struct MovieSceneGeometryCacheSectionTemplate : public _Script_MovieScene::MovieSceneEvalTemplate {
    private: char pad_20[0x38]; public:
    void* get_Params();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x58
#pragma pack(pop)
}
