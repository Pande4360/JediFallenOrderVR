#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "..\_Script_Engine\OnlineBlueprintCallProxyBase.hpp"
#include "..\_Script_Engine\PlayerController.hpp"
#include "QuitMatchCallbackProxy.hpp"
void* _Script_OnlineSubsystemUtils::QuitMatchCallbackProxy::get_OnSuccess() {
    return (void*)((uintptr_t)this + 0x28);
}
void* _Script_OnlineSubsystemUtils::QuitMatchCallbackProxy::get_OnFailure() {
    return (void*)((uintptr_t)this + 0x38);
}
_Script_CoreUObject::Class* _Script_OnlineSubsystemUtils::QuitMatchCallbackProxy::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/OnlineSubsystemUtils.QuitMatchCallbackProxy");
    return result;
}
_Script_OnlineSubsystemUtils::QuitMatchCallbackProxy* _Script_OnlineSubsystemUtils::QuitMatchCallbackProxy::QuitMatch(_Script_CoreUObject::Object* WorldContextObject, _Script_Engine::PlayerController* PlayerController, void* MatchID, void* Outcome, int32_t TurnTimeoutInSeconds) {
    return;
}
