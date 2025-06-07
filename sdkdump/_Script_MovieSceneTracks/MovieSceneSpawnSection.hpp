#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "MovieSceneBoolSection.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_MovieSceneTracks {
#pragma pack(push, 1)
struct MovieSceneSpawnSection : public MovieSceneBoolSection {
    private: char pad_178[0x68]; public:
    void* get_Params();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x1e0
#pragma pack(pop)
}
