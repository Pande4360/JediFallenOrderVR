#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\Rotator.hpp"
#include "..\_Script_CoreUObject\Vector.hpp"
#include "GameplayTask.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_CoreUObject {
struct Object;
}
namespace _Script_Engine {
struct Actor;
}
namespace _Script_GameplayTasks {
#pragma pack(push, 1)
struct GameplayTask_SpawnActor : public GameplayTask {
    private: char pad_68[0x40]; public:
    void* get_Success();
    void* get_DidNotSpawn();
    void* get_ClassToSpawn();
    static _Script_CoreUObject::Class* static_class();
    _Script_GameplayTasks::GameplayTask_SpawnActor* SpawnActor(void* TaskOwner, _Script_CoreUObject::Vector SpawnLocation, _Script_CoreUObject::Rotator SpawnRotation, void* Class, bool bSpawnOnlyOnAuthority);
    void FinishSpawningActor(_Script_CoreUObject::Object* WorldContextObject, _Script_Engine::Actor* SpawnedActor);
    bool BeginSpawningActor(_Script_CoreUObject::Object* WorldContextObject, _Script_Engine::Actor*& SpawnedActor);
}; // Size: 0xa8
#pragma pack(pop)
}
