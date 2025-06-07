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
struct LensSettings {
    private: char pad_0[0xe8]; public:
    void* get_Bloom();
    void* get_Imperfections();
    float& get_ChromaticAberration();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0xe8
#pragma pack(pop)
}
