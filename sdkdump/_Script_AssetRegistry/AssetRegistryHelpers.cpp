#include "..\FUObjectArray.hpp"
#include "ARFilter.hpp"
#include "AssetData.hpp"
#include "AssetRegistryHelpers.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "..\_Script_CoreUObject\SoftObjectPath.hpp"
bool _Script_AssetRegistry::AssetRegistryHelpers::IsRedirector(_Script_AssetRegistry::AssetData& InAssetData) {
    return;
}
_Script_AssetRegistry::AssetData _Script_AssetRegistry::AssetRegistryHelpers::CreateAssetData(_Script_CoreUObject::Object* InAsset, bool bAllowBlueprintClass) {
    return;
}
_Script_CoreUObject::Class* _Script_AssetRegistry::AssetRegistryHelpers::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/AssetRegistry.AssetRegistryHelpers");
    return result;
}
bool _Script_AssetRegistry::AssetRegistryHelpers::IsValid(_Script_AssetRegistry::AssetData& InAssetData) {
    return;
}
_Script_CoreUObject::SoftObjectPath _Script_AssetRegistry::AssetRegistryHelpers::ToSoftObjectPath(_Script_AssetRegistry::AssetData& InAssetData) {
    return;
}
_Script_AssetRegistry::ARFilter _Script_AssetRegistry::AssetRegistryHelpers::SetFilterTagsAndValues(_Script_AssetRegistry::ARFilter& InFilter, void*& InTagsAndValues) {
    return;
}
bool _Script_AssetRegistry::AssetRegistryHelpers::IsAssetLoaded(_Script_AssetRegistry::AssetData& InAssetData) {
    return;
}
bool _Script_AssetRegistry::AssetRegistryHelpers::IsUAsset(_Script_AssetRegistry::AssetData& InAssetData) {
    return;
}
bool _Script_AssetRegistry::AssetRegistryHelpers::GetTagValue(_Script_AssetRegistry::AssetData& InAssetData, void*& InTagName, void*& OutTagValue) {
    return;
}
void* _Script_AssetRegistry::AssetRegistryHelpers::GetFullName(_Script_AssetRegistry::AssetData& InAssetData) {
    return;
}
void* _Script_AssetRegistry::AssetRegistryHelpers::GetExportTextName(_Script_AssetRegistry::AssetData& InAssetData) {
    return;
}
void* _Script_AssetRegistry::AssetRegistryHelpers::GetClass(_Script_AssetRegistry::AssetData& InAssetData) {
    return;
}
void* _Script_AssetRegistry::AssetRegistryHelpers::GetAssetRegistry() {
    return;
}
_Script_CoreUObject::Object* _Script_AssetRegistry::AssetRegistryHelpers::GetAsset(_Script_AssetRegistry::AssetData& InAssetData) {
    return;
}
