#include "..\FUObjectArray.hpp"
#include "ActorPerceptionBlueprintInfo.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\Actor.hpp"
bool _Script_AIModule::ActorPerceptionBlueprintInfo::get_bIsHostile() {
    return (*(uint8_t*)((uintptr_t)this + 0x18 + 0)) & 1 != 0;
}
_Script_Engine::Actor*& _Script_AIModule::ActorPerceptionBlueprintInfo::get_Target() {
    return *(_Script_Engine::Actor**)((uintptr_t)this + 0x0);
}
void* _Script_AIModule::ActorPerceptionBlueprintInfo::get_LastSensedStimuli() {
    return (void*)((uintptr_t)this + 0x8);
}
void _Script_AIModule::ActorPerceptionBlueprintInfo::set_bIsHostile(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x18 + 0);
    *(uint8_t*)((uintptr_t)this + 0x18 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_CoreUObject::Class* _Script_AIModule::ActorPerceptionBlueprintInfo::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/AIModule.ActorPerceptionBlueprintInfo");
    return result;
}
