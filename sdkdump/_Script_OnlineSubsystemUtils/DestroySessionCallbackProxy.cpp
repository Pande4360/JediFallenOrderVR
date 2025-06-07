#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "..\_Script_Engine\OnlineBlueprintCallProxyBase.hpp"
#include "..\_Script_Engine\PlayerController.hpp"
#include "DestroySessionCallbackProxy.hpp"
void* _Script_OnlineSubsystemUtils::DestroySessionCallbackProxy::get_OnFailure() {
    return (void*)((uintptr_t)this + 0x38);
}
void* _Script_OnlineSubsystemUtils::DestroySessionCallbackProxy::get_OnSuccess() {
    return (void*)((uintptr_t)this + 0x28);
}
_Script_CoreUObject::Class* _Script_OnlineSubsystemUtils::DestroySessionCallbackProxy::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/OnlineSubsystemUtils.DestroySessionCallbackProxy");
    return result;
}
_Script_OnlineSubsystemUtils::DestroySessionCallbackProxy* _Script_OnlineSubsystemUtils::DestroySessionCallbackProxy::DestroySession(_Script_CoreUObject::Object* WorldContextObject, _Script_Engine::PlayerController* PlayerController) {
    return;
}
