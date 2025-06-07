#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\StaticMeshActor.hpp"
#include "SwMeditationTrainingGridCell.hpp"
void _Script_SwGame::SwMeditationTrainingGridCell::OnTriedToSpawnWithNoPoints() {
    return;
}
_Script_CoreUObject::Class* _Script_SwGame::SwMeditationTrainingGridCell::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/SwGame.SwMeditationTrainingGridCell");
    return result;
}
bool _Script_SwGame::SwMeditationTrainingGridCell::HasAnyStatus(void* Flags) {
    return;
}
bool _Script_SwGame::SwMeditationTrainingGridCell::HasStatus(void* Status) {
    return;
}
void _Script_SwGame::SwMeditationTrainingGridCell::OnStatusChanged(void* Status, bool bNewValue) {
    return;
}
bool _Script_SwGame::SwMeditationTrainingGridCell::HasAllStatus(void* Flags) {
    return;
}
