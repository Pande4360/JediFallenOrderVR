#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "ARFilter.hpp"
#include "AssetData.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "..\_Script_CoreUObject\SoftObjectPath.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_AssetRegistry {
#pragma pack(push, 1)
struct AssetRegistryHelpers : public _Script_CoreUObject::Object {
    static _Script_CoreUObject::Class* static_class();
    _Script_CoreUObject::SoftObjectPath ToSoftObjectPath(_Script_AssetRegistry::AssetData& InAssetData);
    _Script_AssetRegistry::ARFilter SetFilterTagsAndValues(_Script_AssetRegistry::ARFilter& InFilter, void*& InTagsAndValues);
    bool IsValid(_Script_AssetRegistry::AssetData& InAssetData);
    bool IsUAsset(_Script_AssetRegistry::AssetData& InAssetData);
    bool IsRedirector(_Script_AssetRegistry::AssetData& InAssetData);
    bool IsAssetLoaded(_Script_AssetRegistry::AssetData& InAssetData);
    bool GetTagValue(_Script_AssetRegistry::AssetData& InAssetData, void*& InTagName, void*& OutTagValue);
    void* GetFullName(_Script_AssetRegistry::AssetData& InAssetData);
    void* GetExportTextName(_Script_AssetRegistry::AssetData& InAssetData);
    void* GetClass(_Script_AssetRegistry::AssetData& InAssetData);
    void* GetAssetRegistry();
    _Script_CoreUObject::Object* GetAsset(_Script_AssetRegistry::AssetData& InAssetData);
    _Script_AssetRegistry::AssetData CreateAssetData(_Script_CoreUObject::Object* InAsset, bool bAllowBlueprintClass);
}; // Size: 0x28
#pragma pack(pop)
}
