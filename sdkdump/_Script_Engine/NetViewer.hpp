#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_Engine {
struct NetConnection;
}
namespace _Script_Engine {
struct Actor;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct NetViewer {
    private: char pad_0[0x30]; public:
    _Script_Engine::NetConnection*& get_Connection();
    _Script_Engine::Actor*& get_InViewer();
    _Script_Engine::Actor*& get_ViewTarget();
    void* get_ViewLocation();
    void* get_ViewDir();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x30
#pragma pack(pop)
}
