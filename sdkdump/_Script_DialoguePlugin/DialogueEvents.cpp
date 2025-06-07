#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "DialogueEvents.hpp"
#include "..\_Script_Engine\Actor.hpp"
#include "..\_Script_Engine\PlayerController.hpp"
_Script_CoreUObject::Class* _Script_DialoguePlugin::DialogueEvents::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/DialoguePlugin.DialogueEvents");
    return result;
}
void _Script_DialoguePlugin::DialogueEvents::RecieveEventTriggered(_Script_Engine::PlayerController* ConsideringPlayer, _Script_Engine::Actor* NPCActor) {
    return;
}
