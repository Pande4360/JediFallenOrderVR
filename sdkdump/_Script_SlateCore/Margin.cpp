#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "Margin.hpp"
_Script_CoreUObject::Class* _Script_SlateCore::Margin::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/SlateCore.Margin");
    return result;
}
float& _Script_SlateCore::Margin::get_Left() {
    return *(float*)((uintptr_t)this + 0x0);
}
float& _Script_SlateCore::Margin::get_Top() {
    return *(float*)((uintptr_t)this + 0x4);
}
float& _Script_SlateCore::Margin::get_Right() {
    return *(float*)((uintptr_t)this + 0x8);
}
float& _Script_SlateCore::Margin::get_Bottom() {
    return *(float*)((uintptr_t)this + 0xc);
}
