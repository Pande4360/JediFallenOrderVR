#include "..\FUObjectArray.hpp"
#include "ARFilter.hpp"
#include "AssetData.hpp"
#include "AssetRegistry.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Interface.hpp"
_Script_CoreUObject::Class* _Script_AssetRegistry::AssetRegistry::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/AssetRegistry.AssetRegistry");
    return result;
}
void _Script_AssetRegistry::AssetRegistry::ScanFilesSynchronous(void*& InFilePaths, bool bForceRescan) {
    return;
}
bool _Script_AssetRegistry::AssetRegistry::GetAllAssets(void*& OutAssetData, bool bIncludeOnlyOnDiskAssets) {
    return;
}
void _Script_AssetRegistry::AssetRegistry::SearchAllAssets(bool bSynchronousSearch) {
    return;
}
void _Script_AssetRegistry::AssetRegistry::PrioritizeSearchPath(void* PathToPrioritize) {
    return;
}
void _Script_AssetRegistry::AssetRegistry::ScanPathsSynchronous(void*& InPaths, bool bForceRescan) {
    return;
}
void _Script_AssetRegistry::AssetRegistry::ScanModifiedAssetFiles(void*& InFilePaths) {
    return;
}
void _Script_AssetRegistry::AssetRegistry::RunAssetsThroughFilter(void*& AssetDataList, _Script_AssetRegistry::ARFilter& Filter) {
    return;
}
bool _Script_AssetRegistry::AssetRegistry::IsLoadingAssets() {
    return;
}
bool _Script_AssetRegistry::AssetRegistry::HasAssets(void* PackagePath, bool bRecursive) {
    return;
}
void _Script_AssetRegistry::AssetRegistry::GetSubPaths(void* InBasePath, void*& OutPathList, bool bInRecurse) {
    return;
}
bool _Script_AssetRegistry::AssetRegistry::GetAssetsByPath(void* PackagePath, void*& OutAssetData, bool bRecursive, bool bIncludeOnlyOnDiskAssets) {
    return;
}
bool _Script_AssetRegistry::AssetRegistry::GetAssetsByPackageName(void* PackageName, void*& OutAssetData, bool bIncludeOnlyOnDiskAssets) {
    return;
}
bool _Script_AssetRegistry::AssetRegistry::GetAssetsByClass(void* ClassName, void*& OutAssetData, bool bSearchSubClasses) {
    return;
}
bool _Script_AssetRegistry::AssetRegistry::GetAssets(_Script_AssetRegistry::ARFilter& Filter, void*& OutAssetData) {
    return;
}
_Script_AssetRegistry::AssetData _Script_AssetRegistry::AssetRegistry::GetAssetByObjectPath(void* ObjectPath, bool bIncludeOnlyOnDiskAssets) {
    return;
}
void _Script_AssetRegistry::AssetRegistry::GetAllCachedPaths(void*& OutPathList) {
    return;
}
