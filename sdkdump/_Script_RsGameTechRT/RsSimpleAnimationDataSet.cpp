#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "RsSimpleAnimationDataSet.hpp"
void* _Script_RsGameTechRT::RsSimpleAnimationDataSet::get_Animations() {
    return (void*)((uintptr_t)this + 0x0);
}
_Script_CoreUObject::Class* _Script_RsGameTechRT::RsSimpleAnimationDataSet::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/RsGameTechRT.RsSimpleAnimationDataSet");
    return result;
}
