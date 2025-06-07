#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_MovieScene\MovieSceneChannel.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_MovieSceneTracks {
#pragma pack(push, 1)
struct MovieSceneStringChannel : public _Script_MovieScene::MovieSceneChannel {
    private: char pad_8[0x98]; public:
    void* get_Times();
    void* get_Values();
    void* get_DefaultValue();
    bool get_bHasDefaultValue();
    void set_bHasDefaultValue(bool value);
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0xa0
#pragma pack(pop)
}
