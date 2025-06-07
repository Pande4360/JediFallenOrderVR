#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\PrimitiveComponent.hpp"
#include "FloatingInWaterLowResPoolElement.hpp"
_Script_Engine::PrimitiveComponent*& _Script_SwGame::FloatingInWaterLowResPoolElement::get_SpawnedLowResComponent() {
    return *(_Script_Engine::PrimitiveComponent**)((uintptr_t)this + 0x8);
}
_Script_CoreUObject::Class* _Script_SwGame::FloatingInWaterLowResPoolElement::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/SwGame.FloatingInWaterLowResPoolElement");
    return result;
}
