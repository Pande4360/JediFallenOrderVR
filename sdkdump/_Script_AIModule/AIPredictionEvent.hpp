#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_Engine {
struct Actor;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_AIModule {
#pragma pack(push, 1)
struct AIPredictionEvent {
    private: char pad_0[0x18]; public:
    _Script_Engine::Actor*& get_Requestor();
    _Script_Engine::Actor*& get_PredictedActor();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x18
#pragma pack(pop)
}
