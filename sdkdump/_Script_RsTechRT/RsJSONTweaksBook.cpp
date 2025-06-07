#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "RsJSONTweaksBook.hpp"
#include "RsTweaksBook.hpp"
void* _Script_RsTechRT::RsJSONTweaksBook::get_JsonSource() {
    return (void*)((uintptr_t)this + 0x40);
}
_Script_CoreUObject::Class* _Script_RsTechRT::RsJSONTweaksBook::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/RsTechRT.RsJSONTweaksBook");
    return result;
}
