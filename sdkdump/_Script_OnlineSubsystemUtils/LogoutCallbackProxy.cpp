#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "..\_Script_Engine\BlueprintAsyncActionBase.hpp"
#include "..\_Script_Engine\PlayerController.hpp"
#include "LogoutCallbackProxy.hpp"
void* _Script_OnlineSubsystemUtils::LogoutCallbackProxy::get_OnSuccess() {
    return (void*)((uintptr_t)this + 0x30);
}
_Script_OnlineSubsystemUtils::LogoutCallbackProxy* _Script_OnlineSubsystemUtils::LogoutCallbackProxy::Logout(_Script_CoreUObject::Object* WorldContextObject, _Script_Engine::PlayerController* PlayerController) {
    return;
}
void* _Script_OnlineSubsystemUtils::LogoutCallbackProxy::get_OnFailure() {
    return (void*)((uintptr_t)this + 0x40);
}
_Script_CoreUObject::Class* _Script_OnlineSubsystemUtils::LogoutCallbackProxy::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/OnlineSubsystemUtils.LogoutCallbackProxy");
    return result;
}
