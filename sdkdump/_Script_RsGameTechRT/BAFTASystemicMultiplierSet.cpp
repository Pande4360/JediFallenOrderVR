#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "BAFTASystemicMultiplierSet.hpp"
float& _Script_RsGameTechRT::BAFTASystemicMultiplierSet::get_CooldownMultiplier() {
    return *(float*)((uintptr_t)this + 0x0);
}
float& _Script_RsGameTechRT::BAFTASystemicMultiplierSet::get_ChanceMultiplier() {
    return *(float*)((uintptr_t)this + 0x4);
}
_Script_CoreUObject::Class* _Script_RsGameTechRT::BAFTASystemicMultiplierSet::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/RsGameTechRT.BAFTASystemicMultiplierSet");
    return result;
}
