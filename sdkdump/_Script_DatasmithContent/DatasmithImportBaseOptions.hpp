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
struct DatasmithImportBaseOptions {
    private: char pad_0[0x18]; public:
    void* get_SceneHandling();
    bool get_bIncludeGeometry();
    void set_bIncludeGeometry(bool value);
    bool get_bIncludeMaterial();
    void set_bIncludeMaterial(bool value);
    bool get_bIncludeLight();
    void set_bIncludeLight(bool value);
    bool get_bIncludeCamera();
    void set_bIncludeCamera(bool value);
    void* get_AssetOptions();
    void* get_StaticMeshOptions();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x18
#pragma pack(pop)
}
