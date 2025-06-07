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
struct StaticMeshSourceModel {
    private: char pad_0[0x70]; public:
    void* get_BuildSettings();
    void* get_ReductionSettings();
    float& get_LODDistance();
    void* get_ScreenSize();
    void* get_SourceImportFilename();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x70
#pragma pack(pop)
}
