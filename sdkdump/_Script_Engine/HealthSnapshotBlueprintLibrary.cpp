#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "BlueprintFunctionLibrary.hpp"
#include "HealthSnapshotBlueprintLibrary.hpp"
_Script_CoreUObject::Class* _Script_Engine::HealthSnapshotBlueprintLibrary::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.HealthSnapshotBlueprintLibrary");
    return result;
}
void _Script_Engine::HealthSnapshotBlueprintLibrary::StopPerformanceSnapshots() {
    return;
}
void _Script_Engine::HealthSnapshotBlueprintLibrary::StartPerformanceSnapshots() {
    return;
}
void _Script_Engine::HealthSnapshotBlueprintLibrary::LogPerformanceSnapshot(void* SnapshotTitle, bool bResetStats) {
    return;
}
