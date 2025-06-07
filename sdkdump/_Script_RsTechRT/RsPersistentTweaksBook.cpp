#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "RsJSONTweaksBook.hpp"
#include "RsPersistentTweaksBook.hpp"
void* _Script_RsTechRT::RsPersistentTweaksBook::get_MotionParm() {
    return (void*)((uintptr_t)this + 0x70);
}
_Script_CoreUObject::Class* _Script_RsTechRT::RsPersistentTweaksBook::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/RsTechRT.RsPersistentTweaksBook");
    return result;
}
