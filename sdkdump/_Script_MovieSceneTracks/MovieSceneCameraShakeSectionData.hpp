#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_MovieSceneTracks {
#pragma pack(push, 1)
struct MovieSceneCameraShakeSectionData {
    private: char pad_0[0x20]; public:
    void* get_ShakeClass();
    float& get_PlayScale();
    void* get_PlaySpace();
    void* get_UserDefinedPlaySpace();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x20
#pragma pack(pop)
}
