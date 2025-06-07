#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "SwMeditationTrainingLayout.hpp"
void* _Script_SwGame::SwMeditationTrainingLayout::get_ArenaName() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Script_SwGame::SwMeditationTrainingLayout::get_GridSize() {
    return (void*)((uintptr_t)this + 0x8);
}
_Script_CoreUObject::Class* _Script_SwGame::SwMeditationTrainingLayout::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/SwGame.SwMeditationTrainingLayout");
    return result;
}
void* _Script_SwGame::SwMeditationTrainingLayout::get_EnabledHeroModifierList() {
    return (void*)((uintptr_t)this + 0x10);
}
void* _Script_SwGame::SwMeditationTrainingLayout::get_EnemyDefinitionIdentifiers() {
    return (void*)((uintptr_t)this + 0x20);
}
void* _Script_SwGame::SwMeditationTrainingLayout::get_EnemyTransforms() {
    return (void*)((uintptr_t)this + 0x30);
}
