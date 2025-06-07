#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "RsCharacterDamageModifiers.hpp"
float& _Script_RsGameTechRT::RsCharacterDamageModifiers::get_DamageMultiplier() {
    return *(float*)((uintptr_t)this + 0x0);
}
float& _Script_RsGameTechRT::RsCharacterDamageModifiers::get_PostMultiplierDamageAdjustment() {
    return *(float*)((uintptr_t)this + 0x4);
}
_Script_CoreUObject::Class* _Script_RsGameTechRT::RsCharacterDamageModifiers::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/RsGameTechRT.RsCharacterDamageModifiers");
    return result;
}
