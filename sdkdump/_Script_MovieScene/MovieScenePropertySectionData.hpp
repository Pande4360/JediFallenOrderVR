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
struct MovieScenePropertySectionData {
    private: char pad_0[0x28]; public:
    void* get_PropertyName();
    void* get_PropertyPath();
    void* get_FunctionName();
    void* get_NotifyFunctionName();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x28
#pragma pack(pop)
}
