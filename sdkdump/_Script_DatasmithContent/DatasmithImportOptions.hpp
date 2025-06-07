#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\Object.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_DatasmithContent {
#pragma pack(push, 1)
struct DatasmithImportOptions : public _Script_CoreUObject::Object {
    private: char pad_28[0x60]; public:
    void* get_SearchPackagePolicy();
    void* get_MaterialConflictPolicy();
    void* get_TextureConflictPolicy();
    void* get_StaticMeshActorImportPolicy();
    void* get_LightImportPolicy();
    void* get_CameraImportPolicy();
    void* get_OtherActorImportPolicy();
    void* get_MaterialQuality();
    void* get_BaseOptions();
    void* get_TessellationOptions();
    void* get_ReimportOptions();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x88
#pragma pack(pop)
}
