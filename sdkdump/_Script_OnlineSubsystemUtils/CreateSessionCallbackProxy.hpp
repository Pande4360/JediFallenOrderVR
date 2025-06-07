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
namespace _Script_Engine {
struct PlayerController;
}
namespace _Script_OnlineSubsystemUtils {
#pragma pack(push, 1)
struct CreateSessionCallbackProxy : public _Script_Engine::OnlineBlueprintCallProxyBase {
    private: char pad_28[0x68]; public:
    void* get_OnSuccess();
    void* get_OnFailure();
    static _Script_CoreUObject::Class* static_class();
    _Script_OnlineSubsystemUtils::CreateSessionCallbackProxy* CreateSession(_Script_CoreUObject::Object* WorldContextObject, _Script_Engine::PlayerController* PlayerController, int32_t PublicConnections, bool bUseLAN);
}; // Size: 0x90
#pragma pack(pop)
}
