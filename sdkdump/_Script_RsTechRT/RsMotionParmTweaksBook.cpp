#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "RsMotionParmTweaksBook.hpp"
#include "RsTweaksBook.hpp"
void* _Script_RsTechRT::RsMotionParmTweaksBook::get_MotionInfluence() {
    return (void*)((uintptr_t)this + 0x40);
}
_Script_CoreUObject::Class* _Script_RsTechRT::RsMotionParmTweaksBook::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/RsTechRT.RsMotionParmTweaksBook");
    return result;
}
