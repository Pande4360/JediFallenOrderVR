#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "..\_Script_Engine\OnlineBlueprintCallProxyBase.hpp"
#include "..\_Script_Engine\PlayerController.hpp"
#include "EndMatchCallbackProxy.hpp"
void* _Script_OnlineSubsystemUtils::EndMatchCallbackProxy::get_OnSuccess() {
    return (void*)((uintptr_t)this + 0x28);
}
_Script_OnlineSubsystemUtils::EndMatchCallbackProxy* _Script_OnlineSubsystemUtils::EndMatchCallbackProxy::EndMatch(_Script_CoreUObject::Object* WorldContextObject, _Script_Engine::PlayerController* PlayerController, void* MatchActor, void* MatchID, void* LocalPlayerOutcome, void* OtherPlayersOutcome) {
    return;
}
void* _Script_OnlineSubsystemUtils::EndMatchCallbackProxy::get_OnFailure() {
    return (void*)((uintptr_t)this + 0x38);
}
_Script_CoreUObject::Class* _Script_OnlineSubsystemUtils::EndMatchCallbackProxy::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/OnlineSubsystemUtils.EndMatchCallbackProxy");
    return result;
}
