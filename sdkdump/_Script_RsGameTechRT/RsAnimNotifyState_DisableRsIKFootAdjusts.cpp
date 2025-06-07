#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\AnimNotifyState.hpp"
#include "RsAnimNotifyState_DisableRsIKFootAdjusts.hpp"
void* _Script_RsGameTechRT::RsAnimNotifyState_DisableRsIKFootAdjusts::get_Modifiers() {
    return (void*)((uintptr_t)this + 0x30);
}
_Script_CoreUObject::Class* _Script_RsGameTechRT::RsAnimNotifyState_DisableRsIKFootAdjusts::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/RsGameTechRT.RsAnimNotifyState_DisableRsIKFootAdjusts");
    return result;
}
