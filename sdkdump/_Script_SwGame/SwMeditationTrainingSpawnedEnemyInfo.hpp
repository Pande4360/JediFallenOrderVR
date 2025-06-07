#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_RsGameTechRT {
struct RsAICharacter;
}
namespace _Script_Engine {
struct Actor;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_SwGame {
#pragma pack(push, 1)
struct SwMeditationTrainingSpawnedEnemyInfo {
    private: char pad_0[0xa0]; public:
    _Script_RsGameTechRT::RsAICharacter*& get_SpawnedEnemy();
    _Script_Engine::Actor*& get_SpawnedNonCharActor();
    void* get_EnemyData();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0xa0
#pragma pack(pop)
}
