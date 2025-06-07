#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\DataAsset.hpp"
#include "RsTweaksBook.hpp"
void* _Script_RsTechRT::RsTweaksBook::get_SourceBook() {
    return (void*)((uintptr_t)this + 0x30);
}
void* _Script_RsTechRT::RsTweaksBook::get_SourceBookTimeStamp() {
    return (void*)((uintptr_t)this + 0x38);
}
_Script_CoreUObject::Class* _Script_RsTechRT::RsTweaksBook::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/RsTechRT.RsTweaksBook");
    return result;
}
