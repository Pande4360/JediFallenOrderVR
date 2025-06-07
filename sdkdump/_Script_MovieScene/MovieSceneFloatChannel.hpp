#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "MovieSceneChannel.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_MovieScene {
#pragma pack(push, 1)
struct MovieSceneFloatChannel : public MovieSceneChannel {
    private: char pad_8[0x98]; public:
    void* get_PreInfinityExtrap();
    void* get_PostInfinityExtrap();
    void* get_Times();
    void* get_Values();
    float& get_DefaultValue();
    bool get_bHasDefaultValue();
    void set_bHasDefaultValue(bool value);
    void* get_KeyHandles();
    void* get_TickResolution();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0xa0
#pragma pack(pop)
}
