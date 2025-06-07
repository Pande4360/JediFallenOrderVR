#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "TriggerBase.hpp"
#include "TriggerCapsule.hpp"
_Script_CoreUObject::Class* _Script_Engine::TriggerCapsule::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.TriggerCapsule");
    return result;
}
