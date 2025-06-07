#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "RsHeroFlagSetInfo.hpp"
void* _Script_RsGameTechRT::RsHeroFlagSetInfo::get_FlagSet() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Script_RsGameTechRT::RsHeroFlagSetInfo::get_SetFlags() {
    return (void*)((uintptr_t)this + 0x8);
}
void* _Script_RsGameTechRT::RsHeroFlagSetInfo::get_ClearInvalidFlags() {
    return (void*)((uintptr_t)this + 0x38);
}
void* _Script_RsGameTechRT::RsHeroFlagSetInfo::get_ClearFlags() {
    return (void*)((uintptr_t)this + 0x18);
}
void* _Script_RsGameTechRT::RsHeroFlagSetInfo::get_InvalidFlags() {
    return (void*)((uintptr_t)this + 0x28);
}
_Script_CoreUObject::Class* _Script_RsGameTechRT::RsHeroFlagSetInfo::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/RsGameTechRT.RsHeroFlagSetInfo");
    return result;
}
