#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\GameMode.hpp"
namespace _Script_RsGameTechRT {
struct RsSyncManager;
}
namespace _Script_OnlineSubsystemUtils {
struct EntitlementsQueryCallbackProxy;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_RsGameTechRT {
#pragma pack(push, 1)
struct RsGameMode : public _Script_Engine::GameMode {
    private: char pad_448[0x108]; public:
    void* get_OnDeluxeEditionUnlockedEvent();
    void* get_OnDeluxeEditionDownloadedAndInstalledEvent();
    _Script_RsGameTechRT::RsSyncManager*& get_SyncManager();
    void* get_SyncManagerClassName();
    _Script_OnlineSubsystemUtils::EntitlementsQueryCallbackProxy*& get_m_EntitlementsQueryCallbackProxy();
    static _Script_CoreUObject::Class* static_class();
    void OnUnexpectedPurchaseReceiptCompleted();
    void OnQueryEAAccessSubscriptionFinish(bool bIsAvailable);
    void OnQueryAdditionalLocalContentFinish(bool bWasSuccessful);
    void OnDownloadableContentPackageUpdate(void* contentItemID, void* contentStatus);
    void OnDownloadableContentPackageInstallCompleted();
    void OnCacheEntitlements_Success();
    void OnCacheEntitlements_Failure();
    void OnApplicationHasEnteredForeground();
    void* GetDeluxeMovieBasePath();
}; // Size: 0x550
#pragma pack(pop)
}
