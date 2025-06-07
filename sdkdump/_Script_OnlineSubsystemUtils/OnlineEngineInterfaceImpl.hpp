#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\OnlineEngineInterface.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_OnlineSubsystemUtils {
#pragma pack(push, 1)
struct OnlineEngineInterfaceImpl : public _Script_Engine::OnlineEngineInterface {
    private: char pad_28[0x100]; public:
    void* get_VoiceSubsystemNameOverride();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x128
#pragma pack(pop)
}
