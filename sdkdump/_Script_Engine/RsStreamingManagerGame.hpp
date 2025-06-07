#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "RsStreamingManager.hpp"
namespace _Script_Engine {
struct Actor;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct RsStreamingManagerGame : public RsStreamingManager {
    private: char pad_240[0x20]; public:
    void* get_PlayerStartLists();
    _Script_Engine::Actor*& get_RestartAtPlayerStart();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x260
#pragma pack(pop)
}
