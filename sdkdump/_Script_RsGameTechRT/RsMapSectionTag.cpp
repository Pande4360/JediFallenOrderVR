#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "RsMapSectionTag.hpp"
void* _Script_RsGameTechRT::RsMapSectionTag::get_WorldName() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Script_RsGameTechRT::RsMapSectionTag::get_RegionName() {
    return (void*)((uintptr_t)this + 0x8);
}
_Script_CoreUObject::Class* _Script_RsGameTechRT::RsMapSectionTag::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/RsGameTechRT.RsMapSectionTag");
    return result;
}
void* _Script_RsGameTechRT::RsMapSectionTag::get_SectionIndex() {
    return (void*)((uintptr_t)this + 0x10);
}
