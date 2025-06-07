#include "..\FUObjectArray.hpp"
#include "AISightEvent.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\Actor.hpp"
_Script_Engine::Actor*& _Script_AIModule::AISightEvent::get_SeenActor() {
    return *(_Script_Engine::Actor**)((uintptr_t)this + 0x8);
}
_Script_Engine::Actor*& _Script_AIModule::AISightEvent::get_Observer() {
    return *(_Script_Engine::Actor**)((uintptr_t)this + 0x10);
}
_Script_CoreUObject::Class* _Script_AIModule::AISightEvent::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/AIModule.AISightEvent");
    return result;
}
