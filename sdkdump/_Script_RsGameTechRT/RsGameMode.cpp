#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\GameMode.hpp"
#include "..\_Script_OnlineSubsystemUtils\EntitlementsQueryCallbackProxy.hpp"
#include "RsGameMode.hpp"
#include "RsSyncManager.hpp"
void* _Script_RsGameTechRT::RsGameMode::get_OnDeluxeEditionUnlockedEvent() {
    return (void*)((uintptr_t)this + 0x460);
}
_Script_OnlineSubsystemUtils::EntitlementsQueryCallbackProxy*& _Script_RsGameTechRT::RsGameMode::get_m_EntitlementsQueryCallbackProxy() {
    return *(_Script_OnlineSubsystemUtils::EntitlementsQueryCallbackProxy**)((uintptr_t)this + 0x4f8);
}
void* _Script_RsGameTechRT::RsGameMode::get_OnDeluxeEditionDownloadedAndInstalledEvent() {
    return (void*)((uintptr_t)this + 0x470);
}
void _Script_RsGameTechRT::RsGameMode::OnUnexpectedPurchaseReceiptCompleted() {
    return;
}
_Script_RsGameTechRT::RsSyncManager*& _Script_RsGameTechRT::RsGameMode::get_SyncManager() {
    return *(_Script_RsGameTechRT::RsSyncManager**)((uintptr_t)this + 0x480);
}
_Script_CoreUObject::Class* _Script_RsGameTechRT::RsGameMode::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/RsGameTechRT.RsGameMode");
    return result;
}
void* _Script_RsGameTechRT::RsGameMode::get_SyncManagerClassName() {
    return (void*)((uintptr_t)this + 0x488);
}
void _Script_RsGameTechRT::RsGameMode::OnQueryEAAccessSubscriptionFinish(bool bIsAvailable) {
    return;
}
void _Script_RsGameTechRT::RsGameMode::OnQueryAdditionalLocalContentFinish(bool bWasSuccessful) {
    return;
}
void _Script_RsGameTechRT::RsGameMode::OnDownloadableContentPackageUpdate(void* contentItemID, void* contentStatus) {
    return;
}
void _Script_RsGameTechRT::RsGameMode::OnDownloadableContentPackageInstallCompleted() {
    return;
}
void _Script_RsGameTechRT::RsGameMode::OnCacheEntitlements_Success() {
    return;
}
void _Script_RsGameTechRT::RsGameMode::OnCacheEntitlements_Failure() {
    return;
}
void _Script_RsGameTechRT::RsGameMode::OnApplicationHasEnteredForeground() {
    return;
}
void* _Script_RsGameTechRT::RsGameMode::GetDeluxeMovieBasePath() {
    return;
}
