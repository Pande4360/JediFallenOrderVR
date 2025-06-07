#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "NamedSlotBinding.hpp"
#include "Widget.hpp"
void* _Script_UMG::NamedSlotBinding::get_Name() {
    return (void*)((uintptr_t)this + 0x0);
}
_Script_UMG::Widget*& _Script_UMG::NamedSlotBinding::get_Content() {
    return *(_Script_UMG::Widget**)((uintptr_t)this + 0x8);
}
_Script_CoreUObject::Class* _Script_UMG::NamedSlotBinding::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/UMG.NamedSlotBinding");
    return result;
}
