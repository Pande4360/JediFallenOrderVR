#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\OnlineBlueprintCallProxyBase.hpp"
namespace _Script_CoreUObject {
struct Object;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
struct PlayerController;
}
namespace _Script_OnlineSubsystemUtils {
#pragma pack(push, 1)
struct EntitlementsQueryCallbackProxy : public _Script_Engine::OnlineBlueprintCallProxyBase {
    private: char pad_28[0x50]; public:
    void* get_OnSuccess();
    void* get_OnFailure();
    _Script_CoreUObject::Object*& get_WorldContextObject();
    static _Script_CoreUObject::Class* static_class();
    _Script_OnlineSubsystemUtils::EntitlementsQueryCallbackProxy* CacheEntitlements(_Script_CoreUObject::Object* WorldContextObject, _Script_Engine::PlayerController* PlayerController);
}; // Size: 0x78
#pragma pack(pop)
}
