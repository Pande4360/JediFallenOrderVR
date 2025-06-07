#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "RsEllipseStyle.hpp"
#include "..\_Script_SlateCore\SlateWidgetStyle.hpp"
void* _Script_RsTechRT::RsEllipseStyle::get_FillImage() {
    return (void*)((uintptr_t)this + 0x8);
}
_Script_CoreUObject::Class* _Script_RsTechRT::RsEllipseStyle::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/RsTechRT.RsEllipseStyle");
    return result;
}
