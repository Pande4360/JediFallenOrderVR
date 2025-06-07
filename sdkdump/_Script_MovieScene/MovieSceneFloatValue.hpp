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
struct MovieSceneFloatValue {
    private: char pad_0[0x1c]; public:
    float& get_Value();
    void* get_InterpMode();
    void* get_TangentMode();
    void* get_Tangent();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x1c
#pragma pack(pop)
}
