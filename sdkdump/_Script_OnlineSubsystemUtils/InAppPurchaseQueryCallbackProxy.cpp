#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "..\_Script_Engine\PlayerController.hpp"
#include "InAppPurchaseQueryCallbackProxy.hpp"
void* _Script_OnlineSubsystemUtils::InAppPurchaseQueryCallbackProxy::get_OnSuccess() {
    return (void*)((uintptr_t)this + 0x28);
}
_Script_OnlineSubsystemUtils::InAppPurchaseQueryCallbackProxy* _Script_OnlineSubsystemUtils::InAppPurchaseQueryCallbackProxy::CreateProxyObjectForInAppPurchaseQuery(_Script_Engine::PlayerController* PlayerController, void*& ProductIdentifiers) {
    return;
}
void* _Script_OnlineSubsystemUtils::InAppPurchaseQueryCallbackProxy::get_OnFailure() {
    return (void*)((uintptr_t)this + 0x38);
}
_Script_CoreUObject::Class* _Script_OnlineSubsystemUtils::InAppPurchaseQueryCallbackProxy::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/OnlineSubsystemUtils.InAppPurchaseQueryCallbackProxy");
    return result;
}
