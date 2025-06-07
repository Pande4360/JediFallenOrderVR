#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "..\_Script_Engine\OnlineBlueprintCallProxyBase.hpp"
#include "..\_Script_Engine\PlayerController.hpp"
#include "AchievementWriteCallbackProxy.hpp"
_Script_OnlineSubsystemUtils::AchievementWriteCallbackProxy* _Script_OnlineSubsystemUtils::AchievementWriteCallbackProxy::WriteAchievementProgress(_Script_CoreUObject::Object* WorldContextObject, _Script_Engine::PlayerController* PlayerController, void* AchievementName, float Progress, int32_t UserTag) {
    return;
}
void* _Script_OnlineSubsystemUtils::AchievementWriteCallbackProxy::get_OnSuccess() {
    return (void*)((uintptr_t)this + 0x28);
}
void* _Script_OnlineSubsystemUtils::AchievementWriteCallbackProxy::get_OnFailure() {
    return (void*)((uintptr_t)this + 0x38);
}
_Script_CoreUObject::Class* _Script_OnlineSubsystemUtils::AchievementWriteCallbackProxy::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/OnlineSubsystemUtils.AchievementWriteCallbackProxy");
    return result;
}
