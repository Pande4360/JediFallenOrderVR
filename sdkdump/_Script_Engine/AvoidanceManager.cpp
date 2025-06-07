#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "..\_Script_CoreUObject\Vector.hpp"
#include "AvoidanceManager.hpp"
#include "MovementComponent.hpp"
float& _Script_Engine::AvoidanceManager::get_TestHeightDifference() {
    return *(float*)((uintptr_t)this + 0x44);
}
float& _Script_Engine::AvoidanceManager::get_ArtificialRadiusExpansion() {
    return *(float*)((uintptr_t)this + 0x40);
}
int32_t _Script_Engine::AvoidanceManager::GetObjectCount() {
    return;
}
float& _Script_Engine::AvoidanceManager::get_DefaultTimeToLive() {
    return *(float*)((uintptr_t)this + 0x30);
}
float& _Script_Engine::AvoidanceManager::get_LockTimeAfterAvoid() {
    return *(float*)((uintptr_t)this + 0x34);
}
float& _Script_Engine::AvoidanceManager::get_LockTimeAfterClean() {
    return *(float*)((uintptr_t)this + 0x38);
}
float& _Script_Engine::AvoidanceManager::get_DeltaTimeToPredict() {
    return *(float*)((uintptr_t)this + 0x3c);
}
float& _Script_Engine::AvoidanceManager::get_HeightCheckMargin() {
    return *(float*)((uintptr_t)this + 0x48);
}
_Script_CoreUObject::Class* _Script_Engine::AvoidanceManager::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.AvoidanceManager");
    return result;
}
bool _Script_Engine::AvoidanceManager::RegisterMovementComponent(_Script_Engine::MovementComponent* MovementComp, float AvoidanceWeight) {
    return;
}
int32_t _Script_Engine::AvoidanceManager::GetNewAvoidanceUID() {
    return;
}
_Script_CoreUObject::Vector _Script_Engine::AvoidanceManager::GetAvoidanceVelocityForComponent(_Script_Engine::MovementComponent* MovementComp) {
    return;
}
