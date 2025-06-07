#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "SwMeditationTrainingGridSetting.hpp"
void* _Script_SwGame::SwMeditationTrainingGridSetting::get_OccupiedColor() {
    return (void*)((uintptr_t)this + 0x24);
}
void* _Script_SwGame::SwMeditationTrainingGridSetting::get_GridSize() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Script_SwGame::SwMeditationTrainingGridSetting::get_DisabledCells() {
    return (void*)((uintptr_t)this + 0x8);
}
float& _Script_SwGame::SwMeditationTrainingGridSetting::get_CellSize() {
    return *(float*)((uintptr_t)this + 0xc);
}
float& _Script_SwGame::SwMeditationTrainingGridSetting::get_CellSizeMultiplier() {
    return *(float*)((uintptr_t)this + 0x10);
}
void* _Script_SwGame::SwMeditationTrainingGridSetting::get_AvailableColor() {
    return (void*)((uintptr_t)this + 0x34);
}
void* _Script_SwGame::SwMeditationTrainingGridSetting::get_BaseColor() {
    return (void*)((uintptr_t)this + 0x14);
}
_Script_CoreUObject::Class* _Script_SwGame::SwMeditationTrainingGridSetting::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/SwGame.SwMeditationTrainingGridSetting");
    return result;
}
