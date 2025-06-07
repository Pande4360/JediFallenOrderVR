#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "RsDistanceReducedTickingModifier.hpp"
_Script_CoreUObject::Class* _Script_Engine::RsDistanceReducedTickingModifier::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.RsDistanceReducedTickingModifier");
    return result;
}
float& _Script_Engine::RsDistanceReducedTickingModifier::get_Distance() {
    return *(float*)((uintptr_t)this + 0x0);
}
float& _Script_Engine::RsDistanceReducedTickingModifier::get_TickInterval() {
    return *(float*)((uintptr_t)this + 0x4);
}
