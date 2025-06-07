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
struct PrimaryAssetTypeInfo {
    private: char pad_0[0x88]; public:
    void* get_PrimaryAssetType();
    void* get_AssetBaseClass();
    void* get_AssetBaseClassLoaded();
    bool get_bHasBlueprintClasses();
    void set_bHasBlueprintClasses(bool value);
    bool get_bIsEditorOnly();
    void set_bIsEditorOnly(bool value);
    void* get_Directories();
    void* get_SpecificAssets();
    void* get_Rules();
    void* get_AssetScanPaths();
    bool get_bIsDynamicAsset();
    void set_bIsDynamicAsset(bool value);
    int32_t& get_NumberOfAssets();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x88
#pragma pack(pop)
}
