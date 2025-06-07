#include "..\FUObjectArray.hpp"
#include "NavLocalGridManager.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "..\_Script_CoreUObject\Rotator.hpp"
#include "..\_Script_CoreUObject\Vector.hpp"
int32_t _Script_AIModule::NavLocalGridManager::AddLocalNavigationGridForBox(_Script_CoreUObject::Object* WorldContextObject, _Script_CoreUObject::Vector& Location, _Script_CoreUObject::Vector Extent, _Script_CoreUObject::Rotator Rotation, int32_t Radius2D, float Height, bool bRebuildGrids) {
    return;
}
_Script_CoreUObject::Class* _Script_AIModule::NavLocalGridManager::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/AIModule.NavLocalGridManager");
    return result;
}
int32_t _Script_AIModule::NavLocalGridManager::AddLocalNavigationGridForPoints(_Script_CoreUObject::Object* WorldContextObject, void*& Locations, int32_t Radius2D, float Height, bool bRebuildGrids) {
    return;
}
bool _Script_AIModule::NavLocalGridManager::SetLocalNavigationGridDensity(_Script_CoreUObject::Object* WorldContextObject, float CellSize) {
    return;
}
void _Script_AIModule::NavLocalGridManager::RemoveLocalNavigationGrid(_Script_CoreUObject::Object* WorldContextObject, int32_t GridId, bool bRebuildGrids) {
    return;
}
bool _Script_AIModule::NavLocalGridManager::FindLocalNavigationGridPath(_Script_CoreUObject::Object* WorldContextObject, _Script_CoreUObject::Vector& Start, _Script_CoreUObject::Vector& End, void*& PathPoints) {
    return;
}
int32_t _Script_AIModule::NavLocalGridManager::AddLocalNavigationGridForCapsule(_Script_CoreUObject::Object* WorldContextObject, _Script_CoreUObject::Vector& Location, float CapsuleRadius, float CapsuleHalfHeight, int32_t Radius2D, float Height, bool bRebuildGrids) {
    return;
}
int32_t _Script_AIModule::NavLocalGridManager::AddLocalNavigationGridForPoint(_Script_CoreUObject::Object* WorldContextObject, _Script_CoreUObject::Vector& Location, int32_t Radius2D, float Height, bool bRebuildGrids) {
    return;
}
