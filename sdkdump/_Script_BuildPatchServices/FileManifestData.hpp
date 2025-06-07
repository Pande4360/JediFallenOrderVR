#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_BuildPatchServices {
#pragma pack(push, 1)
struct FileManifestData {
    private: char pad_0[0x68]; public:
    void* get_Filename();
    void* get_FileHash();
    void* get_FileChunkParts();
    void* get_InstallTags();
    bool get_bIsUnixExecutable();
    void set_bIsUnixExecutable(bool value);
    void* get_SymlinkTarget();
    bool get_bIsReadOnly();
    void set_bIsReadOnly(bool value);
    bool get_bIsCompressed();
    void set_bIsCompressed(bool value);
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x68
#pragma pack(pop)
}
