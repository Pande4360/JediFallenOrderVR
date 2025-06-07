#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\Object.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_OnlineSubsystem {
struct InAppPurchaseProductRequest;
}
namespace _Script_Engine {
struct PlayerController;
}
namespace _Script_OnlineSubsystemUtils {
#pragma pack(push, 1)
struct InAppPurchaseCallbackProxy : public _Script_CoreUObject::Object {
    private: char pad_28[0x58]; public:
    void* get_OnSuccess();
    void* get_OnFailure();
    static _Script_CoreUObject::Class* static_class();
    _Script_OnlineSubsystemUtils::InAppPurchaseCallbackProxy* CreateProxyObjectForInAppPurchase(_Script_Engine::PlayerController* PlayerController, _Script_OnlineSubsystem::InAppPurchaseProductRequest& ProductRequest);
}; // Size: 0x80
#pragma pack(pop)
}
