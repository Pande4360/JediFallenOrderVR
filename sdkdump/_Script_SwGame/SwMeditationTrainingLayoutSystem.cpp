#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\Actor.hpp"
#include "SwMeditationTrainingLayout.hpp"
#include "SwMeditationTrainingLayoutSystem.hpp"
int32_t& _Script_SwGame::SwMeditationTrainingLayoutSystem::get_MaxLayoutSlots() {
    return *(int32_t*)((uintptr_t)this + 0x360);
}
void _Script_SwGame::SwMeditationTrainingLayoutSystem::SaveLayoutToSlot(int32_t LayoutSlot, _Script_SwGame::SwMeditationTrainingLayout LayoutToSave) {
    return;
}
void* _Script_SwGame::SwMeditationTrainingLayoutSystem::get_SavedLayouts() {
    return (void*)((uintptr_t)this + 0x368);
}
int32_t& _Script_SwGame::SwMeditationTrainingLayoutSystem::get_LastUsedLayoutSlot() {
    return *(int32_t*)((uintptr_t)this + 0x378);
}
bool _Script_SwGame::SwMeditationTrainingLayoutSystem::get_bHasUnsavedChanges() {
    return (*(uint8_t*)((uintptr_t)this + 0x37c + 0)) & 1 != 0;
}
void _Script_SwGame::SwMeditationTrainingLayoutSystem::LoadLayoutFromSlot(int32_t LayoutSlot, _Script_SwGame::SwMeditationTrainingLayout& OutLayout) {
    return;
}
void _Script_SwGame::SwMeditationTrainingLayoutSystem::set_bHasUnsavedChanges(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x37c + 0);
    *(uint8_t*)((uintptr_t)this + 0x37c + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_CoreUObject::Class* _Script_SwGame::SwMeditationTrainingLayoutSystem::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/SwGame.SwMeditationTrainingLayoutSystem");
    return result;
}
void* _Script_SwGame::SwMeditationTrainingLayoutSystem::get_CurrentLayout() {
    return (void*)((uintptr_t)this + 0x380);
}
void _Script_SwGame::SwMeditationTrainingLayoutSystem::RequireSavePrompt() {
    return;
}
void _Script_SwGame::SwMeditationTrainingLayoutSystem::SaveLayoutSystemToDisk() {
    return;
}
void _Script_SwGame::SwMeditationTrainingLayoutSystem::LoadLayoutSystemFromDisk() {
    return;
}
void _Script_SwGame::SwMeditationTrainingLayoutSystem::GetLayoutDebugString(_Script_SwGame::SwMeditationTrainingLayout Layout) {
    return;
}
