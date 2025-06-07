#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\LinearColor.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "NavigationPath.hpp"
bool _Script_NavigationSystem::NavigationPath::IsPartial() {
    return;
}
void* _Script_NavigationSystem::NavigationPath::get_PathUpdatedNotifier() {
    return (void*)((uintptr_t)this + 0x28);
}
void* _Script_NavigationSystem::NavigationPath::get_RecalculateOnInvalidation() {
    return (void*)((uintptr_t)this + 0x48);
}
void* _Script_NavigationSystem::NavigationPath::get_PathPoints() {
    return (void*)((uintptr_t)this + 0x38);
}
float _Script_NavigationSystem::NavigationPath::GetPathLength() {
    return;
}
_Script_CoreUObject::Class* _Script_NavigationSystem::NavigationPath::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/NavigationSystem.NavigationPath");
    return result;
}
bool _Script_NavigationSystem::NavigationPath::IsValid() {
    return;
}
bool _Script_NavigationSystem::NavigationPath::IsStringPulled() {
    return;
}
float _Script_NavigationSystem::NavigationPath::GetPathCost() {
    return;
}
void* _Script_NavigationSystem::NavigationPath::GetDebugString() {
    return;
}
void _Script_NavigationSystem::NavigationPath::EnableRecalculationOnInvalidation(void* DoRecalculation) {
    return;
}
void _Script_NavigationSystem::NavigationPath::EnableDebugDrawing(bool bShouldDrawDebugData, _Script_CoreUObject::LinearColor PathColor) {
    return;
}
