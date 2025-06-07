#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "SwMeditationTrainingModifier.hpp"
void* _Script_SwGame::SwMeditationTrainingModifier::get_DisplayName() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Script_SwGame::SwMeditationTrainingModifier::get_LocalizedName() {
    return (void*)((uintptr_t)this + 0x10);
}
int32_t& _Script_SwGame::SwMeditationTrainingModifier::get_CurrentSetting() {
    return *(int32_t*)((uintptr_t)this + 0x3c);
}
void* _Script_SwGame::SwMeditationTrainingModifier::get_Description() {
    return (void*)((uintptr_t)this + 0x28);
}
int32_t& _Script_SwGame::SwMeditationTrainingModifier::get_MaxSetting() {
    return *(int32_t*)((uintptr_t)this + 0x38);
}
_Script_CoreUObject::Class* _Script_SwGame::SwMeditationTrainingModifier::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/SwGame.SwMeditationTrainingModifier");
    return result;
}
