#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "RsRange.hpp"
float& _Script_RsTechRT::RsRange::get_Start() {
    return *(float*)((uintptr_t)this + 0x0);
}
float& _Script_RsTechRT::RsRange::get_End() {
    return *(float*)((uintptr_t)this + 0x4);
}
_Script_CoreUObject::Class* _Script_RsTechRT::RsRange::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/RsTechRT.RsRange");
    return result;
}
