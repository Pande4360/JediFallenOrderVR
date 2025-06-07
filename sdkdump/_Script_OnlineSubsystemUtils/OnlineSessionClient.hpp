#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\OnlineSession.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_OnlineSubsystemUtils {
#pragma pack(push, 1)
struct OnlineSessionClient : public _Script_Engine::OnlineSession {
    private: char pad_28[0x168]; public:
    bool get_bIsFromInvite();
    void set_bIsFromInvite(bool value);
    bool get_bHandlingDisconnect();
    void set_bHandlingDisconnect(bool value);
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x190
#pragma pack(pop)
}
