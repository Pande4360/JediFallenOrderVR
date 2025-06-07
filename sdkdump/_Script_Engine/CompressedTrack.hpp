#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct CompressedTrack {
    private: char pad_0[0x38]; public:
    void* get_ByteStream();
    void* get_Times();
    float& get_Mins();
    float& get_Ranges();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x38
#pragma pack(pop)
}
