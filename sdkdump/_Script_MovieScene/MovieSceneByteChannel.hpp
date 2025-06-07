#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "MovieSceneChannel.hpp"
namespace _Script_CoreUObject {
struct Enum;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_MovieScene {
#pragma pack(push, 1)
struct MovieSceneByteChannel : public MovieSceneChannel {
    private: char pad_8[0x90]; public:
    void* get_Times();
    void* get_DefaultValue();
    bool get_bHasDefaultValue();
    void set_bHasDefaultValue(bool value);
    void* get_Values();
    _Script_CoreUObject::Enum*& get_Enum();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x98
#pragma pack(pop)
}
