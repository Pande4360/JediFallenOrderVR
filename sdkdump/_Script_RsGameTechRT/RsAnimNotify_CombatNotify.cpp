#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\AnimNotify.hpp"
#include "RsAnimNotify_CombatNotify.hpp"
_Script_CoreUObject::Class* _Script_RsGameTechRT::RsAnimNotify_CombatNotify::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/RsGameTechRT.RsAnimNotify_CombatNotify");
    return result;
}
void* _Script_RsGameTechRT::RsAnimNotify_CombatNotify::get_Identifier() {
    return (void*)((uintptr_t)this + 0x38);
}
void* _Script_RsGameTechRT::RsAnimNotify_CombatNotify::get_CombatFuncNameComplete() {
    return (void*)((uintptr_t)this + 0x40);
}
