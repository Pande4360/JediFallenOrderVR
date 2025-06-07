#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "RsIKModifier.hpp"
#include "RsIKOverrideModifier.hpp"
void* _Script_RsGameTechRT::RsIKOverrideModifier::get_Override() {
    return (void*)((uintptr_t)this + 0x30);
}
_Script_CoreUObject::Class* _Script_RsGameTechRT::RsIKOverrideModifier::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/RsGameTechRT.RsIKOverrideModifier");
    return result;
}
