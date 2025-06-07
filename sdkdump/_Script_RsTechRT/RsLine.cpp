#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\LinearColor.hpp"
#include "RsLine.hpp"
#include "..\_Script_UMG\Widget.hpp"
float& _Script_RsTechRT::RsLine::get_Thickness() {
    return *(float*)((uintptr_t)this + 0x100);
}
void* _Script_RsTechRT::RsLine::get_ThicknessDelegate() {
    return (void*)((uintptr_t)this + 0x108);
}
void _Script_RsTechRT::RsLine::SetThickness(float InThickness) {
    return;
}
void* _Script_RsTechRT::RsLine::get_FillColorAndOpacity() {
    return (void*)((uintptr_t)this + 0x118);
}
void* _Script_RsTechRT::RsLine::get_FillColorAndOpacityDelegate() {
    return (void*)((uintptr_t)this + 0x128);
}
_Script_CoreUObject::Class* _Script_RsTechRT::RsLine::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/RsTechRT.RsLine");
    return result;
}
void _Script_RsTechRT::RsLine::SetFillColorAndOpacity(_Script_CoreUObject::LinearColor InColor) {
    return;
}
