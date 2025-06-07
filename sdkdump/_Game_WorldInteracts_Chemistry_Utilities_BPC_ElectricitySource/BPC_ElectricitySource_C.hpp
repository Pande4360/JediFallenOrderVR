#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\ActorComponent.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
struct Actor;
}
namespace _Game_WorldInteracts_Chemistry_Utilities_BPC_ElectricitySource {
#pragma pack(push, 1)
struct BPC_ElectricitySource_C : public _Script_Engine::ActorComponent {
    static _Script_CoreUObject::Class* static_class();
    void UnElectrifyConductor(_Script_Engine::Actor* OtherActor);
    void ElectrifyConductor(_Script_Engine::Actor* OtherActor);
    void UnTouchConductor(_Script_Engine::Actor* OtherActor);
    void TouchConductor(_Script_Engine::Actor* Other_Actor);
}; // Size: 0x170
#pragma pack(pop)
}
