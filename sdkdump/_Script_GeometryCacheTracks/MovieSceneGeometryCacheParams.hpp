#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_GeometryCacheTracks {
#pragma pack(push, 1)
struct MovieSceneGeometryCacheParams {
    private: char pad_0[0x28]; public:
    void* get_GeometryCache();
    float& get_StartOffset();
    float& get_EndOffset();
    float& get_Playrate();
    bool get_bReverse();
    void set_bReverse(bool value);
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x28
#pragma pack(pop)
}
