#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "DialogueConditions.hpp"
#include "..\_Script_Engine\Actor.hpp"
#include "..\_Script_Engine\PlayerController.hpp"
#include "..\_Script_Engine\World.hpp"
_Script_Engine::World*& _Script_DialoguePlugin::DialogueConditions::get_World() {
    return *(_Script_Engine::World**)((uintptr_t)this + 0x28);
}
_Script_CoreUObject::Class* _Script_DialoguePlugin::DialogueConditions::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/DialoguePlugin.DialogueConditions");
    return result;
}
bool _Script_DialoguePlugin::DialogueConditions::IsConditionMet(_Script_Engine::PlayerController* ConsideringPlayer, _Script_Engine::Actor* NPCActor) {
    return;
}
