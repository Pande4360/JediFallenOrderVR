#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "..\_Script_Engine\OnlineBlueprintCallProxyBase.hpp"
#include "..\_Script_Engine\PlayerController.hpp"
#include "FindTurnBasedMatchCallbackProxy.hpp"
void* _Script_OnlineSubsystemUtils::FindTurnBasedMatchCallbackProxy::get_OnSuccess() {
    return (void*)((uintptr_t)this + 0x28);
}
void* _Script_OnlineSubsystemUtils::FindTurnBasedMatchCallbackProxy::get_OnFailure() {
    return (void*)((uintptr_t)this + 0x38);
}
_Script_CoreUObject::Class* _Script_OnlineSubsystemUtils::FindTurnBasedMatchCallbackProxy::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/OnlineSubsystemUtils.FindTurnBasedMatchCallbackProxy");
    return result;
}
_Script_OnlineSubsystemUtils::FindTurnBasedMatchCallbackProxy* _Script_OnlineSubsystemUtils::FindTurnBasedMatchCallbackProxy::FindTurnBasedMatch(_Script_CoreUObject::Object* WorldContextObject, _Script_Engine::PlayerController* PlayerController, void* MatchActor, int32_t MinPlayers, int32_t MaxPlayers, int32_t PlayerGroup, bool ShowExistingMatches) {
    return;
}
