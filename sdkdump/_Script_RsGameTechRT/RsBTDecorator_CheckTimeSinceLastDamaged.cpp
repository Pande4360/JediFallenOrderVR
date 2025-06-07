#include "..\FUObjectArray.hpp"
#include "..\_Script_AIModule\BTDecorator.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "RsBTDecorator_CheckTimeSinceLastDamaged.hpp"
float& _Script_RsGameTechRT::RsBTDecorator_CheckTimeSinceLastDamaged::get_DamageWindow() {
    return *(float*)((uintptr_t)this + 0x68);
}
_Script_CoreUObject::Class* _Script_RsGameTechRT::RsBTDecorator_CheckTimeSinceLastDamaged::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/RsGameTechRT.RsBTDecorator_CheckTimeSinceLastDamaged");
    return result;
}
