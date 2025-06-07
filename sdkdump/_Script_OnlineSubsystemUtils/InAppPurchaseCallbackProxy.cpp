#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "..\_Script_Engine\PlayerController.hpp"
#include "..\_Script_OnlineSubsystem\InAppPurchaseProductRequest.hpp"
#include "InAppPurchaseCallbackProxy.hpp"
void* _Script_OnlineSubsystemUtils::InAppPurchaseCallbackProxy::get_OnSuccess() {
    return (void*)((uintptr_t)this + 0x28);
}
void* _Script_OnlineSubsystemUtils::InAppPurchaseCallbackProxy::get_OnFailure() {
    return (void*)((uintptr_t)this + 0x38);
}
_Script_CoreUObject::Class* _Script_OnlineSubsystemUtils::InAppPurchaseCallbackProxy::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/OnlineSubsystemUtils.InAppPurchaseCallbackProxy");
    return result;
}
_Script_OnlineSubsystemUtils::InAppPurchaseCallbackProxy* _Script_OnlineSubsystemUtils::InAppPurchaseCallbackProxy::CreateProxyObjectForInAppPurchase(_Script_Engine::PlayerController* PlayerController, _Script_OnlineSubsystem::InAppPurchaseProductRequest& ProductRequest) {
    return;
}
