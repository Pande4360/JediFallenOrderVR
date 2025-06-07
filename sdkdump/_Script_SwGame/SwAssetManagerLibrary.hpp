#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\BlueprintFunctionLibrary.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_SwGame {
#pragma pack(push, 1)
struct SwAssetManagerLibrary : public _Script_Engine::BlueprintFunctionLibrary {
    static _Script_CoreUObject::Class* static_class();
    bool FindMissingChunkList(void*& AssetList, void*& OutMissingChunkList, void*& OutErrorChunkList);
    bool AreChunkIDsLoaded(void*& ChunkIDs, void*& OutMissingChunks, void*& OutErrorChunks);
    void AreChunkIDsInstalling(void*& ChunkIDs, void*& OutInstalledChunks, void*& OutInProgressChunks, void*& OutUnknownChunks);
}; // Size: 0x28
#pragma pack(pop)
}
