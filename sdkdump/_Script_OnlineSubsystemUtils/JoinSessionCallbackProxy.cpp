#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "..\_Script_Engine\OnlineBlueprintCallProxyBase.hpp"
#include "..\_Script_Engine\PlayerController.hpp"
#include "BlueprintSessionResult.hpp"
#include "JoinSessionCallbackProxy.hpp"
void* _Script_OnlineSubsystemUtils::JoinSessionCallbackProxy::get_OnSuccess() {
    return (void*)((uintptr_t)this + 0x28);
}
_Script_CoreUObject::Class* _Script_OnlineSubsystemUtils::JoinSessionCallbackProxy::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/OnlineSubsystemUtils.JoinSessionCallbackProxy");
    return result;
}
void* _Script_OnlineSubsystemUtils::JoinSessionCallbackProxy::get_OnFailure() {
    return (void*)((uintptr_t)this + 0x38);
}
_Script_OnlineSubsystemUtils::JoinSessionCallbackProxy* _Script_OnlineSubsystemUtils::JoinSessionCallbackProxy::JoinSession(_Script_CoreUObject::Object* WorldContextObject, _Script_Engine::PlayerController* PlayerController, _Script_OnlineSubsystemUtils::BlueprintSessionResult& SearchResult) {
    return;
}
