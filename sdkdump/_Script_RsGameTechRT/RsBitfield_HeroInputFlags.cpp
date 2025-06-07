#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "RsBitfield_HeroInputFlags.hpp"
void* _Script_RsGameTechRT::RsBitfield_HeroInputFlags::get_Bits() {
    return (void*)((uintptr_t)this + 0x0);
}
_Script_CoreUObject::Class* _Script_RsGameTechRT::RsBitfield_HeroInputFlags::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/RsGameTechRT.RsBitfield_HeroInputFlags");
    return result;
}
