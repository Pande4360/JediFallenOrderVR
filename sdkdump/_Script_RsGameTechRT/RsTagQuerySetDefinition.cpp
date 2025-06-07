#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\ScriptStruct.hpp"
#include "..\_Script_CoreUObject\StructProperty.hpp"
#include "..\_Script_Engine\DataAsset.hpp"
#include "..\_Script_GameplayTags\GameplayTagContainer.hpp"
#include "RsTagQuerySetDefinition.hpp"
_Script_CoreUObject::ScriptStruct*& _Script_RsGameTechRT::RsTagQuerySetDefinition::get_ResultStructClass() {
    return *(_Script_CoreUObject::ScriptStruct**)((uintptr_t)this + 0x30);
}
void* _Script_RsGameTechRT::RsTagQuerySetDefinition::get_Queries() {
    return (void*)((uintptr_t)this + 0x38);
}
_Script_CoreUObject::Class* _Script_RsGameTechRT::RsTagQuerySetDefinition::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/RsGameTechRT.RsTagQuerySetDefinition");
    return result;
}
void _Script_RsGameTechRT::RsTagQuerySetDefinition::CalculateResults(_Script_RsGameTechRT::RsTagQuerySetDefinition* QuerySet, _Script_GameplayTags::GameplayTagContainer& Tags, _Script_CoreUObject::StructProperty*& ReturnValue) {
    return;
}
