#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "..\_Script_Engine\Actor.hpp"
#include "..\_Script_Engine\BlueprintFunctionLibrary.hpp"
#include "..\_Script_Engine\LatentActionInfo.hpp"
#include "RsPinTelemetryBlueprintLibrary.hpp"
_Script_CoreUObject::Class* _Script_SwGame::RsPinTelemetryBlueprintLibrary::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/SwGame.RsPinTelemetryBlueprintLibrary");
    return result;
}
void _Script_SwGame::RsPinTelemetryBlueprintLibrary::PinTelemetry_XPGained(float Amount) {
    return;
}
void _Script_SwGame::RsPinTelemetryBlueprintLibrary::PinTelemetry_SetEnabled(bool bEnabled) {
    return;
}
void _Script_SwGame::RsPinTelemetryBlueprintLibrary::PinTelemetry_LeaveGame() {
    return;
}
void _Script_SwGame::RsPinTelemetryBlueprintLibrary::PinTelemetry_ResumeGame() {
    return;
}
bool _Script_SwGame::RsPinTelemetryBlueprintLibrary::PinTelemetry_IsEnabled() {
    return;
}
void _Script_SwGame::RsPinTelemetryBlueprintLibrary::PinTelemetry_PlayerKilledEnemy() {
    return;
}
void _Script_SwGame::RsPinTelemetryBlueprintLibrary::PinTelemetry_PlayerDied(_Script_Engine::Actor* KilledBy, void* PlayerWeaponType, int32_t NumRemainingHeals) {
    return;
}
void _Script_SwGame::RsPinTelemetryBlueprintLibrary::PinTelemetry_FinishedGame() {
    return;
}
void _Script_SwGame::RsPinTelemetryBlueprintLibrary::PinTelemetry_BeginNewGame() {
    return;
}
void _Script_SwGame::RsPinTelemetryBlueprintLibrary::GetUserAgeGroup(_Script_CoreUObject::Object* WorldContextObject, void*& OutResult, _Script_Engine::LatentActionInfo LatentInfo) {
    return;
}
