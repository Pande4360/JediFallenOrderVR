#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\TableRowBase.hpp"
#include "..\_Script_RsGameTechRT\RsAICharacterDefinition.hpp"
#include "SwMeditationTrainingWaveEnemyEntry.hpp"
_Script_RsGameTechRT::RsAICharacterDefinition*& _Script_SwGame::SwMeditationTrainingWaveEnemyEntry::get_EnemyType() {
    return *(_Script_RsGameTechRT::RsAICharacterDefinition**)((uintptr_t)this + 0x8);
}
void* _Script_SwGame::SwMeditationTrainingWaveEnemyEntry::get_TokenCost() {
    return (void*)((uintptr_t)this + 0x14);
}
void* _Script_SwGame::SwMeditationTrainingWaveEnemyEntry::get_SpawnMax() {
    return (void*)((uintptr_t)this + 0x11);
}
void* _Script_SwGame::SwMeditationTrainingWaveEnemyEntry::get_SpawnMin() {
    return (void*)((uintptr_t)this + 0x10);
}
void* _Script_SwGame::SwMeditationTrainingWaveEnemyEntry::get_Probability() {
    return (void*)((uintptr_t)this + 0x18);
}
_Script_CoreUObject::Class* _Script_SwGame::SwMeditationTrainingWaveEnemyEntry::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/SwGame.SwMeditationTrainingWaveEnemyEntry");
    return result;
}
