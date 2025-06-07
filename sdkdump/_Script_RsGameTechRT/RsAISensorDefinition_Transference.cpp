#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "RsAISensorDefinition.hpp"
#include "RsAISensorDefinition_Transference.hpp"
int32_t& _Script_RsGameTechRT::RsAISensorDefinition_Transference::get_MaxDegreesOfTransference() {
    return *(int32_t*)((uintptr_t)this + 0x38);
}
_Script_CoreUObject::Class* _Script_RsGameTechRT::RsAISensorDefinition_Transference::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/RsGameTechRT.RsAISensorDefinition_Transference");
    return result;
}
float& _Script_RsGameTechRT::RsAISensorDefinition_Transference::get_MaxTimeWindowForTransference() {
    return *(float*)((uintptr_t)this + 0x3c);
}
