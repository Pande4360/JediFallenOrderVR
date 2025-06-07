#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "..\_Script_Engine\OnlineBlueprintCallProxyBase.hpp"
#include "..\_Script_Engine\PlayerController.hpp"
#include "BlueprintSessionResult.hpp"
#include "FindSessionsCallbackProxy.hpp"
int32_t _Script_OnlineSubsystemUtils::FindSessionsCallbackProxy::GetCurrentPlayers(_Script_OnlineSubsystemUtils::BlueprintSessionResult& Result) {
    return;
}
void* _Script_OnlineSubsystemUtils::FindSessionsCallbackProxy::get_OnSuccess() {
    return (void*)((uintptr_t)this + 0x28);
}
_Script_OnlineSubsystemUtils::FindSessionsCallbackProxy* _Script_OnlineSubsystemUtils::FindSessionsCallbackProxy::FindSessions(_Script_CoreUObject::Object* WorldContextObject, _Script_Engine::PlayerController* PlayerController, int32_t MaxResults, bool bUseLAN) {
    return;
}
void* _Script_OnlineSubsystemUtils::FindSessionsCallbackProxy::get_OnFailure() {
    return (void*)((uintptr_t)this + 0x38);
}
int32_t _Script_OnlineSubsystemUtils::FindSessionsCallbackProxy::GetMaxPlayers(_Script_OnlineSubsystemUtils::BlueprintSessionResult& Result) {
    return;
}
_Script_CoreUObject::Class* _Script_OnlineSubsystemUtils::FindSessionsCallbackProxy::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/OnlineSubsystemUtils.FindSessionsCallbackProxy");
    return result;
}
void* _Script_OnlineSubsystemUtils::FindSessionsCallbackProxy::GetServerName(_Script_OnlineSubsystemUtils::BlueprintSessionResult& Result) {
    return;
}
int32_t _Script_OnlineSubsystemUtils::FindSessionsCallbackProxy::GetPingInMs(_Script_OnlineSubsystemUtils::BlueprintSessionResult& Result) {
    return;
}
