#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\Actor.hpp"
#include "SwMeditationTrainingWaveSystem.hpp"
void* _Script_SwGame::SwMeditationTrainingWaveSystem::GetWaveNumber() {
    return;
}
void* _Script_SwGame::SwMeditationTrainingWaveSystem::get_WaveSettings() {
    return (void*)((uintptr_t)this + 0x378);
}
float _Script_SwGame::SwMeditationTrainingWaveSystem::GetWavePreparationTimerRemaining() {
    return;
}
bool _Script_SwGame::SwMeditationTrainingWaveSystem::IsWaveInPreparation() {
    return;
}
_Script_Engine::Actor*& _Script_SwGame::SwMeditationTrainingWaveSystem::get_Activator() {
    return *(_Script_Engine::Actor**)((uintptr_t)this + 0x3c8);
}
_Script_CoreUObject::Class* _Script_SwGame::SwMeditationTrainingWaveSystem::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/SwGame.SwMeditationTrainingWaveSystem");
    return result;
}
float _Script_SwGame::SwMeditationTrainingWaveSystem::GetWaveTimerRemaining() {
    return;
}
void* _Script_SwGame::SwMeditationTrainingWaveSystem::GetWaveKeys() {
    return;
}
void* _Script_SwGame::SwMeditationTrainingWaveSystem::GetWaveEndCondition() {
    return;
}
