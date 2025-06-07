#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "..\_Script_Engine\PlayerController.hpp"
#include "LeaderboardQueryCallbackProxy.hpp"
void* _Script_OnlineSubsystemUtils::LeaderboardQueryCallbackProxy::get_OnSuccess() {
    return (void*)((uintptr_t)this + 0x28);
}
_Script_OnlineSubsystemUtils::LeaderboardQueryCallbackProxy* _Script_OnlineSubsystemUtils::LeaderboardQueryCallbackProxy::CreateProxyObjectForIntQuery(_Script_Engine::PlayerController* PlayerController, void* StatName) {
    return;
}
void* _Script_OnlineSubsystemUtils::LeaderboardQueryCallbackProxy::get_OnFailure() {
    return (void*)((uintptr_t)this + 0x38);
}
_Script_CoreUObject::Class* _Script_OnlineSubsystemUtils::LeaderboardQueryCallbackProxy::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/OnlineSubsystemUtils.LeaderboardQueryCallbackProxy");
    return result;
}
