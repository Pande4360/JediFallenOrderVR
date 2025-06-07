#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct CollisionResponseContainer {
    private: char pad_0[0x20]; public:
    void* get_WorldStatic();
    void* get_WorldDynamic();
    void* get_Pawn();
    void* get_Visibility();
    void* get_Camera();
    void* get_PhysicsBody();
    void* get_Vehicle();
    void* get_Destructible();
    void* get_ActorCollisionQuery();
    void* get_ActorTopologyQuery();
    void* get_AudioObstructionQuery();
    void* get_EngineTraceChannel1();
    void* get_EngineTraceChannel2();
    void* get_EngineTraceChannel3();
    void* get_EngineTraceChannel4();
    void* get_EngineTraceChannel5();
    void* get_EngineTraceChannel6();
    void* get_GameTraceChannel1();
    void* get_GameTraceChannel2();
    void* get_GameTraceChannel3();
    void* get_GameTraceChannel4();
    void* get_GameTraceChannel5();
    void* get_GameTraceChannel6();
    void* get_GameTraceChannel7();
    void* get_GameTraceChannel8();
    void* get_GameTraceChannel9();
    void* get_GameTraceChannel10();
    void* get_GameTraceChannel11();
    void* get_GameTraceChannel12();
    void* get_GameTraceChannel13();
    void* get_GameTraceChannel14();
    void* get_GameTraceChannel15();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x20
#pragma pack(pop)
}
