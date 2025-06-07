#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\Actor.hpp"
#include "..\_Script_RsGameTechRT\RsAICharacter.hpp"
#include "SwMeditationTrainingSpawnedEnemyInfo.hpp"
_Script_RsGameTechRT::RsAICharacter*& _Script_SwGame::SwMeditationTrainingSpawnedEnemyInfo::get_SpawnedEnemy() {
    return *(_Script_RsGameTechRT::RsAICharacter**)((uintptr_t)this + 0x0);
}
_Script_Engine::Actor*& _Script_SwGame::SwMeditationTrainingSpawnedEnemyInfo::get_SpawnedNonCharActor() {
    return *(_Script_Engine::Actor**)((uintptr_t)this + 0x8);
}
void* _Script_SwGame::SwMeditationTrainingSpawnedEnemyInfo::get_EnemyData() {
    return (void*)((uintptr_t)this + 0x10);
}
_Script_CoreUObject::Class* _Script_SwGame::SwMeditationTrainingSpawnedEnemyInfo::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/SwGame.SwMeditationTrainingSpawnedEnemyInfo");
    return result;
}
