#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\IntPoint.hpp"
#include "..\_Script_Engine\Actor.hpp"
#include "SwMeditationTrainingCamera.hpp"
#include "SwMeditationTrainingCursor.hpp"
#include "SwMeditationTrainingGrid.hpp"
void* _Script_SwGame::SwMeditationTrainingGrid::get_OnCellSelectedChanged() {
    return (void*)((uintptr_t)this + 0x370);
}
_Script_SwGame::SwMeditationTrainingCamera*& _Script_SwGame::SwMeditationTrainingGrid::get_MeditationCamera() {
    return *(_Script_SwGame::SwMeditationTrainingCamera**)((uintptr_t)this + 0x3e8);
}
void* _Script_SwGame::SwMeditationTrainingGrid::get_GridSizePresets() {
    return (void*)((uintptr_t)this + 0x380);
}
void* _Script_SwGame::SwMeditationTrainingGrid::get_Setting() {
    return (void*)((uintptr_t)this + 0x390);
}
_Script_SwGame::SwMeditationTrainingCursor*& _Script_SwGame::SwMeditationTrainingGrid::get_MeditationCursor() {
    return *(_Script_SwGame::SwMeditationTrainingCursor**)((uintptr_t)this + 0x3f0);
}
void* _Script_SwGame::SwMeditationTrainingGrid::get_GridCellClass() {
    return (void*)((uintptr_t)this + 0x3d8);
}
bool _Script_SwGame::SwMeditationTrainingGrid::get_bUseLegacyGridNavigation() {
    return (*(uint8_t*)((uintptr_t)this + 0x3e0 + 0)) & 1 != 0;
}
void _Script_SwGame::SwMeditationTrainingGrid::set_bUseLegacyGridNavigation(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x3e0 + 0);
    *(uint8_t*)((uintptr_t)this + 0x3e0 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_SwGame::SwMeditationTrainingGrid::get_Cells() {
    return (void*)((uintptr_t)this + 0x408);
}
_Script_CoreUObject::Class* _Script_SwGame::SwMeditationTrainingGrid::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/SwGame.SwMeditationTrainingGrid");
    return result;
}
void _Script_SwGame::SwMeditationTrainingGrid::MoveSelection(void* Direction) {
    return;
}
void* _Script_SwGame::SwMeditationTrainingGrid::GetLabelForGridSize(_Script_CoreUObject::IntPoint GridSize) {
    return;
}
void _Script_SwGame::SwMeditationTrainingGrid::Display(bool bEnable) {
    return;
}
void _Script_SwGame::SwMeditationTrainingGrid::ClearCells() {
    return;
}
