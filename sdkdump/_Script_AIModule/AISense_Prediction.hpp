#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "AISense.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
struct Pawn;
}
namespace _Script_AIModule {
struct AIController;
}
namespace _Script_Engine {
struct Actor;
}
namespace _Script_AIModule {
#pragma pack(push, 1)
struct AISense_Prediction : public AISense {
    private: char pad_88[0x10]; public:
    void* get_RegisteredEvents();
    static _Script_CoreUObject::Class* static_class();
    void RequestPawnPredictionEvent(_Script_Engine::Pawn* Requestor, _Script_Engine::Actor* PredictedActor, float PredictionTime);
    void RequestControllerPredictionEvent(_Script_AIModule::AIController* Requestor, _Script_Engine::Actor* PredictedActor, float PredictionTime);
}; // Size: 0x98
#pragma pack(pop)
}
