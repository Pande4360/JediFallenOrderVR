#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "SlateChildSize.hpp"
float& _Script_UMG::SlateChildSize::get_Value() {
    return *(float*)((uintptr_t)this + 0x0);
}
_Script_CoreUObject::Class* _Script_UMG::SlateChildSize::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/UMG.SlateChildSize");
    return result;
}
void* _Script_UMG::SlateChildSize::get_SizeRule() {
    return (void*)((uintptr_t)this + 0x4);
}
