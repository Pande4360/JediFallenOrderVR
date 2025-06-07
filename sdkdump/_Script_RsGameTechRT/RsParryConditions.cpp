#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "RsParryConditions.hpp"
int32_t& _Script_RsGameTechRT::RsParryConditions::get_MaxCount() {
    return *(int32_t*)((uintptr_t)this + 0x0);
}
_Script_CoreUObject::Class* _Script_RsGameTechRT::RsParryConditions::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/RsGameTechRT.RsParryConditions");
    return result;
}
float& _Script_RsGameTechRT::RsParryConditions::get_Timeout() {
    return *(float*)((uintptr_t)this + 0x4);
}
float& _Script_RsGameTechRT::RsParryConditions::get_MaxAngleCosine() {
    return *(float*)((uintptr_t)this + 0x8);
}
