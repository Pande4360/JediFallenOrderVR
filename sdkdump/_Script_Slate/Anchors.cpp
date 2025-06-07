#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "Anchors.hpp"
_Script_CoreUObject::Class* _Script_Slate::Anchors::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Slate.Anchors");
    return result;
}
void* _Script_Slate::Anchors::get_Minimum() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Script_Slate::Anchors::get_Maximum() {
    return (void*)((uintptr_t)this + 0x8);
}
