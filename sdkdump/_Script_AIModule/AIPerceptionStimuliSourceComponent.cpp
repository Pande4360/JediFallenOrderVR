#include "..\FUObjectArray.hpp"
#include "AIPerceptionStimuliSourceComponent.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\ActorComponent.hpp"
bool _Script_AIModule::AIPerceptionStimuliSourceComponent::get_bAutoRegisterAsSource() {
    return (*(uint8_t*)((uintptr_t)this + 0x170 + 0)) & 1 != 0;
}
void _Script_AIModule::AIPerceptionStimuliSourceComponent::set_bAutoRegisterAsSource(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x170 + 0);
    *(uint8_t*)((uintptr_t)this + 0x170 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_AIModule::AIPerceptionStimuliSourceComponent::get_RegisterAsSourceForSenses() {
    return (void*)((uintptr_t)this + 0x178);
}
_Script_CoreUObject::Class* _Script_AIModule::AIPerceptionStimuliSourceComponent::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/AIModule.AIPerceptionStimuliSourceComponent");
    return result;
}
void _Script_AIModule::AIPerceptionStimuliSourceComponent::UnregisterFromSense(void* SenseClass) {
    return;
}
void _Script_AIModule::AIPerceptionStimuliSourceComponent::UnregisterFromPerceptionSystem() {
    return;
}
void _Script_AIModule::AIPerceptionStimuliSourceComponent::RegisterForSense(void* SenseClass) {
    return;
}
void _Script_AIModule::AIPerceptionStimuliSourceComponent::RegisterWithPerceptionSystem() {
    return;
}
