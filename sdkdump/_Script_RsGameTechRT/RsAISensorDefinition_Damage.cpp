#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "RsAISensorDefinition.hpp"
#include "RsAISensorDefinition_Damage.hpp"
float& _Script_RsGameTechRT::RsAISensorDefinition_Damage::get_AwarenessValue() {
    return *(float*)((uintptr_t)this + 0x38);
}
_Script_CoreUObject::Class* _Script_RsGameTechRT::RsAISensorDefinition_Damage::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/RsGameTechRT.RsAISensorDefinition_Damage");
    return result;
}
