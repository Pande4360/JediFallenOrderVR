#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\Object.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_BuildPatchServices {
#pragma pack(push, 1)
struct BuildPatchManifest : public _Script_CoreUObject::Object {
    private: char pad_28[0xf8]; public:
    void* get_ManifestFileVersion();
    bool get_bIsFileData();
    void set_bIsFileData(bool value);
    void* get_AppID();
    void* get_AppName();
    void* get_BuildVersion();
    void* get_LaunchExe();
    void* get_LaunchCommand();
    void* get_PrereqIds();
    void* get_PrereqName();
    void* get_PrereqPath();
    void* get_PrereqArgs();
    void* get_FileManifestList();
    void* get_ChunkList();
    void* get_CustomFields();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x120
#pragma pack(pop)
}
