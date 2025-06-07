#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "..\_Script_Engine\OnlineBlueprintCallProxyBase.hpp"
#include "..\_Script_Engine\PlayerController.hpp"
#include "CreateSessionCallbackProxy.hpp"
void* _Script_OnlineSubsystemUtils::CreateSessionCallbackProxy::get_OnFailure() {
    return (void*)((uintptr_t)this + 0x38);
}
void* _Script_OnlineSubsystemUtils::CreateSessionCallbackProxy::get_OnSuccess() {
    return (void*)((uintptr_t)this + 0x28);
}
_Script_CoreUObject::Class* _Script_OnlineSubsystemUtils::CreateSessionCallbackProxy::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/OnlineSubsystemUtils.CreateSessionCallbackProxy");
    return result;
}
_Script_OnlineSubsystemUtils::CreateSessionCallbackProxy* _Script_OnlineSubsystemUtils::CreateSessionCallbackProxy::CreateSession(_Script_CoreUObject::Object* WorldContextObject, _Script_Engine::PlayerController* PlayerController, int32_t PublicConnections, bool bUseLAN) {
    return;
}
