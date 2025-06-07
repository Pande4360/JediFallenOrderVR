#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "..\_Script_Engine\PlayerController.hpp"
#include "InAppPurchaseRestoreCallbackProxy.hpp"
void* _Script_OnlineSubsystemUtils::InAppPurchaseRestoreCallbackProxy::get_OnSuccess() {
    return (void*)((uintptr_t)this + 0x28);
}
void* _Script_OnlineSubsystemUtils::InAppPurchaseRestoreCallbackProxy::get_OnFailure() {
    return (void*)((uintptr_t)this + 0x38);
}
_Script_CoreUObject::Class* _Script_OnlineSubsystemUtils::InAppPurchaseRestoreCallbackProxy::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/OnlineSubsystemUtils.InAppPurchaseRestoreCallbackProxy");
    return result;
}
_Script_OnlineSubsystemUtils::InAppPurchaseRestoreCallbackProxy* _Script_OnlineSubsystemUtils::InAppPurchaseRestoreCallbackProxy::CreateProxyObjectForInAppPurchaseRestore(void*& ConsumableProductFlags, _Script_Engine::PlayerController* PlayerController) {
    return;
}
