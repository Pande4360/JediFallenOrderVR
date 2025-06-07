#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_AssetRegistry {
#pragma pack(push, 1)
struct ARFilter {
    private: char pad_0[0xe8]; public:
    void* get_PackageNames();
    void* get_PackagePaths();
    void* get_ObjectPaths();
    void* get_ClassNames();
    void* get_RecursiveClassesExclusionSet();
    bool get_bRecursivePaths();
    void set_bRecursivePaths(bool value);
    bool get_bRecursiveClasses();
    void set_bRecursiveClasses(bool value);
    bool get_bIncludeOnlyOnDiskAssets();
    void set_bIncludeOnlyOnDiskAssets(bool value);
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0xe8
#pragma pack(pop)
}
