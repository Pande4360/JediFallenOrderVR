#include "..\FUObjectArray.hpp"
#include "BTDecorator_BlackboardBase.hpp"
#include "BTDecorator_IsAtLocation.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
float& _Script_AIModule::BTDecorator_IsAtLocation::get_AcceptableRadius() {
    return *(float*)((uintptr_t)this + 0x90);
}
void* _Script_AIModule::BTDecorator_IsAtLocation::get_ParametrizedAcceptableRadius() {
    return (void*)((uintptr_t)this + 0x98);
}
bool _Script_AIModule::BTDecorator_IsAtLocation::get_bPathFindingBasedTest() {
    return (*(uint8_t*)((uintptr_t)this + 0xcc + 0)) & 4 != 0;
}
void* _Script_AIModule::BTDecorator_IsAtLocation::get_GeometricDistanceType() {
    return (void*)((uintptr_t)this + 0xc8);
}
void _Script_AIModule::BTDecorator_IsAtLocation::set_bUseParametrizedRadius(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xcc + 0);
    *(uint8_t*)((uintptr_t)this + 0xcc + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_AIModule::BTDecorator_IsAtLocation::get_bUseParametrizedRadius() {
    return (*(uint8_t*)((uintptr_t)this + 0xcc + 0)) & 1 != 0;
}
bool _Script_AIModule::BTDecorator_IsAtLocation::get_bUseNavAgentGoalLocation() {
    return (*(uint8_t*)((uintptr_t)this + 0xcc + 0)) & 2 != 0;
}
void _Script_AIModule::BTDecorator_IsAtLocation::set_bUseNavAgentGoalLocation(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xcc + 0);
    *(uint8_t*)((uintptr_t)this + 0xcc + 0) = (cur_value & ~2) | (value ? 2 : 0);
}
void _Script_AIModule::BTDecorator_IsAtLocation::set_bPathFindingBasedTest(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xcc + 0);
    *(uint8_t*)((uintptr_t)this + 0xcc + 0) = (cur_value & ~4) | (value ? 4 : 0);
}
_Script_CoreUObject::Class* _Script_AIModule::BTDecorator_IsAtLocation::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/AIModule.BTDecorator_IsAtLocation");
    return result;
}
