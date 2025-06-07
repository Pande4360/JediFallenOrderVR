#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\PlayerController.hpp"
#include "SwMeditationTrainingSpectator.hpp"
_Script_CoreUObject::Class* _Script_SwGame::SwMeditationTrainingSpectator::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/SwGame.SwMeditationTrainingSpectator");
    return result;
}
void* _Script_SwGame::SwMeditationTrainingSpectator::get_SpectatorPawnClass() {
    return (void*)((uintptr_t)this + 0x6d0);
}
float& _Script_SwGame::SwMeditationTrainingSpectator::get_SpectatorFOV() {
    return *(float*)((uintptr_t)this + 0x6d8);
}
