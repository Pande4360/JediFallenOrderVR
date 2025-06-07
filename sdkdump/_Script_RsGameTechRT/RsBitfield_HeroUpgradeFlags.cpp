#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "RsBitfield_HeroUpgradeFlags.hpp"
void* _Script_RsGameTechRT::RsBitfield_HeroUpgradeFlags::get_Bits() {
    return (void*)((uintptr_t)this + 0x0);
}
_Script_CoreUObject::Class* _Script_RsGameTechRT::RsBitfield_HeroUpgradeFlags::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/RsGameTechRT.RsBitfield_HeroUpgradeFlags");
    return result;
}
