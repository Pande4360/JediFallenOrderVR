#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "..\_Script_Engine\OnlineBlueprintCallProxyBase.hpp"
#include "..\_Script_Engine\PlayerController.hpp"
#include "AchievementQueryCallbackProxy.hpp"
_Script_OnlineSubsystemUtils::AchievementQueryCallbackProxy* _Script_OnlineSubsystemUtils::AchievementQueryCallbackProxy::CacheAchievementDescriptions(_Script_CoreUObject::Object* WorldContextObject, _Script_Engine::PlayerController* PlayerController) {
    return;
}
void* _Script_OnlineSubsystemUtils::AchievementQueryCallbackProxy::get_OnFailure() {
    return (void*)((uintptr_t)this + 0x38);
}
void* _Script_OnlineSubsystemUtils::AchievementQueryCallbackProxy::get_OnSuccess() {
    return (void*)((uintptr_t)this + 0x28);
}
_Script_CoreUObject::Class* _Script_OnlineSubsystemUtils::AchievementQueryCallbackProxy::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/OnlineSubsystemUtils.AchievementQueryCallbackProxy");
    return result;
}
_Script_OnlineSubsystemUtils::AchievementQueryCallbackProxy* _Script_OnlineSubsystemUtils::AchievementQueryCallbackProxy::CacheAchievements(_Script_CoreUObject::Object* WorldContextObject, _Script_Engine::PlayerController* PlayerController) {
    return;
}
