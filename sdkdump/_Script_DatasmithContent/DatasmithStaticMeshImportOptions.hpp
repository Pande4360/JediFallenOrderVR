#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_DatasmithContent {
#pragma pack(push, 1)
struct DatasmithStaticMeshImportOptions {
    private: char pad_0[0x4]; public:
    void* get_MinLightmapResolution();
    void* get_MaxLightmapResolution();
    bool get_bGenerateLightmapUVs();
    void set_bGenerateLightmapUVs(bool value);
    bool get_bRemoveDegenerates();
    void set_bRemoveDegenerates(bool value);
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x4
#pragma pack(pop)
}
