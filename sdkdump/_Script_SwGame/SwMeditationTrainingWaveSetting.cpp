#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\DataTable.hpp"
#include "SwMeditationTrainingWaveSetting.hpp"
void* _Script_SwGame::SwMeditationTrainingWaveSetting::get_MaxToken() {
    return (void*)((uintptr_t)this + 0xc);
}
float& _Script_SwGame::SwMeditationTrainingWaveSetting::get_WaveTimer() {
    return *(float*)((uintptr_t)this + 0x0);
}
void* _Script_SwGame::SwMeditationTrainingWaveSetting::get_MaxWaves() {
    return (void*)((uintptr_t)this + 0x8);
}
float& _Script_SwGame::SwMeditationTrainingWaveSetting::get_WavePreparationTimer() {
    return *(float*)((uintptr_t)this + 0x4);
}
_Script_CoreUObject::Class* _Script_SwGame::SwMeditationTrainingWaveSetting::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/SwGame.SwMeditationTrainingWaveSetting");
    return result;
}
void* _Script_SwGame::SwMeditationTrainingWaveSetting::get_TokenIncrease() {
    return (void*)((uintptr_t)this + 0x10);
}
_Script_Engine::DataTable*& _Script_SwGame::SwMeditationTrainingWaveSetting::get_WaveDefinition() {
    return *(_Script_Engine::DataTable**)((uintptr_t)this + 0x18);
}
