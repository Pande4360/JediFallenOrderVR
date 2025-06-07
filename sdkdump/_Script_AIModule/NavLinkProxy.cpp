#include "..\FUObjectArray.hpp"
#include "NavLinkProxy.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Vector.hpp"
#include "..\_Script_Engine\Actor.hpp"
#include "..\_Script_NavigationSystem\NavLinkCustomComponent.hpp"
void _Script_AIModule::NavLinkProxy::SetSmartLinkEnabled(bool bEnabled) {
    return;
}
void* _Script_AIModule::NavLinkProxy::get_SegmentLinks() {
    return (void*)((uintptr_t)this + 0x380);
}
void* _Script_AIModule::NavLinkProxy::get_PointLinks() {
    return (void*)((uintptr_t)this + 0x370);
}
_Script_NavigationSystem::NavLinkCustomComponent*& _Script_AIModule::NavLinkProxy::get_SmartLinkComp() {
    return *(_Script_NavigationSystem::NavLinkCustomComponent**)((uintptr_t)this + 0x390);
}
_Script_CoreUObject::Class* _Script_AIModule::NavLinkProxy::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/AIModule.NavLinkProxy");
    return result;
}
bool _Script_AIModule::NavLinkProxy::get_bSmartLinkIsRelevant() {
    return (*(uint8_t*)((uintptr_t)this + 0x398 + 0)) & 1 != 0;
}
void* _Script_AIModule::NavLinkProxy::get_OnSmartLinkReached() {
    return (void*)((uintptr_t)this + 0x3a0);
}
void _Script_AIModule::NavLinkProxy::set_bSmartLinkIsRelevant(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x398 + 0);
    *(uint8_t*)((uintptr_t)this + 0x398 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Script_AIModule::NavLinkProxy::ResumePathFollowing(_Script_Engine::Actor* Agent) {
    return;
}
void _Script_AIModule::NavLinkProxy::ReceiveSmartLinkReached(_Script_Engine::Actor* Agent, _Script_CoreUObject::Vector& Destination) {
    return;
}
bool _Script_AIModule::NavLinkProxy::IsSmartLinkEnabled() {
    return;
}
bool _Script_AIModule::NavLinkProxy::HasMovingAgents() {
    return;
}
