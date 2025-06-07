#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\DamageEvent.hpp"
#include "RsDamageEvent.hpp"
void* _Script_RsGameTechRT::RsDamageEvent::get_DamageParams() {
    return (void*)((uintptr_t)this + 0x10);
}
_Script_CoreUObject::Class* _Script_RsGameTechRT::RsDamageEvent::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/RsGameTechRT.RsDamageEvent");
    return result;
}
