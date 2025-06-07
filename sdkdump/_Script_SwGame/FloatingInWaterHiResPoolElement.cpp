#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\Actor.hpp"
#include "FloatingInWaterHiResPoolElement.hpp"
_Script_Engine::Actor*& _Script_SwGame::FloatingInWaterHiResPoolElement::get_SpawnedHiResActor() {
    return *(_Script_Engine::Actor**)((uintptr_t)this + 0x8);
}
_Script_CoreUObject::Class* _Script_SwGame::FloatingInWaterHiResPoolElement::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/SwGame.FloatingInWaterHiResPoolElement");
    return result;
}
