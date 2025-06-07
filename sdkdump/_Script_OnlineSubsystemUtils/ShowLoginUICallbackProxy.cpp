#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "..\_Script_Engine\BlueprintAsyncActionBase.hpp"
#include "..\_Script_Engine\PlayerController.hpp"
#include "ShowLoginUICallbackProxy.hpp"
void* _Script_OnlineSubsystemUtils::ShowLoginUICallbackProxy::get_OnSuccess() {
    return (void*)((uintptr_t)this + 0x30);
}
void* _Script_OnlineSubsystemUtils::ShowLoginUICallbackProxy::get_OnFailure() {
    return (void*)((uintptr_t)this + 0x40);
}
_Script_CoreUObject::Class* _Script_OnlineSubsystemUtils::ShowLoginUICallbackProxy::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/OnlineSubsystemUtils.ShowLoginUICallbackProxy");
    return result;
}
_Script_OnlineSubsystemUtils::ShowLoginUICallbackProxy* _Script_OnlineSubsystemUtils::ShowLoginUICallbackProxy::ShowExternalLoginUI(_Script_CoreUObject::Object* WorldContextObject, _Script_Engine::PlayerController* InPlayerController) {
    return;
}
