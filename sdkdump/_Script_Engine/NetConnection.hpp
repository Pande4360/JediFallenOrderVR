#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "Player.hpp"
namespace _Script_Engine {
struct NetDriver;
}
namespace _Script_CoreUObject {
struct PackageMap;
}
namespace _Script_Engine {
struct Actor;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct NetConnection : public Player {
    private: char pad_48[0x18d0]; public:
    void* get_Children();
    _Script_Engine::NetDriver*& get_Driver();
    void* get_PackageMapClass();
    _Script_CoreUObject::PackageMap*& get_PackageMap();
    void* get_OpenChannels();
    void* get_SentTemporaries();
    _Script_Engine::Actor*& get_ViewTarget();
    _Script_Engine::Actor*& get_OwningActor();
    int32_t& get_MaxPacket();
    bool get_InternalAck();
    void set_InternalAck(bool value);
    void* get_PlayerId();
    double& get_LastReceiveTime();
    void* get_ChannelsToTick();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x1918
#pragma pack(pop)
}
