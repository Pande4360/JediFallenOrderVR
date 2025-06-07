#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "WidgetTransform.hpp"
_Script_CoreUObject::Class* _Script_UMG::WidgetTransform::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/UMG.WidgetTransform");
    return result;
}
void* _Script_UMG::WidgetTransform::get_Translation() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Script_UMG::WidgetTransform::get_Scale() {
    return (void*)((uintptr_t)this + 0x8);
}
void* _Script_UMG::WidgetTransform::get_Shear() {
    return (void*)((uintptr_t)this + 0x10);
}
float& _Script_UMG::WidgetTransform::get_Angle() {
    return *(float*)((uintptr_t)this + 0x18);
}
