#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "DeveloperSettings.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct AssetManagerSettings : public DeveloperSettings {
    private: char pad_38[0xb8]; public:
    void* get_PrimaryAssetTypesToScan();
    void* get_DirectoriesToExclude();
    void* get_PrimaryAssetRules();
    bool get_bOnlyCookProductionAssets();
    void set_bOnlyCookProductionAssets(bool value);
    bool get_bShouldManagerDetermineTypeAndName();
    void set_bShouldManagerDetermineTypeAndName(bool value);
    bool get_bShouldGuessTypeAndNameInEditor();
    void set_bShouldGuessTypeAndNameInEditor(bool value);
    bool get_bShouldAcquireMissingChunksOnLoad();
    void set_bShouldAcquireMissingChunksOnLoad(bool value);
    void* get_PrimaryAssetIdRedirects();
    void* get_PrimaryAssetTypeRedirects();
    void* get_AssetPathRedirects();
    void* get_MetaDataTagsForAssetRegistry();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0xf0
#pragma pack(pop)
}
