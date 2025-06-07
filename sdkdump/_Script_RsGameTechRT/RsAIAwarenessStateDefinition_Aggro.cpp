#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\DataAsset.hpp"
#include "RsAIAwarenessStateDefinition_Aggro.hpp"
float& _Script_RsGameTechRT::RsAIAwarenessStateDefinition_Aggro::get_InnerAttackRange() {
    return *(float*)((uintptr_t)this + 0x30);
}
float& _Script_RsGameTechRT::RsAIAwarenessStateDefinition_Aggro::get_OuterAttackRange() {
    return *(float*)((uintptr_t)this + 0x34);
}
_Script_CoreUObject::Class* _Script_RsGameTechRT::RsAIAwarenessStateDefinition_Aggro::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/RsGameTechRT.RsAIAwarenessStateDefinition_Aggro");
    return result;
}
