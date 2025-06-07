#include "..\FUObjectArray.hpp"
#include "AITouchEvent.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\Actor.hpp"
_Script_Engine::Actor*& _Script_AIModule::AITouchEvent::get_TouchReceiver() {
    return *(_Script_Engine::Actor**)((uintptr_t)this + 0x10);
}
_Script_Engine::Actor*& _Script_AIModule::AITouchEvent::get_OtherActor() {
    return *(_Script_Engine::Actor**)((uintptr_t)this + 0x18);
}
_Script_CoreUObject::Class* _Script_AIModule::AITouchEvent::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/AIModule.AITouchEvent");
    return result;
}
