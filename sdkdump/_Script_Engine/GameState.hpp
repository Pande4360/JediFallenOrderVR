#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "GameStateBase.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct GameState : public GameStateBase {
    private: char pad_3a0[0x20]; public:
    void* get_MatchState();
    void* get_PreviousMatchState();
    int32_t& get_ElapsedTime();
    static _Script_CoreUObject::Class* static_class();
    void OnRep_MatchState();
    void OnRep_ElapsedTime();
}; // Size: 0x3c0
#pragma pack(pop)
}
