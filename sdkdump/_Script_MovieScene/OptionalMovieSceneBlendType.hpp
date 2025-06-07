#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_MovieScene {
#pragma pack(push, 1)
struct OptionalMovieSceneBlendType {
    private: char pad_0[0x2]; public:
    void* get_BlendType();
    bool get_bIsValid();
    void set_bIsValid(bool value);
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x2
#pragma pack(pop)
}
