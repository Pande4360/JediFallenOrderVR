#include "..\FUObjectArray.hpp"
#include "AITeamStimulusEvent.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\Actor.hpp"
_Script_Engine::Actor*& _Script_AIModule::AITeamStimulusEvent::get_Broadcaster() {
    return *(_Script_Engine::Actor**)((uintptr_t)this + 0x28);
}
_Script_Engine::Actor*& _Script_AIModule::AITeamStimulusEvent::get_Enemy() {
    return *(_Script_Engine::Actor**)((uintptr_t)this + 0x30);
}
_Script_CoreUObject::Class* _Script_AIModule::AITeamStimulusEvent::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/AIModule.AITeamStimulusEvent");
    return result;
}
