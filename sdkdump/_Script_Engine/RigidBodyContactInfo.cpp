#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "RigidBodyContactInfo.hpp"
void* _Script_Engine::RigidBodyContactInfo::get_ContactPosition() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Script_Engine::RigidBodyContactInfo::get_ContactNormal() {
    return (void*)((uintptr_t)this + 0xc);
}
void* _Script_Engine::RigidBodyContactInfo::get_PhysMaterial() {
    return (void*)((uintptr_t)this + 0x1c);
}
float& _Script_Engine::RigidBodyContactInfo::get_ContactPenetration() {
    return *(float*)((uintptr_t)this + 0x18);
}
_Script_CoreUObject::Class* _Script_Engine::RigidBodyContactInfo::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.RigidBodyContactInfo");
    return result;
}
float& _Script_Engine::RigidBodyContactInfo::get_ProjectedVelocityOnBody0() {
    return *(float*)((uintptr_t)this + 0x2c);
}
float& _Script_Engine::RigidBodyContactInfo::get_ProjectedVelocityOnBody1() {
    return *(float*)((uintptr_t)this + 0x30);
}
