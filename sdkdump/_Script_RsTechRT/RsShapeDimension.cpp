#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "RsShapeDimension.hpp"
float& _Script_RsTechRT::RsShapeDimension::get_Radius() {
    return *(float*)((uintptr_t)this + 0x0);
}
float& _Script_RsTechRT::RsShapeDimension::get_HalfHeight() {
    return *(float*)((uintptr_t)this + 0x4);
}
_Script_CoreUObject::Class* _Script_RsTechRT::RsShapeDimension::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/RsTechRT.RsShapeDimension");
    return result;
}
