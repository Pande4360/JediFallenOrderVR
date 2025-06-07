#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "..\_Script_Engine\OnlineBlueprintCallProxyBase.hpp"
#include "..\_Script_Engine\PlayerController.hpp"
#include "EntitlementsQueryCallbackProxy.hpp"
void* _Script_OnlineSubsystemUtils::EntitlementsQueryCallbackProxy::get_OnSuccess() {
    return (void*)((uintptr_t)this + 0x28);
}
void* _Script_OnlineSubsystemUtils::EntitlementsQueryCallbackProxy::get_OnFailure() {
    return (void*)((uintptr_t)this + 0x38);
}
_Script_CoreUObject::Object*& _Script_OnlineSubsystemUtils::EntitlementsQueryCallbackProxy::get_WorldContextObject() {
    return *(_Script_CoreUObject::Object**)((uintptr_t)this + 0x50);
}
_Script_CoreUObject::Class* _Script_OnlineSubsystemUtils::EntitlementsQueryCallbackProxy::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/OnlineSubsystemUtils.EntitlementsQueryCallbackProxy");
    return result;
}
_Script_OnlineSubsystemUtils::EntitlementsQueryCallbackProxy* _Script_OnlineSubsystemUtils::EntitlementsQueryCallbackProxy::CacheEntitlements(_Script_CoreUObject::Object* WorldContextObject, _Script_Engine::PlayerController* PlayerController) {
    return;
}
