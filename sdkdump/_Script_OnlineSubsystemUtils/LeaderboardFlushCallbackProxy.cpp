#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "..\_Script_Engine\PlayerController.hpp"
#include "LeaderboardFlushCallbackProxy.hpp"
_Script_CoreUObject::Class* _Script_OnlineSubsystemUtils::LeaderboardFlushCallbackProxy::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/OnlineSubsystemUtils.LeaderboardFlushCallbackProxy");
    return result;
}
void* _Script_OnlineSubsystemUtils::LeaderboardFlushCallbackProxy::get_OnSuccess() {
    return (void*)((uintptr_t)this + 0x28);
}
void* _Script_OnlineSubsystemUtils::LeaderboardFlushCallbackProxy::get_OnFailure() {
    return (void*)((uintptr_t)this + 0x38);
}
_Script_OnlineSubsystemUtils::LeaderboardFlushCallbackProxy* _Script_OnlineSubsystemUtils::LeaderboardFlushCallbackProxy::CreateProxyObjectForFlush(_Script_Engine::PlayerController* PlayerController, void* SessionName) {
    return;
}
