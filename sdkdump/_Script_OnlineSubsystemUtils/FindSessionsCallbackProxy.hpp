#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\OnlineBlueprintCallProxyBase.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_CoreUObject {
struct Object;
}
namespace _Script_OnlineSubsystemUtils {
struct BlueprintSessionResult;
}
namespace _Script_Engine {
struct PlayerController;
}
namespace _Script_OnlineSubsystemUtils {
#pragma pack(push, 1)
struct FindSessionsCallbackProxy : public _Script_Engine::OnlineBlueprintCallProxyBase {
    private: char pad_28[0x60]; public:
    void* get_OnSuccess();
    void* get_OnFailure();
    static _Script_CoreUObject::Class* static_class();
    void* GetServerName(_Script_OnlineSubsystemUtils::BlueprintSessionResult& Result);
    int32_t GetPingInMs(_Script_OnlineSubsystemUtils::BlueprintSessionResult& Result);
    int32_t GetMaxPlayers(_Script_OnlineSubsystemUtils::BlueprintSessionResult& Result);
    int32_t GetCurrentPlayers(_Script_OnlineSubsystemUtils::BlueprintSessionResult& Result);
    _Script_OnlineSubsystemUtils::FindSessionsCallbackProxy* FindSessions(_Script_CoreUObject::Object* WorldContextObject, _Script_Engine::PlayerController* PlayerController, int32_t MaxResults, bool bUseLAN);
}; // Size: 0x88
#pragma pack(pop)
}
