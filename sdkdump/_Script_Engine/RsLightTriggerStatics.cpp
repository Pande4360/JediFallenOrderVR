#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "BlueprintFunctionLibrary.hpp"
#include "RsLightTriggerManager.hpp"
#include "RsLightTriggerStatics.hpp"
_Script_CoreUObject::Class* _Script_Engine::RsLightTriggerStatics::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.RsLightTriggerStatics");
    return result;
}
void _Script_Engine::RsLightTriggerStatics::TriggerLightEvent(_Script_CoreUObject::Object* WorldContextObject, void* Event, bool bMatchStartingIntensity) {
    return;
}
_Script_Engine::RsLightTriggerManager* _Script_Engine::RsLightTriggerStatics::GetLightTriggerManager(_Script_CoreUObject::Object* WorldContextObject) {
    return;
}
