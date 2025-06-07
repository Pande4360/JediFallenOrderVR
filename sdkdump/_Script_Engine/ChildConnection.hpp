#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "NetConnection.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct ChildConnection : public NetConnection {
    private: char pad_1918[0x8]; public:
    _Script_Engine::NetConnection*& get_Parent();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x1920
#pragma pack(pop)
}
