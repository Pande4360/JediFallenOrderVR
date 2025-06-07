#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\Transform.hpp"
#include "..\_Script_Engine\BlueprintFunctionLibrary.hpp"
#include "RsSaveGameMetaData.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_CoreUObject {
struct Object;
}
namespace _Script_Engine {
struct Actor;
}
namespace _Script_Engine {
struct RsStreamingAreaPlayerStart;
}
namespace _Script_Engine {
struct ActorComponent;
}
namespace _Script_Engine {
struct RsStreamingDefinition;
}
namespace _Script_RsGameTechRT {
#pragma pack(push, 1)
struct RsSaveGameBlueprintLibrary : public _Script_Engine::BlueprintFunctionLibrary {
    static _Script_CoreUObject::Class* static_class();
    void SetSaveSlot(_Script_CoreUObject::Object* WorldContext, void* SaveSlot);
    void SetSaveGameMetaData(_Script_CoreUObject::Object* WorldContext, _Script_RsGameTechRT::RsSaveGameMetaData InMetaData);
    void SavePlayerStart(_Script_CoreUObject::Object* WorldContext, _Script_CoreUObject::Transform PlayerStartTransform);
    void SaveContainingLevelImmediate(_Script_Engine::Actor* Actor);
    void SaveContainingLevel(_Script_Engine::Actor* Actor, bool bIsPendingCheckpoint);
    void SaveComponentImmediate(_Script_Engine::ActorComponent* Component);
    void SaveCheckpointWithPlayerStartInfo(_Script_CoreUObject::Object* WorldContext, _Script_Engine::RsStreamingDefinition* RootStreamingLevelDefinition, void* PlayerStartName);
    void SaveCheckpointWithPlayerStart(_Script_CoreUObject::Object* WorldContext, _Script_Engine::RsStreamingAreaPlayerStart* PlayerStart);
    void SaveCheckpoint(_Script_CoreUObject::Object* WorldContext, _Script_CoreUObject::Transform PlayerStartTransform);
    void SaveActorPropertyImmediate(_Script_Engine::Actor* Actor, void* PropertyName);
    void SaveActorImmediate(_Script_Engine::Actor* Actor);
    void SaveActor(_Script_Engine::Actor* Actor, bool bIsPendingCheckpoint);
    void ResetPendingSaves(_Script_CoreUObject::Object* WorldContext);
    void ReloadLastCheckpoint(_Script_CoreUObject::Object* WorldContext);
    void RefreshCachedSaveFileInfo(_Script_CoreUObject::Object* WorldContext);
    void RefreshCachedNewGamePlusUnlocks(_Script_CoreUObject::Object* WorldContext);
    bool LoadSaveGameForSlot(_Script_CoreUObject::Object* WorldContext, void* SaveSlotIndex);
    bool LoadSaveGameBackupForSlot(_Script_CoreUObject::Object* WorldContext, void* SaveSlotIndex);
    bool LoadSaveGame(_Script_CoreUObject::Object* WorldContext, void* SaveName);
    void LoadContainingLevel(_Script_Engine::Actor* Actor);
    bool LoadActor(_Script_Engine::Actor* Actor);
    bool IsSavingToDisk(_Script_CoreUObject::Object* WorldContext);
    bool IsRefreshingCachedNewGamePlusUnlocks(_Script_CoreUObject::Object* WorldContext);
    bool IsLoadingSaveFileInfo(_Script_CoreUObject::Object* WorldContext);
    bool IsCurrentSaveNewGamePlus(_Script_CoreUObject::Object* WorldContext);
    bool IsClearingAllSaves(_Script_CoreUObject::Object* WorldContext);
    void* GetSaveSlotCount(_Script_CoreUObject::Object* WorldContext);
    void* GetSaveSlot(_Script_CoreUObject::Object* WorldContext);
    _Script_Engine::RsStreamingDefinition* GetSaveGameStreamingInfo(_Script_CoreUObject::Object* WorldContext, void* SaveSlot, void*& OutStreamingPlayerStartName);
    void* GetMostRecentSaveSlot(_Script_CoreUObject::Object* WorldContext);
    void GetExistingSaveGames(_Script_CoreUObject::Object* WorldContext, void*& OutSaveGames, bool bAllowNonSlotSaves, bool bSortByTime);
    bool GetCurrentSaveGameMetaData(_Script_CoreUObject::Object* WorldContext, _Script_RsGameTechRT::RsSaveGameMetaData& OutSaveGameMetaData);
    bool DoesSaveGameExistForSlot(_Script_CoreUObject::Object* WorldContext, void* SaveSlotIndex, bool bIncludeBackup);
    bool DoesSaveGameExist(_Script_CoreUObject::Object* WorldContext);
    bool DoesSaveGameBackupExistForSlot(_Script_CoreUObject::Object* WorldContext, void* SaveSlotIndex);
    void ConfirmPendingSaves(_Script_CoreUObject::Object* WorldContext);
    void ClearAllSaves(_Script_CoreUObject::Object* WorldContext);
}; // Size: 0x28
#pragma pack(pop)
}
