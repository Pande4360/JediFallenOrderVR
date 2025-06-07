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
struct CompilerNativizationOptions {
    private: char pad_0[0x80]; public:
    void* get_PlatformName();
    bool get_ServerOnlyPlatform();
    void set_ServerOnlyPlatform(bool value);
    bool get_ClientOnlyPlatform();
    void set_ClientOnlyPlatform(bool value);
    bool get_bExcludeMonolithicHeaders();
    void set_bExcludeMonolithicHeaders(bool value);
    void* get_ExcludedModules();
    void* get_ExcludedAssets();
    void* get_ExcludedFolderPaths();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x80
#pragma pack(pop)
}
