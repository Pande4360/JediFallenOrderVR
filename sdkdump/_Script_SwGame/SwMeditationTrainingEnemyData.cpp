#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\TableRowBase.hpp"
#include "..\_Script_Engine\Texture2D.hpp"
#include "SwAICharacterDefinition.hpp"
#include "SwMeditationTrainingEnemyData.hpp"
void* _Script_SwGame::SwMeditationTrainingEnemyData::get_EnemyName() {
    return (void*)((uintptr_t)this + 0x8);
}
void* _Script_SwGame::SwMeditationTrainingEnemyData::get_NonCharActorToSpawn() {
    return (void*)((uintptr_t)this + 0x30);
}
_Script_SwGame::SwAICharacterDefinition*& _Script_SwGame::SwMeditationTrainingEnemyData::get_EnemyType() {
    return *(_Script_SwGame::SwAICharacterDefinition**)((uintptr_t)this + 0x20);
}
void* _Script_SwGame::SwMeditationTrainingEnemyData::get_TagsToApplyToEnemy() {
    return (void*)((uintptr_t)this + 0x48);
}
float& _Script_SwGame::SwMeditationTrainingEnemyData::get_EnemySpawnVerticalOffset() {
    return *(float*)((uintptr_t)this + 0x28);
}
float& _Script_SwGame::SwMeditationTrainingEnemyData::get_NonCharActorVerticalOffset() {
    return *(float*)((uintptr_t)this + 0x38);
}
int32_t& _Script_SwGame::SwMeditationTrainingEnemyData::get_EnemyCost() {
    return *(int32_t*)((uintptr_t)this + 0x3c);
}
void* _Script_SwGame::SwMeditationTrainingEnemyData::get_MeditationTrainingUnlockTag() {
    return (void*)((uintptr_t)this + 0x40);
}
_Script_Engine::Texture2D*& _Script_SwGame::SwMeditationTrainingEnemyData::get_EnemyPortrait() {
    return *(_Script_Engine::Texture2D**)((uintptr_t)this + 0x68);
}
void* _Script_SwGame::SwMeditationTrainingEnemyData::get_FilterTags() {
    return (void*)((uintptr_t)this + 0x70);
}
_Script_CoreUObject::Class* _Script_SwGame::SwMeditationTrainingEnemyData::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/SwGame.SwMeditationTrainingEnemyData");
    return result;
}
