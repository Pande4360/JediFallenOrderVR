#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "AnchorData.hpp"
void* _Script_UMG::AnchorData::get_Offsets() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Script_UMG::AnchorData::get_Anchors() {
    return (void*)((uintptr_t)this + 0x10);
}
void* _Script_UMG::AnchorData::get_Alignment() {
    return (void*)((uintptr_t)this + 0x20);
}
_Script_CoreUObject::Class* _Script_UMG::AnchorData::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/UMG.AnchorData");
    return result;
}
