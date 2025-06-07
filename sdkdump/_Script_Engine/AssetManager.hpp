#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\Object.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct AssetManager : public _Script_CoreUObject::Object {
    private: char pad_28[0x3b0]; public:
    void* get_ObjectReferenceList();
    bool get_bIsGlobalAsyncScanEnvironment();
    void set_bIsGlobalAsyncScanEnvironment(bool value);
    bool get_bShouldGuessTypeAndName();
    void set_bShouldGuessTypeAndName(bool value);
    bool get_bShouldUseSynchronousLoad();
    void set_bShouldUseSynchronousLoad(bool value);
    bool get_bIsLoadingFromPakFiles();
    void set_bIsLoadingFromPakFiles(bool value);
    bool get_bShouldAcquireMissingChunksOnLoad();
    void set_bShouldAcquireMissingChunksOnLoad(bool value);
    bool get_bOnlyCookProductionAssets();
    void set_bOnlyCookProductionAssets(bool value);
    bool get_bIsBulkScanning();
    void set_bIsBulkScanning(bool value);
    bool get_bIsPrimaryAssetDirectoryCurrent();
    void set_bIsPrimaryAssetDirectoryCurrent(bool value);
    bool get_bIsManagementDatabaseCurrent();
    void set_bIsManagementDatabaseCurrent(bool value);
    bool get_bUpdateManagementDatabaseAfterScan();
    void set_bUpdateManagementDatabaseAfterScan(bool value);
    bool get_bIncludeOnlyOnDiskAssets();
    void set_bIncludeOnlyOnDiskAssets(bool value);
    int32_t& get_NumberOfSpawnedNotifications();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x3d8
#pragma pack(pop)
}
