#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "..\_Script_Engine\BlueprintFunctionLibrary.hpp"
#include "..\_Script_Engine\PlayerController.hpp"
#include "TurnBasedBlueprintLibrary.hpp"
_Script_CoreUObject::Class* _Script_OnlineSubsystemUtils::TurnBasedBlueprintLibrary::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/OnlineSubsystemUtils.TurnBasedBlueprintLibrary");
    return result;
}
void _Script_OnlineSubsystemUtils::TurnBasedBlueprintLibrary::RegisterTurnBasedMatchInterfaceObject(_Script_CoreUObject::Object* WorldContextObject, _Script_Engine::PlayerController* PlayerController, _Script_CoreUObject::Object* Object) {
    return;
}
void _Script_OnlineSubsystemUtils::TurnBasedBlueprintLibrary::GetPlayerDisplayName(_Script_CoreUObject::Object* WorldContextObject, _Script_Engine::PlayerController* PlayerController, void* MatchID, int32_t PlayerIndex, void*& PlayerDisplayName) {
    return;
}
void _Script_OnlineSubsystemUtils::TurnBasedBlueprintLibrary::GetMyPlayerIndex(_Script_CoreUObject::Object* WorldContextObject, _Script_Engine::PlayerController* PlayerController, void* MatchID, int32_t& PlayerIndex) {
    return;
}
void _Script_OnlineSubsystemUtils::TurnBasedBlueprintLibrary::GetIsMyTurn(_Script_CoreUObject::Object* WorldContextObject, _Script_Engine::PlayerController* PlayerController, void* MatchID, bool& bIsMyTurn) {
    return;
}
