#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\TableRowBase.hpp"
namespace _Script_SwGame {
struct SwAICharacterDefinition;
}
namespace _Script_Engine {
struct Texture2D;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_SwGame {
#pragma pack(push, 1)
struct SwMeditationTrainingEnemyData : public _Script_Engine::TableRowBase {
    private: char pad_8[0x88]; public:
    void* get_EnemyName();
    _Script_SwGame::SwAICharacterDefinition*& get_EnemyType();
    float& get_EnemySpawnVerticalOffset();
    void* get_NonCharActorToSpawn();
    float& get_NonCharActorVerticalOffset();
    int32_t& get_EnemyCost();
    void* get_MeditationTrainingUnlockTag();
    void* get_TagsToApplyToEnemy();
    _Script_Engine::Texture2D*& get_EnemyPortrait();
    void* get_FilterTags();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x90
#pragma pack(pop)
}
