#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "RsSimpleAnimationDataBase.hpp"
float& _Script_RsGameTechRT::RsSimpleAnimationDataBase::get_BlendInTime() {
    return *(float*)((uintptr_t)this + 0x0);
}
float& _Script_RsGameTechRT::RsSimpleAnimationDataBase::get_BlendOutTime() {
    return *(float*)((uintptr_t)this + 0x4);
}
_Script_CoreUObject::Class* _Script_RsGameTechRT::RsSimpleAnimationDataBase::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/RsGameTechRT.RsSimpleAnimationDataBase");
    return result;
}
