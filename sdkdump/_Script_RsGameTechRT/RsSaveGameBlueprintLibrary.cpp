#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "..\_Script_CoreUObject\Transform.hpp"
#include "..\_Script_Engine\Actor.hpp"
#include "..\_Script_Engine\ActorComponent.hpp"
#include "..\_Script_Engine\BlueprintFunctionLibrary.hpp"
#include "..\_Script_Engine\RsStreamingAreaPlayerStart.hpp"
#include "..\_Script_Engine\RsStreamingDefinition.hpp"
#include "RsSaveGameBlueprintLibrary.hpp"
#include "RsSaveGameMetaData.hpp"
bool _Script_RsGameTechRT::RsSaveGameBlueprintLibrary::DoesSaveGameBackupExistForSlot(_Script_CoreUObject::Object* WorldContext, void* SaveSlotIndex) {
    return;
}
void _Script_RsGameTechRT::RsSaveGameBlueprintLibrary::SaveComponentImmediate(_Script_Engine::ActorComponent* Component) {
    return;
}
_Script_CoreUObject::Class* _Script_RsGameTechRT::RsSaveGameBlueprintLibrary::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/RsGameTechRT.RsSaveGameBlueprintLibrary");
    return result;
}
void* _Script_RsGameTechRT::RsSaveGameBlueprintLibrary::GetMostRecentSaveSlot(_Script_CoreUObject::Object* WorldContext) {
    return;
}
bool _Script_RsGameTechRT::RsSaveGameBlueprintLibrary::IsSavingToDisk(_Script_CoreUObject::Object* WorldContext) {
    return;
}
void _Script_RsGameTechRT::RsSaveGameBlueprintLibrary::SetSaveSlot(_Script_CoreUObject::Object* WorldContext, void* SaveSlot) {
    return;
}
void _Script_RsGameTechRT::RsSaveGameBlueprintLibrary::SetSaveGameMetaData(_Script_CoreUObject::Object* WorldContext, _Script_RsGameTechRT::RsSaveGameMetaData InMetaData) {
    return;
}
bool _Script_RsGameTechRT::RsSaveGameBlueprintLibrary::IsCurrentSaveNewGamePlus(_Script_CoreUObject::Object* WorldContext) {
    return;
}
void _Script_RsGameTechRT::RsSaveGameBlueprintLibrary::SaveContainingLevel(_Script_Engine::Actor* Actor, bool bIsPendingCheckpoint) {
    return;
}
void _Script_RsGameTechRT::RsSaveGameBlueprintLibrary::SavePlayerStart(_Script_CoreUObject::Object* WorldContext, _Script_CoreUObject::Transform PlayerStartTransform) {
    return;
}
bool _Script_RsGameTechRT::RsSaveGameBlueprintLibrary::GetCurrentSaveGameMetaData(_Script_CoreUObject::Object* WorldContext, _Script_RsGameTechRT::RsSaveGameMetaData& OutSaveGameMetaData) {
    return;
}
void _Script_RsGameTechRT::RsSaveGameBlueprintLibrary::SaveCheckpointWithPlayerStartInfo(_Script_CoreUObject::Object* WorldContext, _Script_Engine::RsStreamingDefinition* RootStreamingLevelDefinition, void* PlayerStartName) {
    return;
}
void _Script_RsGameTechRT::RsSaveGameBlueprintLibrary::SaveContainingLevelImmediate(_Script_Engine::Actor* Actor) {
    return;
}
void _Script_RsGameTechRT::RsSaveGameBlueprintLibrary::SaveCheckpointWithPlayerStart(_Script_CoreUObject::Object* WorldContext, _Script_Engine::RsStreamingAreaPlayerStart* PlayerStart) {
    return;
}
void _Script_RsGameTechRT::RsSaveGameBlueprintLibrary::SaveCheckpoint(_Script_CoreUObject::Object* WorldContext, _Script_CoreUObject::Transform PlayerStartTransform) {
    return;
}
void _Script_RsGameTechRT::RsSaveGameBlueprintLibrary::SaveActorPropertyImmediate(_Script_Engine::Actor* Actor, void* PropertyName) {
    return;
}
void _Script_RsGameTechRT::RsSaveGameBlueprintLibrary::SaveActorImmediate(_Script_Engine::Actor* Actor) {
    return;
}
void _Script_RsGameTechRT::RsSaveGameBlueprintLibrary::SaveActor(_Script_Engine::Actor* Actor, bool bIsPendingCheckpoint) {
    return;
}
void _Script_RsGameTechRT::RsSaveGameBlueprintLibrary::ResetPendingSaves(_Script_CoreUObject::Object* WorldContext) {
    return;
}
void _Script_RsGameTechRT::RsSaveGameBlueprintLibrary::ReloadLastCheckpoint(_Script_CoreUObject::Object* WorldContext) {
    return;
}
void _Script_RsGameTechRT::RsSaveGameBlueprintLibrary::RefreshCachedSaveFileInfo(_Script_CoreUObject::Object* WorldContext) {
    return;
}
void* _Script_RsGameTechRT::RsSaveGameBlueprintLibrary::GetSaveSlotCount(_Script_CoreUObject::Object* WorldContext) {
    return;
}
void _Script_RsGameTechRT::RsSaveGameBlueprintLibrary::RefreshCachedNewGamePlusUnlocks(_Script_CoreUObject::Object* WorldContext) {
    return;
}
bool _Script_RsGameTechRT::RsSaveGameBlueprintLibrary::LoadSaveGameForSlot(_Script_CoreUObject::Object* WorldContext, void* SaveSlotIndex) {
    return;
}
bool _Script_RsGameTechRT::RsSaveGameBlueprintLibrary::LoadSaveGameBackupForSlot(_Script_CoreUObject::Object* WorldContext, void* SaveSlotIndex) {
    return;
}
bool _Script_RsGameTechRT::RsSaveGameBlueprintLibrary::LoadSaveGame(_Script_CoreUObject::Object* WorldContext, void* SaveName) {
    return;
}
void _Script_RsGameTechRT::RsSaveGameBlueprintLibrary::LoadContainingLevel(_Script_Engine::Actor* Actor) {
    return;
}
bool _Script_RsGameTechRT::RsSaveGameBlueprintLibrary::LoadActor(_Script_Engine::Actor* Actor) {
    return;
}
bool _Script_RsGameTechRT::RsSaveGameBlueprintLibrary::IsRefreshingCachedNewGamePlusUnlocks(_Script_CoreUObject::Object* WorldContext) {
    return;
}
bool _Script_RsGameTechRT::RsSaveGameBlueprintLibrary::IsLoadingSaveFileInfo(_Script_CoreUObject::Object* WorldContext) {
    return;
}
bool _Script_RsGameTechRT::RsSaveGameBlueprintLibrary::IsClearingAllSaves(_Script_CoreUObject::Object* WorldContext) {
    return;
}
void* _Script_RsGameTechRT::RsSaveGameBlueprintLibrary::GetSaveSlot(_Script_CoreUObject::Object* WorldContext) {
    return;
}
_Script_Engine::RsStreamingDefinition* _Script_RsGameTechRT::RsSaveGameBlueprintLibrary::GetSaveGameStreamingInfo(_Script_CoreUObject::Object* WorldContext, void* SaveSlot, void*& OutStreamingPlayerStartName) {
    return;
}
void _Script_RsGameTechRT::RsSaveGameBlueprintLibrary::GetExistingSaveGames(_Script_CoreUObject::Object* WorldContext, void*& OutSaveGames, bool bAllowNonSlotSaves, bool bSortByTime) {
    return;
}
bool _Script_RsGameTechRT::RsSaveGameBlueprintLibrary::DoesSaveGameExistForSlot(_Script_CoreUObject::Object* WorldContext, void* SaveSlotIndex, bool bIncludeBackup) {
    return;
}
bool _Script_RsGameTechRT::RsSaveGameBlueprintLibrary::DoesSaveGameExist(_Script_CoreUObject::Object* WorldContext) {
    return;
}
void _Script_RsGameTechRT::RsSaveGameBlueprintLibrary::ConfirmPendingSaves(_Script_CoreUObject::Object* WorldContext) {
    return;
}
void _Script_RsGameTechRT::RsSaveGameBlueprintLibrary::ClearAllSaves(_Script_CoreUObject::Object* WorldContext) {
    return;
}
