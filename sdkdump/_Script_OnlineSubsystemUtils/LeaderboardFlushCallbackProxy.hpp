#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\Object.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
struct PlayerController;
}
namespace _Script_OnlineSubsystemUtils {
#pragma pack(push, 1)
struct LeaderboardFlushCallbackProxy : public _Script_CoreUObject::Object {
    private: char pad_28[0x40]; public:
    void* get_OnSuccess();
    void* get_OnFailure();
    static _Script_CoreUObject::Class* static_class();
    _Script_OnlineSubsystemUtils::LeaderboardFlushCallbackProxy* CreateProxyObjectForFlush(_Script_Engine::PlayerController* PlayerController, void* SessionName);
}; // Size: 0x68
#pragma pack(pop)
}
