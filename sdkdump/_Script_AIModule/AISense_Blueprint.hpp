#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "AISense.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_AIModule {
struct AIPerceptionComponent;
}
namespace _Script_Engine {
struct Actor;
}
namespace _Script_Engine {
struct Pawn;
}
namespace _Script_AIModule {
#pragma pack(push, 1)
struct AISense_Blueprint : public AISense {
    private: char pad_88[0x28]; public:
    void* get_ListenerDataType();
    void* get_ListenerContainer();
    void* get_UnprocessedEvents();
    static _Script_CoreUObject::Class* static_class();
    float OnUpdate(void*& EventsToProcess);
    void OnListenerUpdated(_Script_Engine::Actor* ActorListener, _Script_AIModule::AIPerceptionComponent* PerceptionComponent);
    void OnListenerUnregistered(_Script_Engine::Actor* ActorListener, _Script_AIModule::AIPerceptionComponent* PerceptionComponent);
    void OnListenerRegistered(_Script_Engine::Actor* ActorListener, _Script_AIModule::AIPerceptionComponent* PerceptionComponent);
    void K2_OnNewPawn(_Script_Engine::Pawn* NewPawn);
    void GetAllListenerComponents(void*& ListenerComponents);
    void GetAllListenerActors(void*& ListenerActors);
}; // Size: 0xb0
#pragma pack(pop)
}
