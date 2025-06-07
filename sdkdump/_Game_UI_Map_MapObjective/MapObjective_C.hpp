#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\Actor.hpp"
namespace _Script_Engine {
struct BoxComponent;
}
namespace _Script_Engine {
struct BillboardComponent;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_UI_Map_MapObjective {
#pragma pack(push, 1)
struct MapObjective_C : public _Script_Engine::Actor {
    private: char pad_360[0x20]; public:
    void* get_UberGraphFrame();
    _Script_Engine::BoxComponent*& get_Box();
    _Script_Engine::BillboardComponent*& get_Billboard();
    bool get_Enabled();
    void set_Enabled(bool value);
    bool get_Flash();
    void set_Flash(bool value);
    static _Script_CoreUObject::Class* static_class();
    void UserConstructionScript0();
    void ReceiveBeginPlay0();
    void LVL_activate();
    void Added();
    void ReceiveActorBeginOverlap0(_Script_Engine::Actor* OtherActor);
    void ExecuteUbergraph_MapObjective(int32_t EntryPoint);
}; // Size: 0x380
#pragma pack(pop)
}
