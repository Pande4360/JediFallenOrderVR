#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Vector.hpp"
#include "..\_Script_CoreUObject\Vector2D.hpp"
#include "..\_Script_Engine\Actor.hpp"
#include "SwMeditationTrainingArenaLights.hpp"
void _Script_SwGame::SwMeditationTrainingArenaLights::SetupLights(_Script_CoreUObject::Vector ArenaCentre, _Script_CoreUObject::Vector2D ArenaDimensions) {
    return;
}
void* _Script_SwGame::SwMeditationTrainingArenaLights::get_LightClass() {
    return (void*)((uintptr_t)this + 0x360);
}
void _Script_SwGame::SwMeditationTrainingArenaLights::ClearAllLights() {
    return;
}
void* _Script_SwGame::SwMeditationTrainingArenaLights::get_Lights() {
    return (void*)((uintptr_t)this + 0x368);
}
float& _Script_SwGame::SwMeditationTrainingArenaLights::get_MinDistanceBetweenLights() {
    return *(float*)((uintptr_t)this + 0x378);
}
float& _Script_SwGame::SwMeditationTrainingArenaLights::get_Padding() {
    return *(float*)((uintptr_t)this + 0x37c);
}
float& _Script_SwGame::SwMeditationTrainingArenaLights::get_LightHeight() {
    return *(float*)((uintptr_t)this + 0x380);
}
_Script_CoreUObject::Class* _Script_SwGame::SwMeditationTrainingArenaLights::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/SwGame.SwMeditationTrainingArenaLights");
    return result;
}
