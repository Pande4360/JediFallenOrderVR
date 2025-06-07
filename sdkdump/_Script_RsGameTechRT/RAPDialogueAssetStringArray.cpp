#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "RAPDialogueAssetStringArray.hpp"
_Script_CoreUObject::Class* _Script_RsGameTechRT::RAPDialogueAssetStringArray::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/RsGameTechRT.RAPDialogueAssetStringArray");
    return result;
}
void* _Script_RsGameTechRT::RAPDialogueAssetStringArray::get_UsedInDialogues() {
    return (void*)((uintptr_t)this + 0x0);
}
