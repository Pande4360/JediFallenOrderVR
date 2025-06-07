#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "ParticleModuleEventBase.hpp"
#include "ParticleModuleEventReceiverBase.hpp"
void* _Script_Engine::ParticleModuleEventReceiverBase::get_EventGeneratorType() {
    return (void*)((uintptr_t)this + 0x30);
}
void* _Script_Engine::ParticleModuleEventReceiverBase::get_EventName() {
    return (void*)((uintptr_t)this + 0x38);
}
_Script_CoreUObject::Class* _Script_Engine::ParticleModuleEventReceiverBase::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.ParticleModuleEventReceiverBase");
    return result;
}
