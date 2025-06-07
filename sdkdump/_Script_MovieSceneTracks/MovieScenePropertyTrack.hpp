#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_MovieScene\MovieSceneNameableTrack.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_MovieSceneTracks {
#pragma pack(push, 1)
struct MovieScenePropertyTrack : public _Script_MovieScene::MovieSceneNameableTrack {
    private: char pad_58[0x28]; public:
    void* get_PropertyName();
    void* get_PropertyPath();
    void* get_Sections();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x80
#pragma pack(pop)
}
