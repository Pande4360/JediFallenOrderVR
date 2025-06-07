#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "BlueprintFunctionLibrary.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct KismetStringTableLibrary : public BlueprintFunctionLibrary {
    static _Script_CoreUObject::Class* static_class();
    bool IsRegisteredTableId(void* TableId);
    bool IsRegisteredTableEntry(void* TableId, void* Key);
    void* GetTableNamespace(void* TableId);
    void* GetTableEntrySourceString(void* TableId, void* Key);
    void* GetTableEntryMetaData(void* TableId, void* Key, void* MetaDataId);
    void* GetRegisteredStringTables();
    void* GetMetaDataIdsFromStringTableEntry(void* TableId, void* Key);
    void* GetKeysFromStringTable(void* TableId);
}; // Size: 0x28
#pragma pack(pop)
}
