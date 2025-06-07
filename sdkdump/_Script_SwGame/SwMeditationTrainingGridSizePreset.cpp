#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "SwMeditationTrainingGridSizePreset.hpp"
void* _Script_SwGame::SwMeditationTrainingGridSizePreset::get_Label() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Script_SwGame::SwMeditationTrainingGridSizePreset::get_Size() {
    return (void*)((uintptr_t)this + 0x8);
}
_Script_CoreUObject::Class* _Script_SwGame::SwMeditationTrainingGridSizePreset::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/SwGame.SwMeditationTrainingGridSizePreset");
    return result;
}
void* _Script_SwGame::SwMeditationTrainingGridSizePreset::get_LabelLocalized() {
    return (void*)((uintptr_t)this + 0x10);
}
