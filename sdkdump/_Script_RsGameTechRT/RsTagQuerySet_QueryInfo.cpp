#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\BoolProperty.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "RsTagQuerySet_QueryInfo.hpp"
void* _Script_RsGameTechRT::RsTagQuerySet_QueryInfo::get_Query() {
    return (void*)((uintptr_t)this + 0x10);
}
_Script_CoreUObject::BoolProperty*& _Script_RsGameTechRT::RsTagQuerySet_QueryInfo::get_ResultProperty() {
    return *(_Script_CoreUObject::BoolProperty**)((uintptr_t)this + 0x8);
}
void* _Script_RsGameTechRT::RsTagQuerySet_QueryInfo::get_ResultName() {
    return (void*)((uintptr_t)this + 0x0);
}
_Script_CoreUObject::Class* _Script_RsGameTechRT::RsTagQuerySet_QueryInfo::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/RsGameTechRT.RsTagQuerySet_QueryInfo");
    return result;
}
