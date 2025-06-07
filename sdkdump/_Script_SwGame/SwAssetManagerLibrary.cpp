#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\BlueprintFunctionLibrary.hpp"
#include "SwAssetManagerLibrary.hpp"
_Script_CoreUObject::Class* _Script_SwGame::SwAssetManagerLibrary::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/SwGame.SwAssetManagerLibrary");
    return result;
}
bool _Script_SwGame::SwAssetManagerLibrary::FindMissingChunkList(void*& AssetList, void*& OutMissingChunkList, void*& OutErrorChunkList) {
    return;
}
bool _Script_SwGame::SwAssetManagerLibrary::AreChunkIDsLoaded(void*& ChunkIDs, void*& OutMissingChunks, void*& OutErrorChunks) {
    return;
}
void _Script_SwGame::SwAssetManagerLibrary::AreChunkIDsInstalling(void*& ChunkIDs, void*& OutInstalledChunks, void*& OutInProgressChunks, void*& OutUnknownChunks) {
    return;
}
