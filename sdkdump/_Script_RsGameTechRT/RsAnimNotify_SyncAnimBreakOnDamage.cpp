#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\AnimNotify.hpp"
#include "RsAnimNotify_SyncAnimBreakOnDamage.hpp"
void* _Script_RsGameTechRT::RsAnimNotify_SyncAnimBreakOnDamage::get_OnTakeDamageBreakType() {
    return (void*)((uintptr_t)this + 0x38);
}
_Script_CoreUObject::Class* _Script_RsGameTechRT::RsAnimNotify_SyncAnimBreakOnDamage::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/RsGameTechRT.RsAnimNotify_SyncAnimBreakOnDamage");
    return result;
}
